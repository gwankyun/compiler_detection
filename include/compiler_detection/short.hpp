#pragma once
#ifndef COMPILER_DETECTION_SHORT_HPP
#define COMPILER_DETECTION_SHORT_HPP

#include "../compiler_detection.hpp"

#if defined(FEATURE_ALIGNAS) && !defined(ALIGNAS)
#  define ALIGNAS FEATURE_ALIGNAS
#endif // defined(FEATURE_ALIGNAS) && !defined(ALIGNAS)

#if defined(FEATURE_ALIGNOF) && !defined(ALIGNOF)
#  define ALIGNOF FEATURE_ALIGNOF
#endif // defined(FEATURE_ALIGNOF) && !defined(ALIGNOF)

#if defined(FEATURE_DEPRECATED) && !defined(DEPRECATED)
#  define DEPRECATED FEATURE_DEPRECATED
#endif // defined(FEATURE_DEPRECATED) && !defined(DEPRECATED)

#if defined(FEATURE_DEPRECATED_MSG) && !defined(DEPRECATED_MSG)
#  define DEPRECATED_MSG FEATURE_DEPRECATED_MSG
#endif // defined(FEATURE_DEPRECATED_MSG) && !defined(DEPRECATED_MSG)

#if defined(FEATURE_CONSTEXPR) && !defined(CONSTEXPR)
#  define CONSTEXPR FEATURE_CONSTEXPR
#endif // defined(FEATURE_CONSTEXPR) && !defined(CONSTEXPR)

#if defined(FEATURE_DELETED_FUNCTION) && !defined(DELETED_FUNCTION)
#  define DELETED_FUNCTION FEATURE_DELETED_FUNCTION
#endif // defined(FEATURE_DELETED_FUNCTION) && !defined(DELETED_FUNCTION)

#if defined(FEATURE_EXTERN_TEMPLATE) && !defined(EXTERN_TEMPLATE)
#  define EXTERN_TEMPLATE FEATURE_EXTERN_TEMPLATE
#endif // defined(FEATURE_EXTERN_TEMPLATE) && !defined(EXTERN_TEMPLATE)

#if defined(FEATURE_FINAL) && !defined(FINAL)
#  define FINAL FEATURE_FINAL
#endif // defined(FEATURE_FINAL) && !defined(FINAL)

#if defined(FEATURE_NOEXCEPT) && !defined(NOEXCEPT)
#  define NOEXCEPT FEATURE_NOEXCEPT
#endif // defined(FEATURE_NOEXCEPT) && !defined(NOEXCEPT)

#if defined(FEATURE_NOEXCEPT_EXPR) && !defined(NOEXCEPT_EXPR)
#  define NOEXCEPT_EXPR FEATURE_NOEXCEPT_EXPR
#endif // defined(FEATURE_NOEXCEPT_EXPR) && !defined(NOEXCEPT_EXPR)

#if defined(FEATURE_NULLPTR) && !defined(NULLPTR)
#  define NULLPTR FEATURE_NULLPTR
#endif // defined(FEATURE_NULLPTR) && !defined(NULLPTR)

#if defined(FEATURE_OVERRIDE) && !defined(OVERRIDE)
#  define OVERRIDE FEATURE_OVERRIDE
#endif // defined(FEATURE_OVERRIDE) && !defined(OVERRIDE)

#if defined(FEATURE_STATIC_ASSERT) && !defined(STATIC_ASSERT)
#  define STATIC_ASSERT FEATURE_STATIC_ASSERT
#endif // defined(FEATURE_STATIC_ASSERT) && !defined(STATIC_ASSERT)

#if defined(FEATURE_STATIC_ASSERT_MSG) && !defined(STATIC_ASSERT_MSG)
#  define STATIC_ASSERT_MSG FEATURE_STATIC_ASSERT_MSG
#endif // defined(FEATURE_STATIC_ASSERT_MSG) && !defined(STATIC_ASSERT_MSG)

#if defined(FEATURE_THREAD_LOCAL) && !defined(THREAD_LOCAL)
#  define THREAD_LOCAL FEATURE_THREAD_LOCAL
#endif // defined(FEATURE_THREAD_LOCAL) && !defined(THREAD_LOCAL)

#endif // !COMPILER_DETECTION_SHORT_HPP

