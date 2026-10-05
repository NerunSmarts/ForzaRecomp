"""Validate the native buffer-fetch contract with synthetic data, without the game.

CPU validation is portable with a C++17 compiler. The optional offscreen GPU
workflow is currently validated on Apple Silicon using the locally built
MoltenVK. It records correctness results, not performance measurements.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from scripts.private_artifacts import ROOT, new_output_directory


def run(command, output, name, environment=None):
    with (output / f"{name}.txt").open("w") as log:
        result = subprocess.run(list(map(str, command)), env=environment, cwd=ROOT,
                                stdout=log, stderr=subprocess.STDOUT, timeout=60)
    if result.returncode:
        raise RuntimeError(f"{name} failed ({result.returncode}); see {output / (name + '.txt')}")


def validate(output, gpu=False, build_only=False, tools=None):
    compiler = shutil.which("clang++") or shutil.which("c++")
    if not compiler:
        raise ValueError("A C++17 compiler is required")
    output = new_output_directory(output)
    report = {"schema": 1, "kind": "fh1-synthetic-vertex-fetch-validation",
              "gpu_requested": gpu, "build_only": build_only,
              "limits": ["Synthetic helper and ABI validation, not a game performance trace.",
                         "No runtime resource capture or native FH1 frame is installed.",
                         "IEEE half conversion matches the current Xenos fallback, not its extended exponent-31 hardware range."]}
    try:
        executable = output / "vertex_fetch_smoke"
        command = [compiler, "-std=c++17", "-O2", "-ffp-contract=off", "-Wall", "-Wextra", "-Werror",
                   ROOT / "tools/vertex_fetch_smoke.cpp", "-o", executable]
        if gpu:
            if sys.platform != "darwin":
                raise ValueError("This GPU build wrapper currently supports macOS; the C++ harness uses Vulkan")
            sdk = ROOT / ".tools/rexglue-patched"
            library = sdk / "lib/libMoltenVK.dylib"
            if not library.is_file():
                raise ValueError("Run bootstrap_macos.py first to build MoltenVK")
            # The SDK stages the library under an unversioned name; use a local
            # loader alias rather than modifying that library or its consumers.
            (output / "libMoltenVK.1.dylib").symlink_to(library.resolve())
            command += ["-DFH1_VALIDATE_VULKAN", "-I", sdk / "include", "-L", sdk / "lib",
                        "-lMoltenVK", f"-Wl,-rpath,{output}"]
        run(command, output, "build")
        run([executable], output, "cpu")
        report["cpu"] = "pass"
        report["cpu_result"] = (output / "cpu.txt").read_text().strip()
        if gpu:
            config = json.loads(Path(tools or ROOT / ".tools/fh1-shaders/tools.json").read_text())
            if config.get("schema") != 1:
                raise ValueError("Unsupported shader tools configuration")
            common = Path(config["shader_common"]).resolve()
            report["shader_common_sha256"] = hashlib.sha256(common.read_bytes()).hexdigest()
            report["dxc_sha256"] = hashlib.sha256(Path(config["dxc"]).read_bytes()).hexdigest()
            environment = dict(os.environ)
            environment["DYLD_LIBRARY_PATH"] = config["library_directory"] + os.pathsep + environment.get("DYLD_LIBRARY_PATH", "")
            spirv = output / "compute.spv"
            run([config["dxc"], ROOT / "tools/vertex_fetch_smoke.hlsl", "-I", common.parent,
                 "-T", "cs_6_0", "-E", "main", "-HV", "2021", "-spirv", "-fvk-use-dx-layout",
                 "-fspv-target-env=vulkan1.2", "-Fo", spirv], output, "compile", environment)
            run([config["validator"], "--target-env", "vulkan1.2", spirv], output, "spirv-validation")
            report["spirv_validation"] = "pass"
            report["executable"], report["spirv"] = str(executable), str(spirv)
            if not build_only:
                environment["MVK_CONFIG_LOG_LEVEL"] = "1"
                run([executable, spirv], output, "gpu", environment)
                report["gpu"] = "pass"
                report["gpu_result"] = (output / "gpu.txt").read_text().strip()
        print(report.get("gpu_result", report["cpu_result"]))
    except (OSError, ValueError, KeyError, RuntimeError, subprocess.TimeoutExpired) as error:
        report["error"] = str(error)
        raise
    finally:
        (output / "report.json").write_text(json.dumps(report, indent=2) + "\n")
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--gpu", action="store_true", help="Compile and execute the offscreen MoltenVK validation")
    parser.add_argument("--build-only", action="store_true", help="Prepare the GPU test without executing it (requires --gpu)")
    parser.add_argument("--tools", type=Path)
    parser.add_argument("--output", type=Path, default=ROOT / "out/native-renderer/vertex-fetch-validation")
    args = parser.parse_args()
    if args.build_only and not args.gpu:
        parser.error("--build-only requires --gpu")
    try:
        validate(args.output, args.gpu, args.build_only, args.tools)
    except (OSError, ValueError, KeyError, RuntimeError, subprocess.TimeoutExpired) as error:
        parser.exit(1, f"Buffer-fetch validation failed: {error}\n")
    print(f"Private correctness report: {args.output / 'report.json'}")


if __name__ == "__main__":
    main()
