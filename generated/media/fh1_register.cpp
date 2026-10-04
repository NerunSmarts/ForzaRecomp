//=============================================================================
// ReXGlue Generated - fh1 Function Registration
//=============================================================================

#include "fh1_init.h"
#include <rex/system/function_dispatcher.h>


#ifdef _WIN32
#define REX_MODULE_EXPORT __declspec(dllexport)
#else
#define REX_MODULE_EXPORT __attribute__((visibility("default")))
#endif

extern "C" REX_MODULE_EXPORT
void ReXModule_Register(rex::runtime::IModuleRegistrar* registrar) {

  for (const auto* mapping = PPCFuncMappings; mapping->host; ++mapping) {
    registrar->SetFunction(static_cast<uint32_t>(mapping->guest), mapping->host);
  }
}


// The runtime uses this baked layout for the dispatch table. It must match the
// constants used by this module's REX_LOOKUP_FUNC macro.
extern "C" REX_MODULE_EXPORT
const rex::PPCImageInfo* ReXModule_GetImageInfo() {
  return &PPCImageConfig;
}

