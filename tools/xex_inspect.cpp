#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

#include <rex/kernel/init.h>
#include <rex/runtime.h>
#include <rex/system/user_module.h>
#include <rex/system/xex_module.h>

// Load data through the same XEX loader used by the game. No guest code runs.
int main(int argc, char** argv) {
  if (argc != 3) {
    std::cerr << "Usage: fh1_xex_inspect GAME_DIRECTORY DUMP_DIRECTORY\n";
    return 2;
  }
  const auto game = std::filesystem::canonical(argv[1]);
  const auto output = std::filesystem::absolute(argv[2]);
  std::filesystem::create_directories(output);
  rex::Runtime runtime(game);
  if (runtime.Setup({.kernel_init = rex::kernel::InitializeKernel, .tool_mode = true}) !=
      0) {
    std::cerr << "Unable to set up the ReXGlue runtime\n";
    return 1;
  }
  if (runtime.LoadXexImage("game:\\default.xex") != 0) {
    std::cerr << "Unable to load default.xex\n";
    return 1;
  }
  std::vector<rex::system::object_ref<rex::system::UserModule>> modules;
  modules.push_back(runtime.kernel_state()->GetExecutableModule());
  for (const char* name : {"XMediaFacade_default.xex", "SpeechFacade_default.xex"}) {
    auto module = runtime.kernel_state()->LoadUserModule(std::string("game:\\") + name, false);
    if (!module) {
      std::cerr << "Unable to load " << name << '\n';
      return 1;
    }
    modules.push_back(std::move(module));
  }
  for (const auto& module : modules) {
    const auto* xex = module->xex_module();
    rex::memory::HeapAllocationInfo allocation{};
    if (!runtime.memory()->LookupHeap(xex->base_address())->QueryRegionInfo(
            xex->base_address(), &allocation) ||
        allocation.allocation_base != xex->base_address() || !allocation.state) {
      std::cerr << "Lost XEX allocation after loading another module: " << module->name() << '\n';
      return 1;
    }
    std::cout << module->name() << " base=0x" << std::hex << xex->base_address()
              << " size=0x" << xex->image_size() << " entry=0x" << xex->entry_point()
              << std::dec << '\n';
    auto path = output / (module->name() + ".bin");
    std::ofstream file(path, std::ios::binary);
    file.write(reinterpret_cast<const char*>(runtime.virtual_membase() + xex->base_address()),
               xex->image_size());
    if (!file) {
      std::cerr << "Unable to write " << path << '\n';
      return 1;
    }
  }
  return 0;
}
