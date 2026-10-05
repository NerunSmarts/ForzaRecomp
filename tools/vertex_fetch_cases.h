#pragma once
#include "validation_common.h"

// Synthetic validation data and an independent scalar oracle. No game shaders.
#include "../src/graphics/shader_contract.h"
#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <stdexcept>
#include <vector>

namespace fh1::validation {
struct alignas(16) FetchCase {
  uint32_t slot = 0;
  float index = 0;
  uint32_t stride = 1;
  int32_t offset = 0;
  uint32_t format = 16, is_signed = 1, is_integer = 0, no_zero = 0;
  uint32_t rounded = 0;
  int32_t exponent = 0;
  uint32_t swizzle = 0x688, predicate = 1, mini = 0;
  int32_t mini_offset = 0;
  uint32_t mini_format = 38, reserved = 0;
  Float4 before{-9, 4, 1, 10};
};
static_assert(sizeof(FetchCase) == 80);
static_assert(offsetof(FetchCase, before) == 64);

inline uint32_t swap_word(uint32_t value, uint32_t endian) {
  std::array<uint8_t, 4> bytes{};
  for (unsigned i = 0; i < 4; ++i) bytes[i] = uint8_t(value >> (i * 8));
  if (endian == 1 || endian == 2) {
    std::swap(bytes[0], bytes[1]); std::swap(bytes[2], bytes[3]);
  }
  if (endian == 2 || endian == 3) {
    std::swap(bytes[0], bytes[2]); std::swap(bytes[1], bytes[3]);
  }
  uint32_t result = 0;
  for (unsigned i = 0; i < 4; ++i) result |= uint32_t(bytes[i]) << (i * 8);
  return result;
}

inline float as_float(uint32_t bits) {
  float result; std::memcpy(&result, &bits, 4); return result;
}
inline float half_float(uint32_t bits) {
  const uint32_t sign = bits >> 15, exponent = (bits >> 10) & 31, mantissa = bits & 1023;
  float value = exponent == 0 ? std::ldexp(float(mantissa), -24) :
                exponent == 31 ? (mantissa ? std::numeric_limits<float>::quiet_NaN() :
                                            std::numeric_limits<float>::infinity()) :
                std::ldexp(float(1024 + mantissa), int(exponent) - 25);
  return sign ? -value : value;
}

inline Float4 reference(const FetchCase& c, const std::vector<uint32_t>& words,
                        const graphics::SharedConstants& shared) {
  Float4 output = c.before;
  if (c.reserved == 1) {
    output[0] = float(std::clamp(c.slot & 0xFFFFFF, shared.vertex_index_min, shared.vertex_index_max));
    return output;
  }
  if (!c.predicate) return output;
  const auto& binding = shared.vertex_fetch.at(c.slot);
  int64_t address = 0;
  bool index_valid = true;
  if (c.stride) {
    const float adjusted = c.index + (c.rounded ? 0.5f : 0.0f);
    const double index = std::floor(double(adjusted));
    index_valid = std::isfinite(index) && index >= -2147483648.0 && index < 2147483648.0;
    if (index_valid) address = int64_t(index) * c.stride;
  }
  const uint32_t format = c.mini ? c.mini_format : c.format;
  address += c.mini ? c.mini_offset : c.offset;
  auto word = [&](int component) -> uint32_t {
    const int64_t offset = address + component;
    if (!index_valid || !binding.device_address || (binding.device_address & 3) ||
        !binding.word_count || binding.word_count > 0xFFFFFF || binding.endian > 3 ||
        offset < 0 || uint64_t(offset) >= binding.word_count) return 0;
    return swap_word(words.at(size_t(offset)), binding.endian);
  };
  Float4 values{};
  const bool binding_valid = index_valid && binding.device_address && !(binding.device_address & 3) &&
    binding.word_count && binding.word_count <= 0xFFFFFF && binding.endian <= 3;
  if (binding_valid) {
    std::array<unsigned, 4> width{}, shift{}, word_index{};
    switch (format) {
      case 6: width = {8,8,8,8}; shift = {0,8,16,24}; break;
      case 7: width = {10,10,10,2}; shift = {0,10,20,30}; break;
      case 16: width = {11,11,10,0}; shift = {0,11,22,0}; break;
      case 17: width = {10,11,11,0}; shift = {0,10,21,0}; break;
      case 25: width = {16,16,0,0}; shift = {0,16,0,0}; break;
      case 26: width = {16,16,16,16}; shift = {0,16,0,16}; word_index = {0,0,1,1}; break;
      case 31: case 32:
        for (unsigned i = 0; i < (format == 31 ? 2u : 4u); ++i)
          values[i] = half_float((word(i / 2) >> (16 * (i % 2))) & 0xFFFF);
        break;
      case 33: case 34: case 35: case 36: case 37: case 38: case 57: {
        const unsigned count = format == 33 || format == 36 ? 1 : format == 34 || format == 37 ? 2 : format == 57 ? 3 : 4;
        for (unsigned i = 0; i < count; ++i) {
          const uint32_t bits = word(i);
          if (format >= 36) { values[i] = as_float(bits); continue; }
          const double integer = c.is_signed && (bits & 0x80000000) ? double(bits) - 4294967296.0 : double(bits);
          const float converted = float(integer);
          if (c.is_integer) values[i] = converted;
          else if (!c.is_signed) values[i] = converted * float(1.0 / 4294967295.0);
          else {
            values[i] = converted * float(1.0 / (c.no_zero ? 2147483647.5 : 2147483647.0));
            if (c.no_zero) values[i] += float(0.5 / 2147483647.5);
          }
        }
      } break;
      default: throw std::runtime_error("Unsupported scalar reference format");
    }
    for (unsigned i = 0; i < 4; ++i) {
      if (!width[i]) continue;
      const uint32_t mask = (1u << width[i]) - 1;
      const uint32_t bits = (word(int(word_index[i])) >> shift[i]) & mask;
      const int32_t integer = c.is_signed && (bits & (1u << (width[i] - 1))) ? int32_t(bits) - int32_t(1u << width[i]) : int32_t(bits);
      if (c.is_integer) values[i] = float(integer);
      else if (!c.is_signed) values[i] = float(integer) * float(1.0 / mask);
      else {
        const double divisor = (1u << (width[i] - 1)) - 1 + (c.no_zero ? 0.5 : 0.0);
        values[i] = float(integer) * float(1.0 / divisor);
        values[i] = c.no_zero ? values[i] + float(0.5 / divisor) : std::max(values[i], -1.0f);
      }
    }
    for (float& v : values) v *= std::ldexp(1.0f, c.exponent);
  }
  for (unsigned i = 0; i < 4; ++i) {
    const uint32_t swizzle = (c.swizzle >> (3 * i)) & 7;
    if (swizzle < 4) output[i] = values[swizzle];
    else if (swizzle == 4) output[i] = 0;
    else if (swizzle == 5) output[i] = 1;
    else if (swizzle != 7) throw std::runtime_error("Reserved scalar reference swizzle");
  }
  return output;
}


inline void validate_host_contract() {
  using namespace graphics;
  const ResidentVertexBuffer allocation{0x1000, 0x100000, 64, 4};
  auto fetch = [](uint32_t address, uint32_t count, uint32_t endian) {
    return std::array<uint32_t, 2>{address | 3, (count << 2) | endian};
  };
  const auto f = fetch(0x1010, 12, 2);
  auto result = make_vertex_fetch_binding(f[0], f[1], allocation);
  require(bool(result), "Valid interior binding was rejected");
  require(result.binding.device_address == 0x100010 && result.binding.word_count == 12 && result.binding.endian == 2,
          "Fetch address/length/endian did not rebase correctly");
  require(make_vertex_fetch_binding(f[0] & ~3u, f[1], allocation).error == BindingError::wrong_type, "Texture accepted as vertex buffer");
  require(make_vertex_fetch_binding(f[0], 0, allocation).error == BindingError::empty, "Empty binding accepted");
  auto changed = allocation; changed.generation = 0;
  require(make_vertex_fetch_binding(f[0], f[1], changed).error == BindingError::missing_generation, "Missing generation accepted");
  changed = allocation; changed.device_address++;
  require(make_vertex_fetch_binding(f[0], f[1], changed).error == BindingError::unaligned, "Unaligned GPU address accepted");
  changed = allocation; changed.guest_address++;
  require(make_vertex_fetch_binding(f[0], f[1], changed).error == BindingError::unaligned, "Unaligned guest allocation accepted");
  changed = allocation; changed.byte_count = 63;
  require(make_vertex_fetch_binding(f[0], f[1], changed).error == BindingError::truncated, "Truncated allocation accepted");
  require(make_vertex_fetch_binding(0xFFC | 3, f[1], allocation).error == BindingError::guest_range, "Binding before allocation accepted");
  changed = {0xFFFFFFFC, 0x100000, 8, 1};
  require(make_vertex_fetch_binding(0xFFFFFFFF, 8, changed).error == BindingError::guest_range, "Guest address wrap accepted");
  changed = allocation; changed.device_address = UINT64_MAX - 31;
  require(make_vertex_fetch_binding(f[0], f[1], changed).error == BindingError::device_address_overflow, "GPU address wrap accepted");
  SharedConstants shared{};
  require(shared.vertex_index_max == 0xFFFFFF, "Incorrect default 24-bit vertex clamp");
  shared.vertex_fetch[0] = {4, 4, 0};
  const std::vector<uint32_t> words{0x800FFC00, 0xBC003C00, 0x80000001, 0x7C007BFF};
  FetchCase c;
  auto output = reference(c, words, shared);
  require(output[0] == -1 && output[1] == 0.49951124f && output[2] == -1 && output[3] == 0,
          "Packed 11/11/10 lanes or signed normalization failed");
  c.format = 32; c.offset = 1;
  output = reference(c, words, shared);
  require(output[0] == 1 && output[1] == -1 && output[2] == std::ldexp(1.0f, -24) && std::signbit(output[3]),
          "Half float lane order/subnormal/signed zero failed");
  for (unsigned endian = 0; endian < 4; ++endian) {
    constexpr std::array<uint32_t, 4> expected{0x12345678, 0x34127856, 0x78563412, 0x56781234};
    require(swap_word(0x12345678, endian) == expected[endian], "Fetch endian conversion failed");
  }
  const std::vector<uint32_t> positions{0x41200000, 0x41A00000, 0x41F00000, 0x42200000}; // 10,20,30,40
  c = {}; c.format = 36; c.index = 1.5f;
  require(reference(c, positions, shared)[0] == 20, "Vertex index was truncated/rounded instead of floored");
  c.rounded = 1;
  require(reference(c, positions, shared)[0] == 30, "Halfway index did not round upward");
  c.index = 2.5f;
  require(reference(c, positions, shared)[0] == 40, "Halfway index rounded to even");
  c.index = -0.5f; c.offset = 1; c.rounded = 0;
  require(reference(c, positions, shared)[0] == 10, "Negative index did not floor before adding the signed offset");
  c.rounded = 1;
  require(reference(c, positions, shared)[0] == 20, "Negative halfway index did not round upward");
  c.index = std::numeric_limits<float>::infinity(); c.stride = 0; c.offset = 2;
  require(reference(c, positions, shared)[0] == 30, "Zero stride incorrectly evaluated the index");
  c = {}; c.format = 36; c.index = 1; c.offset = 1; c.mini = 1; c.mini_format = 36; c.mini_offset = 2;
  require(reference(c, positions, shared)[0] == 40, "Mini fetch reused the full offset instead of just its address");
  c = {}; c.format = 36; c.swizzle = 3 | (4 << 3) | (5 << 6) | (7 << 9); c.exponent = 5;
  require(reference(c, positions, shared) == Float4{0,0,1,10}, "Fetch Zero/One/Keep or absent components were altered by exponent adjustment");
  c.predicate = 0;
  require(reference(c, positions, shared) == c.before, "Predicated-off fetch changed a destination component");
}

struct Suite {
  std::vector<uint32_t> words;
  graphics::SharedConstants shared{};
  std::vector<FetchCase> cases;
};
inline Suite make_suite() {
  Suite suite;
  suite.shared.vertex_index_min = 37;
  suite.shared.vertex_index_max = 511;
  suite.words = {0x800FFC00, 0xBC003C00, 0x80000001, 0x7C007BFF,
                 0, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF,
                 0x3F800000, 0x40000000, 0x40400000, 0x40800000};
  uint32_t random = 0x46FA1137;
  auto next = [&]() { random ^= random << 13; random ^= random >> 17; random ^= random << 5; return random; };
  while (suite.words.size() < 512) suite.words.push_back(next());
  for (unsigned endian = 0; endian < 4; ++endian) {
    suite.shared.vertex_fetch[endian] = {4, uint32_t(suite.words.size()), endian};
    suite.shared.vertex_fetch[4 + endian] = {4, 1, endian};
  }
  // GPU addresses are replaced by the harness. Invalid fixtures stay invalid.
  suite.shared.vertex_fetch[8] = {0, 4, 0};
  suite.shared.vertex_fetch[9] = {5, 4, 0};
  suite.shared.vertex_fetch[10] = {4, 0x1000000, 0};
  suite.shared.vertex_fetch[11] = {4, 4, 4};
  constexpr std::array<uint32_t, 15> formats{6,7,16,17,25,26,31,32,33,34,35,36,37,38,57};
  for (uint32_t format : formats) for (uint32_t slot = 0; slot < 12; ++slot)
    for (unsigned mode = 0; mode < 8; ++mode) {
      FetchCase c; c.format = format; c.slot = slot; c.is_signed = mode & 1;
      c.is_integer = (mode >> 1) & 1; c.no_zero = (mode >> 2) & 1;
      c.offset = int(mode); c.exponent = int(mode) - 4;
      suite.cases.push_back(c);
    }
  const std::array<float, 13> indices{-2.5f,-1.5f,-0.5f,0.49f,0.5f,1.5f,2.5f,511,512,
    2147483648.0f, -2147483648.0f, std::numeric_limits<float>::infinity(), std::numeric_limits<float>::quiet_NaN()};
  for (float index : indices) for (uint32_t stride : {0u,1u,4u,255u})
    for (uint32_t rounded : {0u,1u}) for (int32_t offset : {-4194304,-1,0,4,4194303}) {
      FetchCase c; c.index = index; c.stride = stride; c.rounded = rounded; c.offset = offset;
      c.format = 32; suite.cases.push_back(c);
    }
  for (unsigned i = 0; i < 2048; ++i) {
    FetchCase c; c.slot = next() % 4; c.index = float(next() % 150) - 2.25f;
    c.stride = next() % 5; c.offset = int(next() % 9) - 4; c.format = formats[next() % formats.size()];
    c.is_signed = next() & 1; c.is_integer = next() & 1; c.no_zero = next() & 1; c.rounded = next() & 1;
    c.exponent = int(next() % 64) - 32;
    c.swizzle = 0;
    for (unsigned lane = 0; lane < 4; ++lane) {
      uint32_t swizzle = next() % 7; if (swizzle == 6) swizzle = 7;
      c.swizzle |= swizzle << (lane * 3);
    }
    c.predicate = next() % 8 != 0;
    c.mini = next() % 4 == 0; c.mini_offset = int(next() % 12) - 2; c.mini_format = formats[next() % formats.size()];
    suite.cases.push_back(c);
  }
  for (uint32_t index : {0u, 37u, 511u, 0x1000000u, 0xFFFFFFFFu}) {
    FetchCase c; c.reserved = 1; c.slot = index;
    suite.cases.push_back(c);
  }
  return suite;
}
}  // namespace fh1::validation
