#include "vertex_fetch_cases.h"
#include <cstdio>
#include <fstream>
#include <string>

#ifdef FH1_VALIDATE_VULKAN
#include "vulkan_compute_validation.h"
#endif

int main(int argc, char** argv) {
  (void)argv;
  try {
    fh1::validation::validate_host_contract();
    const auto suite = fh1::validation::make_suite();
    for (const auto& c : suite.cases) (void)fh1::validation::reference(c, suite.words, suite.shared);
    printf("Host ABI, binding rejection, endian and scalar goldens passed; %zu synthetic cases prepared\n", suite.cases.size());
    if (argc == 1) return 0;
#ifdef FH1_VALIDATE_VULKAN
    if (argc == 2) { fh1::validation::validate_compute(argv[1], suite, fh1::validation::reference); return 0; }
#endif
    throw std::runtime_error("Usage: vertex_fetch_smoke [compute.spv (Vulkan build only)]");
  } catch (const std::exception& error) {
    fprintf(stderr, "Buffer fetch validation failed: %s\n", error.what()); return 1;
  }
}
