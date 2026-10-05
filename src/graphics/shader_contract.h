#pragma once

// Experimental host ABI for FH1's translated Vulkan shaders. No game payloads.
#include <array>
#include <cstddef>
#include <cstdint>
#include <limits>

namespace fh1::graphics {

struct PushConstants {
  uint64_t vertex_constants;
  uint64_t pixel_constants;
  uint64_t shared_constants;
};

struct alignas(16) VertexFetchBinding {
  uint64_t device_address;
  uint32_t word_count;
  uint32_t endian;
};

struct alignas(16) SharedConstants {
  std::array<uint32_t, 32> texture_2d;
  std::array<uint32_t, 32> texture_3d;
  std::array<uint32_t, 32> texture_cube;
  std::array<uint32_t, 32> sampler;
  std::array<float, 32> sampler_lod_bias;
  uint32_t booleans;
  uint32_t swapped_texcoords;
  std::array<float, 2> half_pixel_offset;
  float alpha_threshold;
  uint32_t vertex_index_min;
  uint32_t vertex_index_max = 0xFFFFFF;
  uint32_t reserved;
  std::array<VertexFetchBinding, 96> vertex_fetch;
};

static_assert(sizeof(PushConstants) == 24);
static_assert(sizeof(VertexFetchBinding) == 16);
static_assert(offsetof(VertexFetchBinding, word_count) == 8);
static_assert(offsetof(VertexFetchBinding, endian) == 12);
static_assert(offsetof(SharedConstants, sampler_lod_bias) == 512);
static_assert(offsetof(SharedConstants, booleans) == 640);
static_assert(offsetof(SharedConstants, swapped_texcoords) == 644);
static_assert(offsetof(SharedConstants, half_pixel_offset) == 648);
static_assert(offsetof(SharedConstants, alpha_threshold) == 656);
static_assert(offsetof(SharedConstants, vertex_index_min) == 660);
static_assert(offsetof(SharedConstants, vertex_index_max) == 664);
static_assert(offsetof(SharedConstants, vertex_fetch) == 672);
static_assert(sizeof(SharedConstants) == 2208);

// An uploader must supply the current generation of owned, GPU-resident data
// and retain that allocation until its submission fence completes. These
// numbers alone do not provide a lifetime lease or validate GPU residency.
// guest_address uses the fetch register's GPU byte-address namespace. The
// uploader must resolve guest memory aliases consistently with that address.
struct ResidentVertexBuffer {
  uint64_t guest_address;
  uint64_t device_address;
  uint64_t byte_count;
  uint64_t generation;
};

enum class BindingError {
  none, wrong_type, empty, missing_generation, unaligned,
  guest_range, truncated, device_address_overflow
};

struct BindingResult {
  VertexFetchBinding binding{};
  BindingError error = BindingError::none;
  explicit operator bool() const { return error == BindingError::none; }
};

// Input is two already host-endian GPU register words, never raw guest bytes.
// Rebase an interior guest fetch address into its matching host allocation;
// do not treat an unvalidated guest pointer as a device address.
inline BindingResult make_vertex_fetch_binding(uint32_t word0, uint32_t word1,
                                               const ResidentVertexBuffer& resident) {
  auto fail = [](BindingError error) { return BindingResult{{}, error}; };
  if ((word0 & 3) != 3) return fail(BindingError::wrong_type);
  const uint64_t guest_address = uint64_t(word0 >> 2) * 4;
  const uint32_t count = (word1 >> 2) & 0xFFFFFF;
  const uint64_t bytes = uint64_t(count) * 4;
  if (!count) return fail(BindingError::empty);
  if (!resident.generation) return fail(BindingError::missing_generation);
  if (!resident.device_address || (resident.device_address & 3) || (resident.guest_address & 3))
    return fail(BindingError::unaligned);
  constexpr uint64_t guest_limit = uint64_t{1} << 32;
  if (guest_address + bytes > guest_limit || resident.guest_address >= guest_limit ||
      resident.byte_count > guest_limit - resident.guest_address || guest_address < resident.guest_address)
    return fail(BindingError::guest_range);
  const uint64_t offset = guest_address - resident.guest_address;
  if (offset > resident.byte_count || bytes > resident.byte_count - offset)
    return fail(BindingError::truncated);
  const uint64_t max_address = std::numeric_limits<uint64_t>::max();
  if (offset > max_address - resident.device_address ||
      bytes > max_address - resident.device_address - offset)
    return fail(BindingError::device_address_overflow);
  return {{resident.device_address + offset, count, word1 & 3}, BindingError::none};
}

}  // namespace fh1::graphics
