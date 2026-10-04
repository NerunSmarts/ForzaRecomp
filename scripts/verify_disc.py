"""Verify the exact disc revision before using address-specific overrides."""
import argparse
import hashlib
import json
from pathlib import Path
import struct

ROOT = Path(__file__).resolve().parents[1]


def read_header(data):
    def u32(offset):
        if offset < 0 or offset + 4 > len(data):
            raise ValueError("Truncated XEX header")
        return struct.unpack_from(">I", data, offset)[0]

    if data[:4] != b"XEX2":
        raise ValueError("Expected XEX2")
    security = u32(16)
    count = u32(20)
    if count > (len(data) - 24) // 8:
        raise ValueError("Invalid optional-header count")
    headers = {u32(24 + i * 8): u32(28 + i * 8) for i in range(count)}
    execution = headers.get(0x40006)
    if execution is None:
        raise ValueError("Missing execution info")
    return {
        "base": u32(security + 0x110),
        "size": u32(security + 4),
        "entry": headers.get(0x10100, 0),
        "title_id": u32(execution + 12),
        "media_id": u32(execution),
    }


def verify(directory):
    expected = json.loads((ROOT / "config/disc.json").read_text())
    ranges = []
    for name, reference in expected["modules"].items():
        data = (directory / name).read_bytes()
        if hashlib.sha256(data).hexdigest() != reference["sha256"]:
            raise ValueError(f"{name}: unsupported disc revision (SHA-256 mismatch)")
        header = read_header(data)
        for field in ("base", "size", "entry"):
            if header[field] != int(reference[field], 16):
                raise ValueError(f"{name}: {field} mismatch")
        for field in ("title_id", "media_id"):
            if header[field] != int(expected[field], 16):
                raise ValueError(f"{name}: {field} mismatch")
        start, end = header["base"], header["base"] + header["size"]
        if not start <= header["entry"] < end or end > 2**32:
            raise ValueError(f"{name}: invalid address range")
        for other_start, other_end, other_name in ranges:
            if start < other_end and other_start < end:
                raise ValueError(f"{name}: overlaps {other_name}")
        ranges.append((start, end, name))
        print(f"{name}: verified {start:08X}-{end:08X}, entry {header['entry']:08X}")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("game_directory", nargs="?", type=Path, default=ROOT / "FH1")
    args = parser.parse_args()
    try:
        verify(args.game_directory)
    except (OSError, ValueError) as error:
        parser.exit(1, f"Disc verification failed: {error}\n")
