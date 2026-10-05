"""Map direct callers of graphics imports for manual native-renderer hook review.

Addresses are candidates, not verified D3D entry points or object layouts.
Indirect calls are counted but cannot be resolved by this source-only scan.
"""
import argparse
from collections import defaultdict
import json
from pathlib import Path
import re
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from scripts.private_artifacts import ROOT, new_output_directory

FUNCTION = re.compile(r"^DEFINE_REX_FUNC\((sub_[0-9A-Fa-f]{8})\)\s*\{")
CALL = re.compile(r"^\s*((?:__imp__)?(?:sub_[0-9A-Fa-f]{8}|Vd\w+))\(ctx,\s*base\);\s*$")


def scan_source(lines, module, path, nodes, reverse):
    current = None
    for number, line in enumerate(lines, 1):
        definition = FUNCTION.match(line)
        if definition:
            current = (module, definition[1].upper().replace("SUB_", "sub_"))
            if current in nodes:
                raise ValueError(f"Duplicate function {current} in {path}")
            nodes[current] = {"module": module, "function": current[1],
                              "source": path, "line": number, "indirect_calls": 0}
        if current is None:
            continue
        if "REX_CALL_INDIRECT_FUNC(" in line:
            nodes[current]["indirect_calls"] += 1
        call = CALL.match(line)
        if call:
            callee = call[1].removeprefix("__imp__")
            if callee.startswith("sub_"):
                callee = "sub_" + callee[4:].upper()
            reverse[(module, callee)].add((current, number))


def caller_layers(key, nodes, reverse, depth):
    layers = []
    visited = {key}
    frontier = {key}
    for level in range(1, depth + 1):
        following = set()
        edges = []
        for callee in sorted(frontier):
            for caller, line in sorted(reverse.get(callee, ())):
                edges.append({"caller": caller[1], "callee": callee[1],
                              "call_line": line, "source": nodes[caller]["source"]})
                if caller not in visited:
                    following.add(caller)
        if not edges:
            break
        layers.append({"depth": level, "functions": [nodes[k] for k in sorted(following)],
                       "edges": edges})
        visited.update(following)
        frontier = following
        if not frontier:
            break
    return layers


def map_hooks(generated, depth=2):
    if not 1 <= depth <= 4:
        raise ValueError("Caller depth must be between 1 and 4")
    generated = Path(generated)
    nodes = {}
    reverse = defaultdict(set)
    files = sorted(generated.glob("*/fh1_recomp.*.cpp"))
    if not files:
        raise ValueError("No translated modules found; generate game C++ first")
    for path in files:
        relative = path.relative_to(generated)
        with path.open() as source:
            scan_source(source, relative.parts[0], relative.as_posix(), nodes, reverse)
    imports = []
    for module, symbol in sorted(reverse):
        if symbol.startswith("Vd"):
            imports.append({"module": module, "import": symbol,
                            "callers": caller_layers((module, symbol), nodes, reverse, depth)})
    config = json.loads((ROOT / "config/graphics_hook_candidates.json").read_text())
    if config.get("schema") != 1:
        raise ValueError("Unsupported graphics candidate configuration")
    candidates = []
    for entry in config["functions"]:
        key = (entry["module"], entry["function"])
        if key not in nodes:
            raise ValueError(f"Configured candidate {key} is absent from generated code")
        candidates.append({"candidate": entry, "source": nodes[key],
                           "callers": caller_layers(key, nodes, reverse, depth)})
    return {"schema": 1, "kind": "fh1-graphics-hook-candidates", "files": len(files),
            "functions": len(nodes), "caller_depth": depth,
            "limits": ["Direct calls only; indirect dispatch prevents a complete call graph.",
                       "Candidates need disassembly and runtime validation before hooks are installed.",
                       "Device layouts, argument types and D3D draw/resource APIs are not identified here.",
                       "Only the verified disc revision supports these addresses."],
            "graphics_imports": imports, "title_candidates": candidates,
            "title_candidate_limits": config["limits"]}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--generated", type=Path, default=ROOT / "generated")
    parser.add_argument("--depth", type=int, default=2)
    parser.add_argument("--output", type=Path, default=ROOT / "out/native-renderer/hooks")
    args = parser.parse_args()
    try:
        report = map_hooks(args.generated, args.depth)
        output = new_output_directory(args.output)
        (output / "graphics-hooks.json").write_text(json.dumps(report, indent=2) + "\n")
    except (OSError, ValueError) as error:
        parser.exit(1, f"Graphics mapping failed: {error}\n")
    print(f"Scanned {report['files']} files, {report['functions']} functions; "
          f"{len(report['graphics_imports'])} graphics import groups.")
    for entry in report["graphics_imports"]:
        direct = entry["callers"][0]["functions"]
        print(f"{entry['module']}: {entry['import']} <- " + ", ".join(n["function"] for n in direct))
    print(f"Private review report: {output / 'graphics-hooks.json'}")


if __name__ == "__main__":
    main()
