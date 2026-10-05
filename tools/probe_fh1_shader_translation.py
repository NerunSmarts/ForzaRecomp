"""Test a bounded shader sample with XenosRecomp and DXC; keep all output private.

This is a compatibility probe, not a runtime shader cache or rendering proof.
Use an assertions-enabled translator to report unsupported instructions.
"""
import argparse
from collections import Counter, defaultdict
import hashlib
import json
import os
from pathlib import Path
import re
import subprocess
import sys
import time

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from scripts.private_artifacts import ROOT, new_output_directory


def select_programs(manifest, per_stage, all_vertex=False, all_pixel=False):
    if all_vertex and all_pixel:
        raise ValueError("Select one complete shader stage at a time")
    groups = defaultdict(list)
    for effect in manifest["effects"]:
        family = effect["path"].split("/")[0]
        for reference in effect["programs"]:
            digest = reference["sha256"]
            key = (family, manifest["programs"][digest]["stage"])
            if digest not in groups[key]:
                groups[key].append(digest)
    selected = defaultdict(set)
    for (family, stage), programs in sorted(groups.items()):
        if (all_vertex and stage != "vertex") or (all_pixel and stage != "pixel"):
            continue
        count = len(programs) if all_vertex or all_pixel else min(len(programs), per_stage)
        for index in range(count):
            selected[programs[index * len(programs) // count]].add(family)
    return dict(sorted(selected.items()))


FETCH = re.compile(r"// FH1_BUFFER_FETCH slot=(\d+) format=(\d+) stride=(\d+) "
                   r"offset=(-?\d+) address=(\d+) mini=([01]) full=(\d+)")


def parse_buffer_fetches(hlsl):
    fields = ("slot", "format", "stride", "offset", "address", "mini", "full")
    return [dict(zip(fields, map(int, match.groups()))) for match in FETCH.finditer(hlsl)]


def run_step(command, log, timeout, environment):
    start = time.monotonic()
    try:
        with log.open("wb") as stream:
            result = subprocess.run(command, env=environment, stdout=stream,
                                    stderr=subprocess.STDOUT, timeout=timeout)
        return {"status": "pass" if result.returncode == 0 else "failed",
                "returncode": result.returncode, "seconds": time.monotonic() - start}
    except subprocess.TimeoutExpired:
        return {"status": "timeout", "seconds": time.monotonic() - start}


def probe(manifest_path, translator, common, dxc, output, per_stage=2, timeout=15,
          library_directory=None, validator=None, all_vertex=False, translate_only=False, all_pixel=False):
    if not 1 <= per_stage <= 16 or not 1 <= timeout <= 60:
        raise ValueError("Use 1–16 samples per family/stage and a 1–60 second per-step limit")
    manifest_path = Path(manifest_path).resolve()
    manifest = json.loads(manifest_path.read_text())
    if manifest.get("kind") != "fh1-fxlite-inventory" or manifest.get("schema") != 1:
        raise ValueError("Expected an FH1 shader import manifest")
    translator, common, dxc = (Path(path).resolve() for path in (translator, common, dxc))
    for path in (translator, common, dxc):
        if not path.is_file():
            raise ValueError(f"Missing tool or shader common header: {path}")
    environment = dict(os.environ)
    if library_directory:
        key = "DYLD_LIBRARY_PATH" if sys.platform == "darwin" else "LD_LIBRARY_PATH"
        environment[key] = str(Path(library_directory).resolve()) + os.pathsep + environment.get(key, "")
    inputs = []
    selected = select_programs(manifest, per_stage, all_vertex, all_pixel)
    if len(selected) > 4096:
        raise ValueError("Shader probe is limited to 4,096 programs")
    for digest, families in selected.items():
        program = manifest["programs"][digest]
        if "file" not in program:
            raise ValueError("Import needs --extract before translation can be tested")
        source = (manifest_path.parent / program["file"]).resolve()
        if manifest_path.parent not in source.parents:
            raise ValueError("Extracted program path escapes its manifest directory")
        if hashlib.sha256(source.read_bytes()).hexdigest() != digest:
            raise ValueError("Extracted shader container hash mismatch")
        inputs.append((digest, program["stage"], sorted(families), source))
    if not inputs:
        raise ValueError("Manifest contains no shader programs to probe")
    output = new_output_directory(output)
    results = []
    counts = Counter()
    for digest, stage, families, source in inputs:
        folder = output / digest
        folder.mkdir()
        hlsl, spirv = folder / "shader.hlsl", folder / "shader.spv"
        row = {"sha256": digest, "stage": stage, "families": families}
        row["translation"] = run_step([str(translator), str(source), str(hlsl), str(common)],
                                      folder / "translation.log", timeout, environment)
        if row["translation"]["status"] == "pass" and hlsl.is_file():
            row["buffer_fetches"] = parse_buffer_fetches(hlsl.read_text())
        if row["translation"]["status"] == "pass" and hlsl.is_file() and not translate_only:
            command = [str(dxc), str(hlsl), "-T", "vs_6_0" if stage == "vertex" else "ps_6_0",
                       "-E", "main", "-HV", "2021", "-all-resources-bound", "-spirv",
                       "-fvk-use-dx-layout", "-Fo", str(spirv)]
            if stage == "vertex":
                command.append("-fvk-invert-y")
            row["compilation"] = run_step(command, folder / "compilation.log", timeout, environment)
            if row["compilation"]["status"] == "pass" and spirv.is_file():
                data = spirv.read_bytes()
                if len(data) < 20 or len(data) % 4 or data[:4] != b"\x03\x02\x23\x07":
                    row["compilation"]["status"] = "invalid-output"
                else:
                    row["spirv_bytes"] = len(data)
                    if validator:
                        row["validation"] = run_step([str(Path(validator).resolve()), "--target-env", "vulkan1.2", str(spirv)],
                                                     folder / "validation.log", timeout, environment)
            elif row["compilation"]["status"] == "pass":
                row["compilation"]["status"] = "missing-output"
        elif row["translation"]["status"] == "pass" and not hlsl.is_file():
            row["translation"]["status"] = "missing-output"
        for step in ("translation", "compilation", "validation"):
            if step in row:
                counts[f"{step}_{row[step]['status']}"] += 1
        results.append(row)
        if not (all_vertex or all_pixel) or len(results) % 50 == 0 or len(results) == len(inputs) or row["translation"]["status"] != "pass":
            print(f"{len(results)}/{len(inputs)} {stage}: " + ", ".join(
                f"{step}={row[step]['status']}" for step in ("translation", "compilation", "validation") if step in row),
                  flush=True)
    report = {"schema": 1, "kind": "fh1-shader-compatibility-probe", "sample_count": len(results),
              "summary": dict(sorted(counts.items())),
              "translator_sha256": hashlib.sha256(translator.read_bytes()).hexdigest(),
              "dxc_sha256": hashlib.sha256(dxc.read_bytes()).hexdigest(),
              "shader_common_sha256": hashlib.sha256(common.read_bytes()).hexdigest(),
              "selection": "all-imported-vertex" if all_vertex else "all-imported-pixel" if all_pixel else "evenly-spaced-family-stage",
              "translation_only": translate_only,
              "limits": ["Metadata selection, not proof of observed runtime coverage.",
                         "Compilation success does not establish FH1 input/binding correctness or MoltenVK rendering.",
                         "Output uses the supplied translator's shader contract; no FH1 runtime interface is installed."],
              "results": results}
    (output / "report.json").write_text(json.dumps(report, indent=2) + "\n")
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("manifest", type=Path)
    parser.add_argument("--tools", type=Path, help="Private tools.json from bootstrap_shader_tools.py")
    parser.add_argument("--translator", type=Path)
    parser.add_argument("--shader-common", type=Path)
    parser.add_argument("--dxc", type=Path)
    parser.add_argument("--library-directory", type=Path)
    parser.add_argument("--validator", type=Path, help="Optional spirv-val executable")
    parser.add_argument("--per-stage", type=int, default=2)
    selection = parser.add_mutually_exclusive_group()
    selection.add_argument("--all-vertex", action="store_true", help="Select every imported vertex program (maximum 4,096)")
    selection.add_argument("--all-pixel", action="store_true", help="Select every imported pixel program (maximum 4,096)")
    parser.add_argument("--translate-only", action="store_true", help="Inventory fetch contracts without DXC compilation or validation")
    parser.add_argument("--timeout", type=float, default=15)
    parser.add_argument("--output", type=Path, default=ROOT / "out/native-renderer/translation-probe")
    args = parser.parse_args()
    try:
        if args.tools:
            config = json.loads(args.tools.read_text())
            if config.get("schema") != 1:
                raise ValueError("Unsupported shader tools configuration")
            for name in ("translator", "shader_common", "dxc", "library_directory", "validator"):
                if getattr(args, name) is None and config.get(name):
                    setattr(args, name, Path(config[name]))
        if not all((args.translator, args.shader_common, args.dxc)):
            raise ValueError("Provide --tools or all of --translator, --shader-common and --dxc")
        report = probe(args.manifest, args.translator, args.shader_common, args.dxc, args.output,
                       args.per_stage, args.timeout, args.library_directory, args.validator,
                       args.all_vertex, args.translate_only, args.all_pixel)
    except (OSError, ValueError, KeyError) as error:
        parser.exit(1, f"Shader probe failed: {error}\n")
    print(json.dumps(report["summary"], indent=2))
    print(f"Private results: {args.output / 'report.json'}")
    if any(key.endswith(("_failed", "_timeout", "_invalid-output", "_missing-output"))
           for key in report["summary"]):
        parser.exit(1, "Compatibility failures were recorded; this is not a usable native shader cache.\n")


if __name__ == "__main__":
    main()
