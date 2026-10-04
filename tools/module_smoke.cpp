#include <filesystem>
#include <iostream>

#include "generated/default/fh1_init.h"
#include <rex/kernel/init.h>
#include <rex/runtime.h>
#include <rex/system/function_dispatcher.h>
#include <rex/system/user_module.h>

// Exercise registration, loading, dispatch lookup, unloading and reloading.
// DllMain and all other guest code remain unexecuted in this check.
int main(int argc, char** argv) {
  if (argc != 2) {
    std::cerr << "Usage: fh1_module_smoke GAME_DIRECTORY\n";
    return 2;
  }
  rex::Runtime runtime(std::filesystem::canonical(argv[1]));
  if (runtime.Setup(PPCImageConfig,
                    {.kernel_init = rex::kernel::InitializeKernel, .tool_mode = true}) != 0)
    return 1;
  PPCImageConfig.register_modules(runtime.kernel_state());
  if (runtime.LoadXexImage("game:\\default.xex") != 0)
    return 1;
  auto main_module = runtime.kernel_state()->GetExecutableModule();
  auto* main_entry = runtime.function_dispatcher()->GetFunction(main_module->entry_point());
  if (!main_entry)
    return 1;
  for (const char* name : {"XMediaFacade_default.xex", "SpeechFacade_default.xex"}) {
    const std::string path = std::string("game:\\") + name;
    for (int iteration = 0; iteration < 2; ++iteration) {
      auto module = runtime.kernel_state()->LoadUserModule(path, false);
      if (!module || !runtime.function_dispatcher()->GetFunction(module->entry_point())) {
        std::cerr << "No native entry point for " << name << '\n';
        return 1;
      }
      auto duplicate = runtime.kernel_state()->LoadUserModule(path, false);
      if (duplicate.get() != module.get()) {
        std::cerr << "Repeated load did not reuse " << name << '\n';
        return 1;
      }
      duplicate.reset();
      if (runtime.function_dispatcher()->GetFunction(main_module->entry_point()) != main_entry) {
        std::cerr << "Main module dispatch changed after loading " << name << '\n';
        return 1;
      }
      const auto facade_entry = module->entry_point();
      runtime.kernel_state()->UnloadUserModule(module, false);
      if (runtime.function_dispatcher()->GetFunction(facade_entry)) {
        std::cerr << "Facade dispatch survived unload for " << name << '\n';
        return 1;
      }
      module.reset();
    }
    std::cout << name << ": native dispatch and unload/reload passed\n";
  }
  std::cout << "Main entry point remained registered throughout\n";
}
