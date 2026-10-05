"""Ensure diagnostic normalization preserves executable shader differences."""
import struct
import unittest

from tools.map_draw_shaders import normalize_vertex_layout


class VertexVariantTests(unittest.TestCase):
    def test_layout_fields_normalize_but_registers_and_other_code_do_not(self):
        source = struct.pack(">6I", 1, 2, 3, 0x05F84000, 0x00000688, 0)
        patched = struct.pack(">6I", 1, 2, 3, 0x35F84000, 0x401A14C1, 7)
        self.assertEqual(normalize_vertex_layout(source, [1]), normalize_vertex_layout(patched, [1]))
        # Destination register and code outside the declared fetch are meaningful.
        for offset in (0, 12):
            changed = bytearray(patched)
            word, = struct.unpack_from(">I", changed, offset)
            struct.pack_into(">I", changed, offset, word ^ (1 << 12))
            self.assertNotEqual(normalize_vertex_layout(source, [1]), normalize_vertex_layout(changed, [1]))

    def test_rejects_invalid_or_non_fetch_addresses(self):
        code = struct.pack(">3I", 1, 0, 0)
        for addresses in ([-1], [0], [1]):
            with self.subTest(addresses=addresses), self.assertRaises(ValueError):
                normalize_vertex_layout(code, addresses)


if __name__ == "__main__":
    unittest.main()
