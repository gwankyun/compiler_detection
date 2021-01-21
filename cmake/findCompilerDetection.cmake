if(CompilerDetection_ROOT)
    set(CompilerDetection_INCLUDE_DIRS ${CompilerDetection_ROOT}/include ${CompilerDetection_ROOT}/include/compiler_detection)
    set(CompilerDetection_FOUND TRUE)
    if(NOT TARGET CompilerDetection::CompilerDetection)
      add_library(CompilerDetection_header_only INTERFACE)
      add_library(CompilerDetection::CompilerDetection ALIAS CompilerDetection_header_only)
      set_target_properties(CompilerDetection_header_only PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CompilerDetection_INCLUDE_DIRS}"
      )
      set(CompilerDetection_VERSION "1.0")
      include(FindPackageHandleStandardArgs)
      find_package_handle_standard_args(CompilerDetection
        FOUND_VAR CompilerDetection_FOUND
        REQUIRED_VARS CompilerDetection_INCLUDE_DIRS
        VERSION_VAR CompilerDetection_VERSION
      )
    set(CompilerDetection_VERSION_STRING ${CompilerDetection_VERSION})
    endif()
endif()
