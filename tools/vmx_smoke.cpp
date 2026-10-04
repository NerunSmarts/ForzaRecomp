#include <bit>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <limits>

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
  if (failures)
    return 1;
  std::cout << "VMX fusion, lane order, overflow, non-finite inputs and denormals passed\n";
}
