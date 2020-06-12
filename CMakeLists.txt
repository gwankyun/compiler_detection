# cmake最低版本
cmake_minimum_required(VERSION 3.17)

# 啟用IDE目錄功能
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# 包含模塊
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/CMake)
include(CMakePrintHelpers)

# 輸出目錄
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# 項目名
set(project compile_features)
project(${project})

add_executable(${project} "")

if(${MSVC})
	target_compile_options(${project} PRIVATE /W4 /MP)
endif()

target_sources(${project} PRIVATE
	src/main.cpp include/compile_features.h)

target_include_directories(${project} PRIVATE include)
