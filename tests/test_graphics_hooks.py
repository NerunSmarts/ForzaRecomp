"""Check direct-call review maps without any generated game code fixtures."""
from collections import defaultdict
import unittest

from tools.map_graphics_hooks import caller_layers, scan_source


class GraphicsHookTests(unittest.TestCase):
    def test_direct_call_layers_cycles_and_module_isolation(self):
        nodes, reverse = {}, defaultdict(set)
        source = """DEFINE_REX_FUNC(sub_82000000) {
    __imp__VdSwap(ctx, base);
    sub_82000010(ctx, base);
    REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
}
DEFINE_REX_FUNC(sub_82000010) {
    sub_82000000(ctx, base);
}
DEFINE_REX_FUNC(sub_82000020) {
    sub_82000010(ctx, base);
}
"""
        scan_source(source.splitlines(), "default", "default/test.cpp", nodes, reverse)
        scan_source(source.splitlines(), "media", "media/test.cpp", nodes, reverse)
        layers = caller_layers(("default", "VdSwap"), nodes, reverse, 4)
        self.assertEqual([[n["function"] for n in layer["functions"]] for layer in layers],
                         [["sub_82000000"], ["sub_82000010"], ["sub_82000020"]])
        self.assertTrue(all(n["module"] == "default" for layer in layers for n in layer["functions"]))
        self.assertEqual(layers[0]["functions"][0]["indirect_calls"], 1)
        self.assertEqual(layers[0]["edges"][0]["call_line"], 2)

    def test_duplicate_definitions_are_rejected(self):
        nodes, reverse = {}, defaultdict(set)
        with self.assertRaisesRegex(ValueError, "Duplicate"):
            scan_source(["DEFINE_REX_FUNC(sub_82000000) {", "DEFINE_REX_FUNC(sub_82000000) {"],
                        "default", "fixture.cpp", nodes, reverse)


if __name__ == "__main__":
    unittest.main()
