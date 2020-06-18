#pragma once
#ifndef COMPILE_FEATURES_H
#define COMPILE_FEATURES_H

#ifndef CXX_MSVC
#ifdef _MSC_VER
#define CXX_MSVC true
#else
#define CXX_MSVC false
#endif // _MSC_VER
#endif // !CXX_MSVC

#ifndef CXX_CLANG
#ifdef __clang__
#define CXX_CLANG true
#else
#define CXX_CLANG false
#endif // __clang__
#endif // !CXX_CLANG

#ifndef CXX_GCC
#if __GNUC__
#define CXX_GCC true
#else
#define CXX_GCC false
#endif // __GNUC__
#endif // !CXX_GCC

#ifndef CXX_MAJOR
#if CXX_MSVC
#define CXX_MAJOR _MSC_VER
#elif CXX_CLANG
#define CXX_MAJOR __clang_major__
#elif CXX_GCC
#define CXX_MAJOR __GNUC__
#endif
#endif // !CXX_MAJOR

#ifndef CXX_MINOR
#if CXX_MSVC
#define CXX_MINOR 0
#elif CXX_CLANG
#define CXX_MINOR __clang_minor__
#elif CXX_GCC
#define CXX_MINOR __GNUC__MINOR__
#endif
#endif // !CXX_MINOR

#ifndef CXX_PATCHLEVEL
#if CXX_MSVC
#define CXX_PATCHLEVEL 0
#elif CXX_CLANG
#define CXX_PATCHLEVEL __clang_patchlevel__
#elif CXX_GCC
#define CXX_MINOR __GNUC__PATCHLEVEL__
#endif
#endif // !CXX_PATCHLEVEL

#ifndef CXX_CHECK_VERSION
#define CXX_CHECK_VERSION(compile, major, minor, patchlevel) \
    (compile && ((major == 0) || ((CXX_MAJOR >= (major + 1)) || (CXX_MAJOR == major && CXX_MINOR >= minor) || (CXX_MAJOR == major && CXX_MINOR == minor && CXX_PATCHLEVEL >= patchlevel))))
#endif // !CXX_CHECK_VERSION

// C++11

// C99 preprocessor
// https://wg21.link/N1653
#ifndef CXX_VARIADIC_MACROS
#if CXX_CHECK_VERSION(CXX_MSVC, 1926, 0, 0) // VS 2019 16.6
#define CXX_VARIADIC_MACROS
#elif CXX_CHECK_VERSION(CXX_CLANG, 0, 0, 0) // Clang
#define CXX_VARIADIC_MACROS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 3, 0) // GCC 4.3
#define CXX_VARIADIC_MACROS
#endif
#endif // !CXX_VARIADIC_MACROS

// static_assert
// https://wg21.link/N1720
// __cpp_static_assert

// Right angle brackets
// https://wg21.link/N1757
#ifndef CXX_RIGHT_ANGLE_BRACKETS
#if CXX_CHECK_VERSION(CXX_MSVC, 1400, 0, 0) // VS 2005
#define CXX_RIGHT_ANGLE_BRACKETS
#elif CXX_CHECK_VERSION(CXX_CLANG, 0, 0, 0) // Clang
#define CXX_RIGHT_ANGLE_BRACKETS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 3, 0) // GCC 4.3
#define CXX_RIGHT_ANGLE_BRACKETS
#endif
#endif // !CXX_RIGHT_ANGLE_BRACKETS

// Extended friend declarations
// https://wg21.link/N1791
#ifndef CXX_EXTENDED_FRIEND_DECLARATIONS
#if CXX_CHECK_VERSION(CXX_MSVC, 1800, 0, 0) // VS 2013
#define CXX_EXTENDED_FRIEND_DECLARATIONS
#elif CXX_CHECK_VERSION(CXX_CLANG, 2, 9, 0) // Clang 2.9
#define CXX_EXTENDED_FRIEND_DECLARATIONS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 7, 0) // GCC 4.7
#define CXX_EXTENDED_FRIEND_DECLARATIONS
#endif
#endif // !CXX_EXTENDED_FRIEND_DECLARATIONS

// long long
// https://wg21.link/N1811
#ifndef CXX_LONG_LONG_TYPE
#if CXX_CHECK_VERSION(CXX_MSVC, 1400, 0, 0) // VS 2005
#define CXX_LONG_LONG_TYPE
#elif CXX_CHECK_VERSION(CXX_CLANG, 0, 0, 0) // Clang
#define CXX_LONG_LONG_TYPE
#elif CXX_CHECK_VERSION(CXX_GCC, 0, 0, 0) // GCC
#define CXX_LONG_LONG_TYPE
#endif
#endif // !CXX_LONG_LONG_TYPE

// Type traits
// https://wg21.link/N1836
// CMAKE UNKNOWN FEATURE
#ifndef CXX_TYPE_TRAITS
#if CXX_CHECK_VERSION(CXX_MSVC, 1400, 0, 0) // VS 2005
#define CXX_TYPE_TRAITS
#elif CXX_CHECK_VERSION(CXX_CLANG, 3, 0, 0) // Clang
#define CXX_TYPE_TRAITS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 3, 0) // GCC 4.4
#define CXX_TYPE_TRAITS
#endif
#endif // !CXX_TYPE_TRAITS

// auto
// https://wg21.link/N1984
#ifndef CXX_AUTO_TYPE
#if CXX_CHECK_VERSION(CXX_MSVC, 1600, 0, 0) // VS 2010
#define CXX_AUTO_TYPE
#elif CXX_CHECK_VERSION(CXX_CLANG, 0, 0, 0) // Clang
#define CXX_AUTO_TYPE
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 4, 0) // GCC 4.4
#define CXX_AUTO_TYPE
#endif
#endif // !CXX_AUTO_TYPE

// Delegating constructors
// https://wg21.link/N1986
// __cpp_delegating_constructors

// extern template
// https://wg21.link/N1987
#ifndef CXX_EXTERN_TEMPLATES
#if CXX_CHECK_VERSION(CXX_MSVC, 1200, 0, 0) // MSVC++ 6.0
#define CXX_EXTERN_TEMPLATES
#elif CXX_CHECK_VERSION(CXX_CLANG, 0, 0, 0) // Clang
#define CXX_EXTERN_TEMPLATES
#elif CXX_CHECK_VERSION(CXX_GCC, 3, 3, 0) // GCC 3.3
#define CXX_EXTERN_TEMPLATES
#endif
#endif // !CXX_EXTERN_TEMPLATES

// constexpr
// https://wg21.link/N2235
// __cpp_constexpr

// Template aliases
// https://wg21.link/N2258
// __cpp_alias_templates

// char16_t and char32_t
// https://wg21.link/N2249
// __cpp_unicode_characters

// alignas
// https://wg21.link/N2341
#ifndef CXX_ALIGNAS
#if CXX_CHECK_VERSION(CXX_MSVC, 1900, 0, 0) // VS 2015
#define CXX_ALIGNAS
#elif CXX_CHECK_VERSION(CXX_CLANG, 3, 0, 0) // Clang 3.0
#define CXX_ALIGNAS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 8, 0) // GCC 4.8
#define CXX_ALIGNAS
#endif
#endif // !CXX_ALIGNAS

// alignof
// https://wg21.link/N2341
#ifndef CXX_ALIGNOF
#if CXX_CHECK_VERSION(CXX_MSVC, 1900, 0, 0) // VS 2015
#define CXX_ALIGNOF
#elif CXX_CHECK_VERSION(CXX_CLANG, 2, 9, 0) // Clang 2.9
#define CXX_ALIGNOF
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 5, 0) // GCC 4.5
#define CXX_ALIGNOF
#endif
#endif // !CXX_ALIGNOF

// Defaulted and deleted functions
// https://wg21.link/N2346
#ifndef CXX_DEFAULTED_FUNCTIONS
#if CXX_CHECK_VERSION(CXX_MSVC, 1800, 0, 0) // VS 2013
#define CXX_DEFAULTED_FUNCTIONS
#elif CXX_CHECK_VERSION(CXX_CLANG, 3, 0, 0) // Clang 3.0
#define CXX_DEFAULTED_FUNCTIONS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 4, 0) // GCC 4.4
#define CXX_DEFAULTED_FUNCTIONS
#endif
#endif // !CXX_DEFAULTED_FUNCTIONS

#ifndef CXX_DELETED_FUNCTIONS
#if CXX_CHECK_VERSION(CXX_MSVC, 1800, 0, 0) // VS 2013
#define CXX_DELETED_FUNCTIONS
#elif CXX_CHECK_VERSION(CXX_CLANG, 3, 0, 0) // Clang 3.0
#define CXX_DELETED_FUNCTIONS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 4, 0) // GCC 4.4
#define CXX_DELETED_FUNCTIONS
#endif
#endif // !CXX_DELETED_FUNCTIONS

// Strongly-typed enum
// https://wg21.link/N2347
#ifndef CXX_STRONG_ENUMS
#if CXX_CHECK_VERSION(CXX_MSVC, 1700, 0, 0) // VS 2012
#define CXX_STRONG_ENUMS
#elif CXX_CHECK_VERSION(CXX_CLANG, 2, 9, 0) // Clang 2.9
#define CXX_STRONG_ENUMS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 4, 0) // GCC 4.4
#define CXX_STRONG_ENUMS
#endif
#endif // !CXX_STRONG_ENUMS

// Atomic operations
// https://wg21.link/N2427
// CMAKE UNKNOWN FEATURE
#ifndef CXX_ATOMIC_OPERATIONS
#if CXX_CHECK_VERSION(CXX_MSVC, 1700, 0, 0) // VS 2012
#define CXX_ATOMIC_OPERATIONS
#elif CXX_CHECK_VERSION(CXX_CLANG, 3, 1, 0) // Clang 3.1
#define CXX_ATOMIC_OPERATIONS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 4, 0) // GCC 4.4
#define CXX_ATOMIC_OPERATIONS
#endif
#endif // !CXX_NULLPTR

// nullptr
// https://wg21.link/N2431
#ifndef CXX_NULLPTR
#if CXX_CHECK_VERSION(CXX_MSVC, 1600, 0, 0) // VS 2010
#define CXX_NULLPTR
#elif CXX_CHECK_VERSION(CXX_CLANG, 2, 9, 0) // Clang 2.9
#define CXX_NULLPTR
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 6, 0) // GCC 4.6
#define CXX_NULLPTR
#endif
#endif // !CXX_NULLPTR

// Explicit conversion operators
// https://wg21.link/N2437
#ifndef CXX_EXPLICIT_CONVERSIONS
#if CXX_CHECK_VERSION(CXX_MSVC, 1800, 0, 0) // VS 2013
#define CXX_EXPLICIT_CONVERSIONS
#elif CXX_CHECK_VERSION(CXX_CLANG, 3, 0, 0) // Clang 3.0
#define CXX_EXPLICIT_CONVERSIONS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 5, 0) // GCC 4.5
#define CXX_EXPLICIT_CONVERSIONS
#endif
#endif // !CXX_EXPLICIT_CONVERSIONS

// ref-qualifiers
// https://wg21.link/N2439
// __cpp_ref_qualifiers

// Unicode string literals
// https://wg21.link/N2442
// __cpp_unicode_literals

// Raw string literals
// https://wg21.link/N2442
// __cpp_raw_strings

// Inline namespaces
// https://wg21.link/N2535
#ifndef CXX_INLINE_NAMESPACES
#if CXX_CHECK_VERSION(CXX_MSVC, 1900, 0, 0) // VS 2015
#define CXX_INLINE_NAMESPACES
#elif CXX_CHECK_VERSION(CXX_CLANG, 2, 9, 0) // Clang 2.9
#define CXX_INLINE_NAMESPACES
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 4, 0) // GCC 4.4
#define CXX_INLINE_NAMESPACES
#endif
#endif // !CXX_INLINE_NAMESPACES

// Inheriting constructors
// https://wg21.link/N2540
// __cpp_inheriting_constructors

// Trailing function return types
// https://wg21.link/N2541
#ifndef CXX_TRAILING_RETURN_TYPES
#if CXX_CHECK_VERSION(CXX_MSVC, 1600, 0, 0) // VS 2010
#define CXX_TRAILING_RETURN_TYPES
#elif CXX_CHECK_VERSION(CXX_CLANG, 2, 9, 0) // Clang 2.9
#define CXX_TRAILING_RETURN_TYPES
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 4, 0) // GCC 4.4
#define CXX_TRAILING_RETURN_TYPES
#endif
#endif // !CXX_TRAILING_RETURN_TYPES

// Unrestricted unions
// https://wg21.link/N2544
#ifndef CXX_UNRESTRICTED_UNIONS
#if CXX_CHECK_VERSION(CXX_MSVC, 1900, 0, 0) // VS 2015
#define CXX_UNRESTRICTED_UNIONS
#elif CXX_CHECK_VERSION(CXX_CLANG, 3, 0, 0) // Clang 3.0
#define CXX_UNRESTRICTED_UNIONS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 6, 0) // GCC 4.6
#define CXX_UNRESTRICTED_UNIONS
#endif
#endif // !CXX_UNRESTRICTED_UNIONS

// Variadic templates
// https://wg21.link/N2242
// https://wg21.link/N2555
// __cpp_variadic_templates

// Expression SFINAE
// https://wg21.link/N2634
// CMAKE UNKNOWN FEATURE
#ifndef CXX_EXPRESSION_SFINAE
#if CXX_CHECK_VERSION(CXX_MSVC, 1914, 0, 0) // VS 2017 15.7
#define CXX_EXPRESSION_SFINAE
#elif CXX_CHECK_VERSION(CXX_CLANG, 2, 9, 0) // Clang 2.9
#define CXX_EXPRESSION_SFINAE
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 4, 0) // GCC 4.4
#define CXX_EXPRESSION_SFINAE
#endif
#endif // !CXX_EXPRESSION_SFINAE

// Local and unnamed types as template parameters
// https://wg21.link/N2657
#ifndef CXX_LOCAL_TYPE_TEMPLATE_ARGS
#if CXX_CHECK_VERSION(CXX_MSVC, 1600, 0, 0) // VS 2010
#define CXX_LOCAL_TYPE_TEMPLATE_ARGS
#elif CXX_CHECK_VERSION(CXX_CLANG, 2, 9, 0) // Clang 2.9
#define CXX_LOCAL_TYPE_TEMPLATE_ARGS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 5, 0) // GCC 4.5
#define CXX_LOCAL_TYPE_TEMPLATE_ARGS
#endif
#endif // !CXX_LOCAL_TYPE_TEMPLATE_ARGS

// Thread-local storage
// https://wg21.link/N2659
#ifndef CXX_THREAD_LOCAL
#if CXX_CHECK_VERSION(CXX_MSVC, 1900, 0, 0) // VS 2015
#define CXX_THREAD_LOCAL
#elif CXX_CHECK_VERSION(CXX_CLANG, 3, 3, 0) // Clang 3.3
#define CXX_THREAD_LOCAL
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 8, 0) // GCC 4.8
#define CXX_THREAD_LOCAL
#endif
#endif // !CXX_THREAD_LOCAL

// Dynamic initialization and destruction with concurrency (magic statics)
// https://wg21.link/N2660
// __cpp_threadsafe_static_init

// Garbage Collection and Reachability-Based Leak Detection
// https://wg21.link/N2670
// No compiler implemented.

// Initializer lists
// https://wg21.link/N2672
// __cpp_initializer_lists

// Non-static data member initializers
// https://wg21.link/N2756
// __cpp_nsdmi

// Attributes
// https://wg21.link/N2761
// __cpp_attributes

// Forward enum declarations
// https://wg21.link/N2764
#ifndef CXX_ENUM_FORWARD_DECLARATIONS
#if CXX_CHECK_VERSION(CXX_MSVC, 1700, 0, 0) // VS 2012
#define CXX_ENUM_FORWARD_DECLARATIONS
#elif CXX_CHECK_VERSION(CXX_CLANG, 3, 1, 0) // Clang 3.1
#define CXX_ENUM_FORWARD_DECLARATIONS
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 6, 0) // GCC 4.6
#define CXX_ENUM_FORWARD_DECLARATIONS
#endif
#endif // !CXX_ENUM_FORWARD_DECLARATIONS

// User-defined literals
// https://wg21.link/N2765
// __cpp_user_defined_literals

// Lambda expressions
// https://wg21.link/N2550
// https://wg21.link/N2658
// https://wg21.link/N2927
// __cpp_lambdas

// Range-for loop
// https://wg21.link/N2930
// __cpp_range_based_for

// noexcept
// https://wg21.link/N2930
#ifndef CXX_NOEXCEPT
#if CXX_CHECK_VERSION(CXX_MSVC, 1900, 0, 0) // VS 2015
#define CXX_NOEXCEPT
#elif CXX_CHECK_VERSION(CXX_CLANG, 3, 0, 0) // Clang 3.0
#define CXX_NOEXCEPT
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 6, 0) // GCC 4.6
#define CXX_NOEXCEPT
#endif
#endif // !CXX_NOEXCEPT

// Rvalue references
// https://wg21.link/N2118
// https://wg21.link/N2844
// https://wg21.link/CWG1138
// https://wg21.link/N3053
// __cpp_rvalue_references

// override and final
// https://wg21.link/N2928
// https://wg21.link/N3206
// https://wg21.link/N3272
#ifndef CXX_OVERRIDE
#if CXX_CHECK_VERSION(CXX_MSVC, 1700, 0, 0) // VS 2012
#define CXX_OVERRIDE
#elif CXX_CHECK_VERSION(CXX_CLANG, 2, 9, 0) // Clang 2.9
#define CXX_OVERRIDE
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 7, 0) // GCC 4.7
#define CXX_OVERRIDE
#endif
#endif // !CXX_OVERRIDE

#ifndef CXX_FINAL
#if CXX_CHECK_VERSION(CXX_MSVC, 1700, 0, 0) // VS 2012
#define CXX_FINAL
#elif CXX_CHECK_VERSION(CXX_CLANG, 2, 9, 0) // Clang 2.9
#define CXX_FINAL
#elif CXX_CHECK_VERSION(CXX_GCC, 4, 7, 0) // GCC 4.7
#define CXX_FINAL
#endif
#endif // !CXX_FINAL

// decltype
// https://wg21.link/N2343
// https://wg21.link/N3276
// __cpp_decltype

// C++14

// Tweaked wording for contextual conversions
// https://wg21.link/N3323
// To do

// Binary literals
// https://wg21.link/N3472
// __cpp_binary_literals

// decltype(auto), Return type deduction for normal functions
// https://wg21.link/N3638
// __cpp_decltype_auto

// Initialized/Generalized lambda captures (init-capture)
// https://wg21.link/N3648
// __cpp_init_captures

// Generic (polymorphic) lambda expressions
// https://wg21.link/N3649
// __cpp_generic_lambdas

// Variable templates
// https://wg21.link/N3651
// __cpp_variable_templates

// Extended constexpr
// https://wg21.link/N3652
// To do

// Member initializers and aggregates (NSDMI)
// https://wg21.link/N3653
// __cpp_aggregate_nsdmi

// Clarifying memory allocation (avoiding/fusing allocations)
// https://wg21.link/N3664
// To do

// [[deprecated]] attribute
// https://wg21.link/N3760
// To do

// Sized deallocation
// https://wg21.link/N3778
// To do

// Single quote as digit separator
// https://wg21.link/N3781
// To do

#endif // !COMPILE_FEATURES_H

