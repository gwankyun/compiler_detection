#ifndef COMPILER_DETECTION_HPP
#define COMPILER_DETECTION_HPP
#include "compiler_detection/compiler_detection.h"

#ifndef COMPAT_STRONG_ENUM
#  if COMPAT_COMPILER_CXX_STRONG_ENUMS
#    define COMPAT_STRONG_ENUM(c) c
#  else
#    define COMPAT_STRONG_ENUM(c) c::Enum
#  endif // COMPAT_COMPILER_CXX_STRONG_ENUMS
#endif // !COMPAT_STRONG_ENUM

#endif // !COMPILER_DETECTION_HPP
