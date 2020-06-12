# compile_features
C++特性測試宏

定義了一組功能測試宏，主要參考[C++ 编译器支持情况表 - cppreference.com](https://zh.cppreference.com/w/cpp/compiler_support)，并且不與[功能特性测试 (C++20) - cppreference.com](https://zh.cppreference.com/w/cpp/feature_test)中定義的功能測試宏重複，即主要面向C++11的特性，支持MSVC、GCC及Clang編譯器，宏命名參考CMake。

- `CXX_NOEXCEPT`
- `CXX_DEFAULTED_FUNCTIONS`
- `CXX_DELETED_FUNCTIONS`
- `CXX_STRONG_ENUMS`
- `CXX_OVERRIDE`
- `CXX_NULLPTR`