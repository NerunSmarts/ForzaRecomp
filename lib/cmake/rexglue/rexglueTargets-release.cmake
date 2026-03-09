#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rex::core" for configuration "Release"
set_property(TARGET rex::core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::core PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rexcore.lib"
  )

list(APPEND _cmake_import_check_targets rex::core )
list(APPEND _cmake_import_check_files_for_rex::core "${_IMPORT_PREFIX}/lib/rexcore.lib" )

# Import target "rex::filesystem" for configuration "Release"
set_property(TARGET rex::filesystem APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::filesystem PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rexfilesystem.lib"
  )

list(APPEND _cmake_import_check_targets rex::filesystem )
list(APPEND _cmake_import_check_files_for_rex::filesystem "${_IMPORT_PREFIX}/lib/rexfilesystem.lib" )

# Import target "rex::ui" for configuration "Release"
set_property(TARGET rex::ui APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::ui PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rexui.lib"
  )

list(APPEND _cmake_import_check_targets rex::ui )
list(APPEND _cmake_import_check_files_for_rex::ui "${_IMPORT_PREFIX}/lib/rexui.lib" )

# Import target "rex::input" for configuration "Release"
set_property(TARGET rex::input APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::input PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rexinput.lib"
  )

list(APPEND _cmake_import_check_targets rex::input )
list(APPEND _cmake_import_check_files_for_rex::input "${_IMPORT_PREFIX}/lib/rexinput.lib" )

# Import target "rex::audio" for configuration "Release"
set_property(TARGET rex::audio APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::audio PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rexaudio.lib"
  )

list(APPEND _cmake_import_check_targets rex::audio )
list(APPEND _cmake_import_check_files_for_rex::audio "${_IMPORT_PREFIX}/lib/rexaudio.lib" )

# Import target "rex::graphics" for configuration "Release"
set_property(TARGET rex::graphics APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::graphics PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rexgraphics.lib"
  )

list(APPEND _cmake_import_check_targets rex::graphics )
list(APPEND _cmake_import_check_files_for_rex::graphics "${_IMPORT_PREFIX}/lib/rexgraphics.lib" )

# Import target "rex::system" for configuration "Release"
set_property(TARGET rex::system APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::system PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rexsystem.lib"
  )

list(APPEND _cmake_import_check_targets rex::system )
list(APPEND _cmake_import_check_files_for_rex::system "${_IMPORT_PREFIX}/lib/rexsystem.lib" )

# Import target "rex::kernel" for configuration "Release"
set_property(TARGET rex::kernel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::kernel PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rexkernel.lib"
  )

list(APPEND _cmake_import_check_targets rex::kernel )
list(APPEND _cmake_import_check_files_for_rex::kernel "${_IMPORT_PREFIX}/lib/rexkernel.lib" )

# Import target "rex::codegen" for configuration "Release"
set_property(TARGET rex::codegen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::codegen PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/rexcodegen.lib"
  )

list(APPEND _cmake_import_check_targets rex::codegen )
list(APPEND _cmake_import_check_files_for_rex::codegen "${_IMPORT_PREFIX}/lib/rexcodegen.lib" )

# Import target "rex::aes128" for configuration "Release"
set_property(TARGET rex::aes128 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::aes128 PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/aes128.lib"
  )

list(APPEND _cmake_import_check_targets rex::aes128 )
list(APPEND _cmake_import_check_files_for_rex::aes128 "${_IMPORT_PREFIX}/lib/aes128.lib" )

# Import target "rex::mspack" for configuration "Release"
set_property(TARGET rex::mspack APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::mspack PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/mspack.lib"
  )

list(APPEND _cmake_import_check_targets rex::mspack )
list(APPEND _cmake_import_check_files_for_rex::mspack "${_IMPORT_PREFIX}/lib/mspack.lib" )

# Import target "rex::disasm" for configuration "Release"
set_property(TARGET rex::disasm APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::disasm PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/disasm.lib"
  )

list(APPEND _cmake_import_check_targets rex::disasm )
list(APPEND _cmake_import_check_files_for_rex::disasm "${_IMPORT_PREFIX}/lib/disasm.lib" )

# Import target "rex::xxhash" for configuration "Release"
set_property(TARGET rex::xxhash APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::xxhash PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/xxhash.lib"
  )

list(APPEND _cmake_import_check_targets rex::xxhash )
list(APPEND _cmake_import_check_files_for_rex::xxhash "${_IMPORT_PREFIX}/lib/xxhash.lib" )

# Import target "rex::imgui" for configuration "Release"
set_property(TARGET rex::imgui APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::imgui PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/imgui.lib"
  )

list(APPEND _cmake_import_check_targets rex::imgui )
list(APPEND _cmake_import_check_files_for_rex::imgui "${_IMPORT_PREFIX}/lib/imgui.lib" )

# Import target "rex::libavcodec" for configuration "Release"
set_property(TARGET rex::libavcodec APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::libavcodec PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libavcodec.lib"
  )

list(APPEND _cmake_import_check_targets rex::libavcodec )
list(APPEND _cmake_import_check_files_for_rex::libavcodec "${_IMPORT_PREFIX}/lib/libavcodec.lib" )

# Import target "rex::libavutil" for configuration "Release"
set_property(TARGET rex::libavutil APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::libavutil PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libavutil.lib"
  )

list(APPEND _cmake_import_check_targets rex::libavutil )
list(APPEND _cmake_import_check_files_for_rex::libavutil "${_IMPORT_PREFIX}/lib/libavutil.lib" )

# Import target "rex::rexglue" for configuration "Release"
set_property(TARGET rex::rexglue APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rex::rexglue PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rexglue.exe"
  )

list(APPEND _cmake_import_check_targets rex::rexglue )
list(APPEND _cmake_import_check_files_for_rex::rexglue "${_IMPORT_PREFIX}/bin/rexglue.exe" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
