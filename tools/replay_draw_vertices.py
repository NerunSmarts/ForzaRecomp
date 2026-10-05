"""Execute a captured FH1 vertex variant offscreen against the SDK interpreter.

No game launch or performance recording. Textures, pixel/raster state and
presentation are outside this check. All game-derived output remains in out/.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import struct
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from scripts.private_artifacts import ROOT, new_output_directory
from tools.inspect_draw_inputs import load_capture, make_shader_hash
from tools.map_draw_shaders import normalize_vertex_layout, normalize_buffer_slots, buffer_binding_map
from tools.probe_fh1_shader_translation import parse_buffer_fetches
from tools.validate_vertex_fetch import run


def swap_word(value, endian):
    raw = value.to_bytes(4, "little")
    return int.from_bytes((raw, bytes((raw[1], raw[0], raw[3], raw[2])),
                           raw[::-1], bytes((raw[2], raw[3], raw[0], raw[1])))[endian], "little")


def vertex_invocations(capture):
    """Retain index order/identity; remove strip separators before base/clamp."""
    m, r = capture.metadata, capture.registers
    if m["index_bytes"]:
        width = 2 if m["index_format"] == 0 else 4
        endian = m["index_endian"]
        if width == 2 and endian > 1:
            endian = 1 if endian == 2 else 0 # Same fallback convention for 16-bit DMA.
        raw = struct.unpack(f"<{m['index_count']}{'H' if width == 2 else 'I'}", capture.index_payload())
        indices = [swap_word(i, endian) for i in raw]
    else:
        width, indices = 4, list(range(m["index_count"]))
    # Restart applies to strip/fan/loop/polygon topologies, never list topology.
    strip = m["primitive"] in (3, 5, 6, 12, 14, 15, 21, 22)
    reset = r[0x2103]
    reset_enabled = bool(m["index_bytes"] and strip and r[0x2205] & (1 << 21) and
                         (width == 4 or reset <= 0xFFFF))
    base, minimum, maximum = r[0x2102] & 0xFFFFFF, r[0x2101] & 0xFFFFFF, r[0x2100] & 0xFFFFFF
    if minimum > maximum:
        raise ValueError("Invalid captured vertex index clamp")
    rows, restarts, segment = [], [], 0
    for position, index in enumerate(indices):
        if reset_enabled and index == reset:
            restarts.append(position)
            segment += 1
            continue
        effective = min(maximum, max(minimum, (index + base) & 0xFFFFFF))
        rows.append(dict(position=position, original=index, vertex=effective, segment=segment))
    if not rows or len(rows) > 65536:
        raise ValueError("Replay requires 1–65,536 non-restart vertex invocations")
    return rows, restarts


def check_vertex_execution(code):
    """Bounds-check static clauses; texture, loop and call replay need more ABI."""
    if not code or len(code) % 12:
        raise ValueError("Invalid vertex microcode extent")
    instruction_count = len(code) // 12
    cf_limit, index, clauses = instruction_count * 2, 0, []
    while index < cf_limit:
        a, b, c = struct.unpack_from(">3I", code, (index // 2) * 12)
        cf = (a | ((b & 0xFFFF) << 32)) if not index % 2 else ((b >> 16) | (c << 16))
        opcode = cf >> 44
        if opcode in (7, 8, 9, 10):
            raise ValueError("Loop/call vertex replay needs an explicit state adapter")
        if opcode in (1, 2, 3, 4, 5, 6, 13, 14):
            address, count, sequence = cf & 0xFFF, (cf >> 12) & 7, (cf >> 16) & 0xFFF
            if not address or address + count > instruction_count:
                raise ValueError("Vertex execution clause exceeds its microcode")
            cf_limit = min(cf_limit, address * 2)
            if index >= cf_limit:
                raise ValueError("Execution clauses overlap control-flow instructions")
            clauses.append((address, count, sequence))
        index += 1
    if not clauses:
        raise ValueError("Vertex program has no execution clauses")
    for address, count, sequence in clauses:
        if address * 2 < cf_limit:
            raise ValueError("Vertex instruction overlaps control flow")
        for i in range(count):
            if sequence >> (i * 2) & 1:
                opcode = struct.unpack_from(">I", code, (address + i) * 12)[0] & 31
                if opcode != 0:
                    raise ValueError("Texture-fetch vertex replay needs captured textures")


def match_variant(imported, runtime, inputs, fetches):
    if len(imported) != len(runtime):
        return False
    addresses = tuple(sorted({i["instruction_address"] for i in inputs}))
    full = tuple(sorted({f["full"] for f in fetches}))
    a = normalize_buffer_slots(normalize_vertex_layout(imported, addresses), full)
    b = normalize_buffer_slots(normalize_vertex_layout(runtime, addresses), full)
    if a != b:
        return False
    buffer_binding_map(imported, runtime, fetches)
    return True


def select_variant(manifest_path, capture, contracts):
    manifest_path = Path(manifest_path).resolve()
    manifest = json.loads(manifest_path.read_text())
    if manifest.get("schema") != 1 or manifest.get("kind") != "fh1-fxlite-inventory":
        raise ValueError("Expected an extracted FH1 shader inventory")
    candidates = []
    for digest, program in manifest["programs"].items():
        if program["stage"] != "vertex" or program["code_bytes"] != len(capture.vertex_code):
            continue
        file = (manifest_path.parent / program["file"]).resolve()
        if manifest_path.parent not in file.parents:
            raise ValueError("Shader payload escapes the private inventory")
        data = file.read_bytes()
        if hashlib.sha256(data).hexdigest() != digest:
            raise ValueError("Shader container hash mismatch")
        start, size = program["code_offset"], program["code_bytes"]
        code = data[start:start + size]
        if len(code) != size or hashlib.sha256(code).hexdigest() != program["code_sha256"]:
            raise ValueError("Shader microcode hash mismatch")
        try:
            matches = match_variant(code, capture.vertex_code, program["interface"]["vertex_inputs"], contracts.get(digest, []))
        except ValueError:
            matches = False
        if matches:
            candidates.append((digest, program, data))
    if len(candidates) != 1:
        raise ValueError(f"Need exactly one verified vertex-container candidate; found {len(candidates)}")
    return candidates[0]


def wrapper(hlsl, common, inputs, outputs=None):
    signature = hlsl.read_text().split("void main(", 1)[1].split(")\n{", 1)[0]
    # Parse only the SPIR-V signature. Integer inputs and texture fetches need a
    # separate adapter; fail rather than silently converting their meaning.
    parameters = re.findall(r"\b(in|out)\s+(float4|float|uint4|uint|bool)\s+(\w+)\s*:\s*(\w+)", signature)
    names = {name for _, _, name, _ in parameters}
    if "oPos" not in names or not 1 <= len(inputs) <= 10:
        raise ValueError("Unsupported vertex entry signature")
    body = hlsl.read_text().split("void main(", 1)[1]
    if re.search(r"\b(?:tfetch(?:2D|3D|Cube)\w*|getTexture\w*)\s*\(", body):
        raise ValueError("Textured vertex execution requires a texture snapshot")
    semantics = [f"{i['usage_name'].upper()}{i['usage_index']}" for i in inputs]
    if len(set(semantics)) != len(semantics):
        raise ValueError("Duplicate mesh semantics need an explicit adapter")
    args, declarations, seen, supplied, output_names = [], [], set(), set(), {}
    for direction, type_name, name, semantic in parameters:
        if name in seen:
            continue
        seen.add(name)
        if direction == "out":
            declarations.append(f"{type_name} {name} = ({type_name})0;")
            args.append(name)
            output_names[semantic] = name
        elif semantic == "SV_VertexID" and type_name == "uint":
            args.append("c.Vertex")
        elif semantic in semantics and type_name == "float4":
            args.append(f"c.Inputs[{semantics.index(semantic)}]")
            supplied.add(semantic)
        else:
            raise ValueError("Unsupported captured vertex input signature")
    if supplied != set(semantics):
        raise ValueError("Incomplete mesh input mapping")
    outputs = outputs or [{"register": 62, "semantic": "SV_Position"}]
    selectors = []
    for output in outputs:
        if output["semantic"] not in output_names:
            raise ValueError("Captured shader export is absent from the translated signature")
        selectors.append(f"case {output['register']}: Results[id.x] = {output_names[output['semantic']]}; break;")
    return "\n".join([
        "#define FH1_RECOMP 1", f'#include "{common}"',
        "#undef g_SpecConstants", "#define g_SpecConstants() 0u",
        "#define main capturedVertex", f'#include "{hlsl.name}"', "#undef main",
        "struct DrawCase { uint Vertex; uint Output; uint R1; uint R2; float4 Inputs[10]; float4 Expected; };",
        "[[vk::binding(0, 0)]] StructuredBuffer<DrawCase> Cases;",
        "[[vk::binding(1, 0)]] RWStructuredBuffer<float4> Results;",
        "[numthreads(1, 1, 1)] void main(uint3 id : SV_DispatchThreadID) {",
        "DrawCase c = Cases[id.x];", *declarations,
        f"capturedVertex({', '.join(args)});", "switch(c.Output) {", *selectors,
        "default: Results[id.x] = asfloat(0x7FC00000); break;", "}", "}", ""])


def replay(capture_path, manifest_path, contract_path, output, tools=None, build_only=False):
    config = json.loads(Path(tools or ROOT / ".tools/fh1-shaders/tools.json").read_text())
    if config.get("schema") != 1:
        raise ValueError("Unsupported shader tools configuration")
    capture = load_capture(capture_path, make_shader_hash(config["hash_library"]))
    check_vertex_execution(capture.vertex_code)
    probe = json.loads(Path(contract_path).read_text())
    if probe.get("schema") != 1 or probe.get("kind") != "fh1-shader-compatibility-probe":
        raise ValueError("Expected the vertex translation probe report")
    if probe.get("translator_sha256") != hashlib.sha256(Path(config["translator"]).read_bytes()).hexdigest():
        raise ValueError("Fetch contracts must come from the current translator")
    contracts = {r["sha256"]: r.get("buffer_fetches", []) for r in probe["results"]
                 if r["stage"] == "vertex" and r["translation"]["status"] == "pass"}
    digest, program, container = select_variant(manifest_path, capture, contracts)
    if any(b["register_set_name"] == "sampler" for b in program["bindings"]):
        raise ValueError("Vertex sampler bindings need a texture snapshot")
    inputs = sorted(program["interface"]["vertex_inputs"], key=lambda i: i["instruction_address"])
    outputs = [{"register": 62, "semantic": "SV_Position"}]
    outputs += [{"register": i["register"], "semantic": f"{i['usage_name'].upper()}{i['usage_index']}"}
                for i in program["interface"]["interpolators"]]
    invocations, restarts = vertex_invocations(capture)
    output = new_output_directory(output)
    report = dict(schema=1, kind="fh1-captured-vertex-replay", container_sha256=digest,
                  capture=str(Path(capture_path).resolve()), vertex_hash=capture.metadata["vertex_hash"],
                  frame=capture.metadata["frame"], draw=capture.metadata["draw"],
                  invocations=invocations, restart_positions=restarts, build_only=build_only,
                  outputs=outputs, comparisons=len(invocations) * len(outputs),
                  limits=["One captured vertex variant, executed from compute; no native rasterization or presentation.",
                          "Comparison is with the SDK interpreter, not measured Xbox hardware output.",
                          "Clip positions and reflected interpolators are compared; pixel shaders and textures remain unvalidated.",
                          "Static float mesh inputs indexed by the original vertex identity; dynamic, integer and textured inputs are rejected.",
                          "No performance gain or native runtime draw is established."])
    try:
        if sys.platform != "darwin":
            raise ValueError("This build wrapper currently supports macOS; the harness uses Vulkan")
        environment = dict(os.environ)
        environment["DYLD_LIBRARY_PATH"] = config["library_directory"] + os.pathsep + environment.get("DYLD_LIBRARY_PATH", "")
        environment["MVK_CONFIG_LOG_LEVEL"] = "1"
        shader = output / "runtime-variant.xshader.bin"
        start = program["code_offset"]
        shader.write_bytes(container[:start] + capture.vertex_code + container[start + len(capture.vertex_code):])
        hlsl = output / "vertex.hlsl"
        run([config["translator"], shader, hlsl, config["shader_common"]], output, "translate", environment)
        report["buffer_fetches"] = parse_buffer_fetches(hlsl.read_text())
        compute, spirv = output / "compute.hlsl", output / "compute.spv"
        compute.write_text(wrapper(hlsl, config["shader_common"], inputs, outputs))
        run([config["dxc"], compute, "-T", "cs_6_0", "-E", "main", "-HV", "2021", "-spirv",
             "-fvk-use-dx-layout", "-fspv-target-env=vulkan1.2", "-Fo", spirv], output, "compile", environment)
        run([config["validator"], "--target-env", "vulkan1.2", spirv], output, "spirv-validation")
        report["spirv_validation"] = "pass"
        job = output / "job.bin"
        words = [0x44565232, len(invocations), len(inputs), len(capture.metadata["ranges"]), len(outputs)]
        words += [i["instruction_address"] for i in inputs]
        for r in capture.metadata["ranges"]:
            words += [r[k] for k in ("slot", "address", "size", "offset")]
        words += [o["register"] for o in outputs]
        words += [i["vertex"] for i in invocations]
        job.write_bytes(struct.pack(f"<{len(words)}I", *words))
        compiler = shutil.which("clang++") or shutil.which("c++")
        if not compiler:
            raise ValueError("A C++23 compiler is required")
        sdk, sources = ROOT / ".tools/rexglue-patched", ROOT / "third_party/rexglue-sdk"
        library = sdk / "lib/libMoltenVK.dylib"
        (output / "libMoltenVK.1.dylib").symlink_to(library.resolve())
        executable = output / "draw_vertex_replay"
        source_files = [ROOT / "tools/draw_vertex_replay.cpp", sources / "src/graphics/pipeline/shader/interpreter.cpp",
                        sources / "src/graphics/register_file.cpp", sources / "src/graphics/format/ucode.cpp"]
        run([compiler, "-std=c++23", "-O2", "-ffp-contract=off", "-fno-strict-aliasing", *source_files,
             "-I", sources / "include", "-I", sdk / "include", "-L", sdk / "lib", "-lMoltenVK",
             f"-Wl,-rpath,{output}", "-o", executable], output, "build")
        report["source_sha256"] = {str(file.relative_to(ROOT)): hashlib.sha256(file.read_bytes()).hexdigest()
                                  for file in [*source_files, ROOT / "tools/vulkan_compute_validation.h",
                                               sources / "include/rex/graphics/pipeline/shader/interpreter.h"]}
        for key in ("translator", "dxc", "shader_common"):
            report[key + "_sha256"] = hashlib.sha256(Path(config[key]).read_bytes()).hexdigest()
        command = [executable, Path(capture_path).resolve(), job, output / "cases.bin", spirv]
        run([*command, "--cpu-only"] if build_only else command, output, "replay", environment)
        report["interpreter"] = "pass"
        if not build_only:
            report["gpu"] = "pass"
        report["result"] = (output / "replay.txt").read_text().strip()
    except Exception as error:
        report["error"] = str(error)
        raise
    finally:
        (output / "report.json").write_text(json.dumps(report, indent=2) + "\n")
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("capture", type=Path)
    parser.add_argument("manifest", type=Path)
    parser.add_argument("--shader-contracts", type=Path, required=True)
    parser.add_argument("--tools", type=Path)
    parser.add_argument("--build-only", action="store_true", help="Compile shaders/tool and compute interpreter exports; do not execute GPU work")
    parser.add_argument("--output", type=Path, default=ROOT / "out/native-renderer/draw-vertex-replay")
    args = parser.parse_args()
    try:
        report = replay(args.capture, args.manifest, args.shader_contracts, args.output, args.tools, args.build_only)
    except Exception as error:
        parser.exit(1, f"Draw vertex replay failed: {error}\n")
    print(report["result"])
    print(f"Private report: {args.output / 'report.json'}")


if __name__ == "__main__":
    main()
