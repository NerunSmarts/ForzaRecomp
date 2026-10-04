//=============================================================================
// ReXGlue Generated - fh1 Function Registration
//=============================================================================

#include "fh1_init.h"
#include <rex/system/function_dispatcher.h>


void fh1_RegisterFunctions(rex::runtime::IModuleRegistrar* registrar) {

  for (const auto* mapping = PPCFuncMappings; mapping->host; ++mapping) {
    registrar->SetFunction(static_cast<uint32_t>(mapping->guest), mapping->host);
  }
}


