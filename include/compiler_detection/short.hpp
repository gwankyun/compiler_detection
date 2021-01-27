#pragma once
#ifndef COMPILER_DETECTION_SHORT_HPP
#define COMPILER_DETECTION_SHORT_HPP

#include "../compiler_detection.hpp"

#if defined(COMPAT_ALIGNAS) && !defined(ALIGNAS)
#  define ALIGNAS COMPAT_ALIGNAS
#endif // defined(COMPAT_ALIGNAS) && !defined(ALIGNAS)

#if defined(COMPAT_ALIGNOF) && !defined(ALIGNOF)
#  define ALIGNOF COMPAT_ALIGNOF
#endif // defined(COMPAT_ALIGNOF) && !defined(ALIGNOF)

#if defined(COMPAT_DEPRECATED) && !defined(DEPRECATED)
#  define DEPRECATED COMPAT_DEPRECATED
#endif // defined(COMPAT_DEPRECATED) && !defined(DEPRECATED)

#if defined(COMPAT_DEPRECATED_MSG) && !defined(DEPRECATED_MSG)
#  define DEPRECATED_MSG COMPAT_DEPRECATED_MSG
#endif // defined(COMPAT_DEPRECATED_MSG) && !defined(DEPRECATED_MSG)

#if defined(COMPAT_CONSTEXPR) && !defined(CONSTEXPR)
#  define CONSTEXPR COMPAT_CONSTEXPR
#endif // defined(COMPAT_CONSTEXPR) && !defined(CONSTEXPR)

#if defined(COMPAT_DELETED_FUNCTION) && !defined(DELETED_FUNCTION)
#  define DELETED_FUNCTION COMPAT_DELETED_FUNCTION
#endif // defined(COMPAT_DELETED_FUNCTION) && !defined(DELETED_FUNCTION)

#if defined(COMPAT_EXTERN_TEMPLATE) && !defined(EXTERN_TEMPLATE)
#  define EXTERN_TEMPLATE COMPAT_EXTERN_TEMPLATE
#endif // defined(COMPAT_EXTERN_TEMPLATE) && !defined(EXTERN_TEMPLATE)

#if defined(COMPAT_FINAL) && !defined(FINAL)
#  define FINAL COMPAT_FINAL
#endif // defined(COMPAT_FINAL) && !defined(FINAL)

#if defined(COMPAT_NOEXCEPT) && !defined(NOEXCEPT)
#  define NOEXCEPT COMPAT_NOEXCEPT
#endif // defined(COMPAT_NOEXCEPT) && !defined(NOEXCEPT)

#if defined(COMPAT_NOEXCEPT_EXPR) && !defined(NOEXCEPT_EXPR)
#  define NOEXCEPT_EXPR COMPAT_NOEXCEPT_EXPR
#endif // defined(COMPAT_NOEXCEPT_EXPR) && !defined(NOEXCEPT_EXPR)

#if defined(COMPAT_NULLPTR) && !defined(NULLPTR)
#  define NULLPTR COMPAT_NULLPTR
#endif // defined(COMPAT_NULLPTR) && !defined(NULLPTR)

#if defined(COMPAT_OVERRIDE) && !defined(OVERRIDE)
#  define OVERRIDE COMPAT_OVERRIDE
#endif // defined(COMPAT_OVERRIDE) && !defined(OVERRIDE)

#if defined(COMPAT_STATIC_ASSERT) && !defined(STATIC_ASSERT)
#  define STATIC_ASSERT COMPAT_STATIC_ASSERT
#endif // defined(COMPAT_STATIC_ASSERT) && !defined(STATIC_ASSERT)

#if defined(COMPAT_STATIC_ASSERT_MSG) && !defined(STATIC_ASSERT_MSG)
#  define STATIC_ASSERT_MSG COMPAT_STATIC_ASSERT_MSG
#endif // defined(COMPAT_STATIC_ASSERT_MSG) && !defined(STATIC_ASSERT_MSG)

#if defined(COMPAT_THREAD_LOCAL) && !defined(THREAD_LOCAL)
#  define THREAD_LOCAL COMPAT_THREAD_LOCAL
#endif // defined(COMPAT_THREAD_LOCAL) && !defined(THREAD_LOCAL)

#if defined(COMPAT_STRONG_ENUM) && !defined(STRONG_ENUM)
#  define STRONG_ENUM COMPAT_STRONG_ENUM
#endif // defined(COMPAT_STRONG_ENUM) && !defined(STRONG_ENUM)

#endif // !COMPILER_DETECTION_SHORT_HPP
