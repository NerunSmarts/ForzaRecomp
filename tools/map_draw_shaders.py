"""Correlate an existing DRAWTRACE log with imported effect microcode.

This reads a previously collected log; it does not launch or trace the game.
Sampled draw counts are not GPU timings or complete native-renderer coverage.
"""
import argparse
from collections import Counter, defaultdict
import ctypes
import hashlib
import json
from pathlib import Path
import re
import struct
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from scripts.private_artifacts import ROOT, new_output_directory

ROW = re.compile(r"DRAWTRACE frame=(\d+) draw=(\d+) stage=(\w+).*?vs=([0-9A-Fa-f]{16}) ps=([0-9A-Fa-f]{16})")


def normalize_vertex_layout(code, addresses):
    """Mask only layout-patched fields at declared vertex-fetch instructions.

    Keep opcode, source/destination registers, index swizzle, predicates and
    all other instructions. This is a diagnostic candidate identity, not a
    replacement shader-cache key or proof of equivalent bound resources.
    """
    result = bytearray(code)
    for address in addresses:
        offset = address * 12
        if offset < 0 or offset + 12 > len(result):
            raise ValueError("Declared vertex fetch exceeds microcode")
        a, b, c = struct.unpack_from(">3I", result, offset)
        if a & 31:
            raise ValueError("Declared input is not a vertex-fetch instruction")
        struct.pack_into(">3I", result, offset, a & 0xC00FFFFF, b & 0x80000000, c & 0x80000000)
    return bytes(result)


def correlate(manifest_path, log, library, shader_dumps=None):
    manifest_path = Path(manifest_path).resolve()
    manifest = json.loads(manifest_path.read_text())
    if manifest.get("schema") != 1 or manifest.get("kind") != "fh1-fxlite-inventory":
        raise ValueError("Expected an FH1 shader import manifest")
    hash_library = ctypes.CDLL(str(Path(library).resolve()))
    xxh3 = hash_library.fh1_shader_xxh3
    xxh3.argtypes = (ctypes.c_void_p, ctypes.c_size_t)
    xxh3.restype = ctypes.c_uint64
    program_sources = defaultdict(set)
    for effect in manifest["effects"]:
        for ref in effect["programs"]:
            program_sources[ref["sha256"]].add(effect["path"])
    by_hash = defaultdict(list)
    variants = defaultdict(list)
    layouts_by_size = defaultdict(set)
    for digest, program in manifest["programs"].items():
        if "file" not in program:
            raise ValueError("Import needs --extract before runtime hashes can be correlated")
        path = (manifest_path.parent / program["file"]).resolve()
        if manifest_path.parent not in path.parents:
            raise ValueError("Program path escapes the import directory")
        container = path.read_bytes()
        if hashlib.sha256(container).hexdigest() != digest:
            raise ValueError("Extracted shader container hash mismatch")
        code = container[program["code_offset"]:program["code_offset"] + program["code_bytes"]]
        if len(code) != program["code_bytes"] or hashlib.sha256(code).hexdigest() != program["code_sha256"]:
            raise ValueError("Invalid microcode range or hash in manifest")
        buffer = ctypes.create_string_buffer(code)
        key = (program["stage"], f"{xxh3(buffer, len(code)):016X}")
        entry = {"sha256": digest, "effects": sorted(program_sources[digest]), "match": "exact"}
        by_hash[key].append(entry)
        if shader_dumps and program["stage"] == "vertex":
            addresses = tuple(sorted({p["instruction_address"]
                                      for p in program["interface"]["vertex_inputs"]}))
            if addresses:
                try:
                    normalized = normalize_vertex_layout(code, addresses)
                except ValueError:
                    continue
                key = (len(code), addresses, hashlib.sha256(normalized).hexdigest())
                variants[key].append(dict(entry, match="vertex-layout-candidate"))
                layouts_by_size[len(code)].add(addresses)
    counts = Counter()
    frames = set()
    stages = Counter()
    with Path(log).open(errors="replace") as stream:
        for line in stream:
            match = ROW.search(line)
            if not match:
                continue
            frame, _, stage, vertex, pixel = match.groups()
            frames.add(int(frame))
            stages[stage] += 1
            # 'issued' denotes a submitted draw; skipped/copy rows should not
            # be mistaken for material work executed by the GPU.
            if stage == "issued":
                counts[("vertex", vertex.upper())] += 1
                if int(pixel, 16):
                    counts[("pixel", pixel.upper())] += 1
    if not frames:
        raise ValueError("No DRAWTRACE rows in the supplied log")
    if shader_dumps:
        # SDK dumps store host-endian uint32s; the import and runtime hash use
        # their original big-endian bytes. Check that conversion against the
        # file's runtime hash before attempting a variant match.
        for path in Path(shader_dumps).glob("shader_*.ucode.bin.vert"):
            digest = path.name.removeprefix("shader_").removesuffix(".ucode.bin.vert").upper()
            if ("vertex", digest) not in counts or ("vertex", digest) in by_hash:
                continue
            data = path.read_bytes()
            if len(data) % 4:
                raise ValueError("Unaligned shader dump")
            code = b"".join(data[i:i + 4][::-1] for i in range(0, len(data), 4))
            if f"{xxh3(ctypes.create_string_buffer(code), len(code)):016X}" != digest:
                raise ValueError(f"Shader dump hash mismatch: {path.name}")
            candidates = []
            for addresses in sorted(layouts_by_size[len(code)]):
                try:
                    normalized = normalize_vertex_layout(code, addresses)
                except ValueError:
                    continue
                key = (len(code), addresses, hashlib.sha256(normalized).hexdigest())
                candidates.extend(variants.get(key, []))
            if candidates:
                by_hash[("vertex", digest)] = candidates
    programs = []
    for (stage, digest), count in sorted(counts.items()):
        programs.append({"stage": stage, "microcode_xxh3": digest, "sampled_draws": count,
                         "matches": by_hash.get((stage, digest), [])})
    summary = {"sampled_frames": len(frames), "first_frame": min(frames), "last_frame": max(frames),
               "row_stages": dict(sorted(stages.items())), "observed_programs": len(programs),
               "matched_programs": sum(bool(p["matches"]) for p in programs),
               "exact_matches": sum(any(m["match"] == "exact" for m in p["matches"]) for p in programs),
               "vertex_layout_candidates": sum(any(m["match"] == "vertex-layout-candidate" for m in p["matches"]) for p in programs),
               "unmatched_programs": sum(not p["matches"] for p in programs)}
    return {"schema": 1, "kind": "fh1-draw-shader-correlation", "summary": summary,
            "limits": ["Only the frames and capped/sampled draw rows present in this log.",
                       "Draw frequencies are not timings; unmatched programs require further asset/runtime investigation.",
                       "Matching microcode is not native material, resource or pass coverage."],
            "programs": programs}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("manifest", type=Path)
    parser.add_argument("log", type=Path)
    parser.add_argument("--tools", type=Path, default=ROOT / ".tools/fh1-shaders/tools.json")
    parser.add_argument("--shader-dumps", type=Path, help="Existing SDK microcode dump directory for vertex-layout candidate matching")
    parser.add_argument("--output", type=Path, default=ROOT / "out/native-renderer/draw-shaders")
    args = parser.parse_args()
    try:
        config = json.loads(args.tools.read_text())
        if config.get("schema") != 1:
            raise ValueError("Unsupported shader tools configuration")
        report = correlate(args.manifest, args.log, config["hash_library"], args.shader_dumps)
        output = new_output_directory(args.output)
        (output / "draw-shaders.json").write_text(json.dumps(report, indent=2) + "\n")
    except (OSError, ValueError, KeyError) as error:
        parser.exit(1, f"Draw correlation failed: {error}\n")
    print(json.dumps(report["summary"], indent=2))
    print(f"Private correlation: {output / 'draw-shaders.json'}")


if __name__ == "__main__":
    main()
