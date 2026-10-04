#include <algorithm>
#include <array>
#include <bit>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <limits>
#include <random>

#include <rex/ppc/intrinsics.h>

namespace {
int failures = 0;
simde__m128 vector(float x, float y, float z, float w) {
  return simde_mm_set_ps(x, y, z, w);
}
void expectBits(const char* label, simde__m128 value, uint32_t expected) {
  const auto lanes = simde__m128_to_private(value);
  for (int lane = 0; lane < 4; ++lane) {
    const uint32_t actual = std::bit_cast<uint32_t>(lanes.f32[lane]);
    if (actual != expected) {
      std::cerr << label << ": lane " << lane << " expected " << std::hex << expected
                << ", got " << actual << std::dec << '\n';
      ++failures;
    }
  }
}
void expectNaN(const char* label, simde__m128 value) {
  const auto lanes = simde__m128_to_private(value);
  for (int lane = 0; lane < 4; ++lane)
    if (!std::isnan(lanes.f32[lane])) {
      std::cerr << label << ": lane " << lane << " is not NaN\n";
      ++failures;
    }
}

template <typename T, size_t N>
bool expectInteger(const char* label, simde__m128i value, const std::array<T, N>& expected) {
  static_assert(sizeof(expected) == 16);
  std::array<T, N> actual{};
  simde_mm_storeu_si128(reinterpret_cast<simde__m128i*>(actual.data()), value);
  for (size_t lane = 0; lane < N; ++lane) {
    if (actual[lane] != expected[lane]) {
      std::cerr << label << ": lane " << lane << " expected " << unsigned(expected[lane])
                << ", got " << unsigned(actual[lane]) << '\n';
      ++failures;
      return false;
    }
  }
  return true;
}

bool checkShifts16(const std::array<uint16_t, 8>& values,
                   const std::array<uint16_t, 8>& counts) {
  const auto input = simde_mm_loadu_si128(reinterpret_cast<const simde__m128i*>(values.data()));
  const auto shifts = simde_mm_loadu_si128(reinterpret_cast<const simde__m128i*>(counts.data()));
  std::array<uint16_t, 8> left{}, logical{}, arithmetic{};
  for (size_t lane = 0; lane < values.size(); ++lane) {
    const unsigned count = counts[lane];
    left[lane] = count < 16 ? uint16_t(uint32_t(values[lane]) << count) : 0;
    logical[lane] = count < 16 ? uint16_t(values[lane] >> count) : 0;
    const auto signed_value = std::bit_cast<int16_t>(values[lane]);
    arithmetic[lane] = uint16_t(int32_t(signed_value) >> std::min(count, 15u));
  }
  return expectInteger("16-bit left shift", rex::ppc::simde_mm_sllv_epi16(input, shifts), left) &&
         expectInteger("16-bit logical right shift", rex::ppc::simde_mm_srlv_epi16(input, shifts), logical) &&
         expectInteger("16-bit arithmetic right shift", rex::ppc::simde_mm_srav_epi16(input, shifts), arithmetic);
}

bool checkShift8(const std::array<uint8_t, 16>& values,
                 const std::array<uint8_t, 16>& counts) {
  const auto input = simde_mm_loadu_si128(reinterpret_cast<const simde__m128i*>(values.data()));
  const auto shifts = simde_mm_loadu_si128(reinterpret_cast<const simde__m128i*>(counts.data()));
  std::array<uint8_t, 16> expected{};
  for (size_t lane = 0; lane < values.size(); ++lane)
    expected[lane] = counts[lane] < 8 ? uint8_t(unsigned(values[lane]) << counts[lane]) : 0;
  return expectInteger("8-bit left shift", rex::ppc::simde_mm_sllv_epi8(input, shifts), expected);
}

bool checkPermutation(const std::array<uint8_t, 16>& a, const std::array<uint8_t, 16>& b,
                      const std::array<uint8_t, 16>& controls) {
  const auto av = simde_mm_loadu_si128(reinterpret_cast<const simde__m128i*>(a.data()));
  const auto bv = simde_mm_loadu_si128(reinterpret_cast<const simde__m128i*>(b.data()));
  const auto cv = simde_mm_loadu_si128(reinterpret_cast<const simde__m128i*>(controls.data()));
  std::array<uint8_t, 16> expected{};
  for (size_t lane = 0; lane < controls.size(); ++lane) {
    const unsigned index = 15 - (controls[lane] & 15);
    expected[lane] = (controls[lane] & 16) ? b[index] : a[index];
  }
  return expectInteger("byte permutation", rex::ppc::simde_mm_perm_epi8_(av, bv, cv), expected);
}

void checkIntegerHelpers() {
  const std::array<uint16_t, 8> edge_values{0, 1, 0x7FFF, 0x8000, 0xFFFF, 0x1234, 0xAAAA, 0x5555};
  // Include every unsigned count, especially counts that NEON interprets as
  // negative if passed directly (128, 255, 32768 and 65535).
  for (unsigned count = 0; count <= 65535; ++count) {
    std::array<uint16_t, 8> counts{};
    counts.fill(uint16_t(count));
    if (!checkShifts16(edge_values, counts)) return;
  }
  for (unsigned value = 0; value <= 255; ++value) {
    std::array<uint8_t, 16> values{};
    values.fill(uint8_t(value));
    for (unsigned count = 0; count <= 255; ++count) {
      std::array<uint8_t, 16> counts{};
      counts.fill(uint8_t(count));
      if (!checkShift8(values, counts)) return;
    }
  }
  std::array<uint8_t, 16> a{}, b{}, controls{};
  for (size_t lane = 0; lane < a.size(); ++lane) {
    a[lane] = uint8_t(0x20 + lane);
    b[lane] = uint8_t(0x90 + lane);
  }
  for (unsigned control = 0; control <= 255; ++control) {
    for (size_t lane = 0; lane < controls.size(); ++lane)
      controls[lane] = uint8_t(control + lane);
    if (!checkPermutation(a, b, controls)) return;
  }
  std::mt19937 random(0x4D5309C9);
  for (unsigned trial = 0; trial < 10000; ++trial) {
    std::array<uint16_t, 8> values{}, counts{};
    for (size_t lane = 0; lane < values.size(); ++lane) {
      values[lane] = uint16_t(random());
      counts[lane] = uint16_t(random() & ((trial & 1) ? 15 : 65535));
    }
    if (!checkShifts16(values, counts)) return;
    for (size_t lane = 0; lane < a.size(); ++lane) {
      a[lane] = uint8_t(random());
      b[lane] = uint8_t(random() & ((trial & 1) ? 7 : 255));
      controls[lane] = uint8_t(random());
    }
    if (!checkShift8(a, b) || !checkPermutation(a, b, controls)) return;
  }
}
}

int main() {
  using namespace rex::ppc;
  const auto a = simde_mm_set1_ps(0x1.000002p0f);
  const auto b = simde_mm_set1_ps(0x1.fffffcp-1f);
  // Their exact product is 1 - 2^-46. Rounding the product early loses the residual.
  expectBits("fused cancellation", fusedMultiplyAdd(a, b, simde_mm_set1_ps(-1)), 0xA8800000);
  expectBits("negative fused cancellation", negativeMultiplySubtract(a, b, simde_mm_set1_ps(1)),
             0x28800000);
  const auto zero = simde_mm_setzero_ps();
  expectBits("negative subtract signed zero", negativeMultiplySubtract(zero, zero, zero), 0x80000000);

  const float maximum = std::numeric_limits<float>::max();
  expectBits("fused intermediate overflow", fusedMultiplyAdd(simde_mm_set1_ps(maximum),
             simde_mm_set1_ps(2), simde_mm_set1_ps(-maximum)), 0x7F7FFFFF);
  const float nan = std::numeric_limits<float>::quiet_NaN();
  const float infinity = std::numeric_limits<float>::infinity();
  expectBits("three-lane order and ignored w", guestDotProduct<false>(vector(1, 2, 3, nan),
             vector(4, 5, 6, infinity)), 0x42000000); // 32
  expectBits("four-lane sum", guestDotProduct<true>(vector(1, 2, 3, 4), vector(4, 5, 6, 8)),
             0x42800000); // 64
  const auto sentinel = simde_mm_set1_ps(-maximum);
  expectBits("three-lane overflow is canonical QNaN", guestDotProduct<false>(sentinel, sentinel),
             0x7FC00000);
  expectBits("four-lane overflow is canonical QNaN", guestDotProduct<true>(sentinel, sentinel),
             0x7FC00000);
  expectBits("double product cancellation", guestDotProduct<false>(vector(-maximum, 1, maximum, 0),
             vector(2, 1, 2, 0)), 0x3F800000); // 1 despite overflowing float products
  expectBits("infinite input stays infinite", guestDotProduct<false>(vector(infinity, 0, 0, 0),
             vector(1, 1, 1, 0)), 0x7F800000);
  expectNaN("NaN input propagates", guestDotProduct<false>(vector(nan, 1, 2, 0),
            vector(1, 1, 1, 0)));
  expectNaN("opposing infinities", guestDotProduct<true>(vector(infinity, -infinity, 0, 0),
            simde_mm_set1_ps(1)));
  expectBits("denormal input flush", guestDotProduct<false>(vector(
             std::numeric_limits<float>::denorm_min(), 0, 0, 0), vector(maximum, 1, 1, 0)), 0);
  expectBits("denormal output flush", guestDotProduct<false>(vector(
             std::numeric_limits<float>::min(), 0, 0, 0), vector(0.25f, 1, 1, 0)), 0);
  checkIntegerHelpers();
  if (failures)
    return 1;
  std::cout << "VMX floating-point, integer shifts and byte permutations passed\n";
}
