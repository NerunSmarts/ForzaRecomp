"""Check overlapping dependency patches replay safely and remain idempotent."""
import difflib
from pathlib import Path
import subprocess
import tempfile
import unittest

from scripts.dependency_patches import apply_patch_series


class DependencyPatchTests(unittest.TestCase):
    def fixture(self, root):
        source = root / "source"
        source.mkdir()
        subprocess.run(["git", "init", "-q", str(source)], check=True)
        states = ["start\nbase\nend\n", "start\nfirst\nend\n", "start\nsecond\nend\n"]
        (source / "file.cpp").write_text(states[0])
        patches = []
        for index in range(2):
            path = root / f"{index}.patch"
            path.write_text("".join(difflib.unified_diff(states[index].splitlines(True), states[index + 1].splitlines(True),
                                                        fromfile="a/file.cpp", tofile="b/file.cpp")))
            patches.append(path)
        return source, states, patches

    def test_fresh_partial_and_complete_series_preserve_unrelated_changes(self):
        for count in range(3):
            with self.subTest(applied=count), tempfile.TemporaryDirectory() as directory:
                source, states, patches = self.fixture(Path(directory))
                (source / "file.cpp").write_text(states[count] + "// unrelated local edit\n")
                apply_patch_series(source, patches)
                self.assertEqual((source / "file.cpp").read_text(), states[-1] + "// unrelated local edit\n")
                apply_patch_series(source, patches)
                self.assertEqual((source / "file.cpp").read_text(), states[-1] + "// unrelated local edit\n")

    def test_incompatible_later_patch_leaves_real_source_unchanged(self):
        with tempfile.TemporaryDirectory() as directory:
            source, states, patches = self.fixture(Path(directory))
            patches[1].write_text(patches[1].read_text().replace("-first", "-unavailable"))
            with self.assertRaisesRegex(RuntimeError, "left unchanged"):
                apply_patch_series(source, patches)
            self.assertEqual((source / "file.cpp").read_text(), states[0])


if __name__ == "__main__":
    unittest.main()
