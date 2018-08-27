#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t418579303;
// System.Boolean[]
struct BooleanU5BU5D_t4181008879;
// System.IntPtr[]
struct IntPtrU5BU5D_t738858890;
// System.Collections.IDictionary
struct IDictionary_t1965935985;
// System.Threading.Thread
struct Thread_t2204923182;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1250051213;
// System.Char[]
struct CharU5BU5D_t3230795339;
// System.UInt64
struct UInt64_t1931341177;
// System.Int32
struct Int32_t663185285;
// System.Char
struct Char_t3112805374;
// System.Int64
struct Int64_t3653815622;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t127263158;
// System.OperatingSystem
struct OperatingSystem_t4008591922;
// System.Type[]
struct TypeU5BU5D_t3562884053;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t2828578632;
// System.Globalization.CompareInfo
struct CompareInfo_t1432770485;
// System.Void
struct Void_t1003147579;
// System.String[]
struct StringU5BU5D_t1883187954;
// System.Collections.Hashtable
struct Hashtable_t602384697;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t1309728856;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t123498764;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t1649529991;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t2278264264;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1887547851;
// System.Globalization.DaylightTime
struct DaylightTime_t3506654652;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t731970336;
// System.Reflection.MemberFilter
struct MemberFilter_t478655269;
// System.Version
struct Version_t2085498104;
// System.Byte[]
struct ByteU5BU5D_t789126831;
// System.Int32[]
struct Int32U5BU5D_t607762632;
// Mono.Math.BigInteger
struct BigInteger_t2929022171;
// System.IAsyncResult
struct IAsyncResult_t1071638167;
// System.AsyncCallback
struct AsyncCallback_t3260757161;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2533265738;
// System.MonoTypeInfo
struct MonoTypeInfo_t1320685594;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t1074546300;
// System.EventArgs
struct EventArgs_t1998285426;
// System.ResolveEventArgs
struct ResolveEventArgs_t3550247415;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2002217936;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef MONOTOUCHAOTHELPER_T1192854608_H
#define MONOTOUCHAOTHELPER_T1192854608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTouchAOTHelper
struct  MonoTouchAOTHelper_t1192854608  : public RuntimeObject
{
public:

public:
};

struct MonoTouchAOTHelper_t1192854608_StaticFields
{
public:
	// System.Boolean System.MonoTouchAOTHelper::FalseFlag
	bool ___FalseFlag_0;

public:
	inline static int32_t get_offset_of_FalseFlag_0() { return static_cast<int32_t>(offsetof(MonoTouchAOTHelper_t1192854608_StaticFields, ___FalseFlag_0)); }
	inline bool get_FalseFlag_0() const { return ___FalseFlag_0; }
	inline bool* get_address_of_FalseFlag_0() { return &___FalseFlag_0; }
	inline void set_FalseFlag_0(bool value)
	{
		___FalseFlag_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTOUCHAOTHELPER_T1192854608_H
#ifndef MONOTYPEINFO_T1320685594_H
#define MONOTYPEINFO_T1320685594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTypeInfo
struct  MonoTypeInfo_t1320685594  : public RuntimeObject
{
public:
	// System.String System.MonoTypeInfo::full_name
	String_t* ___full_name_0;
	// System.Reflection.ConstructorInfo System.MonoTypeInfo::default_ctor
	ConstructorInfo_t418579303 * ___default_ctor_1;

public:
	inline static int32_t get_offset_of_full_name_0() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t1320685594, ___full_name_0)); }
	inline String_t* get_full_name_0() const { return ___full_name_0; }
	inline String_t** get_address_of_full_name_0() { return &___full_name_0; }
	inline void set_full_name_0(String_t* value)
	{
		___full_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___full_name_0), value);
	}

	inline static int32_t get_offset_of_default_ctor_1() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t1320685594, ___default_ctor_1)); }
	inline ConstructorInfo_t418579303 * get_default_ctor_1() const { return ___default_ctor_1; }
	inline ConstructorInfo_t418579303 ** get_address_of_default_ctor_1() { return &___default_ctor_1; }
	inline void set_default_ctor_1(ConstructorInfo_t418579303 * value)
	{
		___default_ctor_1 = value;
		Il2CppCodeGenWriteBarrier((&___default_ctor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPEINFO_T1320685594_H
#ifndef TIMEZONE_T1265713034_H
#define TIMEZONE_T1265713034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t1265713034  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t1265713034_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t1265713034 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t1265713034_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t1265713034 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t1265713034 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t1265713034 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t1265713034_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t1265713034_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T1265713034_H
#ifndef MATH_T2760985555_H
#define MATH_T2760985555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Math
struct  Math_t2760985555  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATH_T2760985555_H
#ifndef LOCALDATASTORESLOT_T1348408381_H
#define LOCALDATASTORESLOT_T1348408381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreSlot
struct  LocalDataStoreSlot_t1348408381  : public RuntimeObject
{
public:
	// System.Int32 System.LocalDataStoreSlot::slot
	int32_t ___slot_0;
	// System.Boolean System.LocalDataStoreSlot::thread_local
	bool ___thread_local_1;

public:
	inline static int32_t get_offset_of_slot_0() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1348408381, ___slot_0)); }
	inline int32_t get_slot_0() const { return ___slot_0; }
	inline int32_t* get_address_of_slot_0() { return &___slot_0; }
	inline void set_slot_0(int32_t value)
	{
		___slot_0 = value;
	}

	inline static int32_t get_offset_of_thread_local_1() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1348408381, ___thread_local_1)); }
	inline bool get_thread_local_1() const { return ___thread_local_1; }
	inline bool* get_address_of_thread_local_1() { return &___thread_local_1; }
	inline void set_thread_local_1(bool value)
	{
		___thread_local_1 = value;
	}
};

struct LocalDataStoreSlot_t1348408381_StaticFields
{
public:
	// System.Object System.LocalDataStoreSlot::lock_obj
	RuntimeObject * ___lock_obj_2;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_thread
	BooleanU5BU5D_t4181008879* ___slot_bitmap_thread_3;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_context
	BooleanU5BU5D_t4181008879* ___slot_bitmap_context_4;

public:
	inline static int32_t get_offset_of_lock_obj_2() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1348408381_StaticFields, ___lock_obj_2)); }
	inline RuntimeObject * get_lock_obj_2() const { return ___lock_obj_2; }
	inline RuntimeObject ** get_address_of_lock_obj_2() { return &___lock_obj_2; }
	inline void set_lock_obj_2(RuntimeObject * value)
	{
		___lock_obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___lock_obj_2), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_thread_3() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1348408381_StaticFields, ___slot_bitmap_thread_3)); }
	inline BooleanU5BU5D_t4181008879* get_slot_bitmap_thread_3() const { return ___slot_bitmap_thread_3; }
	inline BooleanU5BU5D_t4181008879** get_address_of_slot_bitmap_thread_3() { return &___slot_bitmap_thread_3; }
	inline void set_slot_bitmap_thread_3(BooleanU5BU5D_t4181008879* value)
	{
		___slot_bitmap_thread_3 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_thread_3), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_context_4() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1348408381_StaticFields, ___slot_bitmap_context_4)); }
	inline BooleanU5BU5D_t4181008879* get_slot_bitmap_context_4() const { return ___slot_bitmap_context_4; }
	inline BooleanU5BU5D_t4181008879** get_address_of_slot_bitmap_context_4() { return &___slot_bitmap_context_4; }
	inline void set_slot_bitmap_context_4(BooleanU5BU5D_t4181008879* value)
	{
		___slot_bitmap_context_4 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_context_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTORESLOT_T1348408381_H
#ifndef EXCEPTION_T4117462927_H
#define EXCEPTION_T4117462927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t4117462927  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t738858890* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t4117462927 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t4117462927, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t738858890* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t738858890** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t738858890* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t4117462927, ___inner_exception_1)); }
	inline Exception_t4117462927 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t4117462927 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t4117462927 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t4117462927, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t4117462927, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t4117462927, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t4117462927, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t4117462927, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t4117462927, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t4117462927, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t4117462927, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t4117462927, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T4117462927_H
#ifndef GUIDPARSER_T2504351389_H
#define GUIDPARSER_T2504351389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid/GuidParser
struct  GuidParser_t2504351389  : public RuntimeObject
{
public:
	// System.String System.Guid/GuidParser::_src
	String_t* ____src_0;
	// System.Int32 System.Guid/GuidParser::_length
	int32_t ____length_1;
	// System.Int32 System.Guid/GuidParser::_cur
	int32_t ____cur_2;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(GuidParser_t2504351389, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(GuidParser_t2504351389, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__cur_2() { return static_cast<int32_t>(offsetof(GuidParser_t2504351389, ____cur_2)); }
	inline int32_t get__cur_2() const { return ____cur_2; }
	inline int32_t* get_address_of__cur_2() { return &____cur_2; }
	inline void set__cur_2(int32_t value)
	{
		____cur_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDPARSER_T2504351389_H
#ifndef NUMBERFORMATTER_T396563322_H
#define NUMBERFORMATTER_T396563322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter
struct  NumberFormatter_t396563322  : public RuntimeObject
{
public:
	// System.Threading.Thread System.NumberFormatter::_thread
	Thread_t2204923182 * ____thread_6;
	// System.Globalization.NumberFormatInfo System.NumberFormatter::_nfi
	NumberFormatInfo_t1250051213 * ____nfi_7;
	// System.Boolean System.NumberFormatter::_NaN
	bool ____NaN_8;
	// System.Boolean System.NumberFormatter::_infinity
	bool ____infinity_9;
	// System.Boolean System.NumberFormatter::_isCustomFormat
	bool ____isCustomFormat_10;
	// System.Boolean System.NumberFormatter::_specifierIsUpper
	bool ____specifierIsUpper_11;
	// System.Boolean System.NumberFormatter::_positive
	bool ____positive_12;
	// System.Char System.NumberFormatter::_specifier
	Il2CppChar ____specifier_13;
	// System.Int32 System.NumberFormatter::_precision
	int32_t ____precision_14;
	// System.Int32 System.NumberFormatter::_defPrecision
	int32_t ____defPrecision_15;
	// System.Int32 System.NumberFormatter::_digitsLen
	int32_t ____digitsLen_16;
	// System.Int32 System.NumberFormatter::_offset
	int32_t ____offset_17;
	// System.Int32 System.NumberFormatter::_decPointPos
	int32_t ____decPointPos_18;
	// System.UInt32 System.NumberFormatter::_val1
	uint32_t ____val1_19;
	// System.UInt32 System.NumberFormatter::_val2
	uint32_t ____val2_20;
	// System.UInt32 System.NumberFormatter::_val3
	uint32_t ____val3_21;
	// System.UInt32 System.NumberFormatter::_val4
	uint32_t ____val4_22;
	// System.Char[] System.NumberFormatter::_cbuf
	CharU5BU5D_t3230795339* ____cbuf_23;
	// System.Int32 System.NumberFormatter::_ind
	int32_t ____ind_24;

public:
	inline static int32_t get_offset_of__thread_6() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____thread_6)); }
	inline Thread_t2204923182 * get__thread_6() const { return ____thread_6; }
	inline Thread_t2204923182 ** get_address_of__thread_6() { return &____thread_6; }
	inline void set__thread_6(Thread_t2204923182 * value)
	{
		____thread_6 = value;
		Il2CppCodeGenWriteBarrier((&____thread_6), value);
	}

	inline static int32_t get_offset_of__nfi_7() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____nfi_7)); }
	inline NumberFormatInfo_t1250051213 * get__nfi_7() const { return ____nfi_7; }
	inline NumberFormatInfo_t1250051213 ** get_address_of__nfi_7() { return &____nfi_7; }
	inline void set__nfi_7(NumberFormatInfo_t1250051213 * value)
	{
		____nfi_7 = value;
		Il2CppCodeGenWriteBarrier((&____nfi_7), value);
	}

	inline static int32_t get_offset_of__NaN_8() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____NaN_8)); }
	inline bool get__NaN_8() const { return ____NaN_8; }
	inline bool* get_address_of__NaN_8() { return &____NaN_8; }
	inline void set__NaN_8(bool value)
	{
		____NaN_8 = value;
	}

	inline static int32_t get_offset_of__infinity_9() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____infinity_9)); }
	inline bool get__infinity_9() const { return ____infinity_9; }
	inline bool* get_address_of__infinity_9() { return &____infinity_9; }
	inline void set__infinity_9(bool value)
	{
		____infinity_9 = value;
	}

	inline static int32_t get_offset_of__isCustomFormat_10() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____isCustomFormat_10)); }
	inline bool get__isCustomFormat_10() const { return ____isCustomFormat_10; }
	inline bool* get_address_of__isCustomFormat_10() { return &____isCustomFormat_10; }
	inline void set__isCustomFormat_10(bool value)
	{
		____isCustomFormat_10 = value;
	}

	inline static int32_t get_offset_of__specifierIsUpper_11() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____specifierIsUpper_11)); }
	inline bool get__specifierIsUpper_11() const { return ____specifierIsUpper_11; }
	inline bool* get_address_of__specifierIsUpper_11() { return &____specifierIsUpper_11; }
	inline void set__specifierIsUpper_11(bool value)
	{
		____specifierIsUpper_11 = value;
	}

	inline static int32_t get_offset_of__positive_12() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____positive_12)); }
	inline bool get__positive_12() const { return ____positive_12; }
	inline bool* get_address_of__positive_12() { return &____positive_12; }
	inline void set__positive_12(bool value)
	{
		____positive_12 = value;
	}

	inline static int32_t get_offset_of__specifier_13() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____specifier_13)); }
	inline Il2CppChar get__specifier_13() const { return ____specifier_13; }
	inline Il2CppChar* get_address_of__specifier_13() { return &____specifier_13; }
	inline void set__specifier_13(Il2CppChar value)
	{
		____specifier_13 = value;
	}

	inline static int32_t get_offset_of__precision_14() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____precision_14)); }
	inline int32_t get__precision_14() const { return ____precision_14; }
	inline int32_t* get_address_of__precision_14() { return &____precision_14; }
	inline void set__precision_14(int32_t value)
	{
		____precision_14 = value;
	}

	inline static int32_t get_offset_of__defPrecision_15() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____defPrecision_15)); }
	inline int32_t get__defPrecision_15() const { return ____defPrecision_15; }
	inline int32_t* get_address_of__defPrecision_15() { return &____defPrecision_15; }
	inline void set__defPrecision_15(int32_t value)
	{
		____defPrecision_15 = value;
	}

	inline static int32_t get_offset_of__digitsLen_16() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____digitsLen_16)); }
	inline int32_t get__digitsLen_16() const { return ____digitsLen_16; }
	inline int32_t* get_address_of__digitsLen_16() { return &____digitsLen_16; }
	inline void set__digitsLen_16(int32_t value)
	{
		____digitsLen_16 = value;
	}

	inline static int32_t get_offset_of__offset_17() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____offset_17)); }
	inline int32_t get__offset_17() const { return ____offset_17; }
	inline int32_t* get_address_of__offset_17() { return &____offset_17; }
	inline void set__offset_17(int32_t value)
	{
		____offset_17 = value;
	}

	inline static int32_t get_offset_of__decPointPos_18() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____decPointPos_18)); }
	inline int32_t get__decPointPos_18() const { return ____decPointPos_18; }
	inline int32_t* get_address_of__decPointPos_18() { return &____decPointPos_18; }
	inline void set__decPointPos_18(int32_t value)
	{
		____decPointPos_18 = value;
	}

	inline static int32_t get_offset_of__val1_19() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____val1_19)); }
	inline uint32_t get__val1_19() const { return ____val1_19; }
	inline uint32_t* get_address_of__val1_19() { return &____val1_19; }
	inline void set__val1_19(uint32_t value)
	{
		____val1_19 = value;
	}

	inline static int32_t get_offset_of__val2_20() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____val2_20)); }
	inline uint32_t get__val2_20() const { return ____val2_20; }
	inline uint32_t* get_address_of__val2_20() { return &____val2_20; }
	inline void set__val2_20(uint32_t value)
	{
		____val2_20 = value;
	}

	inline static int32_t get_offset_of__val3_21() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____val3_21)); }
	inline uint32_t get__val3_21() const { return ____val3_21; }
	inline uint32_t* get_address_of__val3_21() { return &____val3_21; }
	inline void set__val3_21(uint32_t value)
	{
		____val3_21 = value;
	}

	inline static int32_t get_offset_of__val4_22() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____val4_22)); }
	inline uint32_t get__val4_22() const { return ____val4_22; }
	inline uint32_t* get_address_of__val4_22() { return &____val4_22; }
	inline void set__val4_22(uint32_t value)
	{
		____val4_22 = value;
	}

	inline static int32_t get_offset_of__cbuf_23() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____cbuf_23)); }
	inline CharU5BU5D_t3230795339* get__cbuf_23() const { return ____cbuf_23; }
	inline CharU5BU5D_t3230795339** get_address_of__cbuf_23() { return &____cbuf_23; }
	inline void set__cbuf_23(CharU5BU5D_t3230795339* value)
	{
		____cbuf_23 = value;
		Il2CppCodeGenWriteBarrier((&____cbuf_23), value);
	}

	inline static int32_t get_offset_of__ind_24() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322, ____ind_24)); }
	inline int32_t get__ind_24() const { return ____ind_24; }
	inline int32_t* get_address_of__ind_24() { return &____ind_24; }
	inline void set__ind_24(int32_t value)
	{
		____ind_24 = value;
	}
};

struct NumberFormatter_t396563322_StaticFields
{
public:
	// System.UInt64* System.NumberFormatter::MantissaBitsTable
	uint64_t* ___MantissaBitsTable_0;
	// System.Int32* System.NumberFormatter::TensExponentTable
	int32_t* ___TensExponentTable_1;
	// System.Char* System.NumberFormatter::DigitLowerTable
	Il2CppChar* ___DigitLowerTable_2;
	// System.Char* System.NumberFormatter::DigitUpperTable
	Il2CppChar* ___DigitUpperTable_3;
	// System.Int64* System.NumberFormatter::TenPowersList
	int64_t* ___TenPowersList_4;
	// System.Int32* System.NumberFormatter::DecHexDigits
	int32_t* ___DecHexDigits_5;

public:
	inline static int32_t get_offset_of_MantissaBitsTable_0() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322_StaticFields, ___MantissaBitsTable_0)); }
	inline uint64_t* get_MantissaBitsTable_0() const { return ___MantissaBitsTable_0; }
	inline uint64_t** get_address_of_MantissaBitsTable_0() { return &___MantissaBitsTable_0; }
	inline void set_MantissaBitsTable_0(uint64_t* value)
	{
		___MantissaBitsTable_0 = value;
	}

	inline static int32_t get_offset_of_TensExponentTable_1() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322_StaticFields, ___TensExponentTable_1)); }
	inline int32_t* get_TensExponentTable_1() const { return ___TensExponentTable_1; }
	inline int32_t** get_address_of_TensExponentTable_1() { return &___TensExponentTable_1; }
	inline void set_TensExponentTable_1(int32_t* value)
	{
		___TensExponentTable_1 = value;
	}

	inline static int32_t get_offset_of_DigitLowerTable_2() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322_StaticFields, ___DigitLowerTable_2)); }
	inline Il2CppChar* get_DigitLowerTable_2() const { return ___DigitLowerTable_2; }
	inline Il2CppChar** get_address_of_DigitLowerTable_2() { return &___DigitLowerTable_2; }
	inline void set_DigitLowerTable_2(Il2CppChar* value)
	{
		___DigitLowerTable_2 = value;
	}

	inline static int32_t get_offset_of_DigitUpperTable_3() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322_StaticFields, ___DigitUpperTable_3)); }
	inline Il2CppChar* get_DigitUpperTable_3() const { return ___DigitUpperTable_3; }
	inline Il2CppChar** get_address_of_DigitUpperTable_3() { return &___DigitUpperTable_3; }
	inline void set_DigitUpperTable_3(Il2CppChar* value)
	{
		___DigitUpperTable_3 = value;
	}

	inline static int32_t get_offset_of_TenPowersList_4() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322_StaticFields, ___TenPowersList_4)); }
	inline int64_t* get_TenPowersList_4() const { return ___TenPowersList_4; }
	inline int64_t** get_address_of_TenPowersList_4() { return &___TenPowersList_4; }
	inline void set_TenPowersList_4(int64_t* value)
	{
		___TenPowersList_4 = value;
	}

	inline static int32_t get_offset_of_DecHexDigits_5() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322_StaticFields, ___DecHexDigits_5)); }
	inline int32_t* get_DecHexDigits_5() const { return ___DecHexDigits_5; }
	inline int32_t** get_address_of_DecHexDigits_5() { return &___DecHexDigits_5; }
	inline void set_DecHexDigits_5(int32_t* value)
	{
		___DecHexDigits_5 = value;
	}
};

struct NumberFormatter_t396563322_ThreadStaticFields
{
public:
	// System.NumberFormatter System.NumberFormatter::threadNumberFormatter
	NumberFormatter_t396563322 * ___threadNumberFormatter_25;

public:
	inline static int32_t get_offset_of_threadNumberFormatter_25() { return static_cast<int32_t>(offsetof(NumberFormatter_t396563322_ThreadStaticFields, ___threadNumberFormatter_25)); }
	inline NumberFormatter_t396563322 * get_threadNumberFormatter_25() const { return ___threadNumberFormatter_25; }
	inline NumberFormatter_t396563322 ** get_address_of_threadNumberFormatter_25() { return &___threadNumberFormatter_25; }
	inline void set_threadNumberFormatter_25(NumberFormatter_t396563322 * value)
	{
		___threadNumberFormatter_25 = value;
		Il2CppCodeGenWriteBarrier((&___threadNumberFormatter_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATTER_T396563322_H
#ifndef GC_T2178918558_H
#define GC_T2178918558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GC
struct  GC_t2178918558  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GC_T2178918558_H
#ifndef CUSTOMINFO_T1637389333_H
#define CUSTOMINFO_T1637389333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter/CustomInfo
struct  CustomInfo_t1637389333  : public RuntimeObject
{
public:
	// System.Boolean System.NumberFormatter/CustomInfo::UseGroup
	bool ___UseGroup_0;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalDigits
	int32_t ___DecimalDigits_1;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalPointPos
	int32_t ___DecimalPointPos_2;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalTailSharpDigits
	int32_t ___DecimalTailSharpDigits_3;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerDigits
	int32_t ___IntegerDigits_4;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadSharpDigits
	int32_t ___IntegerHeadSharpDigits_5;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadPos
	int32_t ___IntegerHeadPos_6;
	// System.Boolean System.NumberFormatter/CustomInfo::UseExponent
	bool ___UseExponent_7;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentDigits
	int32_t ___ExponentDigits_8;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentTailSharpDigits
	int32_t ___ExponentTailSharpDigits_9;
	// System.Boolean System.NumberFormatter/CustomInfo::ExponentNegativeSignOnly
	bool ___ExponentNegativeSignOnly_10;
	// System.Int32 System.NumberFormatter/CustomInfo::DividePlaces
	int32_t ___DividePlaces_11;
	// System.Int32 System.NumberFormatter/CustomInfo::Percents
	int32_t ___Percents_12;
	// System.Int32 System.NumberFormatter/CustomInfo::Permilles
	int32_t ___Permilles_13;

public:
	inline static int32_t get_offset_of_UseGroup_0() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___UseGroup_0)); }
	inline bool get_UseGroup_0() const { return ___UseGroup_0; }
	inline bool* get_address_of_UseGroup_0() { return &___UseGroup_0; }
	inline void set_UseGroup_0(bool value)
	{
		___UseGroup_0 = value;
	}

	inline static int32_t get_offset_of_DecimalDigits_1() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___DecimalDigits_1)); }
	inline int32_t get_DecimalDigits_1() const { return ___DecimalDigits_1; }
	inline int32_t* get_address_of_DecimalDigits_1() { return &___DecimalDigits_1; }
	inline void set_DecimalDigits_1(int32_t value)
	{
		___DecimalDigits_1 = value;
	}

	inline static int32_t get_offset_of_DecimalPointPos_2() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___DecimalPointPos_2)); }
	inline int32_t get_DecimalPointPos_2() const { return ___DecimalPointPos_2; }
	inline int32_t* get_address_of_DecimalPointPos_2() { return &___DecimalPointPos_2; }
	inline void set_DecimalPointPos_2(int32_t value)
	{
		___DecimalPointPos_2 = value;
	}

	inline static int32_t get_offset_of_DecimalTailSharpDigits_3() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___DecimalTailSharpDigits_3)); }
	inline int32_t get_DecimalTailSharpDigits_3() const { return ___DecimalTailSharpDigits_3; }
	inline int32_t* get_address_of_DecimalTailSharpDigits_3() { return &___DecimalTailSharpDigits_3; }
	inline void set_DecimalTailSharpDigits_3(int32_t value)
	{
		___DecimalTailSharpDigits_3 = value;
	}

	inline static int32_t get_offset_of_IntegerDigits_4() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___IntegerDigits_4)); }
	inline int32_t get_IntegerDigits_4() const { return ___IntegerDigits_4; }
	inline int32_t* get_address_of_IntegerDigits_4() { return &___IntegerDigits_4; }
	inline void set_IntegerDigits_4(int32_t value)
	{
		___IntegerDigits_4 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadSharpDigits_5() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___IntegerHeadSharpDigits_5)); }
	inline int32_t get_IntegerHeadSharpDigits_5() const { return ___IntegerHeadSharpDigits_5; }
	inline int32_t* get_address_of_IntegerHeadSharpDigits_5() { return &___IntegerHeadSharpDigits_5; }
	inline void set_IntegerHeadSharpDigits_5(int32_t value)
	{
		___IntegerHeadSharpDigits_5 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadPos_6() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___IntegerHeadPos_6)); }
	inline int32_t get_IntegerHeadPos_6() const { return ___IntegerHeadPos_6; }
	inline int32_t* get_address_of_IntegerHeadPos_6() { return &___IntegerHeadPos_6; }
	inline void set_IntegerHeadPos_6(int32_t value)
	{
		___IntegerHeadPos_6 = value;
	}

	inline static int32_t get_offset_of_UseExponent_7() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___UseExponent_7)); }
	inline bool get_UseExponent_7() const { return ___UseExponent_7; }
	inline bool* get_address_of_UseExponent_7() { return &___UseExponent_7; }
	inline void set_UseExponent_7(bool value)
	{
		___UseExponent_7 = value;
	}

	inline static int32_t get_offset_of_ExponentDigits_8() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___ExponentDigits_8)); }
	inline int32_t get_ExponentDigits_8() const { return ___ExponentDigits_8; }
	inline int32_t* get_address_of_ExponentDigits_8() { return &___ExponentDigits_8; }
	inline void set_ExponentDigits_8(int32_t value)
	{
		___ExponentDigits_8 = value;
	}

	inline static int32_t get_offset_of_ExponentTailSharpDigits_9() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___ExponentTailSharpDigits_9)); }
	inline int32_t get_ExponentTailSharpDigits_9() const { return ___ExponentTailSharpDigits_9; }
	inline int32_t* get_address_of_ExponentTailSharpDigits_9() { return &___ExponentTailSharpDigits_9; }
	inline void set_ExponentTailSharpDigits_9(int32_t value)
	{
		___ExponentTailSharpDigits_9 = value;
	}

	inline static int32_t get_offset_of_ExponentNegativeSignOnly_10() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___ExponentNegativeSignOnly_10)); }
	inline bool get_ExponentNegativeSignOnly_10() const { return ___ExponentNegativeSignOnly_10; }
	inline bool* get_address_of_ExponentNegativeSignOnly_10() { return &___ExponentNegativeSignOnly_10; }
	inline void set_ExponentNegativeSignOnly_10(bool value)
	{
		___ExponentNegativeSignOnly_10 = value;
	}

	inline static int32_t get_offset_of_DividePlaces_11() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___DividePlaces_11)); }
	inline int32_t get_DividePlaces_11() const { return ___DividePlaces_11; }
	inline int32_t* get_address_of_DividePlaces_11() { return &___DividePlaces_11; }
	inline void set_DividePlaces_11(int32_t value)
	{
		___DividePlaces_11 = value;
	}

	inline static int32_t get_offset_of_Percents_12() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___Percents_12)); }
	inline int32_t get_Percents_12() const { return ___Percents_12; }
	inline int32_t* get_address_of_Percents_12() { return &___Percents_12; }
	inline void set_Percents_12(int32_t value)
	{
		___Percents_12 = value;
	}

	inline static int32_t get_offset_of_Permilles_13() { return static_cast<int32_t>(offsetof(CustomInfo_t1637389333, ___Permilles_13)); }
	inline int32_t get_Permilles_13() const { return ___Permilles_13; }
	inline int32_t* get_address_of_Permilles_13() { return &___Permilles_13; }
	inline void set_Permilles_13(int32_t value)
	{
		___Permilles_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMINFO_T1637389333_H
#ifndef ATTRIBUTE_T880686410_H
#define ATTRIBUTE_T880686410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t880686410  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T880686410_H
#ifndef VALUETYPE_T11864541_H
#define VALUETYPE_T11864541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t11864541  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t11864541_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t11864541_marshaled_com
{
};
#endif // VALUETYPE_T11864541_H
#ifndef EVENTARGS_T1998285426_H
#define EVENTARGS_T1998285426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t1998285426  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t1998285426_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t1998285426 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t1998285426_StaticFields, ___Empty_0)); }
	inline EventArgs_t1998285426 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t1998285426 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t1998285426 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T1998285426_H
#ifndef ATTRIBUTEINFO_T3510427645_H
#define ATTRIBUTEINFO_T3510427645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs/AttributeInfo
struct  AttributeInfo_t3510427645  : public RuntimeObject
{
public:
	// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::_usage
	AttributeUsageAttribute_t127263158 * ____usage_0;
	// System.Int32 System.MonoCustomAttrs/AttributeInfo::_inheritanceLevel
	int32_t ____inheritanceLevel_1;

public:
	inline static int32_t get_offset_of__usage_0() { return static_cast<int32_t>(offsetof(AttributeInfo_t3510427645, ____usage_0)); }
	inline AttributeUsageAttribute_t127263158 * get__usage_0() const { return ____usage_0; }
	inline AttributeUsageAttribute_t127263158 ** get_address_of__usage_0() { return &____usage_0; }
	inline void set__usage_0(AttributeUsageAttribute_t127263158 * value)
	{
		____usage_0 = value;
		Il2CppCodeGenWriteBarrier((&____usage_0), value);
	}

	inline static int32_t get_offset_of__inheritanceLevel_1() { return static_cast<int32_t>(offsetof(AttributeInfo_t3510427645, ____inheritanceLevel_1)); }
	inline int32_t get__inheritanceLevel_1() const { return ____inheritanceLevel_1; }
	inline int32_t* get_address_of__inheritanceLevel_1() { return &____inheritanceLevel_1; }
	inline void set__inheritanceLevel_1(int32_t value)
	{
		____inheritanceLevel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEINFO_T3510427645_H
#ifndef ENVIRONMENT_T1934915445_H
#define ENVIRONMENT_T1934915445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment
struct  Environment_t1934915445  : public RuntimeObject
{
public:

public:
};

struct Environment_t1934915445_StaticFields
{
public:
	// System.OperatingSystem System.Environment::os
	OperatingSystem_t4008591922 * ___os_1;

public:
	inline static int32_t get_offset_of_os_1() { return static_cast<int32_t>(offsetof(Environment_t1934915445_StaticFields, ___os_1)); }
	inline OperatingSystem_t4008591922 * get_os_1() const { return ___os_1; }
	inline OperatingSystem_t4008591922 ** get_address_of_os_1() { return &___os_1; }
	inline void set_os_1(OperatingSystem_t4008591922 * value)
	{
		___os_1 = value;
		Il2CppCodeGenWriteBarrier((&___os_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENT_T1934915445_H
#ifndef CONVERT_T2341703673_H
#define CONVERT_T2341703673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Convert
struct  Convert_t2341703673  : public RuntimeObject
{
public:

public:
};

struct Convert_t2341703673_StaticFields
{
public:
	// System.Object System.Convert::DBNull
	RuntimeObject * ___DBNull_0;
	// System.Type[] System.Convert::conversionTable
	TypeU5BU5D_t3562884053* ___conversionTable_1;

public:
	inline static int32_t get_offset_of_DBNull_0() { return static_cast<int32_t>(offsetof(Convert_t2341703673_StaticFields, ___DBNull_0)); }
	inline RuntimeObject * get_DBNull_0() const { return ___DBNull_0; }
	inline RuntimeObject ** get_address_of_DBNull_0() { return &___DBNull_0; }
	inline void set_DBNull_0(RuntimeObject * value)
	{
		___DBNull_0 = value;
		Il2CppCodeGenWriteBarrier((&___DBNull_0), value);
	}

	inline static int32_t get_offset_of_conversionTable_1() { return static_cast<int32_t>(offsetof(Convert_t2341703673_StaticFields, ___conversionTable_1)); }
	inline TypeU5BU5D_t3562884053* get_conversionTable_1() const { return ___conversionTable_1; }
	inline TypeU5BU5D_t3562884053** get_address_of_conversionTable_1() { return &___conversionTable_1; }
	inline void set_conversionTable_1(TypeU5BU5D_t3562884053* value)
	{
		___conversionTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___conversionTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERT_T2341703673_H
#ifndef INTCOMPARER_T1649529991_H
#define INTCOMPARER_T1649529991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/IntComparer
struct  IntComparer_t1649529991  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTCOMPARER_T1649529991_H
#ifndef DBNULL_T3255622742_H
#define DBNULL_T3255622742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t3255622742  : public RuntimeObject
{
public:

public:
};

struct DBNull_t3255622742_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t3255622742 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t3255622742_StaticFields, ___Value_0)); }
	inline DBNull_t3255622742 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t3255622742 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t3255622742 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T3255622742_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef DATETIMEUTILS_T1023258296_H
#define DATETIMEUTILS_T1023258296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeUtils
struct  DateTimeUtils_t1023258296  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEUTILS_T1023258296_H
#ifndef LONGCOMPARER_T2278264264_H
#define LONGCOMPARER_T2278264264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/LongComparer
struct  LongComparer_t2278264264  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LONGCOMPARER_T2278264264_H
#ifndef DELEGATEDATA_T731970336_H
#define DELEGATEDATA_T731970336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateData
struct  DelegateData_t731970336  : public RuntimeObject
{
public:
	// System.Type System.DelegateData::target_type
	Type_t * ___target_type_0;
	// System.String System.DelegateData::method_name
	String_t* ___method_name_1;

public:
	inline static int32_t get_offset_of_target_type_0() { return static_cast<int32_t>(offsetof(DelegateData_t731970336, ___target_type_0)); }
	inline Type_t * get_target_type_0() const { return ___target_type_0; }
	inline Type_t ** get_address_of_target_type_0() { return &___target_type_0; }
	inline void set_target_type_0(Type_t * value)
	{
		___target_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_type_0), value);
	}

	inline static int32_t get_offset_of_method_name_1() { return static_cast<int32_t>(offsetof(DelegateData_t731970336, ___method_name_1)); }
	inline String_t* get_method_name_1() const { return ___method_name_1; }
	inline String_t** get_address_of_method_name_1() { return &___method_name_1; }
	inline void set_method_name_1(String_t* value)
	{
		___method_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEDATA_T731970336_H
#ifndef STRINGCOMPARER_T3450677900_H
#define STRINGCOMPARER_T3450677900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3450677900  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3450677900_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t3450677900 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t3450677900 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t3450677900 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t3450677900 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t3450677900_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t3450677900 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t3450677900 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t3450677900 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t3450677900_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t3450677900 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t3450677900 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t3450677900 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t3450677900_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t3450677900 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t3450677900 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t3450677900 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t3450677900_StaticFields, ___ordinal_3)); }
	inline StringComparer_t3450677900 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t3450677900 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t3450677900 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3450677900_H
#ifndef MONOCUSTOMATTRS_T3478587192_H
#define MONOCUSTOMATTRS_T3478587192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs
struct  MonoCustomAttrs_t3478587192  : public RuntimeObject
{
public:

public:
};

struct MonoCustomAttrs_t3478587192_StaticFields
{
public:
	// System.Reflection.Assembly System.MonoCustomAttrs::corlib
	Assembly_t2828578632 * ___corlib_0;
	// System.Type System.MonoCustomAttrs::AttributeUsageType
	Type_t * ___AttributeUsageType_1;
	// System.AttributeUsageAttribute System.MonoCustomAttrs::DefaultAttributeUsage
	AttributeUsageAttribute_t127263158 * ___DefaultAttributeUsage_2;

public:
	inline static int32_t get_offset_of_corlib_0() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t3478587192_StaticFields, ___corlib_0)); }
	inline Assembly_t2828578632 * get_corlib_0() const { return ___corlib_0; }
	inline Assembly_t2828578632 ** get_address_of_corlib_0() { return &___corlib_0; }
	inline void set_corlib_0(Assembly_t2828578632 * value)
	{
		___corlib_0 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_0), value);
	}

	inline static int32_t get_offset_of_AttributeUsageType_1() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t3478587192_StaticFields, ___AttributeUsageType_1)); }
	inline Type_t * get_AttributeUsageType_1() const { return ___AttributeUsageType_1; }
	inline Type_t ** get_address_of_AttributeUsageType_1() { return &___AttributeUsageType_1; }
	inline void set_AttributeUsageType_1(Type_t * value)
	{
		___AttributeUsageType_1 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeUsageType_1), value);
	}

	inline static int32_t get_offset_of_DefaultAttributeUsage_2() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t3478587192_StaticFields, ___DefaultAttributeUsage_2)); }
	inline AttributeUsageAttribute_t127263158 * get_DefaultAttributeUsage_2() const { return ___DefaultAttributeUsage_2; }
	inline AttributeUsageAttribute_t127263158 ** get_address_of_DefaultAttributeUsage_2() { return &___DefaultAttributeUsage_2; }
	inline void set_DefaultAttributeUsage_2(AttributeUsageAttribute_t127263158 * value)
	{
		___DefaultAttributeUsage_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultAttributeUsage_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCUSTOMATTRS_T3478587192_H
#ifndef VERSION_T2085498104_H
#define VERSION_T2085498104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t2085498104  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t2085498104, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t2085498104, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t2085498104, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t2085498104, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T2085498104_H
#ifndef SBYTECOMPARER_T1309728856_H
#define SBYTECOMPARER_T1309728856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/SByteComparer
struct  SByteComparer_t1309728856  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECOMPARER_T1309728856_H
#ifndef SHORTCOMPARER_T123498764_H
#define SHORTCOMPARER_T123498764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/ShortComparer
struct  ShortComparer_t123498764  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHORTCOMPARER_T123498764_H
#ifndef CULTUREAWARECOMPARER_T3861051372_H
#define CULTUREAWARECOMPARER_T3861051372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t3861051372  : public StringComparer_t3450677900
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1432770485 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t3861051372, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t3861051372, ____compareInfo_5)); }
	inline CompareInfo_t1432770485 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t1432770485 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t1432770485 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T3861051372_H
#ifndef ENUM_T394560640_H
#define ENUM_T394560640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t394560640  : public ValueType_t11864541
{
public:

public:
};

struct Enum_t394560640_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3230795339* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t394560640_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3230795339* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3230795339** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3230795339* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t394560640_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t394560640_marshaled_com
{
};
#endif // ENUM_T394560640_H
#ifndef ORDINALCOMPARER_T3585364852_H
#define ORDINALCOMPARER_T3585364852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t3585364852  : public StringComparer_t3450677900
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t3585364852, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T3585364852_H
#ifndef GCHANDLE_T3136143368_H
#define GCHANDLE_T3136143368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3136143368 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3136143368, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3136143368_H
#ifndef NONSERIALIZEDATTRIBUTE_T2410122449_H
#define NONSERIALIZEDATTRIBUTE_T2410122449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NonSerializedAttribute
struct  NonSerializedAttribute_t2410122449  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONSERIALIZEDATTRIBUTE_T2410122449_H
#ifndef SYSTEMEXCEPTION_T3432189758_H
#define SYSTEMEXCEPTION_T3432189758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3432189758  : public Exception_t4117462927
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3432189758_H
#ifndef THREADSTATICATTRIBUTE_T1836738349_H
#define THREADSTATICATTRIBUTE_T1836738349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t1836738349  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T1836738349_H
#ifndef VOID_T1003147579_H
#define VOID_T1003147579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1003147579 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1003147579_H
#ifndef TIMESPAN_T2493685416_H
#define TIMESPAN_T2493685416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t2493685416 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t2493685416, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t2493685416_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t2493685416  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t2493685416  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t2493685416  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t2493685416_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t2493685416  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t2493685416 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t2493685416  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t2493685416_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t2493685416  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t2493685416 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t2493685416  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t2493685416_StaticFields, ___Zero_2)); }
	inline TimeSpan_t2493685416  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t2493685416 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t2493685416  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T2493685416_H
#ifndef RESOLVEEVENTARGS_T3550247415_H
#define RESOLVEEVENTARGS_T3550247415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventArgs
struct  ResolveEventArgs_t3550247415  : public EventArgs_t1998285426
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_t3550247415, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTARGS_T3550247415_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2002217936_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2002217936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2002217936  : public EventArgs_t1998285426
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2002217936, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2002217936, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2002217936_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef U24ARRAYTYPEU2420_T2420357066_H
#define U24ARRAYTYPEU2420_T2420357066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t2420357066 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2420_t2420357066__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T2420357066_H
#ifndef U24ARRAYTYPEU2424_T3930765542_H
#define U24ARRAYTYPEU2424_T3930765542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t3930765542 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2424_t3930765542__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T3930765542_H
#ifndef U24ARRAYTYPEU2452_T3143489224_H
#define U24ARRAYTYPEU2452_T3143489224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t3143489224 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2452_t3143489224__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T3143489224_H
#ifndef U24ARRAYTYPEU24128_T3592475364_H
#define U24ARRAYTYPEU24128_T3592475364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t3592475364 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t3592475364__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T3592475364_H
#ifndef U24ARRAYTYPEU24640_T1176587164_H
#define U24ARRAYTYPEU24640_T1176587164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t1176587164 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24640_t1176587164__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T1176587164_H
#ifndef U24ARRAYTYPEU241024_T1588740713_H
#define U24ARRAYTYPEU241024_T1588740713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t1588740713 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t1588740713__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T1588740713_H
#ifndef U24ARRAYTYPEU24120_T1484074422_H
#define U24ARRAYTYPEU24120_T1484074422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t1484074422 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t1484074422__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T1484074422_H
#ifndef U24ARRAYTYPEU24256_T4076728188_H
#define U24ARRAYTYPEU24256_T4076728188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t4076728188 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t4076728188__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T4076728188_H
#ifndef MONOENUMINFO_T3761784671_H
#define MONOENUMINFO_T3761784671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo
struct  MonoEnumInfo_t3761784671 
{
public:
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype_0;
	// System.Array System.MonoEnumInfo::values
	RuntimeArray * ___values_1;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t1883187954* ___names_2;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t602384697 * ___name_hash_3;

public:
	inline static int32_t get_offset_of_utype_0() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3761784671, ___utype_0)); }
	inline Type_t * get_utype_0() const { return ___utype_0; }
	inline Type_t ** get_address_of_utype_0() { return &___utype_0; }
	inline void set_utype_0(Type_t * value)
	{
		___utype_0 = value;
		Il2CppCodeGenWriteBarrier((&___utype_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3761784671, ___values_1)); }
	inline RuntimeArray * get_values_1() const { return ___values_1; }
	inline RuntimeArray ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(RuntimeArray * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3761784671, ___names_2)); }
	inline StringU5BU5D_t1883187954* get_names_2() const { return ___names_2; }
	inline StringU5BU5D_t1883187954** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(StringU5BU5D_t1883187954* value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_name_hash_3() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3761784671, ___name_hash_3)); }
	inline Hashtable_t602384697 * get_name_hash_3() const { return ___name_hash_3; }
	inline Hashtable_t602384697 ** get_address_of_name_hash_3() { return &___name_hash_3; }
	inline void set_name_hash_3(Hashtable_t602384697 * value)
	{
		___name_hash_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_hash_3), value);
	}
};

struct MonoEnumInfo_t3761784671_StaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t602384697 * ___global_cache_5;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	RuntimeObject * ___global_cache_monitor_6;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t1309728856 * ___sbyte_comparer_7;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t123498764 * ___short_comparer_8;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t1649529991 * ___int_comparer_9;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t2278264264 * ___long_comparer_10;

public:
	inline static int32_t get_offset_of_global_cache_5() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3761784671_StaticFields, ___global_cache_5)); }
	inline Hashtable_t602384697 * get_global_cache_5() const { return ___global_cache_5; }
	inline Hashtable_t602384697 ** get_address_of_global_cache_5() { return &___global_cache_5; }
	inline void set_global_cache_5(Hashtable_t602384697 * value)
	{
		___global_cache_5 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_5), value);
	}

	inline static int32_t get_offset_of_global_cache_monitor_6() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3761784671_StaticFields, ___global_cache_monitor_6)); }
	inline RuntimeObject * get_global_cache_monitor_6() const { return ___global_cache_monitor_6; }
	inline RuntimeObject ** get_address_of_global_cache_monitor_6() { return &___global_cache_monitor_6; }
	inline void set_global_cache_monitor_6(RuntimeObject * value)
	{
		___global_cache_monitor_6 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_monitor_6), value);
	}

	inline static int32_t get_offset_of_sbyte_comparer_7() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3761784671_StaticFields, ___sbyte_comparer_7)); }
	inline SByteComparer_t1309728856 * get_sbyte_comparer_7() const { return ___sbyte_comparer_7; }
	inline SByteComparer_t1309728856 ** get_address_of_sbyte_comparer_7() { return &___sbyte_comparer_7; }
	inline void set_sbyte_comparer_7(SByteComparer_t1309728856 * value)
	{
		___sbyte_comparer_7 = value;
		Il2CppCodeGenWriteBarrier((&___sbyte_comparer_7), value);
	}

	inline static int32_t get_offset_of_short_comparer_8() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3761784671_StaticFields, ___short_comparer_8)); }
	inline ShortComparer_t123498764 * get_short_comparer_8() const { return ___short_comparer_8; }
	inline ShortComparer_t123498764 ** get_address_of_short_comparer_8() { return &___short_comparer_8; }
	inline void set_short_comparer_8(ShortComparer_t123498764 * value)
	{
		___short_comparer_8 = value;
		Il2CppCodeGenWriteBarrier((&___short_comparer_8), value);
	}

	inline static int32_t get_offset_of_int_comparer_9() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3761784671_StaticFields, ___int_comparer_9)); }
	inline IntComparer_t1649529991 * get_int_comparer_9() const { return ___int_comparer_9; }
	inline IntComparer_t1649529991 ** get_address_of_int_comparer_9() { return &___int_comparer_9; }
	inline void set_int_comparer_9(IntComparer_t1649529991 * value)
	{
		___int_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___int_comparer_9), value);
	}

	inline static int32_t get_offset_of_long_comparer_10() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3761784671_StaticFields, ___long_comparer_10)); }
	inline LongComparer_t2278264264 * get_long_comparer_10() const { return ___long_comparer_10; }
	inline LongComparer_t2278264264 ** get_address_of_long_comparer_10() { return &___long_comparer_10; }
	inline void set_long_comparer_10(LongComparer_t2278264264 * value)
	{
		___long_comparer_10 = value;
		Il2CppCodeGenWriteBarrier((&___long_comparer_10), value);
	}
};

struct MonoEnumInfo_t3761784671_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t602384697 * ___cache_4;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3761784671_ThreadStaticFields, ___cache_4)); }
	inline Hashtable_t602384697 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t602384697 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t602384697 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t3761784671_marshaled_pinvoke
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	char** ___names_2;
	Hashtable_t602384697 * ___name_hash_3;
};
// Native definition for COM marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t3761784671_marshaled_com
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	Il2CppChar** ___names_2;
	Hashtable_t602384697 * ___name_hash_3;
};
#endif // MONOENUMINFO_T3761784671_H
#ifndef U24ARRAYTYPEU242048_T2852006919_H
#define U24ARRAYTYPEU242048_T2852006919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t2852006919 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242048_t2852006919__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T2852006919_H
#ifndef U24ARRAYTYPEU2456_T3190407250_H
#define U24ARRAYTYPEU2456_T3190407250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t3190407250 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2456_t3190407250__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T3190407250_H
#ifndef U24ARRAYTYPEU24124_T3391491356_H
#define U24ARRAYTYPEU24124_T3391491356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t3391491356 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24124_t3391491356__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T3391491356_H
#ifndef U24ARRAYTYPEU248_T2215156304_H
#define U24ARRAYTYPEU248_T2215156304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t2215156304 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t2215156304__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T2215156304_H
#ifndef U24ARRAYTYPEU2496_T3345621835_H
#define U24ARRAYTYPEU2496_T3345621835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t3345621835 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2496_t3345621835__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T3345621835_H
#ifndef FLAGSATTRIBUTE_T1073844319_H
#define FLAGSATTRIBUTE_T1073844319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FlagsAttribute
struct  FlagsAttribute_t1073844319  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGSATTRIBUTE_T1073844319_H
#ifndef U24ARRAYTYPEU2416_T1463985830_H
#define U24ARRAYTYPEU2416_T1463985830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t1463985830 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t1463985830__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T1463985830_H
#ifndef U24ARRAYTYPEU243132_T1160676659_H
#define U24ARRAYTYPEU243132_T1160676659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t1160676659 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU243132_t1160676659__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T1160676659_H
#ifndef U24ARRAYTYPEU2432_T2178182285_H
#define U24ARRAYTYPEU2432_T2178182285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t2178182285 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2432_t2178182285__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T2178182285_H
#ifndef U24ARRAYTYPEU2464_T3909673640_H
#define U24ARRAYTYPEU2464_T3909673640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t3909673640 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t3909673640__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T3909673640_H
#ifndef U24ARRAYTYPEU2412_T1509555024_H
#define U24ARRAYTYPEU2412_T1509555024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t1509555024 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t1509555024__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T1509555024_H
#ifndef U24ARRAYTYPEU2448_T3075717191_H
#define U24ARRAYTYPEU2448_T3075717191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t3075717191 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t3075717191__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T3075717191_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t1887547851 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t1887547851 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t1887547851 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t1887547851 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef U24ARRAYTYPEU2472_T3555158292_H
#define U24ARRAYTYPEU2472_T3555158292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t3555158292 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2472_t3555158292__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T3555158292_H
#ifndef U24ARRAYTYPEU24136_T3635555988_H
#define U24ARRAYTYPEU24136_T3635555988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t3635555988 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t3635555988__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T3635555988_H
#ifndef WEAKREFERENCE_T2659066231_H
#define WEAKREFERENCE_T2659066231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t2659066231  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3136143368  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t2659066231, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t2659066231, ___gcHandle_1)); }
	inline GCHandle_t3136143368  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3136143368 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3136143368  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T2659066231_H
#ifndef ARITHMETICEXCEPTION_T747938048_H
#define ARITHMETICEXCEPTION_T747938048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t747938048  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T747938048_H
#ifndef CONFIDENCEFACTOR_T2455238366_H
#define CONFIDENCEFACTOR_T2455238366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2455238366 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2455238366, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIDENCEFACTOR_T2455238366_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3736506064_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3736506064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3736506064  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2456_t3190407250  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t3930765542  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t3930765542  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t3930765542  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t3930765542  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t1463985830  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t1463985830  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t1160676659  ___U24U24fieldU2D15_7;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t2420357066  ___U24U24fieldU2D16_8;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t2178182285  ___U24U24fieldU2D17_9;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t3075717191  ___U24U24fieldU2D18_10;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t3909673640  ___U24U24fieldU2D19_11;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t3909673640  ___U24U24fieldU2D20_12;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t3909673640  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t3909673640  ___U24U24fieldU2D22_14;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t1509555024  ___U24U24fieldU2D23_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t1509555024  ___U24U24fieldU2D24_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t1509555024  ___U24U24fieldU2D25_17;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t1463985830  ___U24U24fieldU2D26_18;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24136_t3635555988  ___U24U24fieldU2D27_19;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU2472_t3555158292  ___U24U24fieldU2D30_20;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU248_t2215156304  ___U24U24fieldU2D31_21;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU2420_t2420357066  ___U24U24fieldU2D32_22;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-33
	U24ArrayTypeU2464_t3909673640  ___U24U24fieldU2D33_23;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU24124_t3391491356  ___U24U24fieldU2D34_24;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2432_t2178182285  ___U24U24fieldU2D35_25;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU2496_t3345621835  ___U24U24fieldU2D36_26;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU242048_t2852006919  ___U24U24fieldU2D37_27;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2456_t3190407250  ___U24U24fieldU2D38_28;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2416_t1463985830  ___U24U24fieldU2D39_29;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU2448_t3075717191  ___U24U24fieldU2D40_30;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU242048_t2852006919  ___U24U24fieldU2D41_31;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU242048_t2852006919  ___U24U24fieldU2D42_32;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU24256_t4076728188  ___U24U24fieldU2D43_33;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU24256_t4076728188  ___U24U24fieldU2D44_34;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU24120_t1484074422  ___U24U24fieldU2D45_35;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU24256_t4076728188  ___U24U24fieldU2D46_36;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU24256_t4076728188  ___U24U24fieldU2D47_37;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU241024_t1588740713  ___U24U24fieldU2D48_38;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU241024_t1588740713  ___U24U24fieldU2D49_39;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU241024_t1588740713  ___U24U24fieldU2D50_40;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU241024_t1588740713  ___U24U24fieldU2D51_41;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU241024_t1588740713  ___U24U24fieldU2D52_42;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU241024_t1588740713  ___U24U24fieldU2D53_43;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t1588740713  ___U24U24fieldU2D54_44;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t1588740713  ___U24U24fieldU2D55_45;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU24256_t4076728188  ___U24U24fieldU2D56_46;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU24640_t1176587164  ___U24U24fieldU2D57_47;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU2412_t1509555024  ___U24U24fieldU2D60_48;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24128_t3592475364  ___U24U24fieldU2D62_49;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24256_t4076728188  ___U24U24fieldU2D63_50;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2452_t3143489224  ___U24U24fieldU2D64_51;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU2452_t3143489224  ___U24U24fieldU2D65_52;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2456_t3190407250  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2456_t3190407250 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2456_t3190407250  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t3930765542  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t3930765542 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t3930765542  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t3930765542  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t3930765542 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t3930765542  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t3930765542  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t3930765542 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t3930765542  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t3930765542  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t3930765542 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t3930765542  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t1463985830  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t1463985830 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t1463985830  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t1463985830  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t1463985830 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t1463985830  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D15_7)); }
	inline U24ArrayTypeU243132_t1160676659  get_U24U24fieldU2D15_7() const { return ___U24U24fieldU2D15_7; }
	inline U24ArrayTypeU243132_t1160676659 * get_address_of_U24U24fieldU2D15_7() { return &___U24U24fieldU2D15_7; }
	inline void set_U24U24fieldU2D15_7(U24ArrayTypeU243132_t1160676659  value)
	{
		___U24U24fieldU2D15_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D16_8)); }
	inline U24ArrayTypeU2420_t2420357066  get_U24U24fieldU2D16_8() const { return ___U24U24fieldU2D16_8; }
	inline U24ArrayTypeU2420_t2420357066 * get_address_of_U24U24fieldU2D16_8() { return &___U24U24fieldU2D16_8; }
	inline void set_U24U24fieldU2D16_8(U24ArrayTypeU2420_t2420357066  value)
	{
		___U24U24fieldU2D16_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D17_9)); }
	inline U24ArrayTypeU2432_t2178182285  get_U24U24fieldU2D17_9() const { return ___U24U24fieldU2D17_9; }
	inline U24ArrayTypeU2432_t2178182285 * get_address_of_U24U24fieldU2D17_9() { return &___U24U24fieldU2D17_9; }
	inline void set_U24U24fieldU2D17_9(U24ArrayTypeU2432_t2178182285  value)
	{
		___U24U24fieldU2D17_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D18_10)); }
	inline U24ArrayTypeU2448_t3075717191  get_U24U24fieldU2D18_10() const { return ___U24U24fieldU2D18_10; }
	inline U24ArrayTypeU2448_t3075717191 * get_address_of_U24U24fieldU2D18_10() { return &___U24U24fieldU2D18_10; }
	inline void set_U24U24fieldU2D18_10(U24ArrayTypeU2448_t3075717191  value)
	{
		___U24U24fieldU2D18_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D19_11)); }
	inline U24ArrayTypeU2464_t3909673640  get_U24U24fieldU2D19_11() const { return ___U24U24fieldU2D19_11; }
	inline U24ArrayTypeU2464_t3909673640 * get_address_of_U24U24fieldU2D19_11() { return &___U24U24fieldU2D19_11; }
	inline void set_U24U24fieldU2D19_11(U24ArrayTypeU2464_t3909673640  value)
	{
		___U24U24fieldU2D19_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D20_12)); }
	inline U24ArrayTypeU2464_t3909673640  get_U24U24fieldU2D20_12() const { return ___U24U24fieldU2D20_12; }
	inline U24ArrayTypeU2464_t3909673640 * get_address_of_U24U24fieldU2D20_12() { return &___U24U24fieldU2D20_12; }
	inline void set_U24U24fieldU2D20_12(U24ArrayTypeU2464_t3909673640  value)
	{
		___U24U24fieldU2D20_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU2464_t3909673640  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU2464_t3909673640 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU2464_t3909673640  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU2464_t3909673640  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU2464_t3909673640 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU2464_t3909673640  value)
	{
		___U24U24fieldU2D22_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D23_15)); }
	inline U24ArrayTypeU2412_t1509555024  get_U24U24fieldU2D23_15() const { return ___U24U24fieldU2D23_15; }
	inline U24ArrayTypeU2412_t1509555024 * get_address_of_U24U24fieldU2D23_15() { return &___U24U24fieldU2D23_15; }
	inline void set_U24U24fieldU2D23_15(U24ArrayTypeU2412_t1509555024  value)
	{
		___U24U24fieldU2D23_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D24_16)); }
	inline U24ArrayTypeU2412_t1509555024  get_U24U24fieldU2D24_16() const { return ___U24U24fieldU2D24_16; }
	inline U24ArrayTypeU2412_t1509555024 * get_address_of_U24U24fieldU2D24_16() { return &___U24U24fieldU2D24_16; }
	inline void set_U24U24fieldU2D24_16(U24ArrayTypeU2412_t1509555024  value)
	{
		___U24U24fieldU2D24_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D25_17)); }
	inline U24ArrayTypeU2412_t1509555024  get_U24U24fieldU2D25_17() const { return ___U24U24fieldU2D25_17; }
	inline U24ArrayTypeU2412_t1509555024 * get_address_of_U24U24fieldU2D25_17() { return &___U24U24fieldU2D25_17; }
	inline void set_U24U24fieldU2D25_17(U24ArrayTypeU2412_t1509555024  value)
	{
		___U24U24fieldU2D25_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D26_18)); }
	inline U24ArrayTypeU2416_t1463985830  get_U24U24fieldU2D26_18() const { return ___U24U24fieldU2D26_18; }
	inline U24ArrayTypeU2416_t1463985830 * get_address_of_U24U24fieldU2D26_18() { return &___U24U24fieldU2D26_18; }
	inline void set_U24U24fieldU2D26_18(U24ArrayTypeU2416_t1463985830  value)
	{
		___U24U24fieldU2D26_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D27_19)); }
	inline U24ArrayTypeU24136_t3635555988  get_U24U24fieldU2D27_19() const { return ___U24U24fieldU2D27_19; }
	inline U24ArrayTypeU24136_t3635555988 * get_address_of_U24U24fieldU2D27_19() { return &___U24U24fieldU2D27_19; }
	inline void set_U24U24fieldU2D27_19(U24ArrayTypeU24136_t3635555988  value)
	{
		___U24U24fieldU2D27_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D30_20)); }
	inline U24ArrayTypeU2472_t3555158292  get_U24U24fieldU2D30_20() const { return ___U24U24fieldU2D30_20; }
	inline U24ArrayTypeU2472_t3555158292 * get_address_of_U24U24fieldU2D30_20() { return &___U24U24fieldU2D30_20; }
	inline void set_U24U24fieldU2D30_20(U24ArrayTypeU2472_t3555158292  value)
	{
		___U24U24fieldU2D30_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D31_21)); }
	inline U24ArrayTypeU248_t2215156304  get_U24U24fieldU2D31_21() const { return ___U24U24fieldU2D31_21; }
	inline U24ArrayTypeU248_t2215156304 * get_address_of_U24U24fieldU2D31_21() { return &___U24U24fieldU2D31_21; }
	inline void set_U24U24fieldU2D31_21(U24ArrayTypeU248_t2215156304  value)
	{
		___U24U24fieldU2D31_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D32_22)); }
	inline U24ArrayTypeU2420_t2420357066  get_U24U24fieldU2D32_22() const { return ___U24U24fieldU2D32_22; }
	inline U24ArrayTypeU2420_t2420357066 * get_address_of_U24U24fieldU2D32_22() { return &___U24U24fieldU2D32_22; }
	inline void set_U24U24fieldU2D32_22(U24ArrayTypeU2420_t2420357066  value)
	{
		___U24U24fieldU2D32_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D33_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D33_23)); }
	inline U24ArrayTypeU2464_t3909673640  get_U24U24fieldU2D33_23() const { return ___U24U24fieldU2D33_23; }
	inline U24ArrayTypeU2464_t3909673640 * get_address_of_U24U24fieldU2D33_23() { return &___U24U24fieldU2D33_23; }
	inline void set_U24U24fieldU2D33_23(U24ArrayTypeU2464_t3909673640  value)
	{
		___U24U24fieldU2D33_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D34_24)); }
	inline U24ArrayTypeU24124_t3391491356  get_U24U24fieldU2D34_24() const { return ___U24U24fieldU2D34_24; }
	inline U24ArrayTypeU24124_t3391491356 * get_address_of_U24U24fieldU2D34_24() { return &___U24U24fieldU2D34_24; }
	inline void set_U24U24fieldU2D34_24(U24ArrayTypeU24124_t3391491356  value)
	{
		___U24U24fieldU2D34_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D35_25)); }
	inline U24ArrayTypeU2432_t2178182285  get_U24U24fieldU2D35_25() const { return ___U24U24fieldU2D35_25; }
	inline U24ArrayTypeU2432_t2178182285 * get_address_of_U24U24fieldU2D35_25() { return &___U24U24fieldU2D35_25; }
	inline void set_U24U24fieldU2D35_25(U24ArrayTypeU2432_t2178182285  value)
	{
		___U24U24fieldU2D35_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D36_26)); }
	inline U24ArrayTypeU2496_t3345621835  get_U24U24fieldU2D36_26() const { return ___U24U24fieldU2D36_26; }
	inline U24ArrayTypeU2496_t3345621835 * get_address_of_U24U24fieldU2D36_26() { return &___U24U24fieldU2D36_26; }
	inline void set_U24U24fieldU2D36_26(U24ArrayTypeU2496_t3345621835  value)
	{
		___U24U24fieldU2D36_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D37_27)); }
	inline U24ArrayTypeU242048_t2852006919  get_U24U24fieldU2D37_27() const { return ___U24U24fieldU2D37_27; }
	inline U24ArrayTypeU242048_t2852006919 * get_address_of_U24U24fieldU2D37_27() { return &___U24U24fieldU2D37_27; }
	inline void set_U24U24fieldU2D37_27(U24ArrayTypeU242048_t2852006919  value)
	{
		___U24U24fieldU2D37_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D38_28)); }
	inline U24ArrayTypeU2456_t3190407250  get_U24U24fieldU2D38_28() const { return ___U24U24fieldU2D38_28; }
	inline U24ArrayTypeU2456_t3190407250 * get_address_of_U24U24fieldU2D38_28() { return &___U24U24fieldU2D38_28; }
	inline void set_U24U24fieldU2D38_28(U24ArrayTypeU2456_t3190407250  value)
	{
		___U24U24fieldU2D38_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D39_29)); }
	inline U24ArrayTypeU2416_t1463985830  get_U24U24fieldU2D39_29() const { return ___U24U24fieldU2D39_29; }
	inline U24ArrayTypeU2416_t1463985830 * get_address_of_U24U24fieldU2D39_29() { return &___U24U24fieldU2D39_29; }
	inline void set_U24U24fieldU2D39_29(U24ArrayTypeU2416_t1463985830  value)
	{
		___U24U24fieldU2D39_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D40_30)); }
	inline U24ArrayTypeU2448_t3075717191  get_U24U24fieldU2D40_30() const { return ___U24U24fieldU2D40_30; }
	inline U24ArrayTypeU2448_t3075717191 * get_address_of_U24U24fieldU2D40_30() { return &___U24U24fieldU2D40_30; }
	inline void set_U24U24fieldU2D40_30(U24ArrayTypeU2448_t3075717191  value)
	{
		___U24U24fieldU2D40_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D41_31)); }
	inline U24ArrayTypeU242048_t2852006919  get_U24U24fieldU2D41_31() const { return ___U24U24fieldU2D41_31; }
	inline U24ArrayTypeU242048_t2852006919 * get_address_of_U24U24fieldU2D41_31() { return &___U24U24fieldU2D41_31; }
	inline void set_U24U24fieldU2D41_31(U24ArrayTypeU242048_t2852006919  value)
	{
		___U24U24fieldU2D41_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D42_32)); }
	inline U24ArrayTypeU242048_t2852006919  get_U24U24fieldU2D42_32() const { return ___U24U24fieldU2D42_32; }
	inline U24ArrayTypeU242048_t2852006919 * get_address_of_U24U24fieldU2D42_32() { return &___U24U24fieldU2D42_32; }
	inline void set_U24U24fieldU2D42_32(U24ArrayTypeU242048_t2852006919  value)
	{
		___U24U24fieldU2D42_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D43_33)); }
	inline U24ArrayTypeU24256_t4076728188  get_U24U24fieldU2D43_33() const { return ___U24U24fieldU2D43_33; }
	inline U24ArrayTypeU24256_t4076728188 * get_address_of_U24U24fieldU2D43_33() { return &___U24U24fieldU2D43_33; }
	inline void set_U24U24fieldU2D43_33(U24ArrayTypeU24256_t4076728188  value)
	{
		___U24U24fieldU2D43_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D44_34)); }
	inline U24ArrayTypeU24256_t4076728188  get_U24U24fieldU2D44_34() const { return ___U24U24fieldU2D44_34; }
	inline U24ArrayTypeU24256_t4076728188 * get_address_of_U24U24fieldU2D44_34() { return &___U24U24fieldU2D44_34; }
	inline void set_U24U24fieldU2D44_34(U24ArrayTypeU24256_t4076728188  value)
	{
		___U24U24fieldU2D44_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D45_35)); }
	inline U24ArrayTypeU24120_t1484074422  get_U24U24fieldU2D45_35() const { return ___U24U24fieldU2D45_35; }
	inline U24ArrayTypeU24120_t1484074422 * get_address_of_U24U24fieldU2D45_35() { return &___U24U24fieldU2D45_35; }
	inline void set_U24U24fieldU2D45_35(U24ArrayTypeU24120_t1484074422  value)
	{
		___U24U24fieldU2D45_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D46_36)); }
	inline U24ArrayTypeU24256_t4076728188  get_U24U24fieldU2D46_36() const { return ___U24U24fieldU2D46_36; }
	inline U24ArrayTypeU24256_t4076728188 * get_address_of_U24U24fieldU2D46_36() { return &___U24U24fieldU2D46_36; }
	inline void set_U24U24fieldU2D46_36(U24ArrayTypeU24256_t4076728188  value)
	{
		___U24U24fieldU2D46_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D47_37)); }
	inline U24ArrayTypeU24256_t4076728188  get_U24U24fieldU2D47_37() const { return ___U24U24fieldU2D47_37; }
	inline U24ArrayTypeU24256_t4076728188 * get_address_of_U24U24fieldU2D47_37() { return &___U24U24fieldU2D47_37; }
	inline void set_U24U24fieldU2D47_37(U24ArrayTypeU24256_t4076728188  value)
	{
		___U24U24fieldU2D47_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D48_38)); }
	inline U24ArrayTypeU241024_t1588740713  get_U24U24fieldU2D48_38() const { return ___U24U24fieldU2D48_38; }
	inline U24ArrayTypeU241024_t1588740713 * get_address_of_U24U24fieldU2D48_38() { return &___U24U24fieldU2D48_38; }
	inline void set_U24U24fieldU2D48_38(U24ArrayTypeU241024_t1588740713  value)
	{
		___U24U24fieldU2D48_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D49_39)); }
	inline U24ArrayTypeU241024_t1588740713  get_U24U24fieldU2D49_39() const { return ___U24U24fieldU2D49_39; }
	inline U24ArrayTypeU241024_t1588740713 * get_address_of_U24U24fieldU2D49_39() { return &___U24U24fieldU2D49_39; }
	inline void set_U24U24fieldU2D49_39(U24ArrayTypeU241024_t1588740713  value)
	{
		___U24U24fieldU2D49_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D50_40)); }
	inline U24ArrayTypeU241024_t1588740713  get_U24U24fieldU2D50_40() const { return ___U24U24fieldU2D50_40; }
	inline U24ArrayTypeU241024_t1588740713 * get_address_of_U24U24fieldU2D50_40() { return &___U24U24fieldU2D50_40; }
	inline void set_U24U24fieldU2D50_40(U24ArrayTypeU241024_t1588740713  value)
	{
		___U24U24fieldU2D50_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D51_41)); }
	inline U24ArrayTypeU241024_t1588740713  get_U24U24fieldU2D51_41() const { return ___U24U24fieldU2D51_41; }
	inline U24ArrayTypeU241024_t1588740713 * get_address_of_U24U24fieldU2D51_41() { return &___U24U24fieldU2D51_41; }
	inline void set_U24U24fieldU2D51_41(U24ArrayTypeU241024_t1588740713  value)
	{
		___U24U24fieldU2D51_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D52_42)); }
	inline U24ArrayTypeU241024_t1588740713  get_U24U24fieldU2D52_42() const { return ___U24U24fieldU2D52_42; }
	inline U24ArrayTypeU241024_t1588740713 * get_address_of_U24U24fieldU2D52_42() { return &___U24U24fieldU2D52_42; }
	inline void set_U24U24fieldU2D52_42(U24ArrayTypeU241024_t1588740713  value)
	{
		___U24U24fieldU2D52_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D53_43)); }
	inline U24ArrayTypeU241024_t1588740713  get_U24U24fieldU2D53_43() const { return ___U24U24fieldU2D53_43; }
	inline U24ArrayTypeU241024_t1588740713 * get_address_of_U24U24fieldU2D53_43() { return &___U24U24fieldU2D53_43; }
	inline void set_U24U24fieldU2D53_43(U24ArrayTypeU241024_t1588740713  value)
	{
		___U24U24fieldU2D53_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D54_44)); }
	inline U24ArrayTypeU241024_t1588740713  get_U24U24fieldU2D54_44() const { return ___U24U24fieldU2D54_44; }
	inline U24ArrayTypeU241024_t1588740713 * get_address_of_U24U24fieldU2D54_44() { return &___U24U24fieldU2D54_44; }
	inline void set_U24U24fieldU2D54_44(U24ArrayTypeU241024_t1588740713  value)
	{
		___U24U24fieldU2D54_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D55_45)); }
	inline U24ArrayTypeU241024_t1588740713  get_U24U24fieldU2D55_45() const { return ___U24U24fieldU2D55_45; }
	inline U24ArrayTypeU241024_t1588740713 * get_address_of_U24U24fieldU2D55_45() { return &___U24U24fieldU2D55_45; }
	inline void set_U24U24fieldU2D55_45(U24ArrayTypeU241024_t1588740713  value)
	{
		___U24U24fieldU2D55_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D56_46)); }
	inline U24ArrayTypeU24256_t4076728188  get_U24U24fieldU2D56_46() const { return ___U24U24fieldU2D56_46; }
	inline U24ArrayTypeU24256_t4076728188 * get_address_of_U24U24fieldU2D56_46() { return &___U24U24fieldU2D56_46; }
	inline void set_U24U24fieldU2D56_46(U24ArrayTypeU24256_t4076728188  value)
	{
		___U24U24fieldU2D56_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D57_47)); }
	inline U24ArrayTypeU24640_t1176587164  get_U24U24fieldU2D57_47() const { return ___U24U24fieldU2D57_47; }
	inline U24ArrayTypeU24640_t1176587164 * get_address_of_U24U24fieldU2D57_47() { return &___U24U24fieldU2D57_47; }
	inline void set_U24U24fieldU2D57_47(U24ArrayTypeU24640_t1176587164  value)
	{
		___U24U24fieldU2D57_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D60_48)); }
	inline U24ArrayTypeU2412_t1509555024  get_U24U24fieldU2D60_48() const { return ___U24U24fieldU2D60_48; }
	inline U24ArrayTypeU2412_t1509555024 * get_address_of_U24U24fieldU2D60_48() { return &___U24U24fieldU2D60_48; }
	inline void set_U24U24fieldU2D60_48(U24ArrayTypeU2412_t1509555024  value)
	{
		___U24U24fieldU2D60_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D62_49)); }
	inline U24ArrayTypeU24128_t3592475364  get_U24U24fieldU2D62_49() const { return ___U24U24fieldU2D62_49; }
	inline U24ArrayTypeU24128_t3592475364 * get_address_of_U24U24fieldU2D62_49() { return &___U24U24fieldU2D62_49; }
	inline void set_U24U24fieldU2D62_49(U24ArrayTypeU24128_t3592475364  value)
	{
		___U24U24fieldU2D62_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D63_50)); }
	inline U24ArrayTypeU24256_t4076728188  get_U24U24fieldU2D63_50() const { return ___U24U24fieldU2D63_50; }
	inline U24ArrayTypeU24256_t4076728188 * get_address_of_U24U24fieldU2D63_50() { return &___U24U24fieldU2D63_50; }
	inline void set_U24U24fieldU2D63_50(U24ArrayTypeU24256_t4076728188  value)
	{
		___U24U24fieldU2D63_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D64_51)); }
	inline U24ArrayTypeU2452_t3143489224  get_U24U24fieldU2D64_51() const { return ___U24U24fieldU2D64_51; }
	inline U24ArrayTypeU2452_t3143489224 * get_address_of_U24U24fieldU2D64_51() { return &___U24U24fieldU2D64_51; }
	inline void set_U24U24fieldU2D64_51(U24ArrayTypeU2452_t3143489224  value)
	{
		___U24U24fieldU2D64_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields, ___U24U24fieldU2D65_52)); }
	inline U24ArrayTypeU2452_t3143489224  get_U24U24fieldU2D65_52() const { return ___U24U24fieldU2D65_52; }
	inline U24ArrayTypeU2452_t3143489224 * get_address_of_U24U24fieldU2D65_52() { return &___U24U24fieldU2D65_52; }
	inline void set_U24U24fieldU2D65_52(U24ArrayTypeU2452_t3143489224  value)
	{
		___U24U24fieldU2D65_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3736506064_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T1439937642_H
#define UNAUTHORIZEDACCESSEXCEPTION_T1439937642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t1439937642  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T1439937642_H
#ifndef TYPELOADEXCEPTION_T420215290_H
#define TYPELOADEXCEPTION_T420215290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t420215290  : public SystemException_t3432189758
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t420215290, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t420215290, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T420215290_H
#ifndef BINDINGFLAGS_T3554232552_H
#define BINDINGFLAGS_T3554232552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t3554232552 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t3554232552, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T3554232552_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T1975584198_H
#define TYPEINITIALIZATIONEXCEPTION_T1975584198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t1975584198  : public SystemException_t3432189758
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t1975584198, ___type_name_11)); }
	inline String_t* get_type_name_11() const { return ___type_name_11; }
	inline String_t** get_address_of_type_name_11() { return &___type_name_11; }
	inline void set_type_name_11(String_t* value)
	{
		___type_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T1975584198_H
#ifndef STRINGCOMPARISON_T1804544847_H
#define STRINGCOMPARISON_T1804544847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t1804544847 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t1804544847, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARISON_T1804544847_H
#ifndef CURRENTSYSTEMTIMEZONE_T1159713469_H
#define CURRENTSYSTEMTIMEZONE_T1159713469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t1159713469  : public TimeZone_t1265713034
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t602384697 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t2493685416  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t2493685416  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1159713469, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1159713469, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1159713469, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t602384697 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t602384697 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t602384697 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1159713469, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1159713469, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t2493685416  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t2493685416 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t2493685416  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1159713469, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t2493685416  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t2493685416 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t2493685416  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t1159713469_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t3506654652 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1159713469_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1159713469_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t3506654652 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t3506654652 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t3506654652 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T1159713469_H
#ifndef NULLREFERENCEEXCEPTION_T1064087809_H
#define NULLREFERENCEEXCEPTION_T1064087809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1064087809  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1064087809_H
#ifndef TYPECODE_T3331154982_H
#define TYPECODE_T3331154982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t3331154982 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t3331154982, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECODE_T3331154982_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T2931943092_H
#define NOTIMPLEMENTEDEXCEPTION_T2931943092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t2931943092  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T2931943092_H
#ifndef MULTICASTNOTSUPPORTEDEXCEPTION_T2255369571_H
#define MULTICASTNOTSUPPORTEDEXCEPTION_T2255369571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastNotSupportedException
struct  MulticastNotSupportedException_t2255369571  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTNOTSUPPORTEDEXCEPTION_T2255369571_H
#ifndef MONOASYNCCALL_T2102549912_H
#define MONOASYNCCALL_T2102549912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoAsyncCall
struct  MonoAsyncCall_t2102549912  : public RuntimeObject
{
public:
	// System.Object System.MonoAsyncCall::msg
	RuntimeObject * ___msg_0;
	// System.IntPtr System.MonoAsyncCall::cb_method
	intptr_t ___cb_method_1;
	// System.Object System.MonoAsyncCall::cb_target
	RuntimeObject * ___cb_target_2;
	// System.Object System.MonoAsyncCall::state
	RuntimeObject * ___state_3;
	// System.Object System.MonoAsyncCall::res
	RuntimeObject * ___res_4;
	// System.Object System.MonoAsyncCall::out_args
	RuntimeObject * ___out_args_5;
	// System.Int64 System.MonoAsyncCall::wait_event
	int64_t ___wait_event_6;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2102549912, ___msg_0)); }
	inline RuntimeObject * get_msg_0() const { return ___msg_0; }
	inline RuntimeObject ** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(RuntimeObject * value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((&___msg_0), value);
	}

	inline static int32_t get_offset_of_cb_method_1() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2102549912, ___cb_method_1)); }
	inline intptr_t get_cb_method_1() const { return ___cb_method_1; }
	inline intptr_t* get_address_of_cb_method_1() { return &___cb_method_1; }
	inline void set_cb_method_1(intptr_t value)
	{
		___cb_method_1 = value;
	}

	inline static int32_t get_offset_of_cb_target_2() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2102549912, ___cb_target_2)); }
	inline RuntimeObject * get_cb_target_2() const { return ___cb_target_2; }
	inline RuntimeObject ** get_address_of_cb_target_2() { return &___cb_target_2; }
	inline void set_cb_target_2(RuntimeObject * value)
	{
		___cb_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___cb_target_2), value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2102549912, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((&___state_3), value);
	}

	inline static int32_t get_offset_of_res_4() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2102549912, ___res_4)); }
	inline RuntimeObject * get_res_4() const { return ___res_4; }
	inline RuntimeObject ** get_address_of_res_4() { return &___res_4; }
	inline void set_res_4(RuntimeObject * value)
	{
		___res_4 = value;
		Il2CppCodeGenWriteBarrier((&___res_4), value);
	}

	inline static int32_t get_offset_of_out_args_5() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2102549912, ___out_args_5)); }
	inline RuntimeObject * get_out_args_5() const { return ___out_args_5; }
	inline RuntimeObject ** get_address_of_out_args_5() { return &___out_args_5; }
	inline void set_out_args_5(RuntimeObject * value)
	{
		___out_args_5 = value;
		Il2CppCodeGenWriteBarrier((&___out_args_5), value);
	}

	inline static int32_t get_offset_of_wait_event_6() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2102549912, ___wait_event_6)); }
	inline int64_t get_wait_event_6() const { return ___wait_event_6; }
	inline int64_t* get_address_of_wait_event_6() { return &___wait_event_6; }
	inline void set_wait_event_6(int64_t value)
	{
		___wait_event_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOASYNCCALL_T2102549912_H
#ifndef MEMBERACCESSEXCEPTION_T2075952804_H
#define MEMBERACCESSEXCEPTION_T2075952804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t2075952804  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T2075952804_H
#ifndef LOADEROPTIMIZATION_T970040729_H
#define LOADEROPTIMIZATION_T970040729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LoaderOptimization
struct  LoaderOptimization_t970040729 
{
public:
	// System.Int32 System.LoaderOptimization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoaderOptimization_t970040729, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADEROPTIMIZATION_T970040729_H
#ifndef INVALIDOPERATIONEXCEPTION_T3566863754_H
#define INVALIDOPERATIONEXCEPTION_T3566863754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t3566863754  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T3566863754_H
#ifndef INVALIDCASTEXCEPTION_T640954035_H
#define INVALIDCASTEXCEPTION_T640954035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t640954035  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T640954035_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T2181125269_H
#define INDEXOUTOFRANGEEXCEPTION_T2181125269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t2181125269  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T2181125269_H
#ifndef FORMATEXCEPTION_T1441977095_H
#define FORMATEXCEPTION_T1441977095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t1441977095  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T1441977095_H
#ifndef EXECUTIONENGINEEXCEPTION_T3732268080_H
#define EXECUTIONENGINEEXCEPTION_T3732268080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExecutionEngineException
struct  ExecutionEngineException_t3732268080  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONENGINEEXCEPTION_T3732268080_H
#ifndef ENVIRONMENTVARIABLETARGET_T1290785741_H
#define ENVIRONMENTVARIABLETARGET_T1290785741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EnvironmentVariableTarget
struct  EnvironmentVariableTarget_t1290785741 
{
public:
	// System.Int32 System.EnvironmentVariableTarget::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EnvironmentVariableTarget_t1290785741, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENTVARIABLETARGET_T1290785741_H
#ifndef SPECIALFOLDER_T3646565794_H
#define SPECIALFOLDER_T3646565794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment/SpecialFolder
struct  SpecialFolder_t3646565794 
{
public:
	// System.Int32 System.Environment/SpecialFolder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SpecialFolder_t3646565794, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPECIALFOLDER_T3646565794_H
#ifndef DAYOFWEEK_T439290786_H
#define DAYOFWEEK_T439290786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t439290786 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DayOfWeek_t439290786, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAYOFWEEK_T439290786_H
#ifndef DATETIMEKIND_T912426768_H
#define DATETIMEKIND_T912426768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t912426768 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t912426768, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T912426768_H
#ifndef WHICH_T3521084345_H
#define WHICH_T3521084345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime/Which
struct  Which_t3521084345 
{
public:
	// System.Int32 System.DateTime/Which::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Which_t3521084345, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHICH_T3521084345_H
#ifndef OUTOFMEMORYEXCEPTION_T2685954115_H
#define OUTOFMEMORYEXCEPTION_T2685954115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t2685954115  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T2685954115_H
#ifndef PLATFORMID_T3435361711_H
#define PLATFORMID_T3435361711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformID
struct  PlatformID_t3435361711 
{
public:
	// System.Int32 System.PlatformID::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlatformID_t3435361711, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMID_T3435361711_H
#ifndef NOTSUPPORTEDEXCEPTION_T4290672537_H
#define NOTSUPPORTEDEXCEPTION_T4290672537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t4290672537  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T4290672537_H
#ifndef DELEGATE_T824990709_H
#define DELEGATE_T824990709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t824990709  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t731970336 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t824990709, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t824990709, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t824990709, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t824990709, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t824990709, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t824990709, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t824990709, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t824990709, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t824990709, ___data_8)); }
	inline DelegateData_t731970336 * get_data_8() const { return ___data_8; }
	inline DelegateData_t731970336 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t731970336 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T824990709_H
#ifndef RANKEXCEPTION_T2812654414_H
#define RANKEXCEPTION_T2812654414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t2812654414  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T2812654414_H
#ifndef RUNTIMEMETHODHANDLE_T359712995_H
#define RUNTIMEMETHODHANDLE_T359712995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t359712995 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t359712995, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODHANDLE_T359712995_H
#ifndef RUNTIMETYPEHANDLE_T1576606783_H
#define RUNTIMETYPEHANDLE_T1576606783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t1576606783 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1576606783, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T1576606783_H
#ifndef STRINGSPLITOPTIONS_T2509321299_H
#define STRINGSPLITOPTIONS_T2509321299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t2509321299 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t2509321299, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGSPLITOPTIONS_T2509321299_H
#ifndef STACKOVERFLOWEXCEPTION_T2569305495_H
#define STACKOVERFLOWEXCEPTION_T2569305495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t2569305495  : public SystemException_t3432189758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T2569305495_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t1576606783  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t1576606783  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t1576606783 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t1576606783  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3562884053* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t478655269 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t478655269 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t478655269 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3562884053* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3562884053** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3562884053* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t478655269 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t478655269 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t478655269 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t478655269 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t478655269 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t478655269 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t478655269 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t478655269 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t478655269 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef OPERATINGSYSTEM_T4008591922_H
#define OPERATINGSYSTEM_T4008591922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperatingSystem
struct  OperatingSystem_t4008591922  : public RuntimeObject
{
public:
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t2085498104 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(OperatingSystem_t4008591922, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OperatingSystem_t4008591922, ____version_1)); }
	inline Version_t2085498104 * get__version_1() const { return ____version_1; }
	inline Version_t2085498104 ** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(Version_t2085498104 * value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier((&____version_1), value);
	}

	inline static int32_t get_offset_of__servicePack_2() { return static_cast<int32_t>(offsetof(OperatingSystem_t4008591922, ____servicePack_2)); }
	inline String_t* get__servicePack_2() const { return ____servicePack_2; }
	inline String_t** get_address_of__servicePack_2() { return &____servicePack_2; }
	inline void set__servicePack_2(String_t* value)
	{
		____servicePack_2 = value;
		Il2CppCodeGenWriteBarrier((&____servicePack_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEM_T4008591922_H
#ifndef MULTICASTDELEGATE_T1923364326_H
#define MULTICASTDELEGATE_T1923364326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1923364326  : public Delegate_t824990709
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1923364326 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1923364326 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1923364326, ___prev_9)); }
	inline MulticastDelegate_t1923364326 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1923364326 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1923364326 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1923364326, ___kpm_next_10)); }
	inline MulticastDelegate_t1923364326 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1923364326 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1923364326 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1923364326_H
#ifndef FIELDACCESSEXCEPTION_T1199958072_H
#define FIELDACCESSEXCEPTION_T1199958072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FieldAccessException
struct  FieldAccessException_t1199958072  : public MemberAccessException_t2075952804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDACCESSEXCEPTION_T1199958072_H
#ifndef DIVIDEBYZEROEXCEPTION_T2907988229_H
#define DIVIDEBYZEROEXCEPTION_T2907988229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DivideByZeroException
struct  DivideByZeroException_t2907988229  : public ArithmeticException_t747938048
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIVIDEBYZEROEXCEPTION_T2907988229_H
#ifndef DLLNOTFOUNDEXCEPTION_T3433880532_H
#define DLLNOTFOUNDEXCEPTION_T3433880532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_t3433880532  : public TypeLoadException_t420215290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_T3433880532_H
#ifndef ENTRYPOINTNOTFOUNDEXCEPTION_T3701644040_H
#define ENTRYPOINTNOTFOUNDEXCEPTION_T3701644040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EntryPointNotFoundException
struct  EntryPointNotFoundException_t3701644040  : public TypeLoadException_t420215290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRYPOINTNOTFOUNDEXCEPTION_T3701644040_H
#ifndef MISSINGMEMBEREXCEPTION_T792695673_H
#define MISSINGMEMBEREXCEPTION_T792695673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t792695673  : public MemberAccessException_t2075952804
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_11;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_12;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t789126831* ___Signature_13;

public:
	inline static int32_t get_offset_of_ClassName_11() { return static_cast<int32_t>(offsetof(MissingMemberException_t792695673, ___ClassName_11)); }
	inline String_t* get_ClassName_11() const { return ___ClassName_11; }
	inline String_t** get_address_of_ClassName_11() { return &___ClassName_11; }
	inline void set_ClassName_11(String_t* value)
	{
		___ClassName_11 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_11), value);
	}

	inline static int32_t get_offset_of_MemberName_12() { return static_cast<int32_t>(offsetof(MissingMemberException_t792695673, ___MemberName_12)); }
	inline String_t* get_MemberName_12() const { return ___MemberName_12; }
	inline String_t** get_address_of_MemberName_12() { return &___MemberName_12; }
	inline void set_MemberName_12(String_t* value)
	{
		___MemberName_12 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_12), value);
	}

	inline static int32_t get_offset_of_Signature_13() { return static_cast<int32_t>(offsetof(MissingMemberException_t792695673, ___Signature_13)); }
	inline ByteU5BU5D_t789126831* get_Signature_13() const { return ___Signature_13; }
	inline ByteU5BU5D_t789126831** get_address_of_Signature_13() { return &___Signature_13; }
	inline void set_Signature_13(ByteU5BU5D_t789126831* value)
	{
		___Signature_13 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T792695673_H
#ifndef DATETIME_T2181782756_H
#define DATETIME_T2181782756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2181782756 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t2493685416  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t2181782756, ___ticks_0)); }
	inline TimeSpan_t2493685416  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t2493685416 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t2493685416  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t2181782756, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t2181782756_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2181782756  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2181782756  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1883187954* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1883187954* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1883187954* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1883187954* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1883187954* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1883187954* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1883187954* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t607762632* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t607762632* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___MaxValue_2)); }
	inline DateTime_t2181782756  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t2181782756 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t2181782756  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___MinValue_3)); }
	inline DateTime_t2181782756  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t2181782756 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t2181782756  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1883187954* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1883187954** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1883187954* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1883187954* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1883187954** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1883187954* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1883187954* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1883187954** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1883187954* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1883187954* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1883187954** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1883187954* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1883187954* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1883187954** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1883187954* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1883187954* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1883187954** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1883187954* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1883187954* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1883187954** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1883187954* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t607762632* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t607762632** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t607762632* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t607762632* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t607762632** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t607762632* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t2181782756_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T2181782756_H
#ifndef METHODACCESSEXCEPTION_T1925403242_H
#define METHODACCESSEXCEPTION_T1925403242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MethodAccessException
struct  MethodAccessException_t1925403242  : public MemberAccessException_t2075952804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODACCESSEXCEPTION_T1925403242_H
#ifndef OVERFLOWEXCEPTION_T1607641534_H
#define OVERFLOWEXCEPTION_T1607641534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t1607641534  : public ArithmeticException_t747938048
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T1607641534_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T326737493_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T326737493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t326737493  : public NotSupportedException_t4290672537
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T326737493_H
#ifndef OBJECTDISPOSEDEXCEPTION_T4105952768_H
#define OBJECTDISPOSEDEXCEPTION_T4105952768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t4105952768  : public InvalidOperationException_t3566863754
{
public:
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;

public:
	inline static int32_t get_offset_of_obj_name_12() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t4105952768, ___obj_name_12)); }
	inline String_t* get_obj_name_12() const { return ___obj_name_12; }
	inline String_t** get_address_of_obj_name_12() { return &___obj_name_12; }
	inline void set_obj_name_12(String_t* value)
	{
		___obj_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___obj_name_12), value);
	}

	inline static int32_t get_offset_of_msg_13() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t4105952768, ___msg_13)); }
	inline String_t* get_msg_13() const { return ___msg_13; }
	inline String_t** get_address_of_msg_13() { return &___msg_13; }
	inline void set_msg_13(String_t* value)
	{
		___msg_13 = value;
		Il2CppCodeGenWriteBarrier((&___msg_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T4105952768_H
#ifndef DATETIMEOFFSET_T1789690280_H
#define DATETIMEOFFSET_T1789690280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t1789690280 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t2181782756  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t2493685416  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1789690280, ___dt_2)); }
	inline DateTime_t2181782756  get_dt_2() const { return ___dt_2; }
	inline DateTime_t2181782756 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t2181782756  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1789690280, ___utc_offset_3)); }
	inline TimeSpan_t2493685416  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t2493685416 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t2493685416  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t1789690280_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t1789690280  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t1789690280  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1789690280_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t1789690280  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t1789690280 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t1789690280  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1789690280_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t1789690280  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t1789690280 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t1789690280  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T1789690280_H
#ifndef PRIMALITYTEST_T2611761966_H
#define PRIMALITYTEST_T2611761966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t2611761966  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T2611761966_H
#ifndef MEMBERFILTER_T478655269_H
#define MEMBERFILTER_T478655269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t478655269  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T478655269_H
#ifndef SENDORPOSTCALLBACK_T4068225284_H
#define SENDORPOSTCALLBACK_T4068225284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t4068225284  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T4068225284_H
#ifndef CROSSCONTEXTDELEGATE_T1685283389_H
#define CROSSCONTEXTDELEGATE_T1685283389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t1685283389  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T1685283389_H
#ifndef HEADERHANDLER_T2365614403_H
#define HEADERHANDLER_T2365614403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t2365614403  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T2365614403_H
#ifndef THREADSTART_T1934970956_H
#define THREADSTART_T1934970956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t1934970956  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T1934970956_H
#ifndef MISSINGFIELDEXCEPTION_T1744397641_H
#define MISSINGFIELDEXCEPTION_T1744397641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingFieldException
struct  MissingFieldException_t1744397641  : public MissingMemberException_t792695673
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGFIELDEXCEPTION_T1744397641_H
#ifndef MISSINGMETHODEXCEPTION_T1461698956_H
#define MISSINGMETHODEXCEPTION_T1461698956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMethodException
struct  MissingMethodException_t1461698956  : public MissingMemberException_t792695673
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMETHODEXCEPTION_T1461698956_H
#ifndef TIMERCALLBACK_T2619509719_H
#define TIMERCALLBACK_T2619509719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t2619509719  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T2619509719_H
#ifndef MONOTYPE_T_H
#define MONOTYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoType
struct  MonoType_t  : public Type_t
{
public:
	// System.MonoTypeInfo System.MonoType::type_info
	MonoTypeInfo_t1320685594 * ___type_info_8;

public:
	inline static int32_t get_offset_of_type_info_8() { return static_cast<int32_t>(offsetof(MonoType_t, ___type_info_8)); }
	inline MonoTypeInfo_t1320685594 * get_type_info_8() const { return ___type_info_8; }
	inline MonoTypeInfo_t1320685594 ** get_address_of_type_info_8() { return &___type_info_8; }
	inline void set_type_info_8(MonoTypeInfo_t1320685594 * value)
	{
		___type_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPE_T_H
#ifndef WAITCALLBACK_T582391073_H
#define WAITCALLBACK_T582391073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t582391073  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T582391073_H
#ifndef APPDOMAININITIALIZER_T2554218620_H
#define APPDOMAININITIALIZER_T2554218620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t2554218620  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T2554218620_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T4086434348_H
#define ASSEMBLYLOADEVENTHANDLER_T4086434348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t4086434348  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T4086434348_H
#ifndef EVENTHANDLER_T2229423110_H
#define EVENTHANDLER_T2229423110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t2229423110  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T2229423110_H
#ifndef RESOLVEEVENTHANDLER_T1215140010_H
#define RESOLVEEVENTHANDLER_T1215140010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t1215140010  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T1215140010_H
#ifndef TYPEFILTER_T1997982274_H
#define TYPEFILTER_T1997982274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t1997982274  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T1997982274_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T2405558219_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T2405558219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t2405558219  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T2405558219_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize800 = { sizeof (Convert_t2341703673), -1, sizeof(Convert_t2341703673_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable800[2] = 
{
	Convert_t2341703673_StaticFields::get_offset_of_DBNull_0(),
	Convert_t2341703673_StaticFields::get_offset_of_conversionTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize801 = { sizeof (DBNull_t3255622742), -1, sizeof(DBNull_t3255622742_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable801[1] = 
{
	DBNull_t3255622742_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize802 = { sizeof (DateTime_t2181782756)+ sizeof (RuntimeObject), -1, sizeof(DateTime_t2181782756_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable802[15] = 
{
	DateTime_t2181782756::get_offset_of_ticks_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTime_t2181782756::get_offset_of_kind_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTime_t2181782756_StaticFields::get_offset_of_MaxValue_2(),
	DateTime_t2181782756_StaticFields::get_offset_of_MinValue_3(),
	DateTime_t2181782756_StaticFields::get_offset_of_ParseTimeFormats_4(),
	DateTime_t2181782756_StaticFields::get_offset_of_ParseYearDayMonthFormats_5(),
	DateTime_t2181782756_StaticFields::get_offset_of_ParseYearMonthDayFormats_6(),
	DateTime_t2181782756_StaticFields::get_offset_of_ParseDayMonthYearFormats_7(),
	DateTime_t2181782756_StaticFields::get_offset_of_ParseMonthDayYearFormats_8(),
	DateTime_t2181782756_StaticFields::get_offset_of_MonthDayShortFormats_9(),
	DateTime_t2181782756_StaticFields::get_offset_of_DayMonthShortFormats_10(),
	DateTime_t2181782756_StaticFields::get_offset_of_daysmonth_11(),
	DateTime_t2181782756_StaticFields::get_offset_of_daysmonthleap_12(),
	DateTime_t2181782756_StaticFields::get_offset_of_to_local_time_span_object_13(),
	DateTime_t2181782756_StaticFields::get_offset_of_last_now_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize803 = { sizeof (Which_t3521084345)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable803[5] = 
{
	Which_t3521084345::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize804 = { sizeof (DateTimeKind_t912426768)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable804[4] = 
{
	DateTimeKind_t912426768::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize805 = { sizeof (DateTimeOffset_t1789690280)+ sizeof (RuntimeObject), -1, sizeof(DateTimeOffset_t1789690280_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable805[4] = 
{
	DateTimeOffset_t1789690280_StaticFields::get_offset_of_MaxValue_0(),
	DateTimeOffset_t1789690280_StaticFields::get_offset_of_MinValue_1(),
	DateTimeOffset_t1789690280::get_offset_of_dt_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeOffset_t1789690280::get_offset_of_utc_offset_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize806 = { sizeof (DateTimeUtils_t1023258296), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize807 = { sizeof (DayOfWeek_t439290786)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable807[8] = 
{
	DayOfWeek_t439290786::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize808 = { sizeof (DelegateData_t731970336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable808[2] = 
{
	DelegateData_t731970336::get_offset_of_target_type_0(),
	DelegateData_t731970336::get_offset_of_method_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize809 = { sizeof (DivideByZeroException_t2907988229), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable809[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize810 = { sizeof (DllNotFoundException_t3433880532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable810[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize811 = { sizeof (EntryPointNotFoundException_t3701644040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable811[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize812 = { sizeof (MonoEnumInfo_t3761784671)+ sizeof (RuntimeObject), -1, sizeof(MonoEnumInfo_t3761784671_StaticFields), sizeof(MonoEnumInfo_t3761784671_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable812[11] = 
{
	MonoEnumInfo_t3761784671::get_offset_of_utype_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t3761784671::get_offset_of_values_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t3761784671::get_offset_of_names_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t3761784671::get_offset_of_name_hash_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	THREAD_STATIC_FIELD_OFFSET,
	MonoEnumInfo_t3761784671_StaticFields::get_offset_of_global_cache_5(),
	MonoEnumInfo_t3761784671_StaticFields::get_offset_of_global_cache_monitor_6(),
	MonoEnumInfo_t3761784671_StaticFields::get_offset_of_sbyte_comparer_7(),
	MonoEnumInfo_t3761784671_StaticFields::get_offset_of_short_comparer_8(),
	MonoEnumInfo_t3761784671_StaticFields::get_offset_of_int_comparer_9(),
	MonoEnumInfo_t3761784671_StaticFields::get_offset_of_long_comparer_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize813 = { sizeof (SByteComparer_t1309728856), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize814 = { sizeof (ShortComparer_t123498764), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize815 = { sizeof (IntComparer_t1649529991), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize816 = { sizeof (LongComparer_t2278264264), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize817 = { sizeof (Environment_t1934915445), -1, sizeof(Environment_t1934915445_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable817[2] = 
{
	0,
	Environment_t1934915445_StaticFields::get_offset_of_os_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize818 = { sizeof (SpecialFolder_t3646565794)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable818[24] = 
{
	SpecialFolder_t3646565794::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize819 = { sizeof (EnvironmentVariableTarget_t1290785741)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable819[4] = 
{
	EnvironmentVariableTarget_t1290785741::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize820 = { sizeof (EventArgs_t1998285426), -1, sizeof(EventArgs_t1998285426_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable820[1] = 
{
	EventArgs_t1998285426_StaticFields::get_offset_of_Empty_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize821 = { sizeof (ExecutionEngineException_t3732268080), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize822 = { sizeof (FieldAccessException_t1199958072), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize823 = { sizeof (FlagsAttribute_t1073844319), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize824 = { sizeof (FormatException_t1441977095), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable824[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize825 = { sizeof (GC_t2178918558), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize826 = { sizeof (Guid_t)+ sizeof (RuntimeObject), sizeof(Guid_t ), sizeof(Guid_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable826[14] = 
{
	Guid_t::get_offset_of__a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__d_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__e_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__f_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__g_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__h_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__i_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__j_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__k_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t_StaticFields::get_offset_of_Empty_11(),
	Guid_t_StaticFields::get_offset_of__rngAccess_12(),
	Guid_t_StaticFields::get_offset_of__rng_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize827 = { sizeof (GuidParser_t2504351389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable827[3] = 
{
	GuidParser_t2504351389::get_offset_of__src_0(),
	GuidParser_t2504351389::get_offset_of__length_1(),
	GuidParser_t2504351389::get_offset_of__cur_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize828 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize829 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize830 = { sizeof (IndexOutOfRangeException_t2181125269), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize831 = { sizeof (InvalidCastException_t640954035), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable831[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize832 = { sizeof (InvalidOperationException_t3566863754), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable832[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize833 = { sizeof (LoaderOptimization_t970040729)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable833[7] = 
{
	LoaderOptimization_t970040729::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize834 = { sizeof (LocalDataStoreSlot_t1348408381), -1, sizeof(LocalDataStoreSlot_t1348408381_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable834[5] = 
{
	LocalDataStoreSlot_t1348408381::get_offset_of_slot_0(),
	LocalDataStoreSlot_t1348408381::get_offset_of_thread_local_1(),
	LocalDataStoreSlot_t1348408381_StaticFields::get_offset_of_lock_obj_2(),
	LocalDataStoreSlot_t1348408381_StaticFields::get_offset_of_slot_bitmap_thread_3(),
	LocalDataStoreSlot_t1348408381_StaticFields::get_offset_of_slot_bitmap_context_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize835 = { sizeof (Math_t2760985555), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize836 = { sizeof (MemberAccessException_t2075952804), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize837 = { sizeof (MethodAccessException_t1925403242), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable837[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize838 = { sizeof (MissingFieldException_t1744397641), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize839 = { sizeof (MissingMemberException_t792695673), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable839[3] = 
{
	MissingMemberException_t792695673::get_offset_of_ClassName_11(),
	MissingMemberException_t792695673::get_offset_of_MemberName_12(),
	MissingMemberException_t792695673::get_offset_of_Signature_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize840 = { sizeof (MissingMethodException_t1461698956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable840[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize841 = { sizeof (MonoAsyncCall_t2102549912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable841[7] = 
{
	MonoAsyncCall_t2102549912::get_offset_of_msg_0(),
	MonoAsyncCall_t2102549912::get_offset_of_cb_method_1(),
	MonoAsyncCall_t2102549912::get_offset_of_cb_target_2(),
	MonoAsyncCall_t2102549912::get_offset_of_state_3(),
	MonoAsyncCall_t2102549912::get_offset_of_res_4(),
	MonoAsyncCall_t2102549912::get_offset_of_out_args_5(),
	MonoAsyncCall_t2102549912::get_offset_of_wait_event_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize842 = { sizeof (MonoCustomAttrs_t3478587192), -1, sizeof(MonoCustomAttrs_t3478587192_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable842[3] = 
{
	MonoCustomAttrs_t3478587192_StaticFields::get_offset_of_corlib_0(),
	MonoCustomAttrs_t3478587192_StaticFields::get_offset_of_AttributeUsageType_1(),
	MonoCustomAttrs_t3478587192_StaticFields::get_offset_of_DefaultAttributeUsage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize843 = { sizeof (AttributeInfo_t3510427645), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable843[2] = 
{
	AttributeInfo_t3510427645::get_offset_of__usage_0(),
	AttributeInfo_t3510427645::get_offset_of__inheritanceLevel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize844 = { sizeof (MonoTouchAOTHelper_t1192854608), -1, sizeof(MonoTouchAOTHelper_t1192854608_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable844[1] = 
{
	MonoTouchAOTHelper_t1192854608_StaticFields::get_offset_of_FalseFlag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize845 = { sizeof (MonoTypeInfo_t1320685594), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable845[2] = 
{
	MonoTypeInfo_t1320685594::get_offset_of_full_name_0(),
	MonoTypeInfo_t1320685594::get_offset_of_default_ctor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize846 = { sizeof (MonoType_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable846[1] = 
{
	MonoType_t::get_offset_of_type_info_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize847 = { sizeof (MulticastNotSupportedException_t2255369571), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize848 = { sizeof (NonSerializedAttribute_t2410122449), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize849 = { sizeof (NotImplementedException_t2931943092), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize850 = { sizeof (NotSupportedException_t4290672537), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable850[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize851 = { sizeof (NullReferenceException_t1064087809), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable851[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize852 = { sizeof (NumberFormatter_t396563322), -1, sizeof(NumberFormatter_t396563322_StaticFields), sizeof(NumberFormatter_t396563322_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable852[26] = 
{
	NumberFormatter_t396563322_StaticFields::get_offset_of_MantissaBitsTable_0(),
	NumberFormatter_t396563322_StaticFields::get_offset_of_TensExponentTable_1(),
	NumberFormatter_t396563322_StaticFields::get_offset_of_DigitLowerTable_2(),
	NumberFormatter_t396563322_StaticFields::get_offset_of_DigitUpperTable_3(),
	NumberFormatter_t396563322_StaticFields::get_offset_of_TenPowersList_4(),
	NumberFormatter_t396563322_StaticFields::get_offset_of_DecHexDigits_5(),
	NumberFormatter_t396563322::get_offset_of__thread_6(),
	NumberFormatter_t396563322::get_offset_of__nfi_7(),
	NumberFormatter_t396563322::get_offset_of__NaN_8(),
	NumberFormatter_t396563322::get_offset_of__infinity_9(),
	NumberFormatter_t396563322::get_offset_of__isCustomFormat_10(),
	NumberFormatter_t396563322::get_offset_of__specifierIsUpper_11(),
	NumberFormatter_t396563322::get_offset_of__positive_12(),
	NumberFormatter_t396563322::get_offset_of__specifier_13(),
	NumberFormatter_t396563322::get_offset_of__precision_14(),
	NumberFormatter_t396563322::get_offset_of__defPrecision_15(),
	NumberFormatter_t396563322::get_offset_of__digitsLen_16(),
	NumberFormatter_t396563322::get_offset_of__offset_17(),
	NumberFormatter_t396563322::get_offset_of__decPointPos_18(),
	NumberFormatter_t396563322::get_offset_of__val1_19(),
	NumberFormatter_t396563322::get_offset_of__val2_20(),
	NumberFormatter_t396563322::get_offset_of__val3_21(),
	NumberFormatter_t396563322::get_offset_of__val4_22(),
	NumberFormatter_t396563322::get_offset_of__cbuf_23(),
	NumberFormatter_t396563322::get_offset_of__ind_24(),
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize853 = { sizeof (CustomInfo_t1637389333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable853[14] = 
{
	CustomInfo_t1637389333::get_offset_of_UseGroup_0(),
	CustomInfo_t1637389333::get_offset_of_DecimalDigits_1(),
	CustomInfo_t1637389333::get_offset_of_DecimalPointPos_2(),
	CustomInfo_t1637389333::get_offset_of_DecimalTailSharpDigits_3(),
	CustomInfo_t1637389333::get_offset_of_IntegerDigits_4(),
	CustomInfo_t1637389333::get_offset_of_IntegerHeadSharpDigits_5(),
	CustomInfo_t1637389333::get_offset_of_IntegerHeadPos_6(),
	CustomInfo_t1637389333::get_offset_of_UseExponent_7(),
	CustomInfo_t1637389333::get_offset_of_ExponentDigits_8(),
	CustomInfo_t1637389333::get_offset_of_ExponentTailSharpDigits_9(),
	CustomInfo_t1637389333::get_offset_of_ExponentNegativeSignOnly_10(),
	CustomInfo_t1637389333::get_offset_of_DividePlaces_11(),
	CustomInfo_t1637389333::get_offset_of_Percents_12(),
	CustomInfo_t1637389333::get_offset_of_Permilles_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize854 = { sizeof (ObjectDisposedException_t4105952768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable854[2] = 
{
	ObjectDisposedException_t4105952768::get_offset_of_obj_name_12(),
	ObjectDisposedException_t4105952768::get_offset_of_msg_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize855 = { sizeof (OperatingSystem_t4008591922), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable855[3] = 
{
	OperatingSystem_t4008591922::get_offset_of__platform_0(),
	OperatingSystem_t4008591922::get_offset_of__version_1(),
	OperatingSystem_t4008591922::get_offset_of__servicePack_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize856 = { sizeof (OutOfMemoryException_t2685954115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable856[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize857 = { sizeof (OverflowException_t1607641534), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable857[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize858 = { sizeof (PlatformID_t3435361711)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable858[8] = 
{
	PlatformID_t3435361711::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize859 = { sizeof (PlatformNotSupportedException_t326737493), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable859[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize860 = { sizeof (RankException_t2812654414), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize861 = { sizeof (ResolveEventArgs_t3550247415), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable861[1] = 
{
	ResolveEventArgs_t3550247415::get_offset_of_m_Name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize862 = { sizeof (RuntimeMethodHandle_t359712995)+ sizeof (RuntimeObject), sizeof(RuntimeMethodHandle_t359712995 ), 0, 0 };
extern const int32_t g_FieldOffsetTable862[1] = 
{
	RuntimeMethodHandle_t359712995::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize863 = { sizeof (StackOverflowException_t2569305495), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize864 = { sizeof (StringComparer_t3450677900), -1, sizeof(StringComparer_t3450677900_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable864[4] = 
{
	StringComparer_t3450677900_StaticFields::get_offset_of_invariantCultureIgnoreCase_0(),
	StringComparer_t3450677900_StaticFields::get_offset_of_invariantCulture_1(),
	StringComparer_t3450677900_StaticFields::get_offset_of_ordinalIgnoreCase_2(),
	StringComparer_t3450677900_StaticFields::get_offset_of_ordinal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize865 = { sizeof (CultureAwareComparer_t3861051372), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable865[2] = 
{
	CultureAwareComparer_t3861051372::get_offset_of__ignoreCase_4(),
	CultureAwareComparer_t3861051372::get_offset_of__compareInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize866 = { sizeof (OrdinalComparer_t3585364852), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable866[1] = 
{
	OrdinalComparer_t3585364852::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize867 = { sizeof (StringComparison_t1804544847)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable867[7] = 
{
	StringComparison_t1804544847::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize868 = { sizeof (StringSplitOptions_t2509321299)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable868[3] = 
{
	StringSplitOptions_t2509321299::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize869 = { sizeof (SystemException_t3432189758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize870 = { sizeof (ThreadStaticAttribute_t1836738349), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize871 = { sizeof (TimeSpan_t2493685416)+ sizeof (RuntimeObject), sizeof(TimeSpan_t2493685416 ), sizeof(TimeSpan_t2493685416_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable871[4] = 
{
	TimeSpan_t2493685416_StaticFields::get_offset_of_MaxValue_0(),
	TimeSpan_t2493685416_StaticFields::get_offset_of_MinValue_1(),
	TimeSpan_t2493685416_StaticFields::get_offset_of_Zero_2(),
	TimeSpan_t2493685416::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize872 = { sizeof (TimeZone_t1265713034), -1, sizeof(TimeZone_t1265713034_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable872[3] = 
{
	TimeZone_t1265713034_StaticFields::get_offset_of_currentTimeZone_0(),
	TimeZone_t1265713034_StaticFields::get_offset_of_tz_lock_1(),
	TimeZone_t1265713034_StaticFields::get_offset_of_timezone_check_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize873 = { sizeof (CurrentSystemTimeZone_t1159713469), -1, sizeof(CurrentSystemTimeZone_t1159713469_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable873[8] = 
{
	CurrentSystemTimeZone_t1159713469::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t1159713469::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t1159713469::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t1159713469::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t1159713469::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t1159713469::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t1159713469_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t1159713469_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize874 = { sizeof (TypeCode_t3331154982)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable874[19] = 
{
	TypeCode_t3331154982::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize875 = { sizeof (TypeInitializationException_t1975584198), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable875[1] = 
{
	TypeInitializationException_t1975584198::get_offset_of_type_name_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize876 = { sizeof (TypeLoadException_t420215290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable876[3] = 
{
	0,
	TypeLoadException_t420215290::get_offset_of_className_12(),
	TypeLoadException_t420215290::get_offset_of_assemblyName_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize877 = { sizeof (UnauthorizedAccessException_t1439937642), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize878 = { sizeof (UnhandledExceptionEventArgs_t2002217936), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable878[2] = 
{
	UnhandledExceptionEventArgs_t2002217936::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t2002217936::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize879 = { sizeof (Version_t2085498104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable879[5] = 
{
	0,
	Version_t2085498104::get_offset_of__Major_1(),
	Version_t2085498104::get_offset_of__Minor_2(),
	Version_t2085498104::get_offset_of__Build_3(),
	Version_t2085498104::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize880 = { sizeof (WeakReference_t2659066231), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable880[2] = 
{
	WeakReference_t2659066231::get_offset_of_isLongReference_0(),
	WeakReference_t2659066231::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize881 = { sizeof (PrimalityTest_t2611761966), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize882 = { sizeof (MemberFilter_t478655269), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize883 = { sizeof (TypeFilter_t1997982274), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize884 = { sizeof (CrossContextDelegate_t1685283389), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize885 = { sizeof (HeaderHandler_t2365614403), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize886 = { sizeof (SendOrPostCallback_t4068225284), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize887 = { sizeof (ThreadStart_t1934970956), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize888 = { sizeof (TimerCallback_t2619509719), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize889 = { sizeof (WaitCallback_t582391073), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize890 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize891 = { sizeof (AppDomainInitializer_t2554218620), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize892 = { sizeof (AssemblyLoadEventHandler_t4086434348), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize893 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize894 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize895 = { sizeof (EventHandler_t2229423110), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize896 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize897 = { sizeof (ResolveEventHandler_t1215140010), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize898 = { sizeof (UnhandledExceptionEventHandler_t2405558219), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize899 = { sizeof (U3CPrivateImplementationDetailsU3E_t3736506064), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable899[53] = 
{
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D15_7(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D16_8(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D17_9(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D18_10(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D19_11(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D20_12(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D23_15(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D24_16(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D25_17(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D26_18(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D27_19(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D30_20(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D31_21(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D32_22(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D33_23(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D34_24(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D35_25(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D36_26(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D37_27(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D38_28(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D39_29(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D40_30(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D41_31(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D42_32(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D43_33(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D44_34(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D45_35(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D46_36(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D47_37(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D48_38(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D49_39(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D50_40(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D51_41(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D52_42(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D53_43(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D54_44(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D55_45(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D56_46(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D57_47(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D60_48(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D62_49(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D63_50(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D64_51(),
	U3CPrivateImplementationDetailsU3E_t3736506064_StaticFields::get_offset_of_U24U24fieldU2D65_52(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
