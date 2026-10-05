"""Validate original control-flow fixtures and the complete shader selections."""
from pathlib import Path
import struct
import tempfile
import unittest

from scripts.import_fh1_shaders import parse_shader_container
from tools.probe_fh1_shader_translation import select_programs
from tools.shader_control_flow_cases import BOOLEAN_WORDS, boolean, encode_program, fixtures
from tools.validate_shader_control_flow import compute_wrapper, encode_cases


class ShaderControlFlowTests(unittest.TestCase):
    def test_original_fixture_containers_are_bounded_and_cover_both_stages(self):
        programs = fixtures()
        self.assertEqual(len(programs), 412)
        self.assertEqual(len({p.name for p in programs}), len(programs))
        for p in programs:
            with self.subTest(fixture=p.name):
                parsed = parse_shader_container(p.data, 0)
                self.assertEqual(parsed.metadata["stage"], "vertex" if p.vertex else "pixel")
                self.assertEqual(parsed.metadata["container_bytes"], len(p.data))
                self.assertEqual(parsed.metadata["code_bytes"] % 12, 0)
                self.assertEqual(len(p.expected(BOOLEAN_WORDS)), 4)

    def test_bank_patterns_distinguish_pixel_b133_from_compact_and_vertex_aliases(self):
        self.assertNotEqual(boolean(BOOLEAN_WORDS, 133), boolean(BOOLEAN_WORDS, 5))
        self.assertNotEqual(boolean(BOOLEAN_WORDS, 133), boolean(BOOLEAN_WORDS, 21))
        inverse = tuple(word ^ 0xFFFFFFFF for word in BOOLEAN_WORDS)
        for index in range(256):
            self.assertNotEqual(boolean(BOOLEAN_WORDS, index), boolean(inverse, index))
        for invalid in (-1, 256):
            with self.assertRaises(ValueError):
                boolean(BOOLEAN_WORDS, invalid)

    def test_conditional_end_goldens_require_a_matching_condition(self):
        fixture = next(p for p in fixtures() if p.name == "ps-forward-bool-14-b133-1")
        self.assertEqual(fixture.expected(BOOLEAN_WORDS), (11, 13, 17, 19))
        self.assertEqual(fixture.expected(tuple(w ^ 0xFFFFFFFF for w in BOOLEAN_WORDS)), (23, 29, 31, 37))

    def test_packed_cf_words_match_independently_stated_encodings(self):
        # EXEC(addr=1,count=1,absolute), EXEC_END(addr=2,count=1,absolute).
        from tools.shader_control_flow_cases import clause
        actual = encode_program([clause(1, [(0, 0, 0)]), clause(2, [(0, 0, 0)])])
        self.assertEqual(struct.unpack_from(">3I", actual), (0x00001001, 0x10021800, 0x28000000))

    def test_case_payload_count_and_booleans_have_exact_host_endian_layout(self):
        original = fixtures()[:2]
        data, count = encode_cases(original, BOOLEAN_WORDS, True)
        self.assertEqual(count, 258)
        self.assertEqual(len(data), 40 + count * 32)
        self.assertEqual(struct.unpack_from("<10I", data), (0x43464C31, count, *BOOLEAN_WORDS))
        last = struct.unpack_from("<4I4f", data, 40 + (count - 1) * 32)
        self.assertEqual(last[:4], (0xFFFFFFFF, 255, 0, 0))
        self.assertEqual(last[4:], (float(boolean(BOOLEAN_WORDS, 255)), 0., 0., 0.))

    def test_compute_wrapper_preserves_emitted_parameter_order(self):
        with tempfile.TemporaryDirectory() as directory:
            file = Path(directory) / "fixture.hlsl"
            file.write_text("void main(\nin float4 input : TEXCOORD0,\nin bool iFace : SV_IsFrontFace,\n"
                            "in uint iFace : SV_IsFrontFace,\nout float4 oC0 : SV_Target0)\n{\n}\n")
            fixture = fixtures()[0]
            source = compute_wrapper([(fixture, file)], True, "shader_common.h")
            self.assertIn("translated0((float4)0, (bool)0, oC0)", source)
            self.assertIn("#define g_SpecConstants() 0u", source)
            self.assertIn("#undef FixtureFloats", source)
            file.write_text("void main(in float x : TEXCOORD0)\n{\n}\n")
            with self.assertRaises(ValueError):
                compute_wrapper([(fixture, file)], True, "shader_common.h")

    def test_complete_pixel_selection_deduplicates_and_keeps_all_families(self):
        manifest = {"programs": {"p1": {"stage": "pixel"}, "p2": {"stage": "pixel"}, "v": {"stage": "vertex"}},
                    "effects": [{"path": "Cars/a", "programs": [{"sha256": "p1"}, {"sha256": "p2"}, {"sha256": "v"}]},
                                {"path": "track/b", "programs": [{"sha256": "p1"}]}]}
        selected = select_programs(manifest, 1, all_pixel=True)
        self.assertEqual(set(selected), {"p1", "p2"})
        self.assertEqual(selected["p1"], {"Cars", "track"})
        with self.assertRaises(ValueError):
            select_programs(manifest, 1, all_pixel=True, all_vertex=True)


if __name__ == "__main__":
    unittest.main()
