"""Ensure a normal git add cannot include local game and user artifacts."""
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest
from unittest.mock import patch

from scripts import audit_public_tree

ROOT = Path(__file__).resolve().parents[1]


class IgnoreTests(unittest.TestCase):
    def test_private_files_are_ignored_and_project_sources_are_visible(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            shutil.copy2(ROOT / ".gitignore", root / ".gitignore")
            subprocess.run(["git", "init", "-q", str(root)], check=True)
            private = ["FH1/default.xex", "FH1/media/UI.zip", "FH1/media/cars/car.zip",
                       "assets/game.dat", "elsewhere/DEFAULT.XEX", "elsewhere/update.xexp",
                       "generated/default/fh1_recomp.0.cpp", "generated/media/fh1_init.cpp",
                       "generated/speech/fh1_funcs.h", "out/images/default.bin",
                       "out/user/profile", ".tools/rexglue-patched/bin/rexglue",
                       "third_party/rexglue-sdk/README.md", ".env", "local.p12",
                       "elsewhere/recompiled.dylib", "elsewhere/shader.spv"]
            public = [".gitignore", "CMakeLists.txt", "CMakePresets.json", "fh1_manifest.toml",
                      "generated/rexglue.cmake", "src/main.cpp", "config/disc.json",
                      "patches/0001-preserve-xex-heap-allocations.patch", "README.md"]
            for path in private + public:
                result = subprocess.run(["git", "check-ignore", "--no-index", "-q", path],
                                        cwd=root)
                self.assertEqual(result.returncode == 0, path in private, path)

    def test_audit_rejects_private_files_even_when_force_tracked(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            shutil.copy2(ROOT / ".gitignore", root / ".gitignore")
            subprocess.run(["git", "init", "-q", str(root)], check=True)
            game = root / "FH1"
            game.mkdir()
            (game / "default.xex").write_bytes(b"synthetic test content")
            subprocess.run(["git", "add", "-f", "FH1/default.xex"], cwd=root, check=True)
            with patch.object(audit_public_tree, "ROOT", root):
                with self.assertRaisesRegex(SystemExit, "FH1/default.xex"):
                    audit_public_tree.audit()


if __name__ == "__main__":
    unittest.main()
