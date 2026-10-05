"""Inspect opt-in Vulkan image readbacks; captures and previews stay private."""
import argparse
import json
import math
import struct
from pathlib import Path

# VkFormat values and their little-endian storage. Packed RGBA follows bit order.
FORMATS = {
    37: ("<4B", 255), 43: ("<4B", 255), 51: ("<4B", 255),
    78: ("<2h", 32767), 83: ("<2e", 1), 91: ("<4H", 65535),
    92: ("<4h", 32767), 97: ("<4e", 1), 100: ("<f", 1), 103: ("<2f", 1),
}


def pixels(data, vk_format):
    if vk_format == 64:  # A2B10G10R10_UNORM_PACK32
        for (word,) in struct.iter_unpack("<I", data):
            yield tuple(((word >> bit) & 1023) / 1023 for bit in (0, 10, 20)) + (
                (word >> 30) / 3,)
    else:
        layout, divisor = FORMATS[vk_format]
        for values in struct.iter_unpack(layout, data):
            yield tuple(value / divisor for value in values)


def inspect(metadata, preview):
    info = json.loads(metadata.read_text())
    vk_format = info.get("vk_format")
    if vk_format not in FORMATS and vk_format != 64:
        # EDRAM / tiled guest-memory buffers need separate guest format decoding.
        return
    data = metadata.with_suffix(".bin").read_bytes()
    expected = info["width"] * info["height"] * info["bytes_per_pixel"]
    if len(data) != expected:
        raise ValueError(f"{metadata}: expected {expected} bytes, found {len(data)}")
    if vk_format in FORMATS and struct.calcsize(FORMATS[vk_format][0]) != info["bytes_per_pixel"]:
        raise ValueError(f"{metadata}: format and pixel size disagree")
    rgb_min, rgb_max = math.inf, -math.inf
    nonzero, nonfinite, alpha_nonzero = 0, 0, 0
    has_alpha = vk_format not in (78, 83, 100, 103)
    for pixel in pixels(data, vk_format):
        rgb = pixel[:3]
        finite = [value for value in rgb if math.isfinite(value)]
        if finite:
            rgb_min = min(rgb_min, *finite)
            rgb_max = max(rgb_max, *finite)
        nonzero += any(value != 0 and math.isfinite(value) for value in rgb)
        nonfinite += sum(not math.isfinite(value) for value in rgb)
        if has_alpha:
            alpha_nonzero += math.isfinite(pixel[3]) and pixel[3] != 0
    result = dict(file=metadata.name, metadata=info, rgb_min=rgb_min if math.isfinite(rgb_min) else None,
                  rgb_max=rgb_max if math.isfinite(rgb_max) else None,
                  rgb_nonzero_pixels=nonzero, rgb_nonfinite_components=nonfinite,
                  alpha_nonzero_pixels=alpha_nonzero if has_alpha else None)
    if preview:
        # A diagnostic square-root curve makes dim HDR values visible. It does
        # not reproduce the game's tone mapping or alter the raw capture.
        scale = 1 / max(1, rgb_max if math.isfinite(rgb_max) else 1)
        output = metadata.with_suffix(".ppm")
        with output.open("wb") as stream:
            stream.write(f"P6\n{info['width']} {info['height']}\n255\n".encode())
            row = bytearray()
            for pixel in pixels(data, vk_format):
                for value in (pixel + (0, 0))[:3]:
                    value = max(0, min(1, value * scale)) if math.isfinite(value) else 0
                    row.append(round(math.sqrt(value) * 255))
                if len(row) == info["width"] * 3:
                    stream.write(row)
                    row.clear()
        result["preview_scale"] = scale
        metadata.with_suffix(".stats.json").write_text(json.dumps(result, indent=2) + "\n")
    print(json.dumps(result, allow_nan=False))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("path", type=Path, help="Capture directory or one image's JSON metadata")
    parser.add_argument("--preview", action="store_true", help="Write diagnostic PPM and stats files")
    args = parser.parse_args()
    paths = sorted(args.path.glob("*.json")) if args.path.is_dir() else [args.path]
    for metadata in paths:
        if not metadata.name.endswith(".stats.json"):
            inspect(metadata, args.preview)


if __name__ == "__main__":
    main()
