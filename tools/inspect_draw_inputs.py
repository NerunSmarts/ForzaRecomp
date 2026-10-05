"""Check an existing one-draw GPU input snapshot and extract native constant banks.

Reads captures made with the opt-in SDK patch. Does not launch or trace FH1.
The capture has geometry and registers, but no texture image payloads; it is
input for a native draw proof, not permission to bypass the fallback renderer.
"""
import argparse
import ctypes
from dataclasses import dataclass
import hashlib
import json
from pathlib import Path
import re
import struct
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from scripts.private_artifacts import ROOT, new_output_directory

REGISTER_COUNT = 0x5003
GPU_BYTES = 512 * 1024 * 1024
CAPTURE_BUDGET = 32 * 1024 * 1024
INDEX_SLOT = 0xFFFFFFFF


def bounded_file(directory, name, maximum, exact=None):
    path = directory / name
    if path.is_symlink() or not path.is_file() or path.resolve().parent != directory:
        raise ValueError(f"Missing or escaped capture payload: {name}")
    with path.open("rb") as file:
        data = file.read(maximum + 1)
    if len(data) > maximum or (exact is not None and len(data) != exact):
        raise ValueError(f"Invalid capture payload size: {name}")
    return data


def integer(value, maximum, field):
    if type(value) is not int or not 0 <= value <= maximum:
        raise ValueError(f"Invalid {field}")
    return value


@dataclass
class DrawInputs:
    metadata: dict
    registers: tuple
    register_bytes: bytes
    shared_memory: bytes
    vertex_code: bytes
    pixel_code: bytes

    def constant_bank(self, pixel=False):
        start = (0x4000 + (256 * 4 if pixel else 0)) * 4
        return self.register_bytes[start:start + 4096]

    def boolean_bank(self):
        return self.register_bytes[0x4900 * 4:0x4900 * 4 + 32]

    def index_payload(self):
        for region in self.metadata["ranges"]:
            if region["slot"] == INDEX_SLOT:
                start = region["offset"] + self.metadata["index_address"] - region["address"]
                return self.shared_memory[start:start + self.metadata["index_bytes"]]
        return b""


def load_capture(directory, shader_hash):
    directory = Path(directory).resolve()
    metadata = json.loads(bounded_file(directory, "draw.json", 65536))
    if not isinstance(metadata, dict):
        raise ValueError("Expected a draw input metadata object")
    if (type(metadata.get("schema")) is not int or metadata.get("schema") != 1 or metadata.get("kind") != "fh1-single-draw-inputs" or
            metadata.get("word_endian") != "little" or metadata.get("resource_source") != "gpu-shared-memory" or
            metadata.get("memexport") is not False or metadata.get("textures_captured") is not False):
        raise ValueError("Unsupported or incomplete draw input capture")
    for field in ("frame", "draw", "host_vertex_count"):
        integer(metadata.get(field), (1 << 64) - 1, field)
    for field, limit in (("primitive", 63), ("index_count", 1 << 24), ("index_bytes", CAPTURE_BUDGET),
                         ("index_address", GPU_BYTES - 1), ("index_format", 1), ("index_endian", 3),
                         ("texture_mask", 0xFFFFFFFF), ("color_mask", 0xFFFF)):
        integer(metadata.get(field), limit, field)
    regs = bounded_file(directory, "registers.bin", REGISTER_COUNT * 4, REGISTER_COUNT * 4)
    registers = struct.unpack(f"<{REGISTER_COUNT}I", regs)
    shared = bounded_file(directory, "shared-memory.bin", CAPTURE_BUDGET)
    if not shared or len(shared) % 4:
        raise ValueError("Empty or unaligned GPU input data")
    ranges = metadata.get("ranges")
    if not isinstance(ranges, list) or not 1 <= len(ranges) <= 97:
        raise ValueError("Invalid input range count")
    offset, slots = 0, set()
    for region in ranges:
        if not isinstance(region, dict):
            raise ValueError("Invalid input range")
        slot = integer(region.get("slot"), INDEX_SLOT, "range slot")
        address = integer(region.get("address"), GPU_BYTES - 1, "range address")
        size = integer(region.get("size"), CAPTURE_BUDGET, "range size")
        integer(region.get("offset"), CAPTURE_BUDGET, "range offset")
        if (slot in slots or (slot >= 96 and slot != INDEX_SLOT) or not size or
                address % 4 or size % 4 or address + size > GPU_BYTES or
                region["offset"] != offset or offset + size > len(shared)):
            raise ValueError("Overlapping, incomplete or invalid input ranges")
        slots.add(slot)
        offset += size
        if slot != INDEX_SLOT:
            a, b = registers[0x4800 + 2 * slot:0x4802 + 2 * slot]
            if (a >> 2) * 4 != address or ((b >> 2) & 0xFFFFFF) * 4 != size or (a & 3) not in (1, 3):
                raise ValueError("Vertex input range disagrees with fetch registers")
    if offset != len(shared):
        raise ValueError("Trailing GPU input bytes are not declared")
    index_bytes = metadata["index_bytes"]
    index_region = next((r for r in ranges if r["slot"] == INDEX_SLOT), None)
    if index_bytes:
        if index_region is None or index_bytes != metadata["index_count"] * (2 if metadata["index_format"] == 0 else 4):
            raise ValueError("Missing or inconsistent original index payload")
        width = 2 if metadata["index_format"] == 0 else 4
        if metadata["index_address"] % width:
            raise ValueError("Unaligned original index address")
        prefix = metadata["index_address"] - index_region["address"]
        if not 0 <= prefix < 4 or prefix + index_bytes > index_region["size"]:
            raise ValueError("Original index payload exceeds its readback range")
    elif index_region is not None or metadata["index_address"]:
        raise ValueError("Auto-index draw includes unexpected DMA data")
    programs = []
    for stage, name in (("vertex", "vertex.ucode.bin.vert"), ("pixel", "pixel.ucode.bin.frag")):
        raw = bounded_file(directory, name, 1024 * 1024)
        if not raw or len(raw) % 12:
            raise ValueError("Invalid shader instruction payload length")
        code = b"".join(raw[i:i + 4][::-1] for i in range(0, len(raw), 4))
        digest = metadata.get(stage + "_hash", "")
        if not isinstance(digest, str) or not re.fullmatch(r"[0-9A-F]{16}", digest) or shader_hash(code) != int(digest, 16):
            raise ValueError("Shader hash disagrees with the capture")
        programs.append(code)
    return DrawInputs(metadata, registers, regs, shared, *programs)


def make_shader_hash(library):
    dynamic = ctypes.CDLL(str(Path(library).resolve()))
    xxh3 = dynamic.fh1_shader_xxh3
    xxh3.argtypes = (ctypes.c_void_p, ctypes.c_size_t)
    xxh3.restype = ctypes.c_uint64
    return lambda data: xxh3(ctypes.create_string_buffer(data), len(data))


def inspect(directory, output, library):
    capture = load_capture(directory, make_shader_hash(library))
    output = new_output_directory(output)
    banks = {"vertex-constants.bin": capture.constant_bank(),
             "pixel-constants.bin": capture.constant_bank(True),
             "boolean-constants.bin": capture.boolean_bank()}
    for name, data in banks.items():
        (output / name).write_bytes(data)
    report = {"schema": 1, "kind": "fh1-draw-input-validation", "capture": str(Path(directory).resolve()),
              "frame": capture.metadata["frame"], "draw": capture.metadata["draw"],
              "vertex_hash": capture.metadata["vertex_hash"], "pixel_hash": capture.metadata["pixel_hash"],
              "ranges": capture.metadata["ranges"], "bytes": len(capture.shared_memory),
              "constant_bank_sha256": {name: hashlib.sha256(data).hexdigest() for name, data in banks.items()},
              "vertex_index_min": capture.registers[0x2101] & 0xFFFFFF,
              "vertex_index_max": capture.registers[0x2100] & 0xFFFFFF,
              "base_vertex": capture.registers[0x2102] & 0xFFFFFF,
              "invalid_fetch_slots": [r["slot"] for r in capture.metadata["ranges"] if r["slot"] != INDEX_SLOT
                                      and (capture.registers[0x4800 + r["slot"] * 2] & 3) != 3],
              "limits": ["Input consistency validation; GPU capture execution and timing still need a game run.",
                         "Original indices retain their endian and identity; no primitive conversion or restart rewriting is performed.",
                         "Texture images, render-target state replay, shader variant selection and native presentation are pending.",
                         "Existing invalid-fetch compatibility records need explicit handling before native binding preflight accepts them."]}
    (output / "report.json").write_text(json.dumps(report, indent=2) + "\n")
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("capture", type=Path)
    parser.add_argument("--tools", type=Path, default=ROOT / ".tools/fh1-shaders/tools.json")
    parser.add_argument("--output", type=Path, default=ROOT / "out/native-renderer/draw-input-validation")
    args = parser.parse_args()
    try:
        config = json.loads(args.tools.read_text())
        if config.get("schema") != 1:
            raise ValueError("Unsupported shader tools configuration")
        report = inspect(args.capture, args.output, config["hash_library"])
    except (OSError, ValueError, KeyError, TypeError) as error:
        parser.exit(1, f"Draw input validation failed: {error}\n")
    print(f"Input ranges validated: {len(report['ranges'])}, {report['bytes']} bytes")
    print(f"Private report: {args.output / 'report.json'}")


if __name__ == "__main__":
    main()
