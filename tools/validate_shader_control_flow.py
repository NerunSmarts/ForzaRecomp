"""Translate original CF fixtures and execute them offscreen using MoltenVK.

This checks the actual translator, not hand-written replacements of its output.
No game process, game captures, or performance trace is started.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import struct
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from scripts.private_artifacts import ROOT, new_output_directory
from tools.validate_vertex_fetch import run
from tools.shader_control_flow_cases import BOOLEAN_WORDS, boolean, fixtures


def compute_wrapper(translated, helper_checks, common):
    # Force specialization flags to zero before compiling the compute wrapper.
    # A real pixel entry's optional alpha-test clip is fragment-only, even when
    # its specialization default is zero. No alpha/discard behavior is tested.
    source = ["#define FH1_RECOMP 1", f'#include "{common}"',
              "#undef g_SpecConstants", "#define g_SpecConstants() 0u"]
    cases = []
    for index, (fixture, file) in enumerate(translated):
        source += [f"#define main translated{index}", f'#include "{file.name}"',
                   "#undef main", "#undef FixtureBool", "#undef FixtureFloats"]
        # Collect the emitted signature, keeping only its SPIR-V iFace declaration.
        signature = file.read_text().split("void main(", 1)[1].split(")\n{", 1)[0]
        parameters = re.findall(r"\b(in|out)\s+(float4|float|uint|bool)\s+(\w+)\s*:", signature)
        names, declarations, args = set(), [], []
        for direction, type_name, name in parameters:
            if name in names:
                continue
            names.add(name)
            if direction == "out":
                declarations.append(f"{type_name} {name} = ({type_name})0;")
                args.append(name)
            else:
                args.append(f"({type_name})0")
        if not names or not {"oPos" if fixture.vertex else "oC0"} <= names:
            raise ValueError("Translator emitted an unexpected synthetic shader signature")
        source.append(f"float4 run{index}() {{ {' '.join(declarations)} translated{index}({', '.join(args)}); return {'oPos' if fixture.vertex else 'oC0'}; }}")
        cases.append(f"case {index}: output = run{index}(); break;")
    source += ["struct ControlCase { uint Shader; uint BooleanIndex; uint R0; uint R1; float4 Expected; };",
               "[[vk::binding(0, 0)]] StructuredBuffer<ControlCase> Cases;",
               "[[vk::binding(1, 0)]] RWStructuredBuffer<float4> Results;",
               "[numthreads(1, 1, 1)] void main(uint3 id : SV_DispatchThreadID) {",
               "ControlCase c = Cases[id.x]; float4 output = -999;"]
    if helper_checks:
        source += ["if (c.Shader == 0xFFFFFFFF) output = float4(fh1Boolean(c.BooleanIndex) ? 1 : 0, 0, 0, 0); else"]
    source += ["switch (c.Shader) {", *cases, "}", "Results[id.x] = output;", "}"]
    return "\n".join(source) + "\n"


def encode_cases(group, bank, helper_checks):
    values = [(index, 0, fixture.expected(bank)) for index, fixture in enumerate(group)]
    if helper_checks:
        values += [(0xFFFFFFFF, index, (float(boolean(bank, index)), 0., 0., 0.)) for index in range(256)]
    return (struct.pack("<10I", 0x43464C31, len(values), *bank)
            + b"".join(struct.pack("<4I4f", selector, index, 0, 0, *expected)
                       for selector, index, expected in values)), len(values)


def validate(output, tools=None, build_only=False):
    if sys.platform != "darwin":
        raise ValueError("This build wrapper currently supports macOS; the execution harness uses Vulkan")
    config = json.loads(Path(tools or ROOT / ".tools/fh1-shaders/tools.json").read_text())
    if config.get("schema") != 1:
        raise ValueError("Unsupported shader tools configuration")
    output = new_output_directory(output)
    report = {"schema": 1, "kind": "fh1-synthetic-shader-control-flow-validation",
              "build_only": build_only, "groups": [],
              "limits": ["Original synthetic microcode, not complete FH1 shader or frame parity.",
                         "Shader entry functions are called from compute with specialization flags zero; rasterization, alpha/discard, and texture sampling are outside this check.",
                         "No game process or performance trace is started."]}
    try:
        compiler = shutil.which("clang++") or shutil.which("c++")
        if not compiler:
            raise ValueError("A C++17 compiler is required")
        sdk = ROOT / ".tools/rexglue-patched"
        library = sdk / "lib/libMoltenVK.dylib"
        if not library.is_file():
            raise ValueError("Run bootstrap_macos.py first")
        (output / "libMoltenVK.1.dylib").symlink_to(library.resolve())
        executable = output / "shader_control_flow_smoke"
        run([compiler, "-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror",
             ROOT / "tools/shader_control_flow_smoke.cpp", "-I", sdk / "include", "-L", sdk / "lib",
             "-lMoltenVK", f"-Wl,-rpath,{output}", "-o", executable], output, "build")
        environment = dict(os.environ)
        environment["DYLD_LIBRARY_PATH"] = config["library_directory"] + os.pathsep + environment.get("DYLD_LIBRARY_PATH", "")
        environment["MVK_CONFIG_LOG_LEVEL"] = "1"
        for key in ("translator", "shader_common", "dxc"):
            report[key + "_sha256"] = hashlib.sha256(Path(config[key]).read_bytes()).hexdigest()
        original = fixtures()
        report["original_fixture_count"] = len(original)
        report["fixture_builder_sha256"] = hashlib.sha256((ROOT / "tools/shader_control_flow_cases.py").read_bytes()).hexdigest()
        groups = {}
        for fixture in original:
            groups.setdefault("-".join(fixture.name.split("-")[:2]), []).append(fixture)
        for group_index, (name, group) in enumerate(groups.items()):
            folder = output / name
            folder.mkdir()
            translated = []
            for index, fixture in enumerate(group):
                source, hlsl = folder / f"fixture{index}.xshader.bin", folder / f"fixture{index}.hlsl"
                source.write_bytes(fixture.data)
                run([config["translator"], source, hlsl, config["shader_common"]], folder, f"translate{index}", environment)
                translated.append((fixture, hlsl))
            helper_checks = group_index == 0
            wrapper, spirv = folder / "compute.hlsl", folder / "compute.spv"
            wrapper.write_text(compute_wrapper(translated, helper_checks, config["shader_common"]))
            run([config["dxc"], wrapper, "-T", "cs_6_0", "-E", "main", "-HV", "2021", "-spirv",
                 "-fvk-use-dx-layout", "-fspv-target-env=vulkan1.2", "-Fo", spirv], folder, "compile", environment)
            run([config["validator"], "--target-env", "vulkan1.2", spirv], folder, "spirv-validation")
            row = {"name": name, "fixture_count": len(group), "spirv_validation": "pass", "patterns": []}
            report["groups"].append(row)
            for pattern, bank in enumerate((BOOLEAN_WORDS, tuple(word ^ 0xFFFFFFFF for word in BOOLEAN_WORDS))):
                data, case_count = encode_cases(group, bank, helper_checks)
                cases = folder / f"pattern{pattern}.bin"
                cases.write_bytes(data)
                case_row = {"pattern": pattern, "case_count": case_count}
                row["patterns"].append(case_row)
                if not build_only:
                    run([executable, spirv, cases], folder, f"gpu{pattern}", environment)
                    case_row["gpu"] = "pass"
                    print(f"{name}, boolean pattern {pattern}: {case_count} GPU cases passed", flush=True)
        report["total_cases"] = sum(p["case_count"] for g in report["groups"] for p in g["patterns"])
        if not build_only:
            report["gpu"] = "pass"
    except Exception as error:
        report["error"] = str(error)
        raise
    finally:
        (output / "report.json").write_text(json.dumps(report, indent=2) + "\n")
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--tools", type=Path)
    parser.add_argument("--build-only", action="store_true")
    parser.add_argument("--output", type=Path, default=ROOT / "out/native-renderer/control-flow-validation")
    args = parser.parse_args()
    try:
        report = validate(args.output, args.tools, args.build_only)
    except Exception as error:
        parser.exit(1, f"Shader control flow validation failed: {error}\n")
    print(f"{report['total_cases']} synthetic cases; private report: {args.output / 'report.json'}")


if __name__ == "__main__":
    main()
