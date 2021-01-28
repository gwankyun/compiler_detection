#pragma once
#ifndef COMPILER_DETECTION_SHORT_HPP
#define COMPILER_DETECTION_SHORT_HPP

#include "../compiler_detection.hpp"

#if !defined(PRAGMA_DO_STRINGIZE) && !defined(PRAGMA_STRINGIZE) && !defined(PRAGMA_STRINGIZE)
#  define PRAGMA_DO_STRINGIZE(X) #X
#  define PRAGMA_STRINGIZE(X) PRAGMA_DO_STRINGIZE(X)
#  if defined(_MSC_VER)
#    define PRAGMA_MESSAGE(x) __pragma(message(__FILE__ "(" PRAGMA_STRINGIZE(__LINE__) "): note: " x))
#  else
#    define PRAGMA_MESSAGE(x)
#  endif // defined(_MSC_VER)
#endif // !defined(PRAGMA_DO_STRINGIZE) && !defined(PRAGMA_STRINGIZE) && !defined(PRAGMA_STRINGIZE)

#if defined(COMPAT_ALIGNAS) && !defined(ALIGNAS)
#  define ALIGNAS COMPAT_ALIGNAS
#else
PRAGMA_MESSAGE("ALIGNAS defined!")
#endif // defined(COMPAT_ALIGNAS) && !defined(ALIGNAS)

#if defined(COMPAT_ALIGNOF) && !defined(ALIGNOF)
#  define ALIGNOF COMPAT_ALIGNOF
#else
PRAGMA_MESSAGE("ALIGNOF defined!")
#endif // defined(COMPAT_ALIGNOF) && !defined(ALIGNOF)

#if defined(COMPAT_DEPRECATED) && !defined(DEPRECATED)
#  define DEPRECATED COMPAT_DEPRECATED
#else
PRAGMA_MESSAGE("DEPRECATED defined!")
#endif // defined(COMPAT_DEPRECATED) && !defined(DEPRECATED)

#if defined(COMPAT_DEPRECATED_MSG) && !defined(DEPRECATED_MSG)
#  define DEPRECATED_MSG COMPAT_DEPRECATED_MSG
#else
PRAGMA_MESSAGE("DEPRECATED_MSG defined!")
#endif // defined(COMPAT_DEPRECATED_MSG) && !defined(DEPRECATED_MSG)

#if defined(COMPAT_CONSTEXPR) && !defined(CONSTEXPR)
#  define CONSTEXPR COMPAT_CONSTEXPR
#else
PRAGMA_MESSAGE("CONSTEXPR defined!")
#endif // defined(COMPAT_CONSTEXPR) && !defined(CONSTEXPR)

#if defined(COMPAT_DELETED_FUNCTION) && !defined(DELETED_FUNCTION)
#  define DELETED_FUNCTION COMPAT_DELETED_FUNCTION
#else
PRAGMA_MESSAGE("DELETED_FUNCTION defined!")
#endif // defined(COMPAT_DELETED_FUNCTION) && !defined(DELETED_FUNCTION)

#if defined(COMPAT_EXTERN_TEMPLATE) && !defined(EXTERN_TEMPLATE)
#  define EXTERN_TEMPLATE COMPAT_EXTERN_TEMPLATE
#else
PRAGMA_MESSAGE("EXTERN_TEMPLATE defined!")
#endif // defined(COMPAT_EXTERN_TEMPLATE) && !defined(EXTERN_TEMPLATE)

#if defined(COMPAT_FINAL) && !defined(FINAL)
#  define FINAL COMPAT_FINAL
#else
PRAGMA_MESSAGE("FINAL defined!")
#endif // defined(COMPAT_FINAL) && !defined(FINAL)

#if defined(COMPAT_NOEXCEPT) && !defined(NOEXCEPT)
#  define NOEXCEPT COMPAT_NOEXCEPT
#else
PRAGMA_MESSAGE("NOEXCEPT defined!")
#endif // defined(COMPAT_NOEXCEPT) && !defined(NOEXCEPT)

#if defined(COMPAT_NOEXCEPT_EXPR) && !defined(NOEXCEPT_EXPR)
#  define NOEXCEPT_EXPR COMPAT_NOEXCEPT_EXPR
#else
PRAGMA_MESSAGE("NOEXCEPT_EXPR defined!")
#endif // defined(COMPAT_NOEXCEPT_EXPR) && !defined(NOEXCEPT_EXPR)

#if defined(COMPAT_NULLPTR) && !defined(NULLPTR)
#  define NULLPTR COMPAT_NULLPTR
#else
PRAGMA_MESSAGE("NULLPTR defined!")
#endif // defined(COMPAT_NULLPTR) && !defined(NULLPTR)

#if defined(COMPAT_OVERRIDE) && !defined(OVERRIDE)
#  define OVERRIDE COMPAT_OVERRIDE
#else
PRAGMA_MESSAGE("OVERRIDE defined!")
#endif // defined(COMPAT_OVERRIDE) && !defined(OVERRIDE)

#if defined(COMPAT_STATIC_ASSERT) && !defined(STATIC_ASSERT)
#  define STATIC_ASSERT COMPAT_STATIC_ASSERT
#else
PRAGMA_MESSAGE("STATIC_ASSERT defined!")
#endif // defined(COMPAT_STATIC_ASSERT) && !defined(STATIC_ASSERT)

#if defined(COMPAT_STATIC_ASSERT_MSG) && !defined(STATIC_ASSERT_MSG)
#  define STATIC_ASSERT_MSG COMPAT_STATIC_ASSERT_MSG
#else
PRAGMA_MESSAGE("STATIC_ASSERT_MSG defined!")
#endif // defined(COMPAT_STATIC_ASSERT_MSG) && !defined(STATIC_ASSERT_MSG)

#if defined(COMPAT_THREAD_LOCAL) && !defined(THREAD_LOCAL)
#  define THREAD_LOCAL COMPAT_THREAD_LOCAL
#else
PRAGMA_MESSAGE("THREAD_LOCAL defined!")
#endif // defined(COMPAT_THREAD_LOCAL) && !defined(THREAD_LOCAL)

#if defined(COMPAT_STRONG_ENUM) && !defined(STRONG_ENUM)
#  define STRONG_ENUM COMPAT_STRONG_ENUM
#else
PRAGMA_MESSAGE("STRONG_ENUM defined!")
#endif // defined(COMPAT_STRONG_ENUM) && !defined(STRONG_ENUM)

#endif // !COMPILER_DETECTION_SHORT_HPP
