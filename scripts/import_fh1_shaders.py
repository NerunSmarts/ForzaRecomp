"""Inspect FH1 FXLite effects and optionally extract their Xenos shader containers.

This imports metadata and original shader binaries, not native Vulkan shaders.
No game assets or generated shader code belong in the public source tree.
"""
import argparse
from collections import Counter
from dataclasses import dataclass
import hashlib
import json
from pathlib import Path
import struct

try:
    from .private_artifacts import ROOT, new_output_directory
except ImportError:
    from private_artifacts import ROOT, new_output_directory

USAGES = ("position", "blend_weight", "blend_indices", "normal", "point_size",
          "texcoord", "tangent", "binormal", "tess_factor", "position_t",
          "color", "fog", "depth", "sample")
REGISTER_SETS = ("bool", "int4", "float4", "sampler")


class Reader:
    def __init__(self, data, offset=0):
        self.data = data
        self.offset = offset

    def take(self, size):
        if size < 0 or size > len(self.data) - self.offset:
            raise ValueError(f"Truncated structure at byte {self.offset}: need {size} bytes")
        start = self.offset
        self.offset += size
        return self.data[start:self.offset]

    def words(self, count):
        if count < 0 or count > (len(self.data) - self.offset) // 4:
            raise ValueError(f"Invalid word count {count} at byte {self.offset}")
        return list(struct.unpack(f">{count}I", self.take(count * 4)))

    def string(self):
        end = self.data.find(b"\0", self.offset)
        if end < 0:
            raise ValueError(f"Unterminated name at byte {self.offset}")
        value = self.take(end + 1 - self.offset)[:-1]
        try:
            return value.decode("utf-8")
        except UnicodeDecodeError as error:
            raise ValueError("Invalid UTF-8 in shader metadata") from error


def parse_declaration(data, strides):
    reader = Reader(data)
    resource = reader.words(6)
    if resource[0] & 15 != 5:
        raise ValueError("Expected a vertex declaration resource")
    count, max_stream = reader.words(2)
    stream_mask = list(reader.take(16))
    uniqueness, = reader.words(1)
    if count > (len(data) - reader.offset) // 12:
        raise ValueError("Vertex element count exceeds declaration size")
    elements = []
    for _ in range(count):
        stream, offset, packed, method, usage, index, padding = struct.unpack(
            ">HHIBBBB", reader.take(12))
        elements.append({
            "stream": stream, "offset": offset, "packed_type": f"{packed:08X}",
            "format": packed & 63, "endian": (packed >> 6) & 3,
            "signed": bool(packed & 256), "integer": bool(packed & 512),
            "swizzle": [(packed >> (10 + 3 * lane)) & 7 for lane in range(4)],
            "method": method, "usage": usage,
            "usage_name": USAGES[usage] if usage < len(USAGES) else "unknown",
            "usage_index": index, "padding": padding,
        })
    return {"strides": strides, "max_stream": max_stream, "stream_mask": stream_mask,
            "resource_words": resource, "uniqueness": uniqueness, "elements": elements,
            "trailing_bytes": len(data) - reader.offset}


def constant_bindings(virtual, offset):
    """Read bounded D3DX constant reflection; defaults/struct members stay opaque."""
    if offset < 36 or offset + 32 > len(virtual):
        raise ValueError("Constant table header exceeds virtual shader data")
    container_size, = struct.unpack_from(">I", virtual, offset)
    end = offset + container_size
    if container_size < 32 or end > len(virtual):
        raise ValueError("Constant table size exceeds virtual shader data")
    base = offset + 4
    size, _, _, count, info, _, _ = struct.unpack_from(">7I", virtual, base)
    if size != 28 or (count and info < 28) or count > (end - base - info) // 20:
        raise ValueError("Constant information array exceeds table")
    bindings = []
    for index in range(count):
        name, bank, register, registers, reserved, type_offset, default = struct.unpack_from(
            ">I4H2I", virtual, base + info + index * 20)
        if name < 28 or base + name >= end:
            raise ValueError("Constant name exceeds table")
        name_reader = Reader(virtual[:end], base + name)
        if type_offset < 28 or base + type_offset + 16 > end:
            raise ValueError("Constant type exceeds table")
        parameter_class, parameter_type, rows, columns, elements, members, member_info = (
            struct.unpack_from(">6HI", virtual, base + type_offset))
        if default and (default < 28 or base + default >= end):
            raise ValueError("Constant default offset exceeds table")
        bindings.append({
            "name": name_reader.string(), "register_set": bank,
            "register_set_name": REGISTER_SETS[bank] if bank < 4 else "unknown",
            "register_index": register, "register_count": registers, "reserved": reserved,
            "type": {"class": parameter_class, "type": parameter_type, "rows": rows,
                     "columns": columns, "elements": elements, "struct_members": members,
                     "struct_member_info_offset": member_info},
            "default_value_offset": default,
        })
    return bindings


@dataclass
class Program:
    offset: int
    data: bytes
    metadata: dict


def shader_interface(virtual, shader_offset, stage):
    reader = Reader(virtual, shader_offset + 24)
    interpolator_info, = struct.unpack_from(">I", virtual, shader_offset + 20)
    interpolator_count = (interpolator_info >> 5) & 31
    inputs = []
    if stage == "vertex":
        prefix_words, count, unknown = reader.words(3)
        reader.words(prefix_words)
        for raw in reader.words(count):
            usage, index = (raw >> 12) & 15, (raw >> 16) & 15
            inputs.append({"instruction_address": raw & 4095, "usage": usage,
                           "usage_name": USAGES[usage] if usage < len(USAGES) else "unknown",
                           "usage_index": index, "raw": f"{raw:08X}"})
        result = {"vertex_inputs": inputs, "prefix_words": prefix_words, "field_20": unknown}
    else:
        unknown, outputs = reader.words(2)
        result = {"output_mask": outputs, "field_18": unknown}
    interpolators = []
    for raw in reader.words(interpolator_count):
        usage = (raw >> 4) & 15
        interpolators.append({"register": (raw >> 8) & 15, "usage": usage,
                              "usage_name": USAGES[usage] if usage < len(USAGES) else "unknown",
                              "usage_index": raw & 15, "raw": f"{raw:08X}"})
    result["interpolators"] = interpolators
    return result


def parse_shader_container(blob, offset):
    if offset < 0 or offset + 36 > len(blob):
        raise ValueError("Truncated shader container header")
    flags, virtual, physical, field_c, constants, definitions, shader, tail1, tail2 = (
        struct.unpack_from(">9I", blob, offset))
    if flags not in (0x102A1100, 0x102A1101):
        raise ValueError(f"Unsupported shader container flags {flags:08X}")
    total = virtual + physical
    if virtual < 36 or total > len(blob) - offset or tail1 or tail2:
        raise ValueError("Invalid shader container sizes or reserved fields")
    data = blob[offset:offset + total]
    if shader < 36 or shader + 24 > virtual:
        raise ValueError("Shader header exceeds virtual shader data")
    if definitions and (definitions < 36 or definitions + 20 > virtual):
        raise ValueError("Definition table header exceeds virtual shader data")
    physical_offset, code_size, _, _, _, _ = struct.unpack_from(">6I", data, shader)
    if physical_offset % 4 or code_size % 4 or code_size == 0:
        raise ValueError("Unaligned or empty shader microcode")
    if physical_offset > physical or code_size > physical - physical_offset:
        raise ValueError("Shader microcode exceeds physical shader data")
    code_offset = virtual + physical_offset
    # Xbox shader flags use bit 0 for vertex, not pixel.
    stage = "vertex" if flags & 1 else "pixel"
    return Program(offset, data, {
        "sha256": hashlib.sha256(data).hexdigest(), "stage": stage,
        "flags": f"{flags:08X}", "container_bytes": total, "virtual_bytes": virtual,
        "physical_bytes": physical, "field_c": field_c, "shader_offset": shader,
        "constant_table_offset": constants, "definition_table_offset": definitions,
        "code_offset": code_offset, "code_bytes": code_size,
        "code_sha256": hashlib.sha256(data[code_offset:code_offset + code_size]).hexdigest(),
        "bindings": constant_bindings(data[:virtual], constants),
        "interface": shader_interface(data[:virtual], shader, stage),
    })


def scan_programs(blob):
    """Find aligned standard containers within the opaque compiled FXLite blob."""
    programs = []
    offset = 0
    while True:
        offset = blob.find(b"\x10\x2a\x11", offset)
        if offset < 0:
            return programs
        if offset % 4:
            offset += 1
            continue
        # Fail conservatively on a malformed aligned container rather than
        # silently publishing a partial inventory as a successful import.
        program = parse_shader_container(blob, offset)
        programs.append(program)
        offset += len(program.data)


@dataclass
class Effect:
    metadata: dict
    programs: list


def parse_effect(data):
    reader = Reader(data)
    kind, asset_hash, blob_size, technique_count, declaration_count, stride_count, payload = (
        reader.words(7))
    if kind != 0x101:
        raise ValueError(f"Unsupported effect type {kind:08X}; expected FXLite 00000101")
    if payload != len(data) - 28:
        raise ValueError("Effect payload size disagrees with file length")
    technique_declarations = reader.words(technique_count)
    sizes = reader.words(declaration_count)
    stride_lengths = reader.words(declaration_count)
    if sum(stride_lengths) != stride_count:
        raise ValueError("Declaration stride counts disagree with effect header")
    strides = reader.words(stride_count)
    if any(index >= declaration_count for index in technique_declarations):
        raise ValueError("Technique references a missing vertex declaration")
    blob_offset = reader.offset
    programs = scan_programs(reader.take(blob_size))
    declarations = []
    stride_offset = 0
    for size, count in zip(sizes, stride_lengths):
        declarations.append(parse_declaration(reader.take(size),
                                              strides[stride_offset:stride_offset + count]))
        stride_offset += count
    # Some particle effects omit the complete name section. Partial sections
    # are corrupt; empty declarations are valid for procedural/fullscreen draws.
    has_names = reader.offset < len(data)
    if has_names:
        for declaration in declarations:
            for element in declaration["elements"]:
                element["name"] = reader.string()
    if reader.offset != len(data):
        raise ValueError("Unexpected trailing data after vertex element names")
    return Effect({"sha256": hashlib.sha256(data).hexdigest(), "bytes": len(data),
                   "type": f"{kind:08X}", "asset_hash": f"{asset_hash:08X}",
                   "effect_blob_offset": blob_offset, "effect_blob_bytes": blob_size,
                   "technique_declarations": technique_declarations,
                   "declarations": declarations, "has_element_names": has_names}, programs)


def import_directory(source, output, extract=False, root=ROOT):
    source = Path(source).resolve()
    if not source.is_dir():
        raise ValueError(f"Shader directory does not exist: {source}")
    files = sorted(path for path in source.rglob("*") if path.suffix.lower() == ".fxobj")
    if not files:
        raise ValueError("No .fxobj effect files found")
    # Complete parsing before reserving or writing output.
    effects = []
    unique = {}
    families = Counter()
    stages = Counter()
    for path in files:
        try:
            effect = parse_effect(path.read_bytes())
        except ValueError as error:
            raise ValueError(f"{path.relative_to(source)}: {error}") from error
        name = path.relative_to(source).as_posix()
        families[name.split("/")[0]] += 1
        effect.metadata["path"] = name
        references = []
        for program in effect.programs:
            digest = program.metadata["sha256"]
            unique.setdefault(digest, program)
            stages[program.metadata["stage"]] += 1
            references.append({"sha256": digest,
                               "file_offset": effect.metadata["effect_blob_offset"] + program.offset})
        effect.metadata["programs"] = references
        effects.append(effect.metadata)
    summary = {"effects": len(effects), "source_bytes": sum(e["bytes"] for e in effects),
               "techniques": sum(len(e["technique_declarations"]) for e in effects),
               "declarations": sum(len(e["declarations"]) for e in effects),
               "program_occurrences": sum(stages.values()), "unique_programs": len(unique),
               "unique_microcode": len({p.metadata["code_sha256"] for p in unique.values()}),
               "stage_occurrences": dict(sorted(stages.items())), "families": dict(sorted(families.items())),
               "effects_without_programs": sum(not e["programs"] for e in effects)}
    output = new_output_directory(output, root)
    if extract:
        (output / "programs").mkdir()
    programs = {}
    for digest, program in sorted(unique.items()):
        metadata = dict(program.metadata)
        if extract:
            name = f"programs/{digest}.xshader.bin"
            (output / name).write_bytes(program.data)
            metadata["file"] = name
        programs[digest] = metadata
    manifest = {"schema": 1, "kind": "fh1-fxlite-inventory", "summary": summary,
                "limits": ["Structural inventory; shader compilation and native rendering are not implemented.",
                           "Technique-to-program pass relationships inside FXLite remain opaque.",
                           "SHA-256 identities differ from ReXGlue's microcode XXH3 cache keys."],
                "effects": effects, "programs": programs}
    (output / "manifest.json").write_text(json.dumps(manifest, indent=2) + "\n")
    return summary


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("shader_directory", nargs="?", type=Path, default=ROOT / "FH1/media/shaders")
    parser.add_argument("--output", type=Path, default=ROOT / "out/native-renderer/shaders")
    parser.add_argument("--extract", action="store_true", help="Write complete unique shader containers")
    args = parser.parse_args()
    try:
        summary = import_directory(args.shader_directory, args.output, args.extract)
    except (OSError, ValueError) as error:
        parser.exit(1, f"Shader import failed: {error}\n")
    print(json.dumps(summary, indent=2))
    print(f"Private inventory saved in {args.output}; no shaders have been compiled yet.")


if __name__ == "__main__":
    main()
