
// This is a generated file. Do not edit!

#ifndef COMPAT_COMPILER_DETECTION_H
#define COMPAT_COMPILER_DETECTION_H

#define COMPAT_DEC(X) (X)
#define COMPAT_HEX(X) ( \
    ((X)>>28 & 0xF) * 10000000 + \
    ((X)>>24 & 0xF) *  1000000 + \
    ((X)>>20 & 0xF) *   100000 + \
    ((X)>>16 & 0xF) *    10000 + \
    ((X)>>12 & 0xF) *     1000 + \
    ((X)>>8  & 0xF) *      100 + \
    ((X)>>4  & 0xF) *       10 + \
    ((X)     & 0xF) \
    )

#ifdef __cplusplus
# define COMPAT_COMPILER_IS_Comeau 0
# define COMPAT_COMPILER_IS_Intel 0
# define COMPAT_COMPILER_IS_IntelLLVM 0
# define COMPAT_COMPILER_IS_PathScale 0
# define COMPAT_COMPILER_IS_Embarcadero 0
# define COMPAT_COMPILER_IS_Borland 0
# define COMPAT_COMPILER_IS_Watcom 0
# define COMPAT_COMPILER_IS_OpenWatcom 0
# define COMPAT_COMPILER_IS_SunPro 0
# define COMPAT_COMPILER_IS_HP 0
# define COMPAT_COMPILER_IS_Compaq 0
# define COMPAT_COMPILER_IS_zOS 0
# define COMPAT_COMPILER_IS_XLClang 0
# define COMPAT_COMPILER_IS_XL 0
# define COMPAT_COMPILER_IS_VisualAge 0
# define COMPAT_COMPILER_IS_NVHPC 0
# define COMPAT_COMPILER_IS_PGI 0
# define COMPAT_COMPILER_IS_Cray 0
# define COMPAT_COMPILER_IS_TI 0
# define COMPAT_COMPILER_IS_Fujitsu 0
# define COMPAT_COMPILER_IS_GHS 0
# define COMPAT_COMPILER_IS_SCO 0
# define COMPAT_COMPILER_IS_ARMCC 0
# define COMPAT_COMPILER_IS_AppleClang 0
# define COMPAT_COMPILER_IS_ARMClang 0
# define COMPAT_COMPILER_IS_Clang 0
# define COMPAT_COMPILER_IS_GNU 0
# define COMPAT_COMPILER_IS_MSVC 0
# define COMPAT_COMPILER_IS_ADSP 0
# define COMPAT_COMPILER_IS_IAR 0
# define COMPAT_COMPILER_IS_MIPSpro 0

#if defined(__COMO__)
# undef COMPAT_COMPILER_IS_Comeau
# define COMPAT_COMPILER_IS_Comeau 1

#elif defined(__INTEL_COMPILER) || defined(__ICC)
# undef COMPAT_COMPILER_IS_Intel
# define COMPAT_COMPILER_IS_Intel 1

#elif (defined(__clang__) && defined(__INTEL_CLANG_COMPILER)) || defined(__INTEL_LLVM_COMPILER)
# undef COMPAT_COMPILER_IS_IntelLLVM
# define COMPAT_COMPILER_IS_IntelLLVM 1

#elif defined(__PATHCC__)
# undef COMPAT_COMPILER_IS_PathScale
# define COMPAT_COMPILER_IS_PathScale 1

#elif defined(__BORLANDC__) && defined(__CODEGEARC_VERSION__)
# undef COMPAT_COMPILER_IS_Embarcadero
# define COMPAT_COMPILER_IS_Embarcadero 1

#elif defined(__BORLANDC__)
# undef COMPAT_COMPILER_IS_Borland
# define COMPAT_COMPILER_IS_Borland 1

#elif defined(__WATCOMC__) && __WATCOMC__ < 1200
# undef COMPAT_COMPILER_IS_Watcom
# define COMPAT_COMPILER_IS_Watcom 1

#elif defined(__WATCOMC__)
# undef COMPAT_COMPILER_IS_OpenWatcom
# define COMPAT_COMPILER_IS_OpenWatcom 1

#elif defined(__SUNPRO_CC)
# undef COMPAT_COMPILER_IS_SunPro
# define COMPAT_COMPILER_IS_SunPro 1

#elif defined(__HP_aCC)
# undef COMPAT_COMPILER_IS_HP
# define COMPAT_COMPILER_IS_HP 1

#elif defined(__DECCXX)
# undef COMPAT_COMPILER_IS_Compaq
# define COMPAT_COMPILER_IS_Compaq 1

#elif defined(__IBMCPP__) && defined(__COMPILER_VER__)
# undef COMPAT_COMPILER_IS_zOS
# define COMPAT_COMPILER_IS_zOS 1

#elif defined(__ibmxl__) && defined(__clang__)
# undef COMPAT_COMPILER_IS_XLClang
# define COMPAT_COMPILER_IS_XLClang 1

#elif defined(__IBMCPP__) && !defined(__COMPILER_VER__) && __IBMCPP__ >= 800
# undef COMPAT_COMPILER_IS_XL
# define COMPAT_COMPILER_IS_XL 1

#elif defined(__IBMCPP__) && !defined(__COMPILER_VER__) && __IBMCPP__ < 800
# undef COMPAT_COMPILER_IS_VisualAge
# define COMPAT_COMPILER_IS_VisualAge 1

#elif defined(__NVCOMPILER)
# undef COMPAT_COMPILER_IS_NVHPC
# define COMPAT_COMPILER_IS_NVHPC 1

#elif defined(__PGI)
# undef COMPAT_COMPILER_IS_PGI
# define COMPAT_COMPILER_IS_PGI 1

#elif defined(_CRAYC)
# undef COMPAT_COMPILER_IS_Cray
# define COMPAT_COMPILER_IS_Cray 1

#elif defined(__TI_COMPILER_VERSION__)
# undef COMPAT_COMPILER_IS_TI
# define COMPAT_COMPILER_IS_TI 1

#elif defined(__FUJITSU) || defined(__FCC_VERSION) || defined(__fcc_version)
# undef COMPAT_COMPILER_IS_Fujitsu
# define COMPAT_COMPILER_IS_Fujitsu 1

#elif defined(__ghs__)
# undef COMPAT_COMPILER_IS_GHS
# define COMPAT_COMPILER_IS_GHS 1

#elif defined(__SCO_VERSION__)
# undef COMPAT_COMPILER_IS_SCO
# define COMPAT_COMPILER_IS_SCO 1

#elif defined(__ARMCC_VERSION) && !defined(__clang__)
# undef COMPAT_COMPILER_IS_ARMCC
# define COMPAT_COMPILER_IS_ARMCC 1

#elif defined(__clang__) && defined(__apple_build_version__)
# undef COMPAT_COMPILER_IS_AppleClang
# define COMPAT_COMPILER_IS_AppleClang 1

#elif defined(__clang__) && defined(__ARMCOMPILER_VERSION)
# undef COMPAT_COMPILER_IS_ARMClang
# define COMPAT_COMPILER_IS_ARMClang 1

#elif defined(__clang__)
# undef COMPAT_COMPILER_IS_Clang
# define COMPAT_COMPILER_IS_Clang 1

#elif defined(__GNUC__) || defined(__GNUG__)
# undef COMPAT_COMPILER_IS_GNU
# define COMPAT_COMPILER_IS_GNU 1

#elif defined(_MSC_VER)
# undef COMPAT_COMPILER_IS_MSVC
# define COMPAT_COMPILER_IS_MSVC 1

#elif defined(__VISUALDSPVERSION__) || defined(__ADSPBLACKFIN__) || defined(__ADSPTS__) || defined(__ADSP21000__)
# undef COMPAT_COMPILER_IS_ADSP
# define COMPAT_COMPILER_IS_ADSP 1

#elif defined(__IAR_SYSTEMS_ICC__) || defined(__IAR_SYSTEMS_ICC)
# undef COMPAT_COMPILER_IS_IAR
# define COMPAT_COMPILER_IS_IAR 1


#endif

#  if COMPAT_COMPILER_IS_AppleClang

# define COMPAT_COMPILER_VERSION_MAJOR COMPAT_DEC(__clang_major__)
# define COMPAT_COMPILER_VERSION_MINOR COMPAT_DEC(__clang_minor__)
# define COMPAT_COMPILER_VERSION_PATCH COMPAT_DEC(__clang_patchlevel__)
# if defined(_MSC_VER)
   /* _MSC_VER = VVRR */
#  define COMPAT_SIMULATE_VERSION_MAJOR COMPAT_DEC(_MSC_VER / 100)
#  define COMPAT_SIMULATE_VERSION_MINOR COMPAT_DEC(_MSC_VER % 100)
# endif
# define COMPAT_COMPILER_VERSION_TWEAK COMPAT_DEC(__apple_build_version__)

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_aggregate_nsdmi)
#      define COMPAT_COMPILER_CXX_AGGREGATE_DEFAULT_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_AGGREGATE_DEFAULT_INITIALIZERS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_alias_templates)
#      define COMPAT_COMPILER_CXX_ALIAS_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_ALIAS_TEMPLATES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_alignas)
#      define COMPAT_COMPILER_CXX_ALIGNAS 1
#    else
#      define COMPAT_COMPILER_CXX_ALIGNAS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_alignas)
#      define COMPAT_COMPILER_CXX_ALIGNOF 1
#    else
#      define COMPAT_COMPILER_CXX_ALIGNOF 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_attributes)
#      define COMPAT_COMPILER_CXX_ATTRIBUTES 1
#    else
#      define COMPAT_COMPILER_CXX_ATTRIBUTES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 501 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED 1
#    else
#      define COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_auto_type)
#      define COMPAT_COMPILER_CXX_AUTO_TYPE 1
#    else
#      define COMPAT_COMPILER_CXX_AUTO_TYPE 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_binary_literals)
#      define COMPAT_COMPILER_CXX_BINARY_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_BINARY_LITERALS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_constexpr)
#      define COMPAT_COMPILER_CXX_CONSTEXPR 1
#    else
#      define COMPAT_COMPILER_CXX_CONSTEXPR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_contextual_conversions)
#      define COMPAT_COMPILER_CXX_CONTEXTUAL_CONVERSIONS 1
#    else
#      define COMPAT_COMPILER_CXX_CONTEXTUAL_CONVERSIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_decltype_incomplete_return_types)
#      define COMPAT_COMPILER_CXX_DECLTYPE_INCOMPLETE_RETURN_TYPES 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE_INCOMPLETE_RETURN_TYPES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_decltype)
#      define COMPAT_COMPILER_CXX_DECLTYPE 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 501 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_DECLTYPE_AUTO 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE_AUTO 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_default_function_template_args)
#      define COMPAT_COMPILER_CXX_DEFAULT_FUNCTION_TEMPLATE_ARGS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULT_FUNCTION_TEMPLATE_ARGS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_defaulted_functions)
#      define COMPAT_COMPILER_CXX_DEFAULTED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULTED_FUNCTIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_defaulted_functions)
#      define COMPAT_COMPILER_CXX_DEFAULTED_MOVE_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULTED_MOVE_INITIALIZERS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_delegating_constructors)
#      define COMPAT_COMPILER_CXX_DELEGATING_CONSTRUCTORS 1
#    else
#      define COMPAT_COMPILER_CXX_DELEGATING_CONSTRUCTORS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_deleted_functions)
#      define COMPAT_COMPILER_CXX_DELETED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_DELETED_FUNCTIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 501 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_DIGIT_SEPARATORS 1
#    else
#      define COMPAT_COMPILER_CXX_DIGIT_SEPARATORS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_ENUM_FORWARD_DECLARATIONS 1
#    else
#      define COMPAT_COMPILER_CXX_ENUM_FORWARD_DECLARATIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_explicit_conversions)
#      define COMPAT_COMPILER_CXX_EXPLICIT_CONVERSIONS 1
#    else
#      define COMPAT_COMPILER_CXX_EXPLICIT_CONVERSIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_EXTENDED_FRIEND_DECLARATIONS 1
#    else
#      define COMPAT_COMPILER_CXX_EXTENDED_FRIEND_DECLARATIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_EXTERN_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_EXTERN_TEMPLATES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_override_control)
#      define COMPAT_COMPILER_CXX_FINAL 1
#    else
#      define COMPAT_COMPILER_CXX_FINAL 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_FUNC_IDENTIFIER 1
#    else
#      define COMPAT_COMPILER_CXX_FUNC_IDENTIFIER 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_generalized_initializers)
#      define COMPAT_COMPILER_CXX_GENERALIZED_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_GENERALIZED_INITIALIZERS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 501 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_GENERIC_LAMBDAS 1
#    else
#      define COMPAT_COMPILER_CXX_GENERIC_LAMBDAS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_inheriting_constructors)
#      define COMPAT_COMPILER_CXX_INHERITING_CONSTRUCTORS 1
#    else
#      define COMPAT_COMPILER_CXX_INHERITING_CONSTRUCTORS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_INLINE_NAMESPACES 1
#    else
#      define COMPAT_COMPILER_CXX_INLINE_NAMESPACES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_lambdas)
#      define COMPAT_COMPILER_CXX_LAMBDAS 1
#    else
#      define COMPAT_COMPILER_CXX_LAMBDAS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_init_captures)
#      define COMPAT_COMPILER_CXX_LAMBDA_INIT_CAPTURES 1
#    else
#      define COMPAT_COMPILER_CXX_LAMBDA_INIT_CAPTURES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_local_type_template_args)
#      define COMPAT_COMPILER_CXX_LOCAL_TYPE_TEMPLATE_ARGS 1
#    else
#      define COMPAT_COMPILER_CXX_LOCAL_TYPE_TEMPLATE_ARGS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_LONG_LONG_TYPE 1
#    else
#      define COMPAT_COMPILER_CXX_LONG_LONG_TYPE 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_noexcept)
#      define COMPAT_COMPILER_CXX_NOEXCEPT 1
#    else
#      define COMPAT_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_nonstatic_member_init)
#      define COMPAT_COMPILER_CXX_NONSTATIC_MEMBER_INIT 1
#    else
#      define COMPAT_COMPILER_CXX_NONSTATIC_MEMBER_INIT 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_nullptr)
#      define COMPAT_COMPILER_CXX_NULLPTR 1
#    else
#      define COMPAT_COMPILER_CXX_NULLPTR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_override_control)
#      define COMPAT_COMPILER_CXX_OVERRIDE 1
#    else
#      define COMPAT_COMPILER_CXX_OVERRIDE 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_range_for)
#      define COMPAT_COMPILER_CXX_RANGE_FOR 1
#    else
#      define COMPAT_COMPILER_CXX_RANGE_FOR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_raw_string_literals)
#      define COMPAT_COMPILER_CXX_RAW_STRING_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_RAW_STRING_LITERALS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_reference_qualified_functions)
#      define COMPAT_COMPILER_CXX_REFERENCE_QUALIFIED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_REFERENCE_QUALIFIED_FUNCTIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_relaxed_constexpr)
#      define COMPAT_COMPILER_CXX_RELAXED_CONSTEXPR 1
#    else
#      define COMPAT_COMPILER_CXX_RELAXED_CONSTEXPR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_return_type_deduction)
#      define COMPAT_COMPILER_CXX_RETURN_TYPE_DEDUCTION 1
#    else
#      define COMPAT_COMPILER_CXX_RETURN_TYPE_DEDUCTION 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_RIGHT_ANGLE_BRACKETS 1
#    else
#      define COMPAT_COMPILER_CXX_RIGHT_ANGLE_BRACKETS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_rvalue_references)
#      define COMPAT_COMPILER_CXX_RVALUE_REFERENCES 1
#    else
#      define COMPAT_COMPILER_CXX_RVALUE_REFERENCES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define COMPAT_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_static_assert)
#      define COMPAT_COMPILER_CXX_STATIC_ASSERT 1
#    else
#      define COMPAT_COMPILER_CXX_STATIC_ASSERT 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_strong_enums)
#      define COMPAT_COMPILER_CXX_STRONG_ENUMS 1
#    else
#      define COMPAT_COMPILER_CXX_STRONG_ENUMS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_thread_local)
#      define COMPAT_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define COMPAT_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_trailing_return)
#      define COMPAT_COMPILER_CXX_TRAILING_RETURN_TYPES 1
#    else
#      define COMPAT_COMPILER_CXX_TRAILING_RETURN_TYPES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_unicode_literals)
#      define COMPAT_COMPILER_CXX_UNICODE_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_UNICODE_LITERALS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_generalized_initializers)
#      define COMPAT_COMPILER_CXX_UNIFORM_INITIALIZATION 1
#    else
#      define COMPAT_COMPILER_CXX_UNIFORM_INITIALIZATION 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_unrestricted_unions)
#      define COMPAT_COMPILER_CXX_UNRESTRICTED_UNIONS 1
#    else
#      define COMPAT_COMPILER_CXX_UNRESTRICTED_UNIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_user_literals)
#      define COMPAT_COMPILER_CXX_USER_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_USER_LITERALS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_variable_templates)
#      define COMPAT_COMPILER_CXX_VARIABLE_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_VARIABLE_TEMPLATES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_VARIADIC_MACROS 1
#    else
#      define COMPAT_COMPILER_CXX_VARIADIC_MACROS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __has_feature(cxx_variadic_templates)
#      define COMPAT_COMPILER_CXX_VARIADIC_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_VARIADIC_TEMPLATES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 400 && __cplusplus >= 199711L
#      define COMPAT_COMPILER_CXX_TEMPLATE_TEMPLATE_PARAMETERS 1
#    else
#      define COMPAT_COMPILER_CXX_TEMPLATE_TEMPLATE_PARAMETERS 0
#    endif

#  elif COMPAT_COMPILER_IS_Clang

# define COMPAT_COMPILER_VERSION_MAJOR COMPAT_DEC(__clang_major__)
# define COMPAT_COMPILER_VERSION_MINOR COMPAT_DEC(__clang_minor__)
# define COMPAT_COMPILER_VERSION_PATCH COMPAT_DEC(__clang_patchlevel__)
# if defined(_MSC_VER)
   /* _MSC_VER = VVRR */
#  define COMPAT_SIMULATE_VERSION_MAJOR COMPAT_DEC(_MSC_VER / 100)
#  define COMPAT_SIMULATE_VERSION_MINOR COMPAT_DEC(_MSC_VER % 100)
# endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_aggregate_nsdmi)
#      define COMPAT_COMPILER_CXX_AGGREGATE_DEFAULT_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_AGGREGATE_DEFAULT_INITIALIZERS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_alias_templates)
#      define COMPAT_COMPILER_CXX_ALIAS_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_ALIAS_TEMPLATES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_alignas)
#      define COMPAT_COMPILER_CXX_ALIGNAS 1
#    else
#      define COMPAT_COMPILER_CXX_ALIGNAS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_alignas)
#      define COMPAT_COMPILER_CXX_ALIGNOF 1
#    else
#      define COMPAT_COMPILER_CXX_ALIGNOF 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_attributes)
#      define COMPAT_COMPILER_CXX_ATTRIBUTES 1
#    else
#      define COMPAT_COMPILER_CXX_ATTRIBUTES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED 1
#    else
#      define COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_auto_type)
#      define COMPAT_COMPILER_CXX_AUTO_TYPE 1
#    else
#      define COMPAT_COMPILER_CXX_AUTO_TYPE 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_binary_literals)
#      define COMPAT_COMPILER_CXX_BINARY_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_BINARY_LITERALS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_constexpr)
#      define COMPAT_COMPILER_CXX_CONSTEXPR 1
#    else
#      define COMPAT_COMPILER_CXX_CONSTEXPR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_contextual_conversions)
#      define COMPAT_COMPILER_CXX_CONTEXTUAL_CONVERSIONS 1
#    else
#      define COMPAT_COMPILER_CXX_CONTEXTUAL_CONVERSIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_decltype_incomplete_return_types)
#      define COMPAT_COMPILER_CXX_DECLTYPE_INCOMPLETE_RETURN_TYPES 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE_INCOMPLETE_RETURN_TYPES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_decltype)
#      define COMPAT_COMPILER_CXX_DECLTYPE 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_DECLTYPE_AUTO 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE_AUTO 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_default_function_template_args)
#      define COMPAT_COMPILER_CXX_DEFAULT_FUNCTION_TEMPLATE_ARGS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULT_FUNCTION_TEMPLATE_ARGS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_defaulted_functions)
#      define COMPAT_COMPILER_CXX_DEFAULTED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULTED_FUNCTIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_defaulted_functions)
#      define COMPAT_COMPILER_CXX_DEFAULTED_MOVE_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULTED_MOVE_INITIALIZERS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_delegating_constructors)
#      define COMPAT_COMPILER_CXX_DELEGATING_CONSTRUCTORS 1
#    else
#      define COMPAT_COMPILER_CXX_DELEGATING_CONSTRUCTORS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_deleted_functions)
#      define COMPAT_COMPILER_CXX_DELETED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_DELETED_FUNCTIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_DIGIT_SEPARATORS 1
#    else
#      define COMPAT_COMPILER_CXX_DIGIT_SEPARATORS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_ENUM_FORWARD_DECLARATIONS 1
#    else
#      define COMPAT_COMPILER_CXX_ENUM_FORWARD_DECLARATIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_explicit_conversions)
#      define COMPAT_COMPILER_CXX_EXPLICIT_CONVERSIONS 1
#    else
#      define COMPAT_COMPILER_CXX_EXPLICIT_CONVERSIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_EXTENDED_FRIEND_DECLARATIONS 1
#    else
#      define COMPAT_COMPILER_CXX_EXTENDED_FRIEND_DECLARATIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_EXTERN_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_EXTERN_TEMPLATES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_override_control)
#      define COMPAT_COMPILER_CXX_FINAL 1
#    else
#      define COMPAT_COMPILER_CXX_FINAL 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_FUNC_IDENTIFIER 1
#    else
#      define COMPAT_COMPILER_CXX_FUNC_IDENTIFIER 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_generalized_initializers)
#      define COMPAT_COMPILER_CXX_GENERALIZED_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_GENERALIZED_INITIALIZERS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_GENERIC_LAMBDAS 1
#    else
#      define COMPAT_COMPILER_CXX_GENERIC_LAMBDAS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_inheriting_constructors)
#      define COMPAT_COMPILER_CXX_INHERITING_CONSTRUCTORS 1
#    else
#      define COMPAT_COMPILER_CXX_INHERITING_CONSTRUCTORS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_INLINE_NAMESPACES 1
#    else
#      define COMPAT_COMPILER_CXX_INLINE_NAMESPACES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_lambdas)
#      define COMPAT_COMPILER_CXX_LAMBDAS 1
#    else
#      define COMPAT_COMPILER_CXX_LAMBDAS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_init_captures)
#      define COMPAT_COMPILER_CXX_LAMBDA_INIT_CAPTURES 1
#    else
#      define COMPAT_COMPILER_CXX_LAMBDA_INIT_CAPTURES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_local_type_template_args)
#      define COMPAT_COMPILER_CXX_LOCAL_TYPE_TEMPLATE_ARGS 1
#    else
#      define COMPAT_COMPILER_CXX_LOCAL_TYPE_TEMPLATE_ARGS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_LONG_LONG_TYPE 1
#    else
#      define COMPAT_COMPILER_CXX_LONG_LONG_TYPE 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_noexcept)
#      define COMPAT_COMPILER_CXX_NOEXCEPT 1
#    else
#      define COMPAT_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_nonstatic_member_init)
#      define COMPAT_COMPILER_CXX_NONSTATIC_MEMBER_INIT 1
#    else
#      define COMPAT_COMPILER_CXX_NONSTATIC_MEMBER_INIT 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_nullptr)
#      define COMPAT_COMPILER_CXX_NULLPTR 1
#    else
#      define COMPAT_COMPILER_CXX_NULLPTR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_override_control)
#      define COMPAT_COMPILER_CXX_OVERRIDE 1
#    else
#      define COMPAT_COMPILER_CXX_OVERRIDE 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_range_for)
#      define COMPAT_COMPILER_CXX_RANGE_FOR 1
#    else
#      define COMPAT_COMPILER_CXX_RANGE_FOR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_raw_string_literals)
#      define COMPAT_COMPILER_CXX_RAW_STRING_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_RAW_STRING_LITERALS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_reference_qualified_functions)
#      define COMPAT_COMPILER_CXX_REFERENCE_QUALIFIED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_REFERENCE_QUALIFIED_FUNCTIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_relaxed_constexpr)
#      define COMPAT_COMPILER_CXX_RELAXED_CONSTEXPR 1
#    else
#      define COMPAT_COMPILER_CXX_RELAXED_CONSTEXPR 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_return_type_deduction)
#      define COMPAT_COMPILER_CXX_RETURN_TYPE_DEDUCTION 1
#    else
#      define COMPAT_COMPILER_CXX_RETURN_TYPE_DEDUCTION 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_RIGHT_ANGLE_BRACKETS 1
#    else
#      define COMPAT_COMPILER_CXX_RIGHT_ANGLE_BRACKETS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_rvalue_references)
#      define COMPAT_COMPILER_CXX_RVALUE_REFERENCES 1
#    else
#      define COMPAT_COMPILER_CXX_RVALUE_REFERENCES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define COMPAT_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_static_assert)
#      define COMPAT_COMPILER_CXX_STATIC_ASSERT 1
#    else
#      define COMPAT_COMPILER_CXX_STATIC_ASSERT 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_strong_enums)
#      define COMPAT_COMPILER_CXX_STRONG_ENUMS 1
#    else
#      define COMPAT_COMPILER_CXX_STRONG_ENUMS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_thread_local)
#      define COMPAT_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define COMPAT_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_trailing_return)
#      define COMPAT_COMPILER_CXX_TRAILING_RETURN_TYPES 1
#    else
#      define COMPAT_COMPILER_CXX_TRAILING_RETURN_TYPES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_unicode_literals)
#      define COMPAT_COMPILER_CXX_UNICODE_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_UNICODE_LITERALS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_generalized_initializers)
#      define COMPAT_COMPILER_CXX_UNIFORM_INITIALIZATION 1
#    else
#      define COMPAT_COMPILER_CXX_UNIFORM_INITIALIZATION 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_unrestricted_unions)
#      define COMPAT_COMPILER_CXX_UNRESTRICTED_UNIONS 1
#    else
#      define COMPAT_COMPILER_CXX_UNRESTRICTED_UNIONS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_user_literals)
#      define COMPAT_COMPILER_CXX_USER_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_USER_LITERALS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_variable_templates)
#      define COMPAT_COMPILER_CXX_VARIABLE_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_VARIABLE_TEMPLATES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_VARIADIC_MACROS 1
#    else
#      define COMPAT_COMPILER_CXX_VARIADIC_MACROS 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __has_feature(cxx_variadic_templates)
#      define COMPAT_COMPILER_CXX_VARIADIC_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_VARIADIC_TEMPLATES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 301 && __cplusplus >= 199711L
#      define COMPAT_COMPILER_CXX_TEMPLATE_TEMPLATE_PARAMETERS 1
#    else
#      define COMPAT_COMPILER_CXX_TEMPLATE_TEMPLATE_PARAMETERS 0
#    endif

#  elif COMPAT_COMPILER_IS_GNU

# if defined(__GNUC__)
#  define COMPAT_COMPILER_VERSION_MAJOR COMPAT_DEC(__GNUC__)
# else
#  define COMPAT_COMPILER_VERSION_MAJOR COMPAT_DEC(__GNUG__)
# endif
# if defined(__GNUC_MINOR__)
#  define COMPAT_COMPILER_VERSION_MINOR COMPAT_DEC(__GNUC_MINOR__)
# endif
# if defined(__GNUC_PATCHLEVEL__)
#  define COMPAT_COMPILER_VERSION_PATCH COMPAT_DEC(__GNUC_PATCHLEVEL__)
# endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 500 && __cplusplus >= 201402L
#      define COMPAT_COMPILER_CXX_AGGREGATE_DEFAULT_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_AGGREGATE_DEFAULT_INITIALIZERS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 407 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_ALIAS_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_ALIAS_TEMPLATES 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 408 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_ALIGNAS 1
#    else
#      define COMPAT_COMPILER_CXX_ALIGNAS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 408 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_ALIGNOF 1
#    else
#      define COMPAT_COMPILER_CXX_ALIGNOF 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 408 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_ATTRIBUTES 1
#    else
#      define COMPAT_COMPILER_CXX_ATTRIBUTES 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 409 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED 1
#    else
#      define COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_AUTO_TYPE 1
#    else
#      define COMPAT_COMPILER_CXX_AUTO_TYPE 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 409 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_BINARY_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_BINARY_LITERALS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_CONSTEXPR 1
#    else
#      define COMPAT_COMPILER_CXX_CONSTEXPR 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 409 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_CONTEXTUAL_CONVERSIONS 1
#    else
#      define COMPAT_COMPILER_CXX_CONTEXTUAL_CONVERSIONS 0
#    endif

#    if ((__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__) >= 40801) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_DECLTYPE_INCOMPLETE_RETURN_TYPES 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE_INCOMPLETE_RETURN_TYPES 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_DECLTYPE 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 409 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_DECLTYPE_AUTO 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE_AUTO 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_DEFAULT_FUNCTION_TEMPLATE_ARGS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULT_FUNCTION_TEMPLATE_ARGS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_DEFAULTED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULTED_FUNCTIONS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_DEFAULTED_MOVE_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULTED_MOVE_INITIALIZERS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 407 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_DELEGATING_CONSTRUCTORS 1
#    else
#      define COMPAT_COMPILER_CXX_DELEGATING_CONSTRUCTORS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_DELETED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_DELETED_FUNCTIONS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 409 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_DIGIT_SEPARATORS 1
#    else
#      define COMPAT_COMPILER_CXX_DIGIT_SEPARATORS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_ENUM_FORWARD_DECLARATIONS 1
#    else
#      define COMPAT_COMPILER_CXX_ENUM_FORWARD_DECLARATIONS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 405 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_EXPLICIT_CONVERSIONS 1
#    else
#      define COMPAT_COMPILER_CXX_EXPLICIT_CONVERSIONS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 407 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_EXTENDED_FRIEND_DECLARATIONS 1
#    else
#      define COMPAT_COMPILER_CXX_EXTENDED_FRIEND_DECLARATIONS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_EXTERN_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_EXTERN_TEMPLATES 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 407 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_FINAL 1
#    else
#      define COMPAT_COMPILER_CXX_FINAL 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_FUNC_IDENTIFIER 1
#    else
#      define COMPAT_COMPILER_CXX_FUNC_IDENTIFIER 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_GENERALIZED_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_GENERALIZED_INITIALIZERS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 409 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_GENERIC_LAMBDAS 1
#    else
#      define COMPAT_COMPILER_CXX_GENERIC_LAMBDAS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 408 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_INHERITING_CONSTRUCTORS 1
#    else
#      define COMPAT_COMPILER_CXX_INHERITING_CONSTRUCTORS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_INLINE_NAMESPACES 1
#    else
#      define COMPAT_COMPILER_CXX_INLINE_NAMESPACES 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 405 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_LAMBDAS 1
#    else
#      define COMPAT_COMPILER_CXX_LAMBDAS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 409 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_LAMBDA_INIT_CAPTURES 1
#    else
#      define COMPAT_COMPILER_CXX_LAMBDA_INIT_CAPTURES 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 405 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_LOCAL_TYPE_TEMPLATE_ARGS 1
#    else
#      define COMPAT_COMPILER_CXX_LOCAL_TYPE_TEMPLATE_ARGS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_LONG_LONG_TYPE 1
#    else
#      define COMPAT_COMPILER_CXX_LONG_LONG_TYPE 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_NOEXCEPT 1
#    else
#      define COMPAT_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 407 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_NONSTATIC_MEMBER_INIT 1
#    else
#      define COMPAT_COMPILER_CXX_NONSTATIC_MEMBER_INIT 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_NULLPTR 1
#    else
#      define COMPAT_COMPILER_CXX_NULLPTR 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 407 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_OVERRIDE 1
#    else
#      define COMPAT_COMPILER_CXX_OVERRIDE 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_RANGE_FOR 1
#    else
#      define COMPAT_COMPILER_CXX_RANGE_FOR 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 405 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_RAW_STRING_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_RAW_STRING_LITERALS 0
#    endif

#    if ((__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__) >= 40801) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_REFERENCE_QUALIFIED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_REFERENCE_QUALIFIED_FUNCTIONS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 500 && __cplusplus >= 201402L
#      define COMPAT_COMPILER_CXX_RELAXED_CONSTEXPR 1
#    else
#      define COMPAT_COMPILER_CXX_RELAXED_CONSTEXPR 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 409 && __cplusplus > 201103L
#      define COMPAT_COMPILER_CXX_RETURN_TYPE_DEDUCTION 1
#    else
#      define COMPAT_COMPILER_CXX_RETURN_TYPE_DEDUCTION 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_RIGHT_ANGLE_BRACKETS 1
#    else
#      define COMPAT_COMPILER_CXX_RIGHT_ANGLE_BRACKETS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_RVALUE_REFERENCES 1
#    else
#      define COMPAT_COMPILER_CXX_RVALUE_REFERENCES 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define COMPAT_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_STATIC_ASSERT 1
#    else
#      define COMPAT_COMPILER_CXX_STATIC_ASSERT 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_STRONG_ENUMS 1
#    else
#      define COMPAT_COMPILER_CXX_STRONG_ENUMS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 408 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define COMPAT_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_TRAILING_RETURN_TYPES 1
#    else
#      define COMPAT_COMPILER_CXX_TRAILING_RETURN_TYPES 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_UNICODE_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_UNICODE_LITERALS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_UNIFORM_INITIALIZATION 1
#    else
#      define COMPAT_COMPILER_CXX_UNIFORM_INITIALIZATION 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_UNRESTRICTED_UNIONS 1
#    else
#      define COMPAT_COMPILER_CXX_UNRESTRICTED_UNIONS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 407 && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_USER_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_USER_LITERALS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 500 && __cplusplus >= 201402L
#      define COMPAT_COMPILER_CXX_VARIABLE_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_VARIABLE_TEMPLATES 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_VARIADIC_MACROS 1
#    else
#      define COMPAT_COMPILER_CXX_VARIADIC_MACROS 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && (__cplusplus >= 201103L || (defined(__GXX_EXPERIMENTAL_CXX0X__) && __GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_VARIADIC_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_VARIADIC_TEMPLATES 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && __cplusplus
#      define COMPAT_COMPILER_CXX_TEMPLATE_TEMPLATE_PARAMETERS 1
#    else
#      define COMPAT_COMPILER_CXX_TEMPLATE_TEMPLATE_PARAMETERS 0
#    endif

#  elif COMPAT_COMPILER_IS_MSVC

  /* _MSC_VER = VVRR */
# define COMPAT_COMPILER_VERSION_MAJOR COMPAT_DEC(_MSC_VER / 100)
# define COMPAT_COMPILER_VERSION_MINOR COMPAT_DEC(_MSC_VER % 100)
# if defined(_MSC_FULL_VER)
#  if _MSC_VER >= 1400
    /* _MSC_FULL_VER = VVRRPPPPP */
#   define COMPAT_COMPILER_VERSION_PATCH COMPAT_DEC(_MSC_FULL_VER % 100000)
#  else
    /* _MSC_FULL_VER = VVRRPPPP */
#   define COMPAT_COMPILER_VERSION_PATCH COMPAT_DEC(_MSC_FULL_VER % 10000)
#  endif
# endif
# if defined(_MSC_BUILD)
#  define COMPAT_COMPILER_VERSION_TWEAK COMPAT_DEC(_MSC_BUILD)
# endif

#    if _MSC_FULL_VER >= 190024406
#      define COMPAT_COMPILER_CXX_AGGREGATE_DEFAULT_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_AGGREGATE_DEFAULT_INITIALIZERS 0
#    endif

#    if _MSC_VER >= 1800
#      define COMPAT_COMPILER_CXX_ALIAS_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_ALIAS_TEMPLATES 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_ALIGNAS 1
#    else
#      define COMPAT_COMPILER_CXX_ALIGNAS 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_ALIGNOF 1
#    else
#      define COMPAT_COMPILER_CXX_ALIGNOF 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_ATTRIBUTES 1
#    else
#      define COMPAT_COMPILER_CXX_ATTRIBUTES 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED 1
#    else
#      define COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_AUTO_TYPE 1
#    else
#      define COMPAT_COMPILER_CXX_AUTO_TYPE 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_BINARY_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_BINARY_LITERALS 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_CONSTEXPR 1
#    else
#      define COMPAT_COMPILER_CXX_CONSTEXPR 0
#    endif

#    if _MSC_VER >= 1800
#      define COMPAT_COMPILER_CXX_CONTEXTUAL_CONVERSIONS 1
#    else
#      define COMPAT_COMPILER_CXX_CONTEXTUAL_CONVERSIONS 0
#    endif

#    if _MSC_VER >= 1911
#      define COMPAT_COMPILER_CXX_DECLTYPE_INCOMPLETE_RETURN_TYPES 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE_INCOMPLETE_RETURN_TYPES 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_DECLTYPE 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_DECLTYPE_AUTO 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE_AUTO 0
#    endif

#    if _MSC_VER >= 1800
#      define COMPAT_COMPILER_CXX_DEFAULT_FUNCTION_TEMPLATE_ARGS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULT_FUNCTION_TEMPLATE_ARGS 0
#    endif

#    if _MSC_VER >= 1800
#      define COMPAT_COMPILER_CXX_DEFAULTED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULTED_FUNCTIONS 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_DEFAULTED_MOVE_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULTED_MOVE_INITIALIZERS 0
#    endif

#    if _MSC_VER >= 1800
#      define COMPAT_COMPILER_CXX_DELEGATING_CONSTRUCTORS 1
#    else
#      define COMPAT_COMPILER_CXX_DELEGATING_CONSTRUCTORS 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_DELETED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_DELETED_FUNCTIONS 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_DIGIT_SEPARATORS 1
#    else
#      define COMPAT_COMPILER_CXX_DIGIT_SEPARATORS 0
#    endif

#    if _MSC_VER >= 1700
#      define COMPAT_COMPILER_CXX_ENUM_FORWARD_DECLARATIONS 1
#    else
#      define COMPAT_COMPILER_CXX_ENUM_FORWARD_DECLARATIONS 0
#    endif

#    if _MSC_VER >= 1800
#      define COMPAT_COMPILER_CXX_EXPLICIT_CONVERSIONS 1
#    else
#      define COMPAT_COMPILER_CXX_EXPLICIT_CONVERSIONS 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_EXTENDED_FRIEND_DECLARATIONS 1
#    else
#      define COMPAT_COMPILER_CXX_EXTENDED_FRIEND_DECLARATIONS 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_EXTERN_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_EXTERN_TEMPLATES 0
#    endif

#    if _MSC_VER >= 1700
#      define COMPAT_COMPILER_CXX_FINAL 1
#    else
#      define COMPAT_COMPILER_CXX_FINAL 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_FUNC_IDENTIFIER 1
#    else
#      define COMPAT_COMPILER_CXX_FUNC_IDENTIFIER 0
#    endif

#    if _MSC_FULL_VER >= 180030723
#      define COMPAT_COMPILER_CXX_GENERALIZED_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_GENERALIZED_INITIALIZERS 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_GENERIC_LAMBDAS 1
#    else
#      define COMPAT_COMPILER_CXX_GENERIC_LAMBDAS 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_INHERITING_CONSTRUCTORS 1
#    else
#      define COMPAT_COMPILER_CXX_INHERITING_CONSTRUCTORS 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_INLINE_NAMESPACES 1
#    else
#      define COMPAT_COMPILER_CXX_INLINE_NAMESPACES 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_LAMBDAS 1
#    else
#      define COMPAT_COMPILER_CXX_LAMBDAS 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_LAMBDA_INIT_CAPTURES 1
#    else
#      define COMPAT_COMPILER_CXX_LAMBDA_INIT_CAPTURES 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_LOCAL_TYPE_TEMPLATE_ARGS 1
#    else
#      define COMPAT_COMPILER_CXX_LOCAL_TYPE_TEMPLATE_ARGS 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_LONG_LONG_TYPE 1
#    else
#      define COMPAT_COMPILER_CXX_LONG_LONG_TYPE 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_NOEXCEPT 1
#    else
#      define COMPAT_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_NONSTATIC_MEMBER_INIT 1
#    else
#      define COMPAT_COMPILER_CXX_NONSTATIC_MEMBER_INIT 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_NULLPTR 1
#    else
#      define COMPAT_COMPILER_CXX_NULLPTR 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_OVERRIDE 1
#    else
#      define COMPAT_COMPILER_CXX_OVERRIDE 0
#    endif

#    if _MSC_VER >= 1700
#      define COMPAT_COMPILER_CXX_RANGE_FOR 1
#    else
#      define COMPAT_COMPILER_CXX_RANGE_FOR 0
#    endif

#    if _MSC_VER >= 1800
#      define COMPAT_COMPILER_CXX_RAW_STRING_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_RAW_STRING_LITERALS 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_REFERENCE_QUALIFIED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_REFERENCE_QUALIFIED_FUNCTIONS 0
#    endif

#    if _MSC_VER >= 1911
#      define COMPAT_COMPILER_CXX_RELAXED_CONSTEXPR 1
#    else
#      define COMPAT_COMPILER_CXX_RELAXED_CONSTEXPR 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_RETURN_TYPE_DEDUCTION 1
#    else
#      define COMPAT_COMPILER_CXX_RETURN_TYPE_DEDUCTION 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_RIGHT_ANGLE_BRACKETS 1
#    else
#      define COMPAT_COMPILER_CXX_RIGHT_ANGLE_BRACKETS 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_RVALUE_REFERENCES 1
#    else
#      define COMPAT_COMPILER_CXX_RVALUE_REFERENCES 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define COMPAT_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_STATIC_ASSERT 1
#    else
#      define COMPAT_COMPILER_CXX_STATIC_ASSERT 0
#    endif

#    if _MSC_VER >= 1700
#      define COMPAT_COMPILER_CXX_STRONG_ENUMS 1
#    else
#      define COMPAT_COMPILER_CXX_STRONG_ENUMS 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define COMPAT_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_TRAILING_RETURN_TYPES 1
#    else
#      define COMPAT_COMPILER_CXX_TRAILING_RETURN_TYPES 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_UNICODE_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_UNICODE_LITERALS 0
#    endif

#    if _MSC_VER >= 1800
#      define COMPAT_COMPILER_CXX_UNIFORM_INITIALIZATION 1
#    else
#      define COMPAT_COMPILER_CXX_UNIFORM_INITIALIZATION 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_UNRESTRICTED_UNIONS 1
#    else
#      define COMPAT_COMPILER_CXX_UNRESTRICTED_UNIONS 0
#    endif

#    if _MSC_VER >= 1900
#      define COMPAT_COMPILER_CXX_USER_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_USER_LITERALS 0
#    endif

#    if _MSC_FULL_VER >= 190023918
#      define COMPAT_COMPILER_CXX_VARIABLE_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_VARIABLE_TEMPLATES 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_VARIADIC_MACROS 1
#    else
#      define COMPAT_COMPILER_CXX_VARIADIC_MACROS 0
#    endif

#    if _MSC_VER >= 1800
#      define COMPAT_COMPILER_CXX_VARIADIC_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_VARIADIC_TEMPLATES 0
#    endif

#    if _MSC_VER >= 1600
#      define COMPAT_COMPILER_CXX_TEMPLATE_TEMPLATE_PARAMETERS 1
#    else
#      define COMPAT_COMPILER_CXX_TEMPLATE_TEMPLATE_PARAMETERS 0
#    endif

#  elif COMPAT_COMPILER_IS_SunPro

# if __SUNPRO_CC >= 0x5100
   /* __SUNPRO_CC = 0xVRRP */
#  define COMPAT_COMPILER_VERSION_MAJOR COMPAT_HEX(__SUNPRO_CC>>12)
#  define COMPAT_COMPILER_VERSION_MINOR COMPAT_HEX(__SUNPRO_CC>>4 & 0xFF)
#  define COMPAT_COMPILER_VERSION_PATCH COMPAT_HEX(__SUNPRO_CC    & 0xF)
# else
   /* __SUNPRO_CC = 0xVRP */
#  define COMPAT_COMPILER_VERSION_MAJOR COMPAT_HEX(__SUNPRO_CC>>8)
#  define COMPAT_COMPILER_VERSION_MINOR COMPAT_HEX(__SUNPRO_CC>>4 & 0xF)
#  define COMPAT_COMPILER_VERSION_PATCH COMPAT_HEX(__SUNPRO_CC    & 0xF)
# endif

#    if (__SUNPRO_CC >= 0x5150) && __cplusplus >= 201402L
#      define COMPAT_COMPILER_CXX_AGGREGATE_DEFAULT_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_AGGREGATE_DEFAULT_INITIALIZERS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_ALIAS_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_ALIAS_TEMPLATES 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_ALIGNAS 1
#    else
#      define COMPAT_COMPILER_CXX_ALIGNAS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_ALIGNOF 1
#    else
#      define COMPAT_COMPILER_CXX_ALIGNOF 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_ATTRIBUTES 1
#    else
#      define COMPAT_COMPILER_CXX_ATTRIBUTES 0
#    endif

#    define COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED 0

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_AUTO_TYPE 1
#    else
#      define COMPAT_COMPILER_CXX_AUTO_TYPE 0
#    endif

#    if (__SUNPRO_CC >= 0x5140) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_BINARY_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_BINARY_LITERALS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_CONSTEXPR 1
#    else
#      define COMPAT_COMPILER_CXX_CONSTEXPR 0
#    endif

#    define COMPAT_COMPILER_CXX_CONTEXTUAL_CONVERSIONS 0

#    define COMPAT_COMPILER_CXX_DECLTYPE_INCOMPLETE_RETURN_TYPES 0

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_DECLTYPE 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE 0
#    endif

#    if (__SUNPRO_CC >= 0x5150) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_DECLTYPE_AUTO 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE_AUTO 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_DEFAULT_FUNCTION_TEMPLATE_ARGS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULT_FUNCTION_TEMPLATE_ARGS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_DEFAULTED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULTED_FUNCTIONS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_DEFAULTED_MOVE_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULTED_MOVE_INITIALIZERS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_DELEGATING_CONSTRUCTORS 1
#    else
#      define COMPAT_COMPILER_CXX_DELEGATING_CONSTRUCTORS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_DELETED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_DELETED_FUNCTIONS 0
#    endif

#    if (__SUNPRO_CC >= 0x5150) && __cplusplus >= 201402L
#      define COMPAT_COMPILER_CXX_DIGIT_SEPARATORS 1
#    else
#      define COMPAT_COMPILER_CXX_DIGIT_SEPARATORS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_ENUM_FORWARD_DECLARATIONS 1
#    else
#      define COMPAT_COMPILER_CXX_ENUM_FORWARD_DECLARATIONS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_EXPLICIT_CONVERSIONS 1
#    else
#      define COMPAT_COMPILER_CXX_EXPLICIT_CONVERSIONS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_EXTENDED_FRIEND_DECLARATIONS 1
#    else
#      define COMPAT_COMPILER_CXX_EXTENDED_FRIEND_DECLARATIONS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_EXTERN_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_EXTERN_TEMPLATES 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_FINAL 1
#    else
#      define COMPAT_COMPILER_CXX_FINAL 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_FUNC_IDENTIFIER 1
#    else
#      define COMPAT_COMPILER_CXX_FUNC_IDENTIFIER 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_GENERALIZED_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_GENERALIZED_INITIALIZERS 0
#    endif

#    if (__SUNPRO_CC >= 0x5150) && __cplusplus >= 201402L
#      define COMPAT_COMPILER_CXX_GENERIC_LAMBDAS 1
#    else
#      define COMPAT_COMPILER_CXX_GENERIC_LAMBDAS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_INHERITING_CONSTRUCTORS 1
#    else
#      define COMPAT_COMPILER_CXX_INHERITING_CONSTRUCTORS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_INLINE_NAMESPACES 1
#    else
#      define COMPAT_COMPILER_CXX_INLINE_NAMESPACES 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_LAMBDAS 1
#    else
#      define COMPAT_COMPILER_CXX_LAMBDAS 0
#    endif

#    if (__SUNPRO_CC >= 0x5150) && __cplusplus >= 201402L
#      define COMPAT_COMPILER_CXX_LAMBDA_INIT_CAPTURES 1
#    else
#      define COMPAT_COMPILER_CXX_LAMBDA_INIT_CAPTURES 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_LOCAL_TYPE_TEMPLATE_ARGS 1
#    else
#      define COMPAT_COMPILER_CXX_LOCAL_TYPE_TEMPLATE_ARGS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_LONG_LONG_TYPE 1
#    else
#      define COMPAT_COMPILER_CXX_LONG_LONG_TYPE 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_NOEXCEPT 1
#    else
#      define COMPAT_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_NONSTATIC_MEMBER_INIT 1
#    else
#      define COMPAT_COMPILER_CXX_NONSTATIC_MEMBER_INIT 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_NULLPTR 1
#    else
#      define COMPAT_COMPILER_CXX_NULLPTR 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_OVERRIDE 1
#    else
#      define COMPAT_COMPILER_CXX_OVERRIDE 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_RANGE_FOR 1
#    else
#      define COMPAT_COMPILER_CXX_RANGE_FOR 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_RAW_STRING_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_RAW_STRING_LITERALS 0
#    endif

#    if (__SUNPRO_CC >= 0x5140) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_REFERENCE_QUALIFIED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_REFERENCE_QUALIFIED_FUNCTIONS 0
#    endif

#    define COMPAT_COMPILER_CXX_RELAXED_CONSTEXPR 0

#    if (__SUNPRO_CC >= 0x5150) && __cplusplus >= 201402L
#      define COMPAT_COMPILER_CXX_RETURN_TYPE_DEDUCTION 1
#    else
#      define COMPAT_COMPILER_CXX_RETURN_TYPE_DEDUCTION 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_RIGHT_ANGLE_BRACKETS 1
#    else
#      define COMPAT_COMPILER_CXX_RIGHT_ANGLE_BRACKETS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_RVALUE_REFERENCES 1
#    else
#      define COMPAT_COMPILER_CXX_RVALUE_REFERENCES 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define COMPAT_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_STATIC_ASSERT 1
#    else
#      define COMPAT_COMPILER_CXX_STATIC_ASSERT 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_STRONG_ENUMS 1
#    else
#      define COMPAT_COMPILER_CXX_STRONG_ENUMS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define COMPAT_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_TRAILING_RETURN_TYPES 1
#    else
#      define COMPAT_COMPILER_CXX_TRAILING_RETURN_TYPES 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_UNICODE_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_UNICODE_LITERALS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_UNIFORM_INITIALIZATION 1
#    else
#      define COMPAT_COMPILER_CXX_UNIFORM_INITIALIZATION 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_UNRESTRICTED_UNIONS 1
#    else
#      define COMPAT_COMPILER_CXX_UNRESTRICTED_UNIONS 0
#    endif

#    define COMPAT_COMPILER_CXX_USER_LITERALS 0

#    if (__SUNPRO_CC >= 0x5150) && __cplusplus >= 201402L
#      define COMPAT_COMPILER_CXX_VARIABLE_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_VARIABLE_TEMPLATES 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_VARIADIC_MACROS 1
#    else
#      define COMPAT_COMPILER_CXX_VARIADIC_MACROS 0
#    endif

#    if (__SUNPRO_CC >= 0x5130) && __cplusplus >= 201103L
#      define COMPAT_COMPILER_CXX_VARIADIC_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_VARIADIC_TEMPLATES 0
#    endif

#    if __SUNPRO_CC >= 0x5130 && __cplusplus
#      define COMPAT_COMPILER_CXX_TEMPLATE_TEMPLATE_PARAMETERS 1
#    else
#      define COMPAT_COMPILER_CXX_TEMPLATE_TEMPLATE_PARAMETERS 0
#    endif

#  elif COMPAT_COMPILER_IS_Intel

  /* __INTEL_COMPILER = VRP */
# define COMPAT_COMPILER_VERSION_MAJOR COMPAT_DEC(__INTEL_COMPILER/100)
# define COMPAT_COMPILER_VERSION_MINOR COMPAT_DEC(__INTEL_COMPILER/10 % 10)
# if defined(__INTEL_COMPILER_UPDATE)
#  define COMPAT_COMPILER_VERSION_PATCH COMPAT_DEC(__INTEL_COMPILER_UPDATE)
# else
#  define COMPAT_COMPILER_VERSION_PATCH COMPAT_DEC(__INTEL_COMPILER   % 10)
# endif
# if defined(__INTEL_COMPILER_BUILD_DATE)
  /* __INTEL_COMPILER_BUILD_DATE = YYYYMMDD */
#  define COMPAT_COMPILER_VERSION_TWEAK COMPAT_DEC(__INTEL_COMPILER_BUILD_DATE)
# endif
# if defined(_MSC_VER)
   /* _MSC_VER = VVRR */
#  define COMPAT_SIMULATE_VERSION_MAJOR COMPAT_DEC(_MSC_VER / 100)
#  define COMPAT_SIMULATE_VERSION_MINOR COMPAT_DEC(_MSC_VER % 100)
# endif
# if defined(__GNUC__)
#  define COMPAT_SIMULATE_VERSION_MAJOR COMPAT_DEC(__GNUC__)
# elif defined(__GNUG__)
#  define COMPAT_SIMULATE_VERSION_MAJOR COMPAT_DEC(__GNUG__)
# endif
# if defined(__GNUC_MINOR__)
#  define COMPAT_SIMULATE_VERSION_MINOR COMPAT_DEC(__GNUC_MINOR__)
# endif
# if defined(__GNUC_PATCHLEVEL__)
#  define COMPAT_SIMULATE_VERSION_PATCH COMPAT_DEC(__GNUC_PATCHLEVEL__)
# endif

#    if __INTEL_COMPILER >= 1600 && ((__cplusplus >= 201300L) || ((__cplusplus == 201103L) && !defined(__INTEL_CXX11_MODE__)) || ((((__INTEL_COMPILER == 1500) && (__INTEL_COMPILER_UPDATE == 1))) && defined(__GXX_EXPERIMENTAL_CXX0X__) && !defined(__INTEL_CXX11_MODE__) ) || (defined(__INTEL_CXX11_MODE__) && defined(__cpp_aggregate_nsdmi)) )
#      define COMPAT_COMPILER_CXX_AGGREGATE_DEFAULT_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_AGGREGATE_DEFAULT_INITIALIZERS 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_ALIAS_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_ALIAS_TEMPLATES 0
#    endif

#    if __INTEL_COMPILER >= 1500 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_ALIGNAS 1
#    else
#      define COMPAT_COMPILER_CXX_ALIGNAS 0
#    endif

#    if __INTEL_COMPILER >= 1500 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_ALIGNOF 1
#    else
#      define COMPAT_COMPILER_CXX_ALIGNOF 0
#    endif

#    if (__cpp_attributes >= 200809 || __INTEL_COMPILER >= 1210) && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_ATTRIBUTES 1
#    else
#      define COMPAT_COMPILER_CXX_ATTRIBUTES 0
#    endif

#    if __INTEL_COMPILER >= 1500 && ((__cplusplus >= 201300L) || ((__cplusplus == 201103L) && !defined(__INTEL_CXX11_MODE__)) || ((((__INTEL_COMPILER == 1500) && (__INTEL_COMPILER_UPDATE == 1))) && defined(__GXX_EXPERIMENTAL_CXX0X__) && !defined(__INTEL_CXX11_MODE__) ) || (defined(__INTEL_CXX11_MODE__) && defined(__cpp_aggregate_nsdmi)) )
#      define COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED 1
#    else
#      define COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_AUTO_TYPE 1
#    else
#      define COMPAT_COMPILER_CXX_AUTO_TYPE 0
#    endif

#    if __cpp_binary_literals >= 201304 || __INTEL_COMPILER >= 1210
#      define COMPAT_COMPILER_CXX_BINARY_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_BINARY_LITERALS 0
#    endif

#    if __cpp_constexpr >= 200704 || __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_CONSTEXPR 1
#    else
#      define COMPAT_COMPILER_CXX_CONSTEXPR 0
#    endif

#    if __INTEL_COMPILER >= 1600 && ((__cplusplus >= 201300L) || ((__cplusplus == 201103L) && !defined(__INTEL_CXX11_MODE__)) || ((((__INTEL_COMPILER == 1500) && (__INTEL_COMPILER_UPDATE == 1))) && defined(__GXX_EXPERIMENTAL_CXX0X__) && !defined(__INTEL_CXX11_MODE__) ) || (defined(__INTEL_CXX11_MODE__) && defined(__cpp_aggregate_nsdmi)) )
#      define COMPAT_COMPILER_CXX_CONTEXTUAL_CONVERSIONS 1
#    else
#      define COMPAT_COMPILER_CXX_CONTEXTUAL_CONVERSIONS 0
#    endif

#    if ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__)) && (__INTEL_COMPILER > 1400 || (__INTEL_COMPILER == 1400 && __INTEL_COMPILER_UPDATE >= 2)) && !defined(_MSC_VER)
#      define COMPAT_COMPILER_CXX_DECLTYPE_INCOMPLETE_RETURN_TYPES 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE_INCOMPLETE_RETURN_TYPES 0
#    endif

#    if __cpp_decltype >= 200707 || __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_DECLTYPE 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE 0
#    endif

#    if __cpp_decltype_auto >= 201304 || __INTEL_COMPILER >= 1500 && ((__cplusplus >= 201300L) || ((__cplusplus == 201103L) && !defined(__INTEL_CXX11_MODE__)) || ((((__INTEL_COMPILER == 1500) && (__INTEL_COMPILER_UPDATE == 1))) && defined(__GXX_EXPERIMENTAL_CXX0X__) && !defined(__INTEL_CXX11_MODE__) ) || (defined(__INTEL_CXX11_MODE__) && defined(__cpp_aggregate_nsdmi)) )
#      define COMPAT_COMPILER_CXX_DECLTYPE_AUTO 1
#    else
#      define COMPAT_COMPILER_CXX_DECLTYPE_AUTO 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_DEFAULT_FUNCTION_TEMPLATE_ARGS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULT_FUNCTION_TEMPLATE_ARGS 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_DEFAULTED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULTED_FUNCTIONS 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_DEFAULTED_MOVE_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_DEFAULTED_MOVE_INITIALIZERS 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_DELEGATING_CONSTRUCTORS 1
#    else
#      define COMPAT_COMPILER_CXX_DELEGATING_CONSTRUCTORS 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_DELETED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_DELETED_FUNCTIONS 0
#    endif

#    if __INTEL_COMPILER >= 1600 && ((__cplusplus >= 201300L) || ((__cplusplus == 201103L) && !defined(__INTEL_CXX11_MODE__)) || ((((__INTEL_COMPILER == 1500) && (__INTEL_COMPILER_UPDATE == 1))) && defined(__GXX_EXPERIMENTAL_CXX0X__) && !defined(__INTEL_CXX11_MODE__) ) || (defined(__INTEL_CXX11_MODE__) && defined(__cpp_aggregate_nsdmi)) )
#      define COMPAT_COMPILER_CXX_DIGIT_SEPARATORS 1
#    else
#      define COMPAT_COMPILER_CXX_DIGIT_SEPARATORS 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_ENUM_FORWARD_DECLARATIONS 1
#    else
#      define COMPAT_COMPILER_CXX_ENUM_FORWARD_DECLARATIONS 0
#    endif

#    if __INTEL_COMPILER >= 1300 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_EXPLICIT_CONVERSIONS 1
#    else
#      define COMPAT_COMPILER_CXX_EXPLICIT_CONVERSIONS 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_EXTENDED_FRIEND_DECLARATIONS 1
#    else
#      define COMPAT_COMPILER_CXX_EXTENDED_FRIEND_DECLARATIONS 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_EXTERN_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_EXTERN_TEMPLATES 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_FINAL 1
#    else
#      define COMPAT_COMPILER_CXX_FINAL 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_FUNC_IDENTIFIER 1
#    else
#      define COMPAT_COMPILER_CXX_FUNC_IDENTIFIER 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_GENERALIZED_INITIALIZERS 1
#    else
#      define COMPAT_COMPILER_CXX_GENERALIZED_INITIALIZERS 0
#    endif

#    if __cpp_generic_lambdas >= 201304
#      define COMPAT_COMPILER_CXX_GENERIC_LAMBDAS 1
#    else
#      define COMPAT_COMPILER_CXX_GENERIC_LAMBDAS 0
#    endif

#    if __INTEL_COMPILER >= 1500 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_INHERITING_CONSTRUCTORS 1
#    else
#      define COMPAT_COMPILER_CXX_INHERITING_CONSTRUCTORS 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_INLINE_NAMESPACES 1
#    else
#      define COMPAT_COMPILER_CXX_INLINE_NAMESPACES 0
#    endif

#    if (__cpp_lambdas >= 200907 || __INTEL_COMPILER >= 1210) && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_LAMBDAS 1
#    else
#      define COMPAT_COMPILER_CXX_LAMBDAS 0
#    endif

#    if (__cpp_init_captures >= 201304 || __INTEL_COMPILER >= 1500) && ((__cplusplus >= 201300L) || ((__cplusplus == 201103L) && !defined(__INTEL_CXX11_MODE__)) || ((((__INTEL_COMPILER == 1500) && (__INTEL_COMPILER_UPDATE == 1))) && defined(__GXX_EXPERIMENTAL_CXX0X__) && !defined(__INTEL_CXX11_MODE__) ) || (defined(__INTEL_CXX11_MODE__) && defined(__cpp_aggregate_nsdmi)) )
#      define COMPAT_COMPILER_CXX_LAMBDA_INIT_CAPTURES 1
#    else
#      define COMPAT_COMPILER_CXX_LAMBDA_INIT_CAPTURES 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_LOCAL_TYPE_TEMPLATE_ARGS 1
#    else
#      define COMPAT_COMPILER_CXX_LOCAL_TYPE_TEMPLATE_ARGS 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_LONG_LONG_TYPE 1
#    else
#      define COMPAT_COMPILER_CXX_LONG_LONG_TYPE 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_NOEXCEPT 1
#    else
#      define COMPAT_COMPILER_CXX_NOEXCEPT 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_NONSTATIC_MEMBER_INIT 1
#    else
#      define COMPAT_COMPILER_CXX_NONSTATIC_MEMBER_INIT 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_NULLPTR 1
#    else
#      define COMPAT_COMPILER_CXX_NULLPTR 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_OVERRIDE 1
#    else
#      define COMPAT_COMPILER_CXX_OVERRIDE 0
#    endif

#    if __INTEL_COMPILER >= 1300 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_RANGE_FOR 1
#    else
#      define COMPAT_COMPILER_CXX_RANGE_FOR 0
#    endif

#    if __cpp_raw_strings >= 200710 || __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_RAW_STRING_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_RAW_STRING_LITERALS 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_REFERENCE_QUALIFIED_FUNCTIONS 1
#    else
#      define COMPAT_COMPILER_CXX_REFERENCE_QUALIFIED_FUNCTIONS 0
#    endif

#    if __cpp_constexpr >= 201304 || (__INTEL_COMPILER >= 1700 && ((__cplusplus >= 201300L) || ((__cplusplus == 201103L) && !defined(__INTEL_CXX11_MODE__)) || ((((__INTEL_COMPILER == 1500) && (__INTEL_COMPILER_UPDATE == 1))) && defined(__GXX_EXPERIMENTAL_CXX0X__) && !defined(__INTEL_CXX11_MODE__) ) || (defined(__INTEL_CXX11_MODE__) && defined(__cpp_aggregate_nsdmi)) ) && !defined(_MSC_VER))
#      define COMPAT_COMPILER_CXX_RELAXED_CONSTEXPR 1
#    else
#      define COMPAT_COMPILER_CXX_RELAXED_CONSTEXPR 0
#    endif

#    if __cpp_return_type_deduction >= 201304 || __INTEL_COMPILER >= 1500 && ((__cplusplus >= 201300L) || ((__cplusplus == 201103L) && !defined(__INTEL_CXX11_MODE__)) || ((((__INTEL_COMPILER == 1500) && (__INTEL_COMPILER_UPDATE == 1))) && defined(__GXX_EXPERIMENTAL_CXX0X__) && !defined(__INTEL_CXX11_MODE__) ) || (defined(__INTEL_CXX11_MODE__) && defined(__cpp_aggregate_nsdmi)) )
#      define COMPAT_COMPILER_CXX_RETURN_TYPE_DEDUCTION 1
#    else
#      define COMPAT_COMPILER_CXX_RETURN_TYPE_DEDUCTION 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_RIGHT_ANGLE_BRACKETS 1
#    else
#      define COMPAT_COMPILER_CXX_RIGHT_ANGLE_BRACKETS 0
#    endif

#    if (__cpp_rvalue_references >= 200610 || __INTEL_COMPILER >= 1210) && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_RVALUE_REFERENCES 1
#    else
#      define COMPAT_COMPILER_CXX_RVALUE_REFERENCES 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_SIZEOF_MEMBER 1
#    else
#      define COMPAT_COMPILER_CXX_SIZEOF_MEMBER 0
#    endif

#    if (__cpp_static_assert >= 200410 || __INTEL_COMPILER >= 1210) && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_STATIC_ASSERT 1
#    else
#      define COMPAT_COMPILER_CXX_STATIC_ASSERT 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_STRONG_ENUMS 1
#    else
#      define COMPAT_COMPILER_CXX_STRONG_ENUMS 0
#    endif

#    if __INTEL_COMPILER >= 1500 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_THREAD_LOCAL 1
#    else
#      define COMPAT_COMPILER_CXX_THREAD_LOCAL 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_TRAILING_RETURN_TYPES 1
#    else
#      define COMPAT_COMPILER_CXX_TRAILING_RETURN_TYPES 0
#    endif

#    if __cpp_unicode_literals >= 200710 || (__INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__)) && (!defined(_MSC_VER) || __INTEL_COMPILER >= 1600))
#      define COMPAT_COMPILER_CXX_UNICODE_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_UNICODE_LITERALS 0
#    endif

#    if __INTEL_COMPILER >= 1300 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_UNIFORM_INITIALIZATION 1
#    else
#      define COMPAT_COMPILER_CXX_UNIFORM_INITIALIZATION 0
#    endif

#    if __INTEL_COMPILER >= 1400 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_UNRESTRICTED_UNIONS 1
#    else
#      define COMPAT_COMPILER_CXX_UNRESTRICTED_UNIONS 0
#    endif

#    if __cpp_user_defined_literals >= 200809 || (__INTEL_COMPILER >= 1500 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__)) && (!defined(_MSC_VER) || __INTEL_COMPILER >= 1600))
#      define COMPAT_COMPILER_CXX_USER_LITERALS 1
#    else
#      define COMPAT_COMPILER_CXX_USER_LITERALS 0
#    endif

#    if __cpp_variable_templates >= 201304
#      define COMPAT_COMPILER_CXX_VARIABLE_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_VARIABLE_TEMPLATES 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_VARIADIC_MACROS 1
#    else
#      define COMPAT_COMPILER_CXX_VARIADIC_MACROS 0
#    endif

#    if (__cpp_variadic_templates >= 200704 || __INTEL_COMPILER >= 1210) && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_VARIADIC_TEMPLATES 1
#    else
#      define COMPAT_COMPILER_CXX_VARIADIC_TEMPLATES 0
#    endif

#    if __INTEL_COMPILER >= 1210 && ((__cplusplus >= 201103L) || defined(__INTEL_CXX11_MODE__) || defined(__GXX_EXPERIMENTAL_CXX0X__))
#      define COMPAT_COMPILER_CXX_TEMPLATE_TEMPLATE_PARAMETERS 1
#    else
#      define COMPAT_COMPILER_CXX_TEMPLATE_TEMPLATE_PARAMETERS 0
#    endif

#  else
#    error Unsupported compiler
#  endif

#  if defined(COMPAT_COMPILER_CXX_ALIGNAS) && COMPAT_COMPILER_CXX_ALIGNAS
#    define COMPAT_ALIGNAS(X) alignas(X)
#  elif COMPAT_COMPILER_IS_GNU || COMPAT_COMPILER_IS_Clang || COMPAT_COMPILER_IS_AppleClang
#    define COMPAT_ALIGNAS(X) __attribute__ ((__aligned__(X)))
#  elif COMPAT_COMPILER_IS_MSVC
#    define COMPAT_ALIGNAS(X) __declspec(align(X))
#  else
#    define COMPAT_ALIGNAS(X)
#  endif


#  if defined(COMPAT_COMPILER_CXX_ALIGNOF) && COMPAT_COMPILER_CXX_ALIGNOF
#    define COMPAT_ALIGNOF(X) alignof(X)
#  elif COMPAT_COMPILER_IS_GNU || COMPAT_COMPILER_IS_Clang || COMPAT_COMPILER_IS_AppleClang
#    define COMPAT_ALIGNOF(X) __alignof__(X)
#  elif COMPAT_COMPILER_IS_MSVC
#    define COMPAT_ALIGNOF(X) __alignof(X)
#  endif


#  ifndef COMPAT_DEPRECATED
#    if defined(COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED) && COMPAT_COMPILER_CXX_ATTRIBUTE_DEPRECATED
#      define COMPAT_DEPRECATED [[deprecated]]
#      define COMPAT_DEPRECATED_MSG(MSG) [[deprecated(MSG)]]
#    elif COMPAT_COMPILER_IS_GNU || COMPAT_COMPILER_IS_Clang
#      define COMPAT_DEPRECATED __attribute__((__deprecated__))
#      define COMPAT_DEPRECATED_MSG(MSG) __attribute__((__deprecated__(MSG)))
#    elif COMPAT_COMPILER_IS_MSVC
#      define COMPAT_DEPRECATED __declspec(deprecated)
#      define COMPAT_DEPRECATED_MSG(MSG) __declspec(deprecated(MSG))
#    else
#      define COMPAT_DEPRECATED
#      define COMPAT_DEPRECATED_MSG(MSG)
#    endif
#  endif


#  if defined(COMPAT_COMPILER_CXX_CONSTEXPR) && COMPAT_COMPILER_CXX_CONSTEXPR
#    define COMPAT_CONSTEXPR constexpr
#  else
#    define COMPAT_CONSTEXPR 
#  endif


#  if defined(COMPAT_COMPILER_CXX_DELETED_FUNCTIONS) && COMPAT_COMPILER_CXX_DELETED_FUNCTIONS
#    define COMPAT_DELETED_FUNCTION = delete
#  else
#    define COMPAT_DELETED_FUNCTION 
#  endif


#  if defined(COMPAT_COMPILER_CXX_EXTERN_TEMPLATES) && COMPAT_COMPILER_CXX_EXTERN_TEMPLATES
#    define COMPAT_EXTERN_TEMPLATE extern
#  else
#    define COMPAT_EXTERN_TEMPLATE 
#  endif


#  if defined(COMPAT_COMPILER_CXX_FINAL) && COMPAT_COMPILER_CXX_FINAL
#    define COMPAT_FINAL final
#  else
#    define COMPAT_FINAL 
#  endif


#  if defined(COMPAT_COMPILER_CXX_NOEXCEPT) && COMPAT_COMPILER_CXX_NOEXCEPT
#    define COMPAT_NOEXCEPT noexcept
#    define COMPAT_NOEXCEPT_EXPR(X) noexcept(X)
#  else
#    define COMPAT_NOEXCEPT
#    define COMPAT_NOEXCEPT_EXPR(X)
#  endif


#  if defined(COMPAT_COMPILER_CXX_NULLPTR) && COMPAT_COMPILER_CXX_NULLPTR
#    define COMPAT_NULLPTR nullptr
#  elif COMPAT_COMPILER_IS_GNU
#    define COMPAT_NULLPTR __null
#  else
#    define COMPAT_NULLPTR 0
#  endif


#  if defined(COMPAT_COMPILER_CXX_OVERRIDE) && COMPAT_COMPILER_CXX_OVERRIDE
#    define COMPAT_OVERRIDE override
#  else
#    define COMPAT_OVERRIDE 
#  endif

#  if defined(COMPAT_COMPILER_CXX_STATIC_ASSERT) && COMPAT_COMPILER_CXX_STATIC_ASSERT
#    define COMPAT_STATIC_ASSERT(X) static_assert(X, #X)
#    define COMPAT_STATIC_ASSERT_MSG(X, MSG) static_assert(X, MSG)
#  else
#    define COMPAT_STATIC_ASSERT_JOIN(X, Y) COMPAT_STATIC_ASSERT_JOIN_IMPL(X, Y)
#    define COMPAT_STATIC_ASSERT_JOIN_IMPL(X, Y) X##Y
template<bool> struct COMPATStaticAssert;
template<> struct COMPATStaticAssert<true>{};
#    define COMPAT_STATIC_ASSERT(X) enum { COMPAT_STATIC_ASSERT_JOIN(COMPATStaticAssertEnum, __LINE__) = sizeof(COMPATStaticAssert<X>) }
#    define COMPAT_STATIC_ASSERT_MSG(X, MSG) enum { COMPAT_STATIC_ASSERT_JOIN(COMPATStaticAssertEnum, __LINE__) = sizeof(COMPATStaticAssert<X>) }
#  endif


#  if defined(COMPAT_COMPILER_CXX_THREAD_LOCAL) && COMPAT_COMPILER_CXX_THREAD_LOCAL
#    define COMPAT_THREAD_LOCAL thread_local
#  elif COMPAT_COMPILER_IS_GNU || COMPAT_COMPILER_IS_Clang || COMPAT_COMPILER_IS_AppleClang
#    define COMPAT_THREAD_LOCAL __thread
#  elif COMPAT_COMPILER_IS_MSVC
#    define COMPAT_THREAD_LOCAL __declspec(thread)
#  else
// COMPAT_THREAD_LOCAL not defined for this configuration.
#  endif

#endif

#endif
