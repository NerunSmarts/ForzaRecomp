#include <cstdint>
#include <cstdio>
#include <fstream>
#include <iterator>
#include <vector>
#include <dis-asm.h>

int main(int argc, char** argv) {
  if (argc != 5) {
    std::fprintf(stderr, "Usage: fh1_ppc_disasm IMAGE IMAGE_BASE START SIZE (hex)\n");
    return 2;
  }
  std::ifstream file(argv[1], std::ios::binary);
  std::vector<uint8_t> bytes{std::istreambuf_iterator<char>(file), {}};
  uint64_t base = std::stoull(argv[2], nullptr, 16);
  uint64_t start = std::stoull(argv[3], nullptr, 16);
  uint64_t size = std::stoull(argv[4], nullptr, 16);
  if (!file.is_open() || start < base || start + size > base + bytes.size() || (size % 4))
    return 1;
  disassemble_info info{};
  INIT_DISASSEMBLE_INFO(info, stdout, std::fprintf);
  info.arch = bfd_arch_powerpc;
  info.endian = BFD_ENDIAN_BIG;
  info.buffer = bytes.data();
  info.buffer_vma = base;
  info.buffer_length = bytes.size();
  info.private_data = reinterpret_cast<void*>(uintptr_t(0x1 | 0x4 | 0x4000 | 0x8000000 |
                                                       0x200 | 0x1000000 | 0x10000));
  for (uint64_t address = start; address < start + size; address += 4) {
    std::printf("%08llX: ", static_cast<unsigned long long>(address));
    print_insn_big_powerpc(address, &info);
    std::putchar('\n');
  }
}
