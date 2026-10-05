"""Reject private artifacts from the files Git would publish, without staging anything."""
from pathlib import Path, PurePosixPath
import os
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
PRIVATE_SUFFIXES = {".xex", ".xexp", ".xexe", ".iso", ".bin", ".zip", ".dat", ".fsb",
                    ".fev", ".xds", ".xpr", ".wmv", ".slt", ".log", ".pem", ".key", ".p12",
                    ".bik", ".xma", ".xwb", ".bnk", ".exe", ".dll", ".dylib", ".so",
                    ".a", ".lib", ".o", ".obj", ".pdb", ".metallib", ".spv", ".mobileprovision",
                    ".tracy", ".atrc"}
PRIVATE_BUNDLE_SUFFIXES = {".trace", ".dsym", ".gputrace"}
PRIVATE_ROOTS = {"fh1", "assets", "game", "games", "roms", "out", "build", ".tools",
                 "third_party", "saves", "cache", "logs", ".aws", ".codex", ".agents"}


def audit(environment=None):
    result = subprocess.run(["git", "ls-files", "--cached", "--others", "--exclude-standard", "-z"],
                            cwd=ROOT, env=environment, check=True, stdout=subprocess.PIPE)
    bad = []
    names = set(os.fsdecode(name) for name in result.stdout.split(b"\0") if name)
    for name in sorted(names):
        path = PurePosixPath(name)
        private = path.parts[0].lower() in PRIVATE_ROOTS or path.suffix.lower() in PRIVATE_SUFFIXES
        private |= any(PurePosixPath(part).suffix.lower() in PRIVATE_BUNDLE_SUFFIXES
                       for part in path.parts)
        private |= (path.parts[0] == "generated"
                    and name != "generated/rexglue.cmake"
                    and path.suffix.lower() not in {".cpp", ".h"})
        private |= path.name.startswith(".env") and path.name != ".env.example"
        private |= ".spv." in path.name.lower() or ".ucode." in path.name.lower()
        if private:
            bad.append(name)
    if bad:
        sys.exit("Private files are visible to Git:\n" + "\n".join(bad))
    print(f"Publication audit passed: {len(names)} public source/configuration files")


if __name__ == "__main__":
    if (ROOT / ".git").exists():
        audit()
    else:
        # An isolated Git directory lets the initial folder be audited without
        # creating a repository or changing its index.
        with tempfile.TemporaryDirectory() as directory:
            subprocess.run(["git", "init", "--bare", "-q", directory], check=True)
            environment = dict(os.environ, GIT_DIR=directory, GIT_WORK_TREE=str(ROOT))
            audit(environment)
