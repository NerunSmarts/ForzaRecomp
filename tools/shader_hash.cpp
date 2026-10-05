// The same XXH3 algorithm used by ReXGlue, exposed for offline correlation.
// xxHash is supplied by the pinned shader-tool dependency (BSD-2-Clause).
#define XXH_INLINE_ALL
#include <xxhash.h>
#include <cstddef>
#include <cstdint>

extern "C" uint64_t fh1_shader_xxh3(const void* data, size_t size) {
  return XXH3_64bits(data, size);
}
