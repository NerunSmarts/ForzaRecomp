"""Replay dependent patches after validating their state in an isolated copy.

Later patches can modify earlier hunks, so checking each reverse patch against
the final source independently is insufficient. Only missing suffix patches
are applied to the real checkout, and unrelated local changes are preserved.
"""
from pathlib import Path
import shutil
import subprocess
import tempfile

from scripts.private_artifacts import ROOT


def apply_patch_series(source, patches):
    source = Path(source).resolve()
    patches = [Path(p).resolve() for p in patches]
    if not patches:
        return
    paths = set()
    for patch in patches:
        rows = subprocess.check_output(["git", "apply", "--numstat", str(patch)], cwd=source).decode()
        for line in rows.splitlines():
            name = Path(line.split("\t", 2)[2])
            if name.is_absolute() or ".." in name.parts or name.parts[0] == ".git":
                raise ValueError("Dependency patch escapes the source tree")
            if source not in (source / name).resolve().parents:
                raise ValueError("Dependency patch targets a symlink outside its source tree")
            paths.add(name)
    (ROOT / "out").mkdir(exist_ok=True)
    for applied_count in range(len(patches), -1, -1):
        with tempfile.TemporaryDirectory(prefix="fh1-patch-check-", dir=ROOT / "out") as directory:
            scratch = Path(directory)
            subprocess.run(["git", "init", "-q", str(scratch)], check=True)
            for name in paths:
                target = scratch / name
                target.parent.mkdir(parents=True, exist_ok=True)
                if (source / name).exists():
                    shutil.copy2(source / name, target)
            sequence = [(True, p) for p in reversed(patches[:applied_count])]
            sequence += [(False, p) for p in patches]
            valid = True
            for reverse, patch in sequence:
                command = ["git", "apply"] + (["--reverse"] if reverse else [])
                check = subprocess.run(command + ["--check", str(patch)], cwd=scratch,
                                       stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
                if check.returncode:
                    valid = False
                    break
                subprocess.run(command + [str(patch)], cwd=scratch, check=True,
                               stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            if valid:
                for patch in patches[applied_count:]:
                    subprocess.run(["git", "apply", "--check", str(patch)], cwd=source, check=True)
                    subprocess.run(["git", "apply", str(patch)], cwd=source, check=True)
                return
    raise RuntimeError("Dependency patches do not match a valid series prefix; source files were left unchanged")
