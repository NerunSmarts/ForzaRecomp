"""Download a pinned SDK, build our runtime/tool/GPU patches, and stage a local SDK."""
import hashlib
from pathlib import Path
import shutil
import subprocess
import sys
import urllib.request
import zipfile

ROOT = Path(__file__).resolve().parents[1]
REVISION = "c94f5ebdcb3c9d1a460ca48e04f9758448f8d518"
ZIP_SHA256 = "1192638b51a6963aa6a4f24b77ebcb90c16f7fd0b91b311e11a90100f5274326"


def run(*args, cwd=ROOT):
    subprocess.run(args, cwd=cwd, check=True)


def main():
    if sys.platform != "darwin" or subprocess.check_output(["uname", "-m"]).strip() != b"arm64":
        raise RuntimeError("This bootstrap currently targets Apple Silicon macOS")
    for command in ("cmake", "ninja", "git"):
        if not shutil.which(command):
            raise RuntimeError(f"Missing prerequisite: {command}")
    tools = ROOT / ".tools"
    tools.mkdir(exist_ok=True)
    archive = tools / "rexglue-sdk-0.10.0-mac-arm64.zip"
    if not archive.exists():
        url = "https://github.com/rexglue/rexglue-sdk/releases/download/v0.10.0/" + archive.name
        temporary = archive.with_suffix(".download")
        urllib.request.urlretrieve(url, temporary)
        if hashlib.sha256(temporary.read_bytes()).hexdigest() != ZIP_SHA256:
            temporary.unlink()
            raise RuntimeError("Downloaded SDK checksum mismatch")
        temporary.rename(archive)
    if hashlib.sha256(archive.read_bytes()).hexdigest() != ZIP_SHA256:
        raise RuntimeError("SDK archive checksum mismatch")
    official = tools / "rexglue-sdk" / "mac-arm64"
    if not (official / "bin/rexglue").exists():
        with zipfile.ZipFile(archive) as package:
            package.extractall(tools / "rexglue-sdk")
        (official / "bin/rexglue").chmod(0o755)
    source = ROOT / "third_party/rexglue-sdk"
    if not source.exists():
        source.parent.mkdir(parents=True, exist_ok=True)
        run("/usr/bin/git", "clone", "--no-checkout", "--branch", "v0.10.0", "--depth", "1",
            "https://github.com/rexglue/rexglue-sdk.git", str(source))
        # The release tag and release commit have identical trees but different
        # commit IDs. Fetch the exact commit rather than relying on the tag.
        run("/usr/bin/git", "fetch", "--depth", "1", "origin", REVISION, cwd=source)
        run("/usr/bin/git", "checkout", "--detach", REVISION, cwd=source)
    current = subprocess.check_output(["git", "rev-parse", "HEAD"], cwd=source).decode().strip()
    if current != REVISION:
        raise RuntimeError(f"SDK source must be at {REVISION}; found {current}")
    run("/usr/bin/git", "submodule", "update", "--init", "--recursive", "--depth", "1",
        "--jobs", "4", cwd=source)
    for patch in sorted((ROOT / "patches").glob("*.patch")):
        reverse = subprocess.run(["git", "apply", "--reverse", "--check", str(patch)],
                                 cwd=source, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        if reverse.returncode:
            run("git", "apply", "--check", str(patch), cwd=source)
            run("git", "apply", str(patch), cwd=source)
    build = ROOT / "out/build/sdk"
    run("cmake", "-S", str(source), "-B", str(build), "-G", "Ninja",
        "-DCMAKE_BUILD_TYPE=Release", "-DCMAKE_C_COMPILER=/usr/bin/clang",
        "-DCMAKE_CXX_COMPILER=/usr/bin/clang++", "-DCMAKE_OSX_ARCHITECTURES=arm64",
        "-DREXGLUE_ENABLE_TRACY=OFF", "-DCMAKE_EXPORT_PACKAGE_REGISTRY=OFF",
        f"-DCPM_SOURCE_CACHE={tools / 'cpm'}")
    run("cmake", "--build", str(build), "--target", "rexruntime", "rexglue", "rexgpu-xenos",
        "-j", "4")
    # Retain dependency libraries at the same source revision; replace the
    # Release runtime, CLI, graphics plugin and changed public header.
    patched = tools / "rexglue-patched"
    shutil.copytree(official, patched, dirs_exist_ok=True)
    output = source / "out/mac-arm64"
    shutil.copy2(output / "librexruntime.dylib", patched / "lib/librexruntime.dylib")
    shutil.copy2(output / "librexgpu-xenos.dylib", patched / "lib/librexgpu-xenos.dylib")
    shutil.copy2(output / "rexglue", patched / "bin/rexglue")
    shutil.copy2(source / "include/rex/system/xex_module.h",
                 patched / "include/rex/system/xex_module.h")
    shutil.copy2(source / "include/rex/ppc/intrinsics.h", patched / "include/rex/ppc/intrinsics.h")
    print(f"Patched Release SDK ready: {patched}")


if __name__ == "__main__":
    try:
        main()
    except (OSError, RuntimeError, subprocess.CalledProcessError) as error:
        sys.exit(f"Bootstrap failed: {error}")
