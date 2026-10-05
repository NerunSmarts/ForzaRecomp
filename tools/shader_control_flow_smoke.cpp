// Offscreen execution of original translated CF fixtures, never game shaders.
#include "vulkan_compute_validation.h"

namespace {
struct alignas(16) ControlCase {
  uint32_t shader, boolean_index, reserved0, reserved1;
  fh1::validation::Float4 expected;
};
static_assert(sizeof(ControlCase) == 32);
struct Suite {
  fh1::graphics::SharedConstants shared{};
  std::vector<uint32_t> words{0}; // The generic harness owns an unused fetch buffer.
  std::vector<ControlCase> cases;
};
Suite load_cases(const char* path) {
  using fh1::validation::require;
  std::ifstream file(path, std::ios::binary);
  std::array<uint32_t, 10> header{};
  file.read(reinterpret_cast<char*>(header.data()), sizeof(header));
  require(bool(file) && header[0] == 0x43464C31, "Invalid synthetic CF case header");
  require(header[1] > 0 && header[1] <= 4096, "Invalid synthetic CF case count");
  Suite suite;
  std::copy(header.begin() + 2, header.end(), suite.shared.boolean_words.begin());
  suite.cases.resize(header[1]);
  file.read(reinterpret_cast<char*>(suite.cases.data()), std::streamsize(suite.cases.size() * sizeof(ControlCase)));
  require(bool(file) && file.peek() == EOF, "Truncated or oversized synthetic CF case payload");
  for (const auto& c : suite.cases) {
    require(c.reserved0 == 0 && c.reserved1 == 0 && c.boolean_index < 256, "Invalid CF case fields");
    for (float value : c.expected) require(std::isfinite(value), "Invalid CF expected value");
  }
  return suite;
}
}  // namespace

int main(int argc, char** argv) {
  try {
    fh1::validation::require(argc == 3, "Usage: shader_control_flow_smoke compute.spv cases.bin");
    const auto suite = load_cases(argv[2]);
    std::vector<fh1::validation::Float4> vertices(256), pixels(256);
    for (uint32_t i = 0; i < 256; ++i) {
      vertices[i] = {float(101 + i * 4), float(103 + i * 4), float(107 + i * 4), float(109 + i * 4)};
      pixels[i] = {float(211 + i * 4), float(223 + i * 4), float(227 + i * 4), float(229 + i * 4)};
    }
    fh1::validation::validate_compute(argv[1], suite,
        [](const ControlCase& c, const auto&, const auto&) { return c.expected; },
        vertices, pixels);
    return 0;
  } catch (const std::exception& error) {
    fprintf(stderr, "Shader control flow validation failed: %s\n", error.what());
    return 1;
  }
}
