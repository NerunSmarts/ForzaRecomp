"""Ensure diagnostic normalization preserves executable shader differences."""
import struct
import unittest

from tools.map_draw_shaders import buffer_binding_map, normalize_buffer_slots, normalize_vertex_layout


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

    def test_buffer_slot_alias_preserves_format_stride_and_code(self):
        imported = struct.pack(">6I", 30 << 20, 38 << 16, 8, 0, (38 << 16) | (1 << 30), 4 << 8)
        runtime = struct.pack(">6I", 2 << 20, 38 << 16, 8, 0, (38 << 16) | (1 << 30), 4 << 8)
        fetches = [dict(slot=90, format=38, stride=8, offset=0, address=0, mini=0, full=0),
                   dict(slot=90, format=38, stride=8, offset=4, address=1, mini=1, full=0)]
        self.assertEqual(normalize_buffer_slots(imported, [0]), normalize_buffer_slots(runtime, [0]))
        self.assertEqual(buffer_binding_map(imported, runtime, fetches),
                         [dict(native_slot=90, guest_slot=6, full_addresses=[0], fetch_addresses=[0, 1])])
        for offset in (4, 8, 16):
            changed = bytearray(runtime)
            value, = struct.unpack_from(">I", changed, offset)
            struct.pack_into(">I", changed, offset, value ^ 1)
            self.assertNotEqual(normalize_buffer_slots(imported, [0]), normalize_buffer_slots(changed, [0]))
        changed = bytearray(runtime)
        struct.pack_into(">I", changed, 8, 7)
        with self.assertRaisesRegex(ValueError, "addressing changed"):
            buffer_binding_map(imported, changed, fetches)

    def test_buffer_slot_alias_rejects_mini_as_parent_and_contract_forgery(self):
        code = struct.pack(">3I", 30 << 20, (38 << 16) | (1 << 30), 8)
        with self.assertRaisesRegex(ValueError, "full vertex fetch"):
            normalize_buffer_slots(code, [0])
        code = struct.pack(">3I", 30 << 20, 38 << 16, 8)
        fetch = dict(slot=90, format=38, stride=8, offset=0, address=0, mini=0, full=0)
        for field in ("slot", "format", "stride", "offset", "mini"):
            with self.subTest(field=field), self.assertRaises(ValueError):
                buffer_binding_map(code, code, [dict(fetch, **{field: fetch[field] + 1})])

    def test_buffer_slot_alias_rejects_conflicting_resources(self):
        imported = struct.pack(">6I", 30 << 20, 38 << 16, 8, 30 << 20, 38 << 16, 8)
        runtime = struct.pack(">6I", 2 << 20, 38 << 16, 8, 3 << 20, 38 << 16, 8)
        fetches = [dict(slot=90, format=38, stride=8, offset=0, address=i, mini=0, full=i) for i in range(2)]
        with self.assertRaisesRegex(ValueError, "conflicting guest slots"):
            buffer_binding_map(imported, runtime, fetches)


if __name__ == "__main__":
    unittest.main()
