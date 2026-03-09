/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 *
 * @modified    Tom Clay, 2026 - Adapted for ReXGlue runtime
 */

#pragma once

namespace rex::kernel::xboxkrnl {

// Build an ordinal enum from the table.
// XE_EXPORT(module, ordinal, name, type) expands to: name = ordinal
#define XE_EXPORT(module, ordinal, name, type) name = ordinal

namespace ordinals {
enum {
#include "xboxkrnl_table.inc"
};
}  // namespace ordinals

#undef XE_EXPORT

}  // namespace rex::kernel::xboxkrnl
