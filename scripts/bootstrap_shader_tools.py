"""Build the experimental FH1 shader translator and validation tools locally.

This separate bootstrap does not alter the game runtime or build any game
shader assets. The pinned compiler, dependencies and binaries stay ignored.
"""
import json
import os
from pathlib import Path
import platform
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]


def run(*args, cwd=ROOT):
    subprocess.run(args, cwd=cwd, check=True)


def main():
    if sys.platform != "darwin" or platform.machine() != "arm64":
        raise RuntimeError("This tool bootstrap currently supports Apple Silicon macOS")
    for command in ("git", "cmake", "ninja", "clang++"):
        if not shutil.which(command):
            raise RuntimeError(f"Missing prerequisite: {command}")
    jobs = int(os.environ.get("FH1_BUILD_JOBS", "2"))
    if not 1 <= jobs <= 16:
        raise ValueError("FH1_BUILD_JOBS must be between 1 and 16")
    config = json.loads((ROOT / "config/shader_tools.json").read_text())
    source = ROOT / "third_party/xenosrecomp"
    revision = config["revision"]
    if not source.exists():
        source.parent.mkdir(parents=True, exist_ok=True)
        run("git", "clone", "--no-checkout", config["repository"], str(source))
        run("git", "checkout", "--detach", revision, cwd=source)
    current = subprocess.check_output(["git", "rev-parse", "HEAD"], cwd=source).decode().strip()
    if current != revision:
        raise RuntimeError(f"Shader translator must be at {revision}; found {current}")
    run("git", "submodule", "update", "--init", "--depth", "1", "--jobs", "4", cwd=source)
    for name in config["patches"]:
        patch = ROOT / name
        reverse = subprocess.run(["git", "apply", "--reverse", "--check", str(patch)], cwd=source,
                                 stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        if reverse.returncode:
            run("git", "apply", "--check", str(patch), cwd=source)
            run("git", "apply", str(patch), cwd=source)
    build = ROOT / "out/build/xenosrecomp"
    # Assertions report unsupported translation cases instead of generating
    # invalid output. This host tool's speed is not gameplay performance.
    run("cmake", "-S", str(source), "-B", str(build), "-G", "Ninja",
        "-DCMAKE_BUILD_TYPE=Debug", "-DCMAKE_POLICY_VERSION_MINIMUM=3.5",
        "-DCMAKE_OSX_ARCHITECTURES=arm64", "-DXENOS_RECOMP_FH1=ON")
    run("cmake", "--build", str(build), "--target", "XenosRecomp", "-j", str(jobs))
    sdk = ROOT / "third_party/rexglue-sdk"
    if not (sdk / "thirdparty/spirv-tools/CMakeLists.txt").is_file():
        raise RuntimeError("Run bootstrap_macos.py first to provide the pinned SPIR-V tools sources")
    validator = ROOT / "out/build/spirv-validator"
    run("cmake", "-S", str(sdk / "thirdparty/spirv-tools"), "-B", str(validator), "-G", "Ninja",
        "-DCMAKE_BUILD_TYPE=Release", "-DSPIRV_SKIP_TESTS=ON", "-DSPIRV_SKIP_EXECUTABLES=OFF",
        f"-DSPIRV-Headers_SOURCE_DIR={sdk / 'thirdparty/spirv-headers'}")
    run("cmake", "--build", str(validator), "--target", "spirv-val", "-j", str(jobs))
    local = ROOT / ".tools/fh1-shaders"
    local.mkdir(parents=True, exist_ok=True)
    hash_library = local / "libfh1shaderhash.dylib"
    run("clang++", "-std=c++17", "-O2", "-dynamiclib", "-I", str(source / "thirdparty/xxHash"),
        str(ROOT / "tools/shader_hash.cpp"), "-o", str(hash_library))
    tools = {"schema": 1, "translator": str(build / "XenosRecomp/XenosRecomp"),
             "shader_common": str(source / "XenosRecomp/shader_common.h"),
             "dxc": str(source / "thirdparty/dxc-bin/bin/arm64/dxc-macos"),
             "library_directory": str(source / "thirdparty/dxc-bin/lib/arm64"),
             "validator": str(validator / "tools/spirv-val"),
             "hash_library": str(hash_library), "revision": revision}
    (local / "tools.json").write_text(json.dumps(tools, indent=2) + "\n")
    print(f"Experimental shader tools ready: {local / 'tools.json'}")


if __name__ == "__main__":
    try:
        main()
    except (OSError, ValueError, RuntimeError, subprocess.CalledProcessError) as error:
        sys.exit(f"Shader tool bootstrap failed: {error}")
