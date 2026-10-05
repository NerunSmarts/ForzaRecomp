"""Run the original native ABI/preflight and scalar goldens without GPU access."""
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

from scripts.private_artifacts import ROOT
from tools.probe_fh1_shader_translation import parse_buffer_fetches, select_programs


class VertexFetchTests(unittest.TestCase):
    def test_native_binding_preflight_and_scalar_goldens(self):
        compiler = shutil.which("clang++") or shutil.which("c++")
        self.assertIsNotNone(compiler, "A C++17 compiler is required for native validation")
        (ROOT / "out").mkdir(exist_ok=True)
        with tempfile.TemporaryDirectory(dir=ROOT / "out") as directory:
            executable = Path(directory) / "vertex_fetch_smoke"
            subprocess.run([compiler, "-std=c++17", "-O2", "-ffp-contract=off", "-fsanitize=undefined",
                            "-fno-sanitize-recover=all", "-Wall", "-Wextra", "-Werror",
                            str(ROOT / "tools/vertex_fetch_smoke.cpp"), "-o", str(executable)],
                           check=True, capture_output=True, text=True, timeout=60)
            result = subprocess.run([str(executable)], check=True, capture_output=True, text=True, timeout=15)
            self.assertIn("binding rejection, endian and scalar goldens passed", result.stdout)

    def test_fetch_contract_preserves_mini_parent_and_signed_offset(self):
        hlsl = "// FH1_BUFFER_FETCH slot=89 format=38 stride=8 offset=-4 address=28 mini=1 full=27\n"
        fetch, = parse_buffer_fetches(hlsl)
        self.assertEqual(fetch, dict(slot=89, format=38, stride=8, offset=-4, address=28, mini=1, full=27))
        self.assertEqual(parse_buffer_fetches("// unrelated shader comment"), [])

    def test_complete_vertex_selection_deduplicates_aliases_and_excludes_pixels(self):
        manifest = {"programs": {"v1": {"stage": "vertex"}, "v2": {"stage": "vertex"}, "p1": {"stage": "pixel"}},
                    "effects": [{"path": "Cars/a", "programs": [{"sha256": "v1"}, {"sha256": "v2"}, {"sha256": "p1"}]},
                                {"path": "track/b", "programs": [{"sha256": "v1"}]}]}
        selected = select_programs(manifest, 1, all_vertex=True)
        self.assertEqual(set(selected), {"v1", "v2"})
        self.assertEqual(selected["v1"], {"Cars", "track"})


if __name__ == "__main__":
    unittest.main()
