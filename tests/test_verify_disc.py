"""Validate rejection of malformed XEX metadata using synthetic headers."""
from pathlib import Path
import struct
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
from verify_disc import read_header


class HeaderTests(unittest.TestCase):
    def image(self):
        data = bytearray(512)
        data[:4] = b"XEX2"
        for offset, value in [(16, 64), (20, 2), (24, 0x10100), (28, 0x82000100),
                              (32, 0x40006), (36, 400), (68, 0x10000),
                              (64 + 0x110, 0x82000000), (400, 0x12345678),
                              (412, 0x4D5309C9)]:
            struct.pack_into(">I", data, offset, value)
        return data

    def test_valid_metadata(self):
        info = read_header(self.image())
        self.assertEqual(info["entry"], 0x82000100)
        self.assertEqual(info["title_id"], 0x4D5309C9)

    def test_reject_truncated_security_and_execution_info(self):
        for length in (0, 4, 20, 40, 336, 412):
            with self.subTest(length=length), self.assertRaises(ValueError):
                read_header(self.image()[:length])

    def test_reject_invalid_optional_header_count(self):
        data = self.image()
        struct.pack_into(">I", data, 20, 0xFFFFFFFF)
        with self.assertRaises(ValueError):
            read_header(data)


if __name__ == "__main__":
    unittest.main()
