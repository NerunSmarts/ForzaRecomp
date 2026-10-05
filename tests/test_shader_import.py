"""Exercise effect/container bounds using entirely synthetic shader data."""
import json
from pathlib import Path
import struct
import tempfile
import unittest

from scripts.import_fh1_shaders import import_directory, parse_effect, parse_shader_container
from scripts.private_artifacts import new_output_directory


def words(*values):
    return struct.pack(f">{len(values)}I", *values)


def shader(vertex=True):
    # One float4 constant with a reflected scalar type, plus inert microcode.
    constant = words(28, 0, 0, 1, 28, 0, 0)
    constant += struct.pack(">I4H2I", 64, 2, 12, 1, 0, 48, 0)
    constant += struct.pack(">6HI", 0, 3, 1, 1, 1, 0, 0)
    constant += b"FixtureParam\0"
    constant += bytes((-len(constant)) % 4)
    table = words(4 + len(constant)) + constant
    interface = words(0, 1, 0, 2 | (5 << 12) | (1 << 16)) if vertex else words(0, 1)
    constant_offset = 60 + len(interface)
    virtual = constant_offset + len(table)
    return (words(0x102A1101 if vertex else 0x102A1100, virtual, 12, 36, constant_offset, 0, 36, 0, 0)
            + words(0, 12, 0, 0, 0, 0) + interface + table + bytes(12))


def declaration(empty=False):
    data = words(5, 1, 0, 0, 0, 0, 0 if empty else 1, 0) + bytes(16) + words(1)
    if not empty:
        data += struct.pack(">HHIBBBB", 0, 4, 37 | (2 << 6) | (3 << 19), 0, 5, 1, 0)
    return data


def effect(multiple=False, names=True, blob=None):
    blob = shader() + shader(False) if blob is None else blob
    declarations = [declaration()]
    strides = [16]
    techniques = [0]
    if multiple:
        declarations.append(declaration(empty=True))
        strides.append(0)
        techniques = [0, 1, 0]
    table = (words(*techniques) + words(*(len(d) for d in declarations))
             + words(*(1 for _ in declarations)) + words(*strides))
    payload = table + blob + b"".join(declarations) + (b"FixtureUV\0" if names else b"")
    return words(0x101, 123, len(blob), len(techniques), len(declarations), len(strides), len(payload)) + payload


class ShaderImportTests(unittest.TestCase):
    def test_multiple_declarations_stage_bits_and_reflection(self):
        parsed = parse_effect(effect(multiple=True))
        self.assertEqual(parsed.metadata["technique_declarations"], [0, 1, 0])
        self.assertEqual(parsed.metadata["declarations"][1]["elements"], [])
        element = parsed.metadata["declarations"][0]["elements"][0]
        self.assertEqual((element["format"], element["endian"], element["usage_name"], element["name"]),
                         (37, 2, "texcoord", "FixtureUV"))
        self.assertEqual([p.metadata["stage"] for p in parsed.programs], ["vertex", "pixel"])
        vertex_input = parsed.programs[0].metadata["interface"]["vertex_inputs"][0]
        self.assertEqual((vertex_input["usage_name"], vertex_input["usage_index"], vertex_input["instruction_address"]),
                         ("texcoord", 1, 2))
        binding = parsed.programs[0].metadata["bindings"][0]
        self.assertEqual((binding["name"], binding["register_set_name"], binding["register_index"]),
                         ("FixtureParam", "float4", 12))

    def test_complete_missing_names_are_valid_but_partial_names_fail(self):
        self.assertFalse(parse_effect(effect(names=False)).metadata["has_element_names"])
        data = bytearray(effect())
        data[-1] = 1
        with self.assertRaisesRegex(ValueError, "Unterminated"):
            parse_effect(data)

    def test_effect_rejects_truncation_and_hostile_counts(self):
        original = effect()
        for size in (0, 24, 27, 28, len(original) - 1):
            with self.subTest(size=size), self.assertRaises(ValueError):
                parse_effect(original[:size])
        for offset, value in ((0, 0), (12, 0xFFFFFFFF), (16, 0xFFFFFFFF),
                              (20, 0xFFFFFFFF), (28, 1), (36, 2)):
            data = bytearray(original)
            struct.pack_into(">I", data, offset, value)
            with self.subTest(offset=offset), self.assertRaises(ValueError):
                parse_effect(data)

    def test_shader_rejects_header_code_and_reflection_bounds(self):
        original = shader()
        for offset, value in ((4, 8), (8, 0xFFFFFFFF), (16, 0), (20, len(original)),
                              (24, len(original)), (28, 1), (36, 16), (40, 16),
                              (60, 0xFFFFFFFF), (64, 0xFFFFFFFF), (76, 0xFFFFFFFF),
                              (80 + 12, 0xFFFFFFFF), (80 + 28, 0xFFFFFFFF),
                              (80 + 28 + 12, 0xFFFFFFFF)):
            data = bytearray(original)
            struct.pack_into(">I", data, offset, value)
            with self.subTest(offset=offset), self.assertRaises(ValueError):
                parse_shader_container(data, 0)
        with self.assertRaises(ValueError):
            parse_shader_container(original[:30], 0)

    def test_shader_allows_empty_constant_table(self):
        from scripts.import_fh1_shaders import constant_bindings
        table = bytes(36) + words(32, 28, 0, 0, 0, 0, 0, 0)
        self.assertEqual(constant_bindings(table, 36), [])

    def test_extraction_deduplicates_containers_and_leaves_input_unchanged(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            source = root / "game/shaders/Cars"
            source.mkdir(parents=True)
            data = effect(blob=shader() + shader())
            (source / "fixture.fxobj").write_bytes(data)
            output = root / "out/import"
            summary = import_directory(source.parent, output, extract=True, root=root)
            self.assertEqual((summary["program_occurrences"], summary["unique_programs"]), (2, 1))
            manifest = json.loads((output / "manifest.json").read_text())
            program = next(iter(manifest["programs"].values()))
            self.assertEqual((output / program["file"]).read_bytes(), shader())
            self.assertEqual((source / "fixture.fxobj").read_bytes(), data)
            with self.assertRaises(FileExistsError):
                import_directory(source.parent, output, extract=True, root=root)

    def test_failed_parse_creates_no_output(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            source = root / "shaders"
            source.mkdir()
            (source / "broken.fxobj").write_bytes(bytes(10))
            output = root / "out/import"
            with self.assertRaises(ValueError):
                import_directory(source, output, root=root)
            self.assertFalse(output.exists())

    def test_outputs_cannot_escape_private_directory_or_follow_escape_symlink(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            for path in (root / "public/import", root / "out", root / "out/../public"):
                with self.subTest(path=path), self.assertRaises(ValueError):
                    new_output_directory(path, root=root)
            (root / "out").mkdir()
            (root / "public").mkdir()
            (root / "out/escape").symlink_to(root / "public", target_is_directory=True)
            with self.assertRaises(ValueError):
                new_output_directory(root / "out/escape/import", root=root)


if __name__ == "__main__":
    unittest.main()
