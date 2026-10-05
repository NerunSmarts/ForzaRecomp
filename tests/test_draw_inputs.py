"""Check bounded native draw-input validation with entirely original payloads."""
import hashlib
import json
from pathlib import Path
import struct
import tempfile
import unittest

from tools.inspect_draw_inputs import INDEX_SLOT, REGISTER_COUNT, load_capture


def original_hash(data):
    return int.from_bytes(hashlib.sha256(data).digest()[:8], "little")


class DrawInputTests(unittest.TestCase):
    def fixture(self, folder):
        registers = [0] * REGISTER_COUNT
        registers[0x4800 + 89 * 2] = 0x1003
        registers[0x4801 + 89 * 2] = (4 << 2) | 2
        registers[0x4000] = 0x3F800000
        registers[0x4400] = 0x40000000
        registers[0x4904] = 1 << 5
        (folder / "registers.bin").write_bytes(struct.pack(f"<{REGISTER_COUNT}I", *registers))
        (folder / "shared-memory.bin").write_bytes(bytes(range(24)))
        code = struct.pack(">3I", 0x80001001, 0x18000000, 0x28000000)
        host_code = b"".join(code[i:i + 4][::-1] for i in range(0, len(code), 4))
        for stage in ("vertex.ucode.bin.vert", "pixel.ucode.bin.frag"):
            (folder / stage).write_bytes(host_code)
        metadata = {"schema": 1, "kind": "fh1-single-draw-inputs", "word_endian": "little",
                    "resource_source": "gpu-shared-memory", "memexport": False, "textures_captured": False,
                    "frame": 500, "draw": 30, "primitive": 4, "index_count": 3, "host_vertex_count": 3,
                    "index_address": 0x2002, "index_bytes": 6, "index_format": 0, "index_endian": 1,
                    "texture_mask": 1, "color_mask": 15,
                    "vertex_hash": f"{original_hash(code):016X}", "pixel_hash": f"{original_hash(code):016X}",
                    "ranges": [{"slot": 89, "address": 0x1000, "size": 16, "offset": 0},
                               {"slot": INDEX_SLOT, "address": 0x2000, "size": 8, "offset": 16}]}
        (folder / "draw.json").write_text(json.dumps(metadata))
        return metadata

    def test_distinct_banks_absolute_boolean_words_and_index_prefix(self):
        with tempfile.TemporaryDirectory() as directory:
            folder = Path(directory)
            self.fixture(folder)
            capture = load_capture(folder, original_hash)
            self.assertEqual(struct.unpack_from("<I", capture.constant_bank())[0], 0x3F800000)
            self.assertEqual(struct.unpack_from("<I", capture.constant_bank(True))[0], 0x40000000)
            self.assertEqual(struct.unpack("<8I", capture.boolean_bank())[4], 1 << 5)
            self.assertEqual(capture.index_payload(), bytes(range(18, 24)))

    def test_inconsistent_range_extent_fetch_words_and_index_metadata_rejected(self):
        for mutation in (lambda m: m["ranges"][0].update(size=12),
                         lambda m: m["ranges"][0].update(address=0x1004),
                         lambda m: m["ranges"][1].update(offset=0),
                         lambda m: m["ranges"][1].update(address=0x1FFFFFFC, size=8),
                         lambda m: m.update(index_bytes=8),
                         lambda m: m.update(index_address=0x2004),
                         lambda m: m.update(memexport=True),
                         lambda m: m.update(frame=True),
                         lambda m: m.update(vertex_hash="0000000000000000")):
            with self.subTest(mutation=mutation), tempfile.TemporaryDirectory() as directory:
                folder = Path(directory)
                metadata = self.fixture(folder)
                mutation(metadata)
                (folder / "draw.json").write_text(json.dumps(metadata))
                with self.assertRaises(ValueError):
                    load_capture(folder, original_hash)

    def test_partial_capture_missing_manifest_and_truncated_bank_rejected(self):
        with tempfile.TemporaryDirectory() as directory:
            folder = Path(directory)
            self.fixture(folder)
            (folder / "draw.json").unlink()
            with self.assertRaises(ValueError):
                load_capture(folder, original_hash)
            self.fixture(folder)
            (folder / "draw.json").write_text("[]")
            with self.assertRaises(ValueError):
                load_capture(folder, original_hash)
            self.fixture(folder)
            (folder / "registers.bin").write_bytes(bytes(32))
            with self.assertRaises(ValueError):
                load_capture(folder, original_hash)

    def test_symlink_payload_is_rejected_even_inside_capture_directory(self):
        with tempfile.TemporaryDirectory() as directory:
            folder = Path(directory)
            self.fixture(folder)
            (folder / "shared-memory.bin").rename(folder / "other.bin")
            (folder / "shared-memory.bin").symlink_to(folder / "other.bin")
            with self.assertRaises(ValueError):
                load_capture(folder, original_hash)

    def test_no_range_rewriting_of_invalid_fetch_compatibility_type(self):
        with tempfile.TemporaryDirectory() as directory:
            folder = Path(directory)
            self.fixture(folder)
            data = bytearray((folder / "registers.bin").read_bytes())
            struct.pack_into("<I", data, (0x4800 + 89 * 2) * 4, 0x1001)
            (folder / "registers.bin").write_bytes(data)
            capture = load_capture(folder, original_hash)
            self.assertEqual(capture.registers[0x4800 + 89 * 2] & 3, 1)


if __name__ == "__main__":
    unittest.main()
