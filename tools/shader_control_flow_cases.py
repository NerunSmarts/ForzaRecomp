"""Original Xenos microcode fixtures for execution tests; contains no game code.

The expected result is chosen from each fixture's stated branch outcome, never
from generated HLSL or SPIR-V. The encodings use the SDK's documented 48-bit CF
and 96-bit ALU layouts. Both boolean-bank patterns must be executed.
"""
from dataclasses import dataclass
import struct
from typing import Callable, Sequence

COLORS = ((2., 3., 5., 7.), (11., 13., 17., 19.), (23., 29., 31., 37.),
          (0., 0., 0., 0.), (1., 1., 1., 1.), (300., 300., 300., 300.))
BOOLEAN_WORDS = (0xA5C3F00D, 0x19E67042, 0x80000001, 0x7FFFFFFE,
                 0x96B42D7A, 0x013579BD, 0xECA86420, 0x4281F36C)


def boolean(words, index):
    if not 0 <= index < 256:
        raise ValueError("Boolean index must be in the complete 256-bit bank")
    return bool(words[index // 32] & (1 << (index % 32)))


def words(*values):
    return struct.pack(f">{len(values)}I", *values)


def export(color, vertex):
    # MAX(cN,cN) copies a complete float4; scalar retains its previous result.
    return ((62 if vertex else 0) | (1 << 15) | (15 << 16) | (50 << 26),
            0, (color << 16) | (color << 8) | (2 << 24))


def predicate(value):
    # SETP_NE(c4.w != 0) is true; SETP_NE(c3.w != 0) is false.
    return (28 << 26, 0, 4 if value else 3)


def clause(opcode, instructions=(), index=0, condition=True):
    return {"opcode": opcode, "instructions": tuple(instructions),
            "index": index, "condition": condition}


def jump(target, index=0, condition=True, predicated=False, unconditional=False):
    return {"opcode": 11, "target": target, "index": index, "condition": condition,
            "predicated": predicated, "unconditional": unconditional}


def encode_program(clauses):
    clauses = list(clauses)
    if len(clauses) % 2:
        clauses.append(clause(0))
    address = len(clauses) // 2
    cf, alu = [], []
    for c in clauses:
        value = (c["opcode"] << 44) | (1 << 43)
        if c["opcode"] == 11:
            value |= c["target"] | (int(c["unconditional"]) << 13) | (int(c["predicated"]) << 14)
            value |= (c["index"] << 34) | (int(c["condition"]) << 42)
        elif c["opcode"]:
            count = len(c["instructions"])
            if count > 6:
                raise ValueError("Fixture clause is too long")
            value |= address | (count << 12)
            if c["opcode"] in (3, 4, 13, 14):
                value |= c["index"] << 34
            if c["opcode"] in (3, 4, 5, 6, 13, 14):
                value |= int(c["condition"]) << 42
            alu.extend(c["instructions"])
            address += count
        cf.append(value)
    packed = bytearray()
    for a, b in zip(cf[::2], cf[1::2]):
        packed += words(a & 0xFFFFFFFF, (a >> 32) | ((b & 0xFFFF) << 16), b >> 16)
    for instruction in alu:
        packed += words(*instruction)
    return bytes(packed)


def container(clauses, vertex=False, reflect_boolean=None, reflect_float=False):
    code = encode_program(clauses)
    constants = b"".join(struct.pack(">4f", *color) for color in COLORS)
    if reflect_float:
        info = struct.pack(">I4H2I", 64, 2, 16, 2, 0, 48, 0)
        type_info = struct.pack(">6HI", 1, 3, 1, 4, 2, 0, 0)
        content = words(28, 0, 0, 1, 28, 0, 0) + info + type_info + b"FixtureFloats\0"
        content += bytes(-len(content) % 4)
        table = words(4 + len(content)) + content
    elif reflect_boolean is None:
        table = words(32, 28, 0, 0, 0, 28, 0, 0)
    else:
        info = struct.pack(">I4H2I", 64, 0, reflect_boolean, 1, 0, 48, 0)
        type_info = struct.pack(">6HI", 0, 1, 1, 1, 1, 0, 0)
        content = words(28, 0, 0, 1, 28, 0, 0) + info + type_info + b"FixtureBool\0"
        content += bytes(-len(content) % 4)
        table = words(4 + len(content)) + content
    interface = words(0, 0, 0) if vertex else words(0, 1)
    shader = words(len(constants), len(code), 0, 31 << 8, 0, 0) + interface
    table_offset = 36 + len(shader)
    definitions_offset = table_offset + len(table)
    definitions = words(0, 0, 0, 0, 40) + struct.pack(">HHI", 0 if vertex else 256, len(COLORS) * 4, 0) + words(0, 0, 0)
    virtual_size = definitions_offset + len(definitions)
    return (words(0x102A1101 if vertex else 0x102A1100, virtual_size, len(constants) + len(code),
                  36, table_offset, definitions_offset, 36, 0, 0)
            + shader + table + definitions + constants + code)


@dataclass
class Fixture:
    name: str
    vertex: bool
    data: bytes
    expected: Callable[[Sequence[int]], tuple]


def fixtures():
    result = []
    for vertex in (False, True):
        stage = "vs" if vertex else "ps"
        move = lambda color: export(color, vertex)
        for complex_flow in (False, True):
            prefix = [jump(1, unconditional=True)] if complex_flow else []
            flow = "switch" if complex_flow else "forward"
            def add(name, clauses, expected, reflection=None):
                result.append(Fixture(f"{stage}-{flow}-{name}", vertex,
                                      container(prefix + clauses, vertex, reflection), expected))
            for index in (0, 31, 32, 127, 128, 133, 144, 255):
                for condition in (False, True):
                    for opcode in (3, 4, 13, 14):
                        is_end = opcode in (4, 14)
                        clauses = [clause(1, [move(0)]), clause(opcode, [move(1)], index, condition),
                                   clause(2, [move(2)] if is_end else [])]
                        def expected(bank, i=index, cond=condition, end=is_end):
                            return COLORS[1 if boolean(bank, i) == cond else (2 if end else 0)]
                        reflection = index - 128 if not vertex and index >= 128 else index if vertex and index < 128 else None
                        add(f"bool-{opcode}-b{index}-{int(condition)}", clauses, expected, reflection)
                    target = len(prefix) + 3
                    clauses = [clause(1, [move(0)]), jump(target, index, condition),
                               clause(1, [move(1)]), clause(2)]
                    add(f"jump-b{index}-{int(condition)}", clauses,
                        lambda bank, i=index, cond=condition: COLORS[0 if boolean(bank, i) == cond else 1])
            for initial in (False, True):
                for condition in (False, True):
                    for opcode in (5, 6):
                        end = opcode == 6
                        clauses = [clause(1, [move(0), predicate(initial)]),
                                   clause(opcode, [predicate(not initial), move(1)], condition=condition),
                                   clause(2, [move(2)] if end else [])]
                        # Clause membership is decided once, before p0 changes.
                        expected_color = 1 if initial == condition else 2 if end else 0
                        add(f"pred-{opcode}-{int(initial)}-{int(condition)}", clauses,
                            lambda bank, c=expected_color: COLORS[c])
                    target = len(prefix) + 3
                    clauses = [clause(1, [move(0), predicate(initial)]),
                               jump(target, condition=condition, predicated=True),
                               clause(1, [move(1)]), clause(2)]
                    add(f"pred-jump-{int(initial)}-{int(condition)}", clauses,
                        lambda bank, c=0 if initial == condition else 1: COLORS[c])
            # Predicate-clean is a scheduling hint, not an instruction to clear p0.
            clauses = [clause(1, [move(0), predicate(True)]),
                       clause(13, [move(1)], 133), clause(5, [move(2)], condition=True), clause(2)]
            add("clean-keeps-predicate", clauses, lambda bank: COLORS[2])
    result.extend(relative_fixtures())
    return result


def float_bank(vertex, index):
    base = (101, 103, 107, 109) if vertex else (211, 223, 227, 229)
    return tuple(float(value + index * 4) for value in base)


def alu(sources, vertex, relative0=False, relative1=False, address=True,
        vector_opcode=0, scalar_opcode=50, vector_mask=15, scalar_mask=0,
        destination=None):
    (src1, sel1), (src2, sel2), (src3, sel3) = sources
    export_data = destination is None
    destination = (62 if vertex else 0) if export_data else destination
    return (destination | (int(export_data) << 15) | (vector_mask << 16) |
            (scalar_mask << 20) | (scalar_opcode << 26),
            (int(address) << 29) | (int(relative1) << 30) | (int(relative0) << 31),
            src3 | (src2 << 8) | (src1 << 16) | (vector_opcode << 24) |
            (int(sel3) << 29) | (int(sel2) << 30) | (int(sel1) << 31))


def relative_fixtures():
    result = []
    for vertex in (False, True):
        stage = "vs" if vertex else "ps"
        for address in (False, True):
            bank = float_bank(vertex, 17 if address else 16)
            prefix = [(24 << 26, 0, 4),  # a0 = floor(c4.w) = 1; aL remains 0.
                      alu(((0, False), (0, False), (0, False)), vertex, vector_opcode=2, destination=1),
                      alu(((1, False), (1, False), (0, False)), vertex, vector_opcode=2, destination=2)]
            cases = [
                ("array-first-literal-second", ((16, False), (0, False), (0, True)), True, False, 0, 50, 15, 0,
                 tuple(a+b for a,b in zip(bank, COLORS[0]))),
                ("literal-first-array-second", ((0, False), (16, False), (0, True)), False, True, 0, 50, 15, 0,
                 tuple(a+b for a,b in zip(bank, COLORS[0]))),
                ("temp-first-array-second", ((1, True), (16, False), (0, True)), True, False, 0, 50, 15, 0,
                 tuple(a+b for a,b in zip(bank, COLORS[0]))),
                ("array-third-two-temps", ((1, True), (2, True), (16, False)), True, False, 11, 50, 15, 0,
                 tuple(a*b+c for a,b,c in zip(COLORS[0], COLORS[1], bank))),
                ("array-third-after-constant", ((0, False), (2, True), (16, False)), False, True, 11, 50, 15, 0,
                 tuple(a*b+c for a,b,c in zip(COLORS[0], COLORS[1], bank))),
                ("scalar-array-first-constant", ((1, True), (2, True), (16, False)), True, False, 0, 5, 0, 15,
                 (bank[3],)*4),
                ("scalar-array-after-constant", ((0, False), (2, True), (16, False)), False, True, 0, 5, 0, 15,
                 (bank[3],)*4),
                ("scalar-add-constant-first", ((1, True), (2, True), (16, False)), True, False, 0, 44, 0, 15,
                 (bank[3],)*4),
                ("scalar-add-after-constant", ((0, False), (2, True), (16, False)), False, True, 0, 44, 0, 15,
                 (bank[3],)*4),
            ]
            for name, sources, rel0, rel1, vec, scalar, vm, sm, expected in cases:
                instructions = prefix + [alu(sources, vertex, rel0, rel1, address, vec, scalar, vm, sm)]
                result.append(Fixture(f"{stage}-relative-{name}-{'a0' if address else 'aL'}", vertex,
                                      container([clause(2, instructions)], vertex, reflect_float=True),
                                      lambda boolean_words, c=expected: c))
        for name, source, negate in (("negative", 4, True), ("past-bank-end", 5, False)):
            # a0 = -1 or clamp(300, -256, 255) = 255. These addresses are
            # outside the reflected bank tail; zero is a safety result only.
            instructions = [(24 << 26, int(negate) << 24, source),
                            alu(((16, False), (16, False), (0, True)), vertex,
                                True, True, True, vector_opcode=2)]
            result.append(Fixture(f"{stage}-relative-safe-{name}", vertex,
                                  container([clause(2, instructions)], vertex, reflect_float=True),
                                  lambda boolean_words: (0., 0., 0., 0.)))
    return result
