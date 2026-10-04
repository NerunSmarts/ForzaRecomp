"""Report missing indirect entries for manual review; never edit game configuration."""
from bisect import bisect_right
import json
from pathlib import Path
import re
import struct

ROOT = Path(__file__).resolve().parents[1]
MODULES = [("default", "default", 0x82000000),
           ("media", "XMediaFacade_default", 0x88000000),
           ("speech", "SpeechFacade_default", 0x89000000)]


def candidates(image, base, known):
    pe = struct.unpack_from("<I", image, 0x3C)[0]
    if image[pe:pe + 4] != b"PE\0\0":
        raise ValueError("Expected a decrypted, mapped PE image from fh1_xex_inspect")
    count = struct.unpack_from("<H", image, pe + 6)[0]
    optional_size = struct.unpack_from("<H", image, pe + 20)[0]
    sections = []
    for index in range(count):
        offset = pe + 24 + optional_size + index * 40
        name = image[offset:offset + 8].rstrip(b"\0").decode()
        size, address = struct.unpack_from("<II", image, offset + 8)
        flags = struct.unpack_from("<I", image, offset + 36)[0]
        sections.append((name, address, size, flags))
    code = [(base + address, base + address + size)
            for _, address, size, flags in sections if flags & 0x20000000]
    pdata, pdata_size = struct.unpack_from("<II", image, pe + 24 + 96 + 3 * 8)
    ranges = []
    for offset in range(pdata, pdata + pdata_size, 8):
        start, flags = struct.unpack_from(">II", image, offset)
        ranges.append((start, start + ((flags >> 8) & 0x3FFFFF) * 4))
    ranges.sort()
    starts = [start for start, _ in ranges]
    missing = {}

    def record(source, target):
        if target in known or target & 3:
            return
        if not any(low <= target < high for low, high in code):
            return
        index = bisect_right(starts, target) - 1
        if index >= 0 and ranges[index][0] < target < ranges[index][1]:
            return  # Exception labels inside a PDATA function are not entry points.
        previous = struct.unpack_from(">I", image, target - base - 4)[0]
        first, second = struct.unpack_from(">II", image, target - base)
        if all(any(low <= word < high for low, high in code) for word in (first, second)):
            return  # Embedded jump-table words can decode as ordinary PPC loads.
        boundary = previous in (0, 0x4E800020, 0x4E800420)
        boundary |= previous >> 26 == 18 and not (previous & 1)
        if boundary:
            missing.setdefault(target, []).append(source)

    for name, address, size, _ in sections:
        if name not in (".rdata", ".data"):
            continue
        for offset in range(address, address + size - 3, 4):
            target = struct.unpack_from(">I", image, offset)[0]
            record(base + offset, target)

    # Near callbacks formed with lis + addi/ori are skipped by the SDK's
    # distance heuristic. Report short materializations for manual review.
    for low, high in code:
        for address in range(low, high - 3, 4):
            raw = struct.unpack_from(">I", image, address - base)[0]
            if raw >> 26 != 15 or (raw >> 16) & 31:
                continue
            register = (raw >> 21) & 31
            upper = (raw & 0xFFFF) << 16
            # Argument setup may separate lis from its low half by five or
            # more instructions (FH1's virtual float setter does this).
            # These remain suggestions requiring disassembly review.
            for source in range(address + 4, min(address + 36, high - 3), 4):
                following = struct.unpack_from(">I", image, source - base)[0]
                opcode, ra = following >> 26, (following >> 16) & 31
                if opcode in (14, 24) and ra == register:
                    lower = following & 0xFFFF
                    if opcode == 14:
                        if lower & 0x8000:
                            lower -= 0x10000
                        target = (upper + lower) & 0xFFFFFFFF
                    else:
                        target = upper | lower
                    record(source, target)

    report = {}
    for address, references in sorted(missing.items()):
        # Suggest sizes only for short straight-line wrappers. This heuristic
        # does not prove a candidate is a function; inspect it before using it.
        suggested = None
        wrote_ctr = False
        for index in range(16):
            raw = struct.unpack_from(">I", image, address - base + index * 4)[0]
            opcode = raw >> 26
            rd, ra = (raw >> 21) & 31, (raw >> 16) & 31
            if raw == 0x4E800020 or raw == 0x4E800420 and wrote_ctr:
                suggested = 4 * (index + 1)
                break
            if opcode == 18 and not (raw & 3):
                displacement = raw & 0x3FFFFFC
                if displacement & (1 << 25):
                    displacement -= 1 << 26
                target = address + index * 4 + displacement
                if not address <= target < address + 64:
                    suggested = 4 * (index + 1)
                break
            if opcode in (14, 15, 24, 32, 34, 40, 36, 38, 44):
                if rd > 12 or ra in (1, 31):
                    break
            elif opcode == 31 and (raw >> 1) & 1023 == 444:
                rb = (raw >> 11) & 31
                if rd != rb or ra > 12 or rd > 12 or rd == 1:
                    break
            elif raw & 0xFC1FFFFF == 0x7C0903A6 and rd <= 12:
                wrote_ctr = True
            else:
                break
        report[f"{address:08X}"] = {
            "suggested_size": suggested,
            "references": [f"{source:08X}" for source in sorted(set(references))],
        }
    return report


if __name__ == "__main__":
    for module, stem, base in MODULES:
        image = (ROOT / f"out/images/{stem}.bin").read_bytes()
        mappings = (ROOT / f"generated/{module}/fh1_init.cpp").read_text()
        known = {int(value, 16) for value in re.findall(r"\{ 0x([0-9A-Fa-f]+),", mappings)}
        report = candidates(image, base, known)
        output = ROOT / f"out/images/{module}-indirect-review.json"
        output.write_text(json.dumps(report, indent=2) + "\n")
        print(f"{module}: {len(report)} candidates for manual review; {output.relative_to(ROOT)}")
