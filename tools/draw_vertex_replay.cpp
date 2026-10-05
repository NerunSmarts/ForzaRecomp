// Compare a captured vertex program with the fallback's independent interpreter.
// Compile SDK interpreter sources into this offline tool; never link the game.
#include "vertex_fetch_cases.h"
#include "vulkan_compute_validation.h"
#include <rex/graphics/pipeline/shader/interpreter.h>
#include <filesystem>

namespace {
using fh1::validation::Float4;
using fh1::validation::require;
struct Range { uint32_t slot, address, size, offset; };
struct alignas(16) DrawCase {
  uint32_t vertex, output = 62, reserved1 = 0, reserved2 = 0;
  std::array<Float4, 10> inputs{};
  Float4 expected{};
};
static_assert(sizeof(DrawCase) == 192);
struct Suite {
  fh1::graphics::SharedConstants shared{};
  std::vector<uint32_t> words;
  std::vector<DrawCase> cases;
};
std::vector<uint32_t> read_words(const std::filesystem::path& path, size_t maximum) {
  const auto size = std::filesystem::file_size(path);
  require(size && !(size & 3) && size <= maximum, "Invalid replay payload size");
  std::vector<uint32_t> words(size / 4);
  std::ifstream file(path, std::ios::binary);
  file.read(reinterpret_cast<char*>(words.data()), std::streamsize(size));
  require(bool(file) && file.peek() == EOF, "Incomplete replay payload");
  return words;
}
struct Snapshot {
  std::vector<uint32_t> words;
  std::vector<Range> ranges;
  static uint32_t read(void* context, uint32_t address) {
    const auto& self = *static_cast<Snapshot*>(context);
    for (const auto& r : self.ranges) {
      if (r.slot != UINT32_MAX && address >= r.address && uint64_t(address) + 4 <= uint64_t(r.address) + r.size) {
        require(!(address & 3), "Interpreter requested an unaligned word");
        return self.words.at((r.offset + address - r.address) / 4);
      }
    }
    throw std::runtime_error("Interpreter read outside the captured GPU input ranges");
  }
};
struct VertexSink : rex::graphics::ShaderInterpreter::ExportSink {
  std::array<Float4, 64> values{};
  std::array<uint32_t, 64> masks{};
  void Export(rex::graphics::ucode::ExportRegister reg, const float* value, uint32_t bits) override {
    const auto index = uint32_t(reg);
    require(index < values.size(), "Unexpected shader export register");
    for (uint32_t i = 0; i < 4; ++i) if (bits & (1u << i)) values[index][i] = value[i];
    masks[index] |= bits;
  }
};

void validate_packed_interpreter() {
  // Entirely original microcode and packed values. Distinct lanes expose both
  // an uninitialized component-zero offset and a missing unsigned lane shift.
  constexpr uint64_t exec = (uint64_t{2} << 44) | (uint64_t{1} << 43) |
                            (uint64_t{2} << 12) | (uint64_t{1} << 16) | 1;
  const std::array<std::array<uint32_t, 2>, 4> patterns{{
      {0x01234567, 0x89ABCDEF}, {0x800102FE, 0x01008001},
      {0xFFF00000, 0x13579BDF}, {0x7FF155AA, 0x2468ACE0}}};
  size_t cases = 0;
  for (uint32_t format : {6u, 7u, 16u, 17u, 25u, 26u})
    for (uint32_t endian = 0; endian < 4; ++endian)
      for (uint32_t sign = 0; sign < 2; ++sign)
        for (uint32_t integer = 0; integer < 2; ++integer)
          for (uint32_t no_zero = 0; no_zero < 2; ++no_zero)
            for (const auto& pattern : patterns) {
              rex::graphics::RegisterFile registers;
              registers[0x4800] = 0x1003;
              registers[0x4801] = (2u << 2) | endian;
              Snapshot snapshot{{pattern[0], pattern[1]}, {{0, 0x1000, 8, 0}}};
              const std::array<uint32_t, 9> code{
                  uint32_t(exec), uint32_t(exec >> 32), 0,
                  (1u << 12) | (1u << 19),
                  0x688 | (sign << 12) | (integer << 13) | (no_zero << 14) | (format << 16), 2,
                  62u | (1u << 15) | (15u << 16) | (50u << 26), 0,
                  (1u << 16) | (1u << 8) | (2u << 24) | (7u << 29)};
              rex::graphics::ShaderInterpreter interpreter(registers, Snapshot::read, &snapshot);
              interpreter.SetShader(rex::graphics::xenos::ShaderType::kVertex, code.data());
              std::memset(interpreter.temp_registers(), 0, rex::graphics::xenos::kMaxShaderTempRegisters * 4 * sizeof(float));
              VertexSink sink;
              interpreter.SetExportSink(&sink);
              interpreter.Execute();
              fh1::graphics::SharedConstants shared{};
              shared.vertex_fetch[0] = {4, 2, endian};
              fh1::validation::FetchCase c{};
              c.format = format; c.is_signed = sign; c.is_integer = integer; c.no_zero = no_zero;
              const auto expected = fh1::validation::reference(c, snapshot.words, shared);
              require(sink.masks[62] == 15, "Original packed fixture did not export its result");
              for (size_t lane = 0; lane < 4; ++lane) {
                if (!fh1::validation::matches(sink.values[62][lane], expected[lane])) {
                  fprintf(stderr, "Packed interpreter format=%u endian=%u signed=%u integer=%u no_zero=%u lane=%zu: actual=%.9g expected=%.9g\n",
                          format, endian, sign, integer, no_zero, lane, sink.values[62][lane], expected[lane]);
                  throw std::runtime_error("Packed interpreter differs from the independent scalar oracle");
                }
              }
              ++cases;
            }
  printf("Original packed-fetch interpreter checks: %zu passed\n", cases);
}
} // namespace

int main(int argc, char** argv) {
  try {
    validate_packed_interpreter();
    if (argc == 2 && std::string(argv[1]) == "--check-interpreter") return 0;
    require(argc == 5 || argc == 6, "Usage: draw_vertex_replay capture job.bin cases.bin compute.spv [--cpu-only]");
    const std::filesystem::path capture = argv[1];
    const auto regs = read_words(capture / "registers.bin", 0x5003 * 4);
    require(regs.size() == 0x5003, "Incomplete GPU register bank");
    rex::graphics::RegisterFile registers;
    std::copy(regs.begin(), regs.end(), registers.values);
    const auto code = read_words(capture / "vertex.ucode.bin.vert", 1024 * 1024);
    require(code.size() % 3 == 0, "Unaligned shader instructions");
    const auto job = read_words(argv[2], 1024 * 1024);
    require(job.size() >= 5 && job[0] == 0x44565232 && job[1] && job[1] <= 65536 &&
            job[2] && job[2] <= 10 && job[3] && job[3] <= 97 && job[4] && job[4] <= 17,
            "Invalid vertex replay job header");
    const uint32_t vertex_count = job[1], input_count = job[2], range_count = job[3];
    const uint32_t output_count = job[4];
    require(job.size() == 5 + input_count + range_count * 4 + output_count + vertex_count,
            "Invalid vertex replay job extent");
    Snapshot snapshot{read_words(capture / "shared-memory.bin", 32 * 1024 * 1024), {}};
    Suite suite;
    suite.words = snapshot.words;
    suite.shared.vertex_index_min = regs[0x2101] & 0xFFFFFF;
    suite.shared.vertex_index_max = regs[0x2100] & 0xFFFFFF;
    std::copy_n(regs.begin() + 0x4900, 8, suite.shared.boolean_words.begin());
    std::vector<std::pair<uint32_t, uint64_t>> offsets;
    std::array<bool, 96> seen{};
    for (uint32_t i = 0; i < range_count; ++i) {
      const size_t p = 5 + input_count + i * 4;
      const Range r{job[p], job[p+1], job[p+2], job[p+3]};
      require(r.size && !(r.address & 3) && !(r.size & 3) && !(r.offset & 3) &&
              uint64_t(r.address) + r.size <= 512 * 1024 * 1024 &&
              uint64_t(r.offset) + r.size <= snapshot.words.size() * 4, "Invalid captured input range");
      snapshot.ranges.push_back(r);
      if (r.slot == UINT32_MAX) continue;
      require(r.slot < 96 && !seen[r.slot], "Duplicate or invalid vertex binding");
      seen[r.slot] = true;
      const fh1::graphics::ResidentVertexBuffer resident{r.address, 4, r.size, 1};
      const auto binding = fh1::graphics::make_vertex_fetch_binding(regs[0x4800 + 2*r.slot], regs[0x4801 + 2*r.slot], resident);
      require(bool(binding), "Captured fetch failed native binding preflight");
      suite.shared.vertex_fetch[r.slot] = binding.binding;
      offsets.emplace_back(r.slot, r.offset);
    }
    // Native banks currently have fixed vertex/pixel addresses. Fail instead of
    // silently interpreting another base as the corresponding host bank.
    auto vs = registers.Get<rex::graphics::reg::SQ_VS_CONST>();
    auto ps = registers.Get<rex::graphics::reg::SQ_PS_CONST>();
    require(vs.base == 0 && ps.base == 256, "Unsupported float constant bank base");
    rex::graphics::ShaderInterpreter interpreter(registers, Snapshot::read, &snapshot);
    interpreter.SetShader(rex::graphics::xenos::ShaderType::kVertex, code.data());
    VertexSink sink;
    interpreter.SetExportSink(&sink);
    const size_t outputs_start = 5 + input_count + range_count * 4;
    const size_t indices_start = outputs_start + output_count;
    std::array<bool, 64> output_seen{};
    for (uint32_t j = 0; j < output_count; ++j) {
      const uint32_t output = job[outputs_start + j];
      require((output < 16 || output == 62) && !output_seen[output], "Invalid or duplicate shader export");
      output_seen[output] = true;
    }
    for (uint32_t i = 0; i < vertex_count; ++i) {
      DrawCase c{};
      c.vertex = job[indices_start + i];
      require(c.vertex >= suite.shared.vertex_index_min && c.vertex <= suite.shared.vertex_index_max &&
              c.vertex <= 0xFFFFFF, "Replay index lost its masked/clamped identity");
      rex::graphics::ucode::VertexFetchInstruction full{};
      bool have_full = false;
      for (uint32_t j = 0; j < input_count; ++j) {
        const uint32_t address = job[5 + j];
        require(uint64_t(address) * 3 + 3 <= code.size(), "Mesh input exceeds shader extent");
        rex::graphics::ucode::VertexFetchInstruction fetch;
        std::memcpy(&fetch, &code[address * 3], sizeof(fetch));
        require(fetch.opcode() == rex::graphics::ucode::FetchOpcode::kVertexFetch &&
                !fetch.is_predicated() && !fetch.is_dest_relative(), "Unsupported mesh input instruction");
        if (!fetch.is_mini_fetch()) { full = fetch; have_full = true; }
        require(have_full && full.src() == 0 && full.src_swizzle() == 0 && !full.is_src_relative(),
                "Mesh input needs dynamic index evaluation");
        const auto slot = full.fetch_constant_index();
        const auto region = std::find_if(snapshot.ranges.begin(), snapshot.ranges.end(),
                                        [&](const Range& r) { return r.slot == slot; });
        require(region != snapshot.ranges.end(), "Missing mesh input buffer");
        const std::vector<uint32_t> words(snapshot.words.begin() + region->offset / 4,
                                          snapshot.words.begin() + (region->offset + region->size) / 4);
        fh1::validation::FetchCase f{};
        f.slot = slot; f.index = float(c.vertex); f.stride = full.stride(); f.offset = fetch.offset();
        f.rounded = full.is_index_rounded(); f.format = uint32_t(fetch.data_format());
        f.is_signed = fetch.is_signed(); f.is_integer = !fetch.is_normalized();
        f.no_zero = uint32_t(fetch.signed_rf_mode()); f.exponent = fetch.exp_adjust();
        f.swizzle = 0x688; f.before = {}; // Decode lanes; translated variant applies the captured swizzle.
        c.inputs[j] = fh1::validation::reference(f, words, suite.shared);
      }
      std::memset(interpreter.temp_registers(), 0, rex::graphics::xenos::kMaxShaderTempRegisters * 4 * sizeof(float));
      interpreter.temp_registers()[0] = float(c.vertex);
      sink = VertexSink{};
      interpreter.Execute();
      require(sink.masks[62] == 15, "Fallback interpreter did not export a complete position");
      for (uint32_t j = 0; j < output_count; ++j) {
        c.output = job[outputs_start + j];
        c.expected = sink.values[c.output];
        for (float v : c.expected) require(std::isfinite(v), "Fallback vertex export is not finite");
        suite.cases.push_back(c);
      }
    }
    std::ofstream cases(argv[3], std::ios::binary);
    cases.write(reinterpret_cast<const char*>(suite.cases.data()), std::streamsize(suite.cases.size() * sizeof(DrawCase)));
    require(bool(cases), "Could not save private vertex replay cases");
    cases.close();
    printf("Fallback exports and converted inputs: %u indexed entries, %u outputs, %zu comparisons\n",
           vertex_count, output_count, suite.cases.size());
    if (argc == 6) {
      require(std::string(argv[5]) == "--cpu-only", "Unknown replay mode");
      return 0;
    }
    std::vector<Float4> vertices(256), pixels(256);
    std::memcpy(vertices.data(), &regs[0x4000], 4096);
    std::memcpy(pixels.data(), &regs[0x4400], 4096);
    fh1::validation::validate_compute(argv[4], suite,
        [](const DrawCase& c, const auto&, const auto&) { return c.expected; }, vertices, pixels, offsets);
    return 0;
  } catch (const std::exception& error) {
    fprintf(stderr, "Draw vertex replay failed: %s\n", error.what());
    return 1;
  }
}
