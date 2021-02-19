# cmake最低版本
cmake_minimum_required(VERSION 3.19)

# 啟用IDE目錄功能
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# 包含模塊
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
include(CMakePrintHelpers)
include(WriteCompilerDetectionHeader)

# 輸出目錄
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

write_compiler_detection_header(
  FILE "${CMAKE_CURRENT_SOURCE_DIR}/include/compiler_detection/compiler_detection.h"
  PREFIX COMPAT
  COMPILERS
    AppleClang Clang GNU Intel MSVC SunPro
  ALLOW_UNKNOWN_COMPILERS
  ALLOW_UNKNOWN_COMPILER_VERSIONS
  FEATURES
  # C
    c_function_prototypes
    c_restrict
    c_static_assert
    c_variadic_macros
  # C++98
    cxx_template_template_parameters
  # C++11
    cxx_alias_templates
    cxx_alignas
    cxx_alignof
    cxx_attributes
    cxx_auto_type
    cxx_constexpr
    cxx_decltype_incomplete_return_types
    cxx_decltype
    cxx_default_function_template_args
    cxx_defaulted_functions
    cxx_defaulted_move_initializers
    cxx_delegating_constructors
    cxx_deleted_functions
    cxx_enum_forward_declarations
    cxx_explicit_conversions
    cxx_extended_friend_declarations
    cxx_extern_templates
    cxx_final
    cxx_func_identifier
    cxx_generalized_initializers
    cxx_inheriting_constructors
    cxx_inline_namespaces
    cxx_lambdas
    cxx_local_type_template_args
    cxx_long_long_type
    cxx_noexcept
    cxx_nonstatic_member_init
    cxx_nullptr
    cxx_override
    cxx_range_for
    cxx_raw_string_literals
    cxx_reference_qualified_functions
    cxx_right_angle_brackets
    cxx_rvalue_references
    cxx_sizeof_member
    cxx_static_assert
    cxx_strong_enums
    cxx_thread_local
    cxx_trailing_return_types
    cxx_unicode_literals
    cxx_uniform_initialization
    cxx_unrestricted_unions
    cxx_user_literals
    cxx_variadic_macros
    cxx_variadic_templates
    # C++14
    cxx_aggregate_default_initializers
    cxx_attribute_deprecated
    cxx_binary_literals
    cxx_contextual_conversions
    cxx_decltype_auto
    cxx_digit_separators
    cxx_generic_lambdas
    cxx_lambda_init_captures
    cxx_relaxed_constexpr
    cxx_return_type_deduction
    cxx_variable_templates
)

# 項目名
set(project compiler_detection)
project(${project})

add_compile_options(
  "$<$<CXX_COMPILER_ID:MSVC>:/W4;/MP>;/Zc:__cplusplus;")

add_executable(${project})

set(CompilerDetection_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
find_package(CompilerDetection REQUIRED)

target_sources(${project} PRIVATE
  src/main.cpp
  include/compiler_detection/compiler_detection.h
  include/compiler_detection.hpp
  include/compiler_detection/short.hpp
  cmake/findCompilerDetection.cmake
)

target_link_libraries(${project}
  PUBLIC
    CompilerDetection::CompilerDetection)

target_include_directories(${project} PRIVATE include)
