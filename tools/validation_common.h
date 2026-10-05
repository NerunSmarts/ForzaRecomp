#pragma once
#include <algorithm>
#include <array>
#include <cmath>
#include <stdexcept>

namespace fh1::validation {
using Float4 = std::array<float, 4>;
inline bool matches(float actual, float expected) {
  if (std::isnan(expected)) return std::isnan(actual);
  if (std::isinf(expected)) return actual == expected;
  if (!std::isfinite(actual)) return false;
  if (actual == 0 && expected == 0) return std::signbit(actual) == std::signbit(expected);
  return std::abs(actual - expected) <= std::max(1.0e-7f, std::abs(expected) * 2.0e-6f);
}

inline void require(bool condition, const char* message) {
  if (!condition) throw std::runtime_error(message);
}

}  // namespace fh1::validation
