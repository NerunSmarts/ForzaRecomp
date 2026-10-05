"""Original input fixtures for index identity and bounded vertex replay."""
from pathlib import Path
import struct
import tempfile
from types import SimpleNamespace
import unittest

from tools.replay_draw_vertices import check_vertex_execution, vertex_invocations, wrapper
from tools.shader_control_flow_cases import clause, encode_program, export


class DrawVertexReplayTests(unittest.TestCase):
    def capture(self, values, *, width=2, endian=1, primitive=6, reset=0xFFFF, restart=True, base=0):
        registers = [0] * 0x5003
        registers[0x2100], registers[0x2102], registers[0x2103] = 0xFFFFFF, base, reset
        registers[0x2205] = (1 << 21) if restart else 0
        # An explicit endian payload, not one produced by the decoder under test.
        payload = struct.pack(f"{'>' if endian in (1, 2) else '<'}{len(values)}{'H' if width == 2 else 'I'}", *values)
        return SimpleNamespace(registers=registers,
            metadata=dict(index_bytes=len(payload), index_count=len(values), index_format=int(width == 4),
                          index_endian=endian, primitive=primitive), index_payload=lambda: payload)

    def test_restart_is_removed_before_base_offset_and_order_is_retained(self):
        capture = self.capture([3, 1, 0xFFFF, 1, 2, 1], base=7)
        rows, restarts = vertex_invocations(capture)
        self.assertEqual(restarts, [2])
        self.assertEqual([r['position'] for r in rows], [0, 1, 3, 4, 5])
        self.assertEqual([r['vertex'] for r in rows], [10, 8, 8, 9, 8])
        self.assertEqual([r['segment'] for r in rows], [0, 0, 1, 1, 1])

    def test_lists_and_disabled_reset_retain_ffff_as_an_index(self):
        for primitive, enabled in ((4, True), (2, True), (13, True), (6, False)):
            with self.subTest(primitive=primitive, enabled=enabled):
                rows, restarts = vertex_invocations(self.capture([0xFFFF, 1], primitive=primitive, restart=enabled))
                self.assertEqual(restarts, [])
                self.assertEqual(rows[0]['vertex'], 0xFFFF)
        # Line strip, quad strip and polygon do use reset.
        for primitive in (3, 14, 15):
            rows, restarts = vertex_invocations(self.capture([0xFFFF, 1], primitive=primitive))
            self.assertEqual(restarts, [0])
            self.assertEqual(rows[0]['vertex'], 1)

    def test_endian_width_mask_and_clamp_conventions(self):
        for endian in (0, 1, 2, 3):
            capture = self.capture([0x1234, 0x2345], endian=endian)
            rows, _ = vertex_invocations(capture)
            self.assertEqual([r['original'] for r in rows], [0x1234, 0x2345])
        capture = self.capture([0xFFFFFF, 0x1000002], width=4, endian=2, base=1)
        capture.registers[0x2101], capture.registers[0x2100] = 2, 4
        rows, _ = vertex_invocations(capture)
        self.assertEqual([r['vertex'] for r in rows], [2, 3])
        capture.registers[0x2101] = 5
        with self.assertRaises(ValueError):
            vertex_invocations(capture)

    def test_static_clause_extents_and_texture_fetch_rejection(self):
        code = encode_program([clause(2, [export(0, True)])])
        check_vertex_execution(code)
        for bad in (b'', code[:-1], struct.pack('>3I', 0xFFF, 0x2800, 0)):
            with self.assertRaises(ValueError):
                check_vertex_execution(bad)
        # Fetch sequence bit 0 at CF bit 16; FETCH opcode 1 is textured.
        fetch = bytearray(encode_program([clause(2, [(1, 0, 0)])]))
        a = struct.unpack_from('>I', fetch)[0] | (1 << 16)
        struct.pack_into('>I', fetch, 0, a)
        with self.assertRaises(ValueError):
            check_vertex_execution(fetch)
        loop = encode_program([clause(7), clause(2, [export(0, True)])])
        with self.assertRaises(ValueError):
            check_vertex_execution(loop)

    def test_wrapper_maps_original_vertex_identity_and_rejects_integer_inputs(self):
        with tempfile.TemporaryDirectory() as directory:
            file = Path(directory) / 'vertex.hlsl'
            file.write_text('void main(in float4 iPosition0 : POSITION0,\n'
                            'in uint id : SV_VertexID, out float4 oPos : SV_Position)\n{\n}\n')
            inputs = [dict(usage_name='position', usage_index=0)]
            source = wrapper(file, 'shader_common.h', inputs)
            self.assertIn('capturedVertex(c.Inputs[0], c.Vertex, oPos)', source)
            self.assertIn('case 62: Results[id.x] = oPos', source)
            with self.assertRaises(ValueError):
                wrapper(file, 'shader_common.h', inputs, [{'register': 0, 'semantic': 'TEXCOORD0'}])
            file.write_text(file.read_text().replace('in float4', 'in uint4'))
            with self.assertRaises(ValueError):
                wrapper(file, 'shader_common.h', inputs)


if __name__ == '__main__':
    unittest.main()
