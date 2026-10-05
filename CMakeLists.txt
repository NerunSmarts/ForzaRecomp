# fh1 - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(fh1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Generated PPC code relies on explicit aliasing and instruction-level FP behavior.
add_compile_options(-fno-strict-aliasing -ffp-model=strict)

include(generated/rexglue.cmake)

# Sources
set(FH1_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(fh1 WIN32 ${FH1_SOURCES})
else()
    add_executable(fh1 ${FH1_SOURCES})
endif()

rexglue_setup_target(fh1 GPU_PLUGINS xenos)
# Runtime-loaded plugins need a file dependency so updating the patched SDK
# relinks the host and runs the SDK's POST_BUILD staging command.
set_property(TARGET fh1 APPEND PROPERTY LINK_DEPENDS "$<TARGET_FILE:rex::gpu-xenos>")

add_executable(fh1_xex_inspect tools/xex_inspect.cpp)
target_link_libraries(fh1_xex_inspect PRIVATE rex::runtime)

add_executable(fh1_vmx_smoke tools/vmx_smoke.cpp)
target_link_libraries(fh1_vmx_smoke PRIVATE rex::runtime)

add_executable(fh1_wait_smoke tools/wait_smoke.cpp)
target_link_libraries(fh1_wait_smoke PRIVATE rex::runtime)

if(TARGET fh1_recomp)
    add_executable(fh1_module_smoke tools/module_smoke.cpp)
    target_include_directories(fh1_module_smoke PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
    target_link_libraries(fh1_module_smoke PRIVATE fh1_recomp rex::runtime)
    add_dependencies(fh1_module_smoke fh1)
endif()

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/third_party/rexglue-sdk/thirdparty/disasm/dis-asm.h")
    add_executable(fh1_ppc_disasm tools/ppc_disasm.cpp)
    target_include_directories(fh1_ppc_disasm PRIVATE third_party/rexglue-sdk/thirdparty/disasm)
    target_link_libraries(fh1_ppc_disasm PRIVATE rex::disasm)
endif()
