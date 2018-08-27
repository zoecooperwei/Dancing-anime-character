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

// UnityEngine.Object
struct Object_t3488701146;
// UnityEngine.AnimationEvent
struct AnimationEvent_t1155830353;
// System.InvalidCastException
struct InvalidCastException_t640954035;
// System.String
struct String_t;
// System.InvalidOperationException
struct InvalidOperationException_t3566863754;
// UnityEngine.Animator
struct Animator_t349928165;
// System.Char[]
struct CharU5BU5D_t3230795339;
// System.IntPtr[]
struct IntPtrU5BU5D_t738858890;
// System.Collections.IDictionary
struct IDictionary_t1965935985;
// System.Void
struct Void_t1003147579;
// UnityEngine.AnimationState
struct AnimationState_t404869365;

struct Object_t3488701146_marshaled_pinvoke;
struct Object_t3488701146;;
struct Object_t3488701146_marshaled_pinvoke;;
struct Object_t3488701146_marshaled_com;
struct Object_t3488701146_marshaled_com;;
extern Il2CppCodeGenString* _stringLiteral4281599044;
extern const uint32_t AnimationEvent__ctor_m3926279630_MetadataUsageId;
extern RuntimeClass* InvalidCastException_t640954035_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t589927664_m3069852038_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral3338108120;
extern const uint32_t AnimationLayerMixerPlayable__ctor_m2151628623_MetadataUsageId;
extern RuntimeClass* AnimationLayerMixerPlayable_t589927664_il2cpp_TypeInfo_var;
extern const uint32_t AnimationLayerMixerPlayable__cctor_m482187076_MetadataUsageId;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t168051907_m2732761673_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral2618989080;
extern const uint32_t AnimationOffsetPlayable__ctor_m1431483072_MetadataUsageId;
extern RuntimeClass* PlayableHandle_t3568310090_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationOffsetPlayable_t168051907_il2cpp_TypeInfo_var;
extern const uint32_t AnimationOffsetPlayable_Equals_m2573926904_MetadataUsageId;
extern const uint32_t AnimationOffsetPlayable__cctor_m518519760_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t3566863754_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t1624374338_m173037730_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral660840534;
extern Il2CppCodeGenString* _stringLiteral3482031948;
extern const uint32_t AnimatorControllerPlayable_SetHandle_m3600557015_MetadataUsageId;
extern RuntimeClass* AnimatorControllerPlayable_t1624374338_il2cpp_TypeInfo_var;
extern const uint32_t AnimatorControllerPlayable__cctor_m3428417351_MetadataUsageId;
extern RuntimeClass* Debug_t194690950_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1386688250;
extern const uint32_t Animator_CheckIfInIKPass_m2045466954_MetadataUsageId;



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
#ifndef U3CMODULEU3E_T2674643425_H
#define U3CMODULEU3E_T2674643425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2674643425 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2674643425_H
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
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3230795339* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3230795339* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3230795339** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3230795339* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
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
#ifndef ANIMATORTRANSITIONINFO_T730739477_H
#define ANIMATORTRANSITIONINFO_T730739477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorTransitionInfo
struct  AnimatorTransitionInfo_t730739477 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_4;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_5;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t730739477, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t730739477, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t730739477, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t730739477, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t730739477, ___m_AnyState_4)); }
	inline bool get_m_AnyState_4() const { return ___m_AnyState_4; }
	inline bool* get_address_of_m_AnyState_4() { return &___m_AnyState_4; }
	inline void set_m_AnyState_4(bool value)
	{
		___m_AnyState_4 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t730739477, ___m_TransitionType_5)); }
	inline int32_t get_m_TransitionType_5() const { return ___m_TransitionType_5; }
	inline int32_t* get_address_of_m_TransitionType_5() { return &___m_TransitionType_5; }
	inline void set_m_TransitionType_5(int32_t value)
	{
		___m_TransitionType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t730739477_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t730739477_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
#endif // ANIMATORTRANSITIONINFO_T730739477_H
#ifndef BOOLEAN_T1107189290_H
#define BOOLEAN_T1107189290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1107189290 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1107189290, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1107189290_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1107189290_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1107189290_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T1107189290_H
#ifndef SHAREDBETWEENANIMATORSATTRIBUTE_T4286893218_H
#define SHAREDBETWEENANIMATORSATTRIBUTE_T4286893218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_t4286893218  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDBETWEENANIMATORSATTRIBUTE_T4286893218_H
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
#ifndef INT32_T663185285_H
#define INT32_T663185285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t663185285 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t663185285, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T663185285_H
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
#ifndef ANIMATORCLIPINFO_T1869644533_H
#define ANIMATORCLIPINFO_T1869644533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t1869644533 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t1869644533, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t1869644533, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T1869644533_H
#ifndef ANIMATORSTATEINFO_T2334180866_H
#define ANIMATORSTATEINFO_T2334180866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t2334180866 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2334180866, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2334180866, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2334180866, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2334180866, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2334180866, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2334180866, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2334180866, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2334180866, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t2334180866, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T2334180866_H
#ifndef VECTOR3_T134354332_H
#define VECTOR3_T134354332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t134354332 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t134354332, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t134354332, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t134354332, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t134354332_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t134354332  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t134354332  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t134354332  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t134354332  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t134354332  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t134354332  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t134354332  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t134354332  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t134354332  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t134354332  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t134354332_StaticFields, ___zeroVector_4)); }
	inline Vector3_t134354332  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t134354332 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t134354332  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t134354332_StaticFields, ___oneVector_5)); }
	inline Vector3_t134354332  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t134354332 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t134354332  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t134354332_StaticFields, ___upVector_6)); }
	inline Vector3_t134354332  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t134354332 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t134354332  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t134354332_StaticFields, ___downVector_7)); }
	inline Vector3_t134354332  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t134354332 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t134354332  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t134354332_StaticFields, ___leftVector_8)); }
	inline Vector3_t134354332  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t134354332 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t134354332  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t134354332_StaticFields, ___rightVector_9)); }
	inline Vector3_t134354332  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t134354332 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t134354332  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t134354332_StaticFields, ___forwardVector_10)); }
	inline Vector3_t134354332  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t134354332 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t134354332  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t134354332_StaticFields, ___backVector_11)); }
	inline Vector3_t134354332  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t134354332 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t134354332  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t134354332_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t134354332  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t134354332 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t134354332  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t134354332_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t134354332  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t134354332 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t134354332  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T134354332_H
#ifndef SINGLE_T1023366992_H
#define SINGLE_T1023366992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1023366992 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1023366992, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1023366992_H
#ifndef QUATERNION_T2730452765_H
#define QUATERNION_T2730452765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2730452765 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2730452765, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2730452765, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2730452765, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2730452765, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2730452765_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2730452765  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2730452765_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2730452765  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2730452765 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2730452765  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2730452765_H
#ifndef AVATARIKGOAL_T89625065_H
#define AVATARIKGOAL_T89625065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarIKGoal
struct  AvatarIKGoal_t89625065 
{
public:
	// System.Int32 UnityEngine.AvatarIKGoal::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AvatarIKGoal_t89625065, ___value___1)); }
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
#endif // AVATARIKGOAL_T89625065_H
#ifndef SKELETONBONE_T622692829_H
#define SKELETONBONE_T622692829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkeletonBone
struct  SkeletonBone_t622692829 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t134354332  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t2730452765  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t134354332  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_t622692829, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_t622692829, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((&___parentName_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_t622692829, ___position_2)); }
	inline Vector3_t134354332  get_position_2() const { return ___position_2; }
	inline Vector3_t134354332 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t134354332  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_t622692829, ___rotation_3)); }
	inline Quaternion_t2730452765  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t2730452765 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t2730452765  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_t622692829, ___scale_4)); }
	inline Vector3_t134354332  get_scale_4() const { return ___scale_4; }
	inline Vector3_t134354332 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t134354332  value)
	{
		___scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t622692829_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t134354332  ___position_2;
	Quaternion_t2730452765  ___rotation_3;
	Vector3_t134354332  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t622692829_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t134354332  ___position_2;
	Quaternion_t2730452765  ___rotation_3;
	Vector3_t134354332  ___scale_4;
};
#endif // SKELETONBONE_T622692829_H
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
#ifndef PLAYABLEHANDLE_T3568310090_H
#define PLAYABLEHANDLE_T3568310090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t3568310090 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t3568310090, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t3568310090, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T3568310090_H
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
#ifndef PLAYABLEOUTPUTHANDLE_T1145871801_H
#define PLAYABLEOUTPUTHANDLE_T1145871801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t1145871801 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t1145871801, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t1145871801, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T1145871801_H
#ifndef ANIMATIONEVENTSOURCE_T2320897718_H
#define ANIMATIONEVENTSOURCE_T2320897718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t2320897718 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimationEventSource_t2320897718, ___value___1)); }
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
#endif // ANIMATIONEVENTSOURCE_T2320897718_H
#ifndef OBJECT_T3488701146_H
#define OBJECT_T3488701146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3488701146  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3488701146, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3488701146_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3488701146_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3488701146_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3488701146_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3488701146_H
#ifndef TRACKEDREFERENCE_T3787767381_H
#define TRACKEDREFERENCE_T3787767381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t3787767381  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t3787767381, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t3787767381_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t3787767381_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T3787767381_H
#ifndef HUMANLIMIT_T2892711747_H
#define HUMANLIMIT_T2892711747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanLimit
struct  HumanLimit_t2892711747 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t134354332  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t134354332  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t134354332  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t2892711747, ___m_Min_0)); }
	inline Vector3_t134354332  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_t134354332 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_t134354332  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t2892711747, ___m_Max_1)); }
	inline Vector3_t134354332  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_t134354332 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_t134354332  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t2892711747, ___m_Center_2)); }
	inline Vector3_t134354332  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_t134354332 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_t134354332  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t2892711747, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t2892711747, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANLIMIT_T2892711747_H
#ifndef SCRIPTABLEOBJECT_T975216006_H
#define SCRIPTABLEOBJECT_T975216006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t975216006  : public Object_t3488701146
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t975216006_marshaled_pinvoke : public Object_t3488701146_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t975216006_marshaled_com : public Object_t3488701146_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T975216006_H
#ifndef ANIMATORCONTROLLERPLAYABLE_T1624374338_H
#define ANIMATORCONTROLLERPLAYABLE_T1624374338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_t1624374338 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t3568310090  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t1624374338, ___m_Handle_0)); }
	inline PlayableHandle_t3568310090  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3568310090 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3568310090  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_t1624374338_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_t1624374338  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t1624374338_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_t1624374338  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_t1624374338 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_t1624374338  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPLAYABLE_T1624374338_H
#ifndef HUMANBONE_T3750814485_H
#define HUMANBONE_T3750814485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanBone
struct  HumanBone_t3750814485 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t2892711747  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_t3750814485, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneName_0), value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_t3750814485, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_HumanName_1), value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_t3750814485, ___limit_2)); }
	inline HumanLimit_t2892711747  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t2892711747 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t2892711747  value)
	{
		___limit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t3750814485_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t2892711747  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t3750814485_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t2892711747  ___limit_2;
};
#endif // HUMANBONE_T3750814485_H
#ifndef ANIMATIONPLAYABLEOUTPUT_T2291790871_H
#define ANIMATIONPLAYABLEOUTPUT_T2291790871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_t2291790871 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t1145871801  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_t2291790871, ___m_Handle_0)); }
	inline PlayableOutputHandle_t1145871801  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t1145871801 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t1145871801  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEOUTPUT_T2291790871_H
#ifndef ANIMATIONOFFSETPLAYABLE_T168051907_H
#define ANIMATIONOFFSETPLAYABLE_T168051907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_t168051907 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t3568310090  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t168051907, ___m_Handle_0)); }
	inline PlayableHandle_t3568310090  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3568310090 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3568310090  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_t168051907_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t168051907  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t168051907_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_t168051907  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_t168051907 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_t168051907  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONOFFSETPLAYABLE_T168051907_H
#ifndef ANIMATIONMIXERPLAYABLE_T2773037192_H
#define ANIMATIONMIXERPLAYABLE_T2773037192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_t2773037192 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t3568310090  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t2773037192, ___m_Handle_0)); }
	inline PlayableHandle_t3568310090  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3568310090 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3568310090  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMIXERPLAYABLE_T2773037192_H
#ifndef ANIMATIONLAYERMIXERPLAYABLE_T589927664_H
#define ANIMATIONLAYERMIXERPLAYABLE_T589927664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t589927664 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t3568310090  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t589927664, ___m_Handle_0)); }
	inline PlayableHandle_t3568310090  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3568310090 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3568310090  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t589927664_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t589927664  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t589927664_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t589927664  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t589927664 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t589927664  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONLAYERMIXERPLAYABLE_T589927664_H
#ifndef ANIMATIONCLIPPLAYABLE_T873330480_H
#define ANIMATIONCLIPPLAYABLE_T873330480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t873330480 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t3568310090  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t873330480, ___m_Handle_0)); }
	inline PlayableHandle_t3568310090  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3568310090 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3568310090  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIPPLAYABLE_T873330480_H
#ifndef ANIMATIONSTATE_T404869365_H
#define ANIMATIONSTATE_T404869365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t404869365  : public TrackedReference_t3787767381
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T404869365_H
#ifndef ANIMATIONEVENT_T1155830353_H
#define ANIMATIONEVENT_T1155830353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEvent
struct  AnimationEvent_t1155830353  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_t3488701146 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t404869365 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t2334180866  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t1869644533  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_t1155830353, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_t1155830353, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FunctionName_1), value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_t1155830353, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringParameter_2), value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_t1155830353, ___m_ObjectReferenceParameter_3)); }
	inline Object_t3488701146 * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_t3488701146 ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_t3488701146 * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectReferenceParameter_3), value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_t1155830353, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_t1155830353, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_t1155830353, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_t1155830353, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_t1155830353, ___m_StateSender_8)); }
	inline AnimationState_t404869365 * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_t404869365 ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_t404869365 * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_StateSender_8), value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_t1155830353, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_t2334180866  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_t2334180866 * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_t2334180866  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_t1155830353, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t1869644533  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t1869644533 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t1869644533  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t1155830353_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_t3488701146_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t404869365 * ___m_StateSender_8;
	AnimatorStateInfo_t2334180866  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t1869644533  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t1155830353_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_t3488701146_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t404869365 * ___m_StateSender_8;
	AnimatorStateInfo_t2334180866  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t1869644533  ___m_AnimatorClipInfo_10;
};
#endif // ANIMATIONEVENT_T1155830353_H
#ifndef MOTION_T779583190_H
#define MOTION_T779583190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t779583190  : public Object_t3488701146
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T779583190_H
#ifndef COMPONENT_T1398321046_H
#define COMPONENT_T1398321046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1398321046  : public Object_t3488701146
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1398321046_H
#ifndef STATEMACHINEBEHAVIOUR_T2928095781_H
#define STATEMACHINEBEHAVIOUR_T2928095781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t2928095781  : public ScriptableObject_t975216006
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T2928095781_H
#ifndef BEHAVIOUR_T1932872679_H
#define BEHAVIOUR_T1932872679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1932872679  : public Component_t1398321046
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1932872679_H
#ifndef ANIMATIONCLIP_T2236573889_H
#define ANIMATIONCLIP_T2236573889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClip
struct  AnimationClip_t2236573889  : public Motion_t779583190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIP_T2236573889_H
#ifndef ANIMATOR_T349928165_H
#define ANIMATOR_T349928165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t349928165  : public Behaviour_t1932872679
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T349928165_H

extern "C" void Object_t3488701146_marshal_pinvoke(const Object_t3488701146& unmarshaled, Object_t3488701146_marshaled_pinvoke& marshaled);
extern "C" void Object_t3488701146_marshal_pinvoke_back(const Object_t3488701146_marshaled_pinvoke& marshaled, Object_t3488701146& unmarshaled);
extern "C" void Object_t3488701146_marshal_pinvoke_cleanup(Object_t3488701146_marshaled_pinvoke& marshaled);
extern "C" void Object_t3488701146_marshal_com(const Object_t3488701146& unmarshaled, Object_t3488701146_marshaled_com& marshaled);
extern "C" void Object_t3488701146_marshal_com_back(const Object_t3488701146_marshaled_com& marshaled, Object_t3488701146& unmarshaled);
extern "C" void Object_t3488701146_marshal_com_cleanup(Object_t3488701146_marshaled_com& marshaled);

// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
extern "C"  bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t589927664_m3069852038_gshared (PlayableHandle_t3568310090 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
extern "C"  bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t168051907_m2732761673_gshared (PlayableHandle_t3568310090 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
extern "C"  bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t1624374338_m173037730_gshared (PlayableHandle_t3568310090 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m1137811625 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
extern "C"  PlayableHandle_t3568310090  AnimationClipPlayable_GetHandle_m1960911587 (AnimationClipPlayable_t873330480 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C"  bool PlayableHandle_op_Equality_m4290873757 (RuntimeObject * __this /* static, unused */, PlayableHandle_t3568310090  p0, PlayableHandle_t3568310090  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
extern "C"  bool AnimationClipPlayable_Equals_m1905194963 (AnimationClipPlayable_t873330480 * __this, AnimationClipPlayable_t873330480  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
extern "C"  bool PlayableHandle_IsValid_m903834014 (PlayableHandle_t3568310090 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
#define PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t589927664_m3069852038(__this, method) ((  bool (*) (PlayableHandle_t3568310090 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t589927664_m3069852038_gshared)(__this, method)
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C"  void InvalidCastException__ctor_m3724751162 (InvalidCastException_t640954035 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C"  void AnimationLayerMixerPlayable__ctor_m2151628623 (AnimationLayerMixerPlayable_t589927664 * __this, PlayableHandle_t3568310090  ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
extern "C"  PlayableHandle_t3568310090  AnimationLayerMixerPlayable_GetHandle_m4097177763 (AnimationLayerMixerPlayable_t589927664 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
extern "C"  bool AnimationLayerMixerPlayable_Equals_m2489036254 (AnimationLayerMixerPlayable_t589927664 * __this, AnimationLayerMixerPlayable_t589927664  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
extern "C"  PlayableHandle_t3568310090  PlayableHandle_get_Null_m2850071261 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
extern "C"  PlayableHandle_t3568310090  AnimationMixerPlayable_GetHandle_m2248695751 (AnimationMixerPlayable_t2773037192 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
extern "C"  bool AnimationMixerPlayable_Equals_m2637270596 (AnimationMixerPlayable_t2773037192 * __this, AnimationMixerPlayable_t2773037192  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
#define PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t168051907_m2732761673(__this, method) ((  bool (*) (PlayableHandle_t3568310090 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t168051907_m2732761673_gshared)(__this, method)
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C"  void AnimationOffsetPlayable__ctor_m1431483072 (AnimationOffsetPlayable_t168051907 * __this, PlayableHandle_t3568310090  ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
extern "C"  PlayableHandle_t3568310090  AnimationOffsetPlayable_GetHandle_m1428369220 (AnimationOffsetPlayable_t168051907 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
extern "C"  bool AnimationOffsetPlayable_Equals_m2573926904 (AnimationOffsetPlayable_t168051907 * __this, AnimationOffsetPlayable_t168051907  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
extern "C"  void AnimatorControllerPlayable_SetHandle_m3600557015 (AnimatorControllerPlayable_t1624374338 * __this, PlayableHandle_t3568310090  ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C"  void AnimatorControllerPlayable__ctor_m1672667268 (AnimatorControllerPlayable_t1624374338 * __this, PlayableHandle_t3568310090  ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
extern "C"  PlayableHandle_t3568310090  AnimatorControllerPlayable_GetHandle_m246131208 (AnimatorControllerPlayable_t1624374338 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m3601280909 (InvalidOperationException_t3566863754 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
#define PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t1624374338_m173037730(__this, method) ((  bool (*) (PlayableHandle_t3568310090 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t1624374338_m173037730_gshared)(__this, method)
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
extern "C"  bool AnimatorControllerPlayable_Equals_m3675920431 (AnimatorControllerPlayable_t1624374338 * __this, AnimatorControllerPlayable_t1624374338  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloatString(System.String)
extern "C"  float Animator_GetFloatString_m3761139789 (Animator_t349928165 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C"  void Animator_SetFloatString_m1255615834 (Animator_t349928165 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C"  bool Animator_GetBoolString_m364315223 (Animator_t349928165 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C"  void Animator_SetBoolString_m390549036 (Animator_t349928165 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C"  void Animator_SetTriggerString_m1641184739 (Animator_t349928165 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C"  void Animator_ResetTriggerString_m2343462588 (Animator_t349928165 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CheckIfInIKPass()
extern "C"  void Animator_CheckIfInIKPass_m2045466954 (Animator_t349928165 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIKPositionInternal(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
extern "C"  void Animator_SetIKPositionInternal_m1804633146 (Animator_t349928165 * __this, int32_t ___goal0, Vector3_t134354332  ___goalPosition1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetIKPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
extern "C"  void Animator_INTERNAL_CALL_SetIKPositionInternal_m3649026500 (RuntimeObject * __this /* static, unused */, Animator_t349928165 * ___self0, int32_t ___goal1, Vector3_t134354332 * ___goalPosition2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIKRotationInternal(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
extern "C"  void Animator_SetIKRotationInternal_m619372890 (Animator_t349928165 * __this, int32_t ___goal0, Quaternion_t2730452765  ___goalRotation1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetIKRotationInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
extern "C"  void Animator_INTERNAL_CALL_SetIKRotationInternal_m773719497 (RuntimeObject * __this /* static, unused */, Animator_t349928165 * ___self0, int32_t ___goal1, Quaternion_t2730452765 * ___goalRotation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIKPositionWeightInternal(UnityEngine.AvatarIKGoal,System.Single)
extern "C"  void Animator_SetIKPositionWeightInternal_m4062808975 (Animator_t349928165 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIKRotationWeightInternal(UnityEngine.AvatarIKGoal,System.Single)
extern "C"  void Animator_SetIKRotationWeightInternal_m1198573736 (Animator_t349928165 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
extern "C"  void Animator_CrossFade_m2692258440 (Animator_t349928165 * __this, String_t* ___stateName0, float ___transitionDuration1, int32_t ___layer2, float ___normalizedTime3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m2799264512 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)
extern "C"  void Animator_CrossFade_m112349830 (Animator_t349928165 * __this, int32_t ___stateNameHash0, float ___transitionDuration1, int32_t ___layer2, float ___normalizedTime3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::get_logWarnings()
extern "C"  bool Animator_get_logWarnings_m2420560768 (Animator_t349928165 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::CheckIfInIKPassInternal()
extern "C"  bool Animator_CheckIfInIKPassInternal_m2771047786 (Animator_t349928165 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m2582856571 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C"  int32_t AnimatorStateInfo_get_nameHash_m1343314723 (AnimatorStateInfo_t2334180866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C"  float AnimatorStateInfo_get_normalizedTime_m3454788388 (AnimatorStateInfo_t2334180866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C"  float AnimatorStateInfo_get_length_m2053837811 (AnimatorStateInfo_t2334180866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
extern "C" void AnimationEvent_t1155830353_marshal_pinvoke(const AnimationEvent_t1155830353& unmarshaled, AnimationEvent_t1155830353_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception);
}
extern "C" void AnimationEvent_t1155830353_marshal_pinvoke_back(const AnimationEvent_t1155830353_marshaled_pinvoke& marshaled, AnimationEvent_t1155830353& unmarshaled)
{
	Il2CppCodeGenException* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
extern "C" void AnimationEvent_t1155830353_marshal_pinvoke_cleanup(AnimationEvent_t1155830353_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
extern "C" void AnimationEvent_t1155830353_marshal_com(const AnimationEvent_t1155830353& unmarshaled, AnimationEvent_t1155830353_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception);
}
extern "C" void AnimationEvent_t1155830353_marshal_com_back(const AnimationEvent_t1155830353_marshaled_com& marshaled, AnimationEvent_t1155830353& unmarshaled)
{
	Il2CppCodeGenException* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
extern "C" void AnimationEvent_t1155830353_marshal_com_cleanup(AnimationEvent_t1155830353_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationEvent::.ctor()
extern "C"  void AnimationEvent__ctor_m3926279630 (AnimationEvent_t1155830353 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationEvent__ctor_m3926279630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m1137811625(__this, /*hidden argument*/NULL);
		__this->set_m_Time_0((0.0f));
		__this->set_m_FunctionName_1(_stringLiteral4281599044);
		__this->set_m_StringParameter_2(_stringLiteral4281599044);
		__this->set_m_ObjectReferenceParameter_3((Object_t3488701146 *)NULL);
		__this->set_m_FloatParameter_4((0.0f));
		__this->set_m_IntParameter_5(0);
		__this->set_m_MessageOptions_6(0);
		__this->set_m_Source_7(0);
		__this->set_m_StateSender_8((AnimationState_t404869365 *)NULL);
		return;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
extern "C"  PlayableHandle_t3568310090  AnimationClipPlayable_GetHandle_m1960911587 (AnimationClipPlayable_t873330480 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t3568310090  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t3568310090  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t3568310090  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t3568310090  AnimationClipPlayable_GetHandle_m1960911587_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationClipPlayable_t873330480 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t873330480 *>(__this + 1);
	return AnimationClipPlayable_GetHandle_m1960911587(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
extern "C"  bool AnimationClipPlayable_Equals_m1905194963 (AnimationClipPlayable_t873330480 * __this, AnimationClipPlayable_t873330480  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t3568310090  L_0 = AnimationClipPlayable_GetHandle_m1960911587(__this, /*hidden argument*/NULL);
		PlayableHandle_t3568310090  L_1 = AnimationClipPlayable_GetHandle_m1960911587((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m4290873757(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimationClipPlayable_Equals_m1905194963_AdjustorThunk (RuntimeObject * __this, AnimationClipPlayable_t873330480  ___other0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t873330480 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t873330480 *>(__this + 1);
	return AnimationClipPlayable_Equals_m1905194963(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C"  void AnimationLayerMixerPlayable__ctor_m2151628623 (AnimationLayerMixerPlayable_t589927664 * __this, PlayableHandle_t3568310090  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable__ctor_m2151628623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_m903834014((&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t589927664_m3069852038((&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t589927664_m3069852038_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t640954035 * L_2 = (InvalidCastException_t640954035 *)il2cpp_codegen_object_new(InvalidCastException_t640954035_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3724751162(L_2, _stringLiteral3338108120, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t3568310090  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AnimationLayerMixerPlayable__ctor_m2151628623_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t3568310090  ___handle0, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_t589927664 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t589927664 *>(__this + 1);
	AnimationLayerMixerPlayable__ctor_m2151628623(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
extern "C"  PlayableHandle_t3568310090  AnimationLayerMixerPlayable_GetHandle_m4097177763 (AnimationLayerMixerPlayable_t589927664 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t3568310090  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t3568310090  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t3568310090  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t3568310090  AnimationLayerMixerPlayable_GetHandle_m4097177763_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_t589927664 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t589927664 *>(__this + 1);
	return AnimationLayerMixerPlayable_GetHandle_m4097177763(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
extern "C"  bool AnimationLayerMixerPlayable_Equals_m2489036254 (AnimationLayerMixerPlayable_t589927664 * __this, AnimationLayerMixerPlayable_t589927664  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t3568310090  L_0 = AnimationLayerMixerPlayable_GetHandle_m4097177763(__this, /*hidden argument*/NULL);
		PlayableHandle_t3568310090  L_1 = AnimationLayerMixerPlayable_GetHandle_m4097177763((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m4290873757(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimationLayerMixerPlayable_Equals_m2489036254_AdjustorThunk (RuntimeObject * __this, AnimationLayerMixerPlayable_t589927664  ___other0, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_t589927664 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t589927664 *>(__this + 1);
	return AnimationLayerMixerPlayable_Equals_m2489036254(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.cctor()
extern "C"  void AnimationLayerMixerPlayable__cctor_m482187076 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable__cctor_m482187076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t3568310090  L_0 = PlayableHandle_get_Null_m2850071261(NULL /*static, unused*/, /*hidden argument*/NULL);
		AnimationLayerMixerPlayable_t589927664  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimationLayerMixerPlayable__ctor_m2151628623((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationLayerMixerPlayable_t589927664_StaticFields*)il2cpp_codegen_static_fields_for(AnimationLayerMixerPlayable_t589927664_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
extern "C"  PlayableHandle_t3568310090  AnimationMixerPlayable_GetHandle_m2248695751 (AnimationMixerPlayable_t2773037192 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t3568310090  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t3568310090  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t3568310090  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t3568310090  AnimationMixerPlayable_GetHandle_m2248695751_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2773037192 * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2773037192 *>(__this + 1);
	return AnimationMixerPlayable_GetHandle_m2248695751(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
extern "C"  bool AnimationMixerPlayable_Equals_m2637270596 (AnimationMixerPlayable_t2773037192 * __this, AnimationMixerPlayable_t2773037192  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t3568310090  L_0 = AnimationMixerPlayable_GetHandle_m2248695751(__this, /*hidden argument*/NULL);
		PlayableHandle_t3568310090  L_1 = AnimationMixerPlayable_GetHandle_m2248695751((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m4290873757(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimationMixerPlayable_Equals_m2637270596_AdjustorThunk (RuntimeObject * __this, AnimationMixerPlayable_t2773037192  ___other0, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2773037192 * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2773037192 *>(__this + 1);
	return AnimationMixerPlayable_Equals_m2637270596(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C"  void AnimationOffsetPlayable__ctor_m1431483072 (AnimationOffsetPlayable_t168051907 * __this, PlayableHandle_t3568310090  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable__ctor_m1431483072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_m903834014((&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t168051907_m2732761673((&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t168051907_m2732761673_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t640954035 * L_2 = (InvalidCastException_t640954035 *)il2cpp_codegen_object_new(InvalidCastException_t640954035_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3724751162(L_2, _stringLiteral2618989080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t3568310090  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AnimationOffsetPlayable__ctor_m1431483072_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t3568310090  ___handle0, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t168051907 * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t168051907 *>(__this + 1);
	AnimationOffsetPlayable__ctor_m1431483072(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
extern "C"  PlayableHandle_t3568310090  AnimationOffsetPlayable_GetHandle_m1428369220 (AnimationOffsetPlayable_t168051907 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t3568310090  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t3568310090  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t3568310090  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t3568310090  AnimationOffsetPlayable_GetHandle_m1428369220_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t168051907 * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t168051907 *>(__this + 1);
	return AnimationOffsetPlayable_GetHandle_m1428369220(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
extern "C"  bool AnimationOffsetPlayable_Equals_m2573926904 (AnimationOffsetPlayable_t168051907 * __this, AnimationOffsetPlayable_t168051907  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable_Equals_m2573926904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t3568310090  L_0 = AnimationOffsetPlayable_GetHandle_m1428369220((&___other0), /*hidden argument*/NULL);
		PlayableHandle_t3568310090  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t3568310090_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationOffsetPlayable_t168051907_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationOffsetPlayable_t168051907 *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern "C"  bool AnimationOffsetPlayable_Equals_m2573926904_AdjustorThunk (RuntimeObject * __this, AnimationOffsetPlayable_t168051907  ___other0, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t168051907 * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t168051907 *>(__this + 1);
	return AnimationOffsetPlayable_Equals_m2573926904(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.cctor()
extern "C"  void AnimationOffsetPlayable__cctor_m518519760 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable__cctor_m518519760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t3568310090  L_0 = PlayableHandle_get_Null_m2850071261(NULL /*static, unused*/, /*hidden argument*/NULL);
		AnimationOffsetPlayable_t168051907  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimationOffsetPlayable__ctor_m1431483072((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationOffsetPlayable_t168051907_StaticFields*)il2cpp_codegen_static_fields_for(AnimationOffsetPlayable_t168051907_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C"  void AnimatorControllerPlayable__ctor_m1672667268 (AnimatorControllerPlayable_t1624374338 * __this, PlayableHandle_t3568310090  ___handle0, const RuntimeMethod* method)
{
	{
		PlayableHandle_t3568310090  L_0 = PlayableHandle_get_Null_m2850071261(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Handle_0(L_0);
		PlayableHandle_t3568310090  L_1 = ___handle0;
		AnimatorControllerPlayable_SetHandle_m3600557015(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void AnimatorControllerPlayable__ctor_m1672667268_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t3568310090  ___handle0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_t1624374338 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t1624374338 *>(__this + 1);
	AnimatorControllerPlayable__ctor_m1672667268(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
extern "C"  PlayableHandle_t3568310090  AnimatorControllerPlayable_GetHandle_m246131208 (AnimatorControllerPlayable_t1624374338 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t3568310090  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t3568310090  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t3568310090  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t3568310090  AnimatorControllerPlayable_GetHandle_m246131208_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_t1624374338 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t1624374338 *>(__this + 1);
	return AnimatorControllerPlayable_GetHandle_m246131208(_thisAdjusted, method);
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
extern "C"  void AnimatorControllerPlayable_SetHandle_m3600557015 (AnimatorControllerPlayable_t1624374338 * __this, PlayableHandle_t3568310090  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable_SetHandle_m3600557015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t3568310090 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = PlayableHandle_IsValid_m903834014(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t3566863754 * L_2 = (InvalidOperationException_t3566863754 *)il2cpp_codegen_object_new(InvalidOperationException_t3566863754_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3601280909(L_2, _stringLiteral660840534, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_001c:
	{
		bool L_3 = PlayableHandle_IsValid_m903834014((&___handle0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		bool L_4 = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t1624374338_m173037730((&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t1624374338_m173037730_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0040;
		}
	}
	{
		InvalidCastException_t640954035 * L_5 = (InvalidCastException_t640954035 *)il2cpp_codegen_object_new(InvalidCastException_t640954035_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3724751162(L_5, _stringLiteral3482031948, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0040:
	{
	}

IL_0041:
	{
		PlayableHandle_t3568310090  L_6 = ___handle0;
		__this->set_m_Handle_0(L_6);
		return;
	}
}
extern "C"  void AnimatorControllerPlayable_SetHandle_m3600557015_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t3568310090  ___handle0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_t1624374338 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t1624374338 *>(__this + 1);
	AnimatorControllerPlayable_SetHandle_m3600557015(_thisAdjusted, ___handle0, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
extern "C"  bool AnimatorControllerPlayable_Equals_m3675920431 (AnimatorControllerPlayable_t1624374338 * __this, AnimatorControllerPlayable_t1624374338  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t3568310090  L_0 = AnimatorControllerPlayable_GetHandle_m246131208(__this, /*hidden argument*/NULL);
		PlayableHandle_t3568310090  L_1 = AnimatorControllerPlayable_GetHandle_m246131208((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m4290873757(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimatorControllerPlayable_Equals_m3675920431_AdjustorThunk (RuntimeObject * __this, AnimatorControllerPlayable_t1624374338  ___other0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_t1624374338 * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t1624374338 *>(__this + 1);
	return AnimatorControllerPlayable_Equals_m3675920431(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.cctor()
extern "C"  void AnimatorControllerPlayable__cctor_m3428417351 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable__cctor_m3428417351_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t3568310090  L_0 = PlayableHandle_get_Null_m2850071261(NULL /*static, unused*/, /*hidden argument*/NULL);
		AnimatorControllerPlayable_t1624374338  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimatorControllerPlayable__ctor_m1672667268((&L_1), L_0, /*hidden argument*/NULL);
		((AnimatorControllerPlayable_t1624374338_StaticFields*)il2cpp_codegen_static_fields_for(AnimatorControllerPlayable_t1624374338_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Single UnityEngine.Animator::GetFloat(System.String)
extern "C"  float Animator_GetFloat_m2272018163 (Animator_t349928165 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___name0;
		float L_1 = Animator_GetFloatString_m3761139789(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C"  void Animator_SetFloat_m2669117310 (Animator_t349928165 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		Animator_SetFloatString_m1255615834(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C"  bool Animator_GetBool_m2332935269 (Animator_t349928165 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1 = Animator_GetBoolString_m364315223(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m3100161221 (Animator_t349928165 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		bool L_1 = ___value1;
		Animator_SetBoolString_m390549036(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m3142094006 (Animator_t349928165 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_SetTriggerString_m1641184739(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C"  void Animator_ResetTrigger_m3968864239 (Animator_t349928165 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_ResetTriggerString_m2343462588(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
extern "C"  void Animator_SetIKPosition_m1472712018 (Animator_t349928165 * __this, int32_t ___goal0, Vector3_t134354332  ___goalPosition1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m2045466954(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Vector3_t134354332  L_1 = ___goalPosition1;
		Animator_SetIKPositionInternal_m1804633146(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKPositionInternal(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
extern "C"  void Animator_SetIKPositionInternal_m1804633146 (Animator_t349928165 * __this, int32_t ___goal0, Vector3_t134354332  ___goalPosition1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___goal0;
		Animator_INTERNAL_CALL_SetIKPositionInternal_m3649026500(NULL /*static, unused*/, __this, L_0, (&___goalPosition1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetIKPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
extern "C"  void Animator_INTERNAL_CALL_SetIKPositionInternal_m3649026500 (RuntimeObject * __this /* static, unused */, Animator_t349928165 * ___self0, int32_t ___goal1, Vector3_t134354332 * ___goalPosition2, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_SetIKPositionInternal_m3649026500_ftn) (Animator_t349928165 *, int32_t, Vector3_t134354332 *);
	static Animator_INTERNAL_CALL_SetIKPositionInternal_m3649026500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_SetIKPositionInternal_m3649026500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_SetIKPositionInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self0, ___goal1, ___goalPosition2);
}
// System.Void UnityEngine.Animator::SetIKRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
extern "C"  void Animator_SetIKRotation_m2902745941 (Animator_t349928165 * __this, int32_t ___goal0, Quaternion_t2730452765  ___goalRotation1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m2045466954(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Quaternion_t2730452765  L_1 = ___goalRotation1;
		Animator_SetIKRotationInternal_m619372890(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKRotationInternal(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
extern "C"  void Animator_SetIKRotationInternal_m619372890 (Animator_t349928165 * __this, int32_t ___goal0, Quaternion_t2730452765  ___goalRotation1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___goal0;
		Animator_INTERNAL_CALL_SetIKRotationInternal_m773719497(NULL /*static, unused*/, __this, L_0, (&___goalRotation1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::INTERNAL_CALL_SetIKRotationInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
extern "C"  void Animator_INTERNAL_CALL_SetIKRotationInternal_m773719497 (RuntimeObject * __this /* static, unused */, Animator_t349928165 * ___self0, int32_t ___goal1, Quaternion_t2730452765 * ___goalRotation2, const RuntimeMethod* method)
{
	typedef void (*Animator_INTERNAL_CALL_SetIKRotationInternal_m773719497_ftn) (Animator_t349928165 *, int32_t, Quaternion_t2730452765 *);
	static Animator_INTERNAL_CALL_SetIKRotationInternal_m773719497_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_INTERNAL_CALL_SetIKRotationInternal_m773719497_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::INTERNAL_CALL_SetIKRotationInternal(UnityEngine.Animator,UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___self0, ___goal1, ___goalRotation2);
}
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
extern "C"  void Animator_SetIKPositionWeight_m3153463114 (Animator_t349928165 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m2045466954(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = ___value1;
		Animator_SetIKPositionWeightInternal_m4062808975(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKPositionWeightInternal(UnityEngine.AvatarIKGoal,System.Single)
extern "C"  void Animator_SetIKPositionWeightInternal_m4062808975 (Animator_t349928165 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetIKPositionWeightInternal_m4062808975_ftn) (Animator_t349928165 *, int32_t, float);
	static Animator_SetIKPositionWeightInternal_m4062808975_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIKPositionWeightInternal_m4062808975_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIKPositionWeightInternal(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___goal0, ___value1);
}
// System.Void UnityEngine.Animator::SetIKRotationWeight(UnityEngine.AvatarIKGoal,System.Single)
extern "C"  void Animator_SetIKRotationWeight_m2252140534 (Animator_t349928165 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_m2045466954(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = ___value1;
		Animator_SetIKRotationWeightInternal_m1198573736(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKRotationWeightInternal(UnityEngine.AvatarIKGoal,System.Single)
extern "C"  void Animator_SetIKRotationWeightInternal_m1198573736 (Animator_t349928165 * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetIKRotationWeightInternal_m1198573736_ftn) (Animator_t349928165 *, int32_t, float);
	static Animator_SetIKRotationWeightInternal_m1198573736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIKRotationWeightInternal_m1198573736_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIKRotationWeightInternal(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___goal0, ___value1);
}
// System.Int32 UnityEngine.Animator::get_layerCount()
extern "C"  int32_t Animator_get_layerCount_m1674544956 (Animator_t349928165 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_layerCount_m1674544956_ftn) (Animator_t349928165 *);
	static Animator_get_layerCount_m1674544956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layerCount_m1674544956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layerCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
extern "C"  void Animator_SetLayerWeight_m1284651011 (Animator_t349928165 * __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetLayerWeight_m1284651011_ftn) (Animator_t349928165 *, int32_t, float);
	static Animator_SetLayerWeight_m1284651011_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLayerWeight_m1284651011_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___weight1);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t2334180866  Animator_GetCurrentAnimatorStateInfo_m1197486411 (Animator_t349928165 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef AnimatorStateInfo_t2334180866  (*Animator_GetCurrentAnimatorStateInfo_m1197486411_ftn) (Animator_t349928165 *, int32_t);
	static Animator_GetCurrentAnimatorStateInfo_m1197486411_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentAnimatorStateInfo_m1197486411_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)");
	AnimatorStateInfo_t2334180866  retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern "C"  bool Animator_IsInTransition_m466658639 (Animator_t349928165 * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsInTransition_m466658639_ftn) (Animator_t349928165 *, int32_t);
	static Animator_IsInTransition_m466658639_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInTransition_m466658639_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInTransition(System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
extern "C"  void Animator_set_speed_m4126510647 (Animator_t349928165 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_speed_m4126510647_ftn) (Animator_t349928165 *, float);
	static Animator_set_speed_m4126510647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_speed_m4126510647_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
extern "C"  void Animator_CrossFade_m1116100168 (Animator_t349928165 * __this, String_t* ___stateName0, float ___transitionDuration1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___stateName0;
		float L_1 = ___transitionDuration1;
		int32_t L_2 = V_1;
		float L_3 = V_0;
		Animator_CrossFade_m2692258440(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
extern "C"  void Animator_CrossFade_m2692258440 (Animator_t349928165 * __this, String_t* ___stateName0, float ___transitionDuration1, int32_t ___layer2, float ___normalizedTime3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m2799264512(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ___transitionDuration1;
		int32_t L_3 = ___layer2;
		float L_4 = ___normalizedTime3;
		Animator_CrossFade_m112349830(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)
extern "C"  void Animator_CrossFade_m112349830 (Animator_t349928165 * __this, int32_t ___stateNameHash0, float ___transitionDuration1, int32_t ___layer2, float ___normalizedTime3, const RuntimeMethod* method)
{
	typedef void (*Animator_CrossFade_m112349830_ftn) (Animator_t349928165 *, int32_t, float, int32_t, float);
	static Animator_CrossFade_m112349830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFade_m112349830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash0, ___transitionDuration1, ___layer2, ___normalizedTime3);
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C"  void Animator_Play_m2165265806 (Animator_t349928165 * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method)
{
	typedef void (*Animator_Play_m2165265806_ftn) (Animator_t349928165 *, int32_t, int32_t, float);
	static Animator_Play_m2165265806_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m2165265806_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash0, ___layer1, ___normalizedTime2);
}
// System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
extern "C"  bool Animator_get_hasBoundPlayables_m923183461 (Animator_t349928165 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasBoundPlayables_m923183461_ftn) (Animator_t349928165 *);
	static Animator_get_hasBoundPlayables_m923183461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasBoundPlayables_m923183461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasBoundPlayables()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m2799264512 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_StringToHash_m2799264512_ftn) (String_t*);
	static Animator_StringToHash_m2799264512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m2799264512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	int32_t retVal = _il2cpp_icall_func(___name0);
	return retVal;
}
// System.Void UnityEngine.Animator::CheckIfInIKPass()
extern "C"  void Animator_CheckIfInIKPass_m2045466954 (Animator_t349928165 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_CheckIfInIKPass_m2045466954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Animator_get_logWarnings_m2420560768(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = Animator_CheckIfInIKPassInternal_m2771047786(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t194690950_il2cpp_TypeInfo_var);
		Debug_LogWarning_m2582856571(NULL /*static, unused*/, _stringLiteral1386688250, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean UnityEngine.Animator::CheckIfInIKPassInternal()
extern "C"  bool Animator_CheckIfInIKPassInternal_m2771047786 (Animator_t349928165 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_CheckIfInIKPassInternal_m2771047786_ftn) (Animator_t349928165 *);
	static Animator_CheckIfInIKPassInternal_m2771047786_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CheckIfInIKPassInternal_m2771047786_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CheckIfInIKPassInternal()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C"  void Animator_SetFloatString_m1255615834 (Animator_t349928165 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatString_m1255615834_ftn) (Animator_t349928165 *, String_t*, float);
	static Animator_SetFloatString_m1255615834_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_m1255615834_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Single UnityEngine.Animator::GetFloatString(System.String)
extern "C"  float Animator_GetFloatString_m3761139789 (Animator_t349928165 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetFloatString_m3761139789_ftn) (Animator_t349928165 *, String_t*);
	static Animator_GetFloatString_m3761139789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatString_m3761139789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatString(System.String)");
	float retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C"  void Animator_SetBoolString_m390549036 (Animator_t349928165 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetBoolString_m390549036_ftn) (Animator_t349928165 *, String_t*, bool);
	static Animator_SetBoolString_m390549036_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_m390549036_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C"  bool Animator_GetBoolString_m364315223 (Animator_t349928165 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef bool (*Animator_GetBoolString_m364315223_ftn) (Animator_t349928165 *, String_t*);
	static Animator_GetBoolString_m364315223_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolString_m364315223_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolString(System.String)");
	bool retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C"  void Animator_SetTriggerString_m1641184739 (Animator_t349928165 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTriggerString_m1641184739_ftn) (Animator_t349928165 *, String_t*);
	static Animator_SetTriggerString_m1641184739_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m1641184739_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C"  void Animator_ResetTriggerString_m2343462588 (Animator_t349928165 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_ResetTriggerString_m2343462588_ftn) (Animator_t349928165 *, String_t*);
	static Animator_ResetTriggerString_m2343462588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m2343462588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Boolean UnityEngine.Animator::get_logWarnings()
extern "C"  bool Animator_get_logWarnings_m2420560768 (Animator_t349928165 * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_logWarnings_m2420560768_ftn) (Animator_t349928165 *);
	static Animator_get_logWarnings_m2420560768_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_logWarnings_m2420560768_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_logWarnings()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C"  int32_t AnimatorStateInfo_get_nameHash_m1343314723 (AnimatorStateInfo_t2334180866 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Path_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorStateInfo_get_nameHash_m1343314723_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t2334180866 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t2334180866 *>(__this + 1);
	return AnimatorStateInfo_get_nameHash_m1343314723(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C"  float AnimatorStateInfo_get_normalizedTime_m3454788388 (AnimatorStateInfo_t2334180866 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_NormalizedTime_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorStateInfo_get_normalizedTime_m3454788388_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t2334180866 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t2334180866 *>(__this + 1);
	return AnimatorStateInfo_get_normalizedTime_m3454788388(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C"  float AnimatorStateInfo_get_length_m2053837811 (AnimatorStateInfo_t2334180866 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Length_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorStateInfo_get_length_m2053837811_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t2334180866 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_t2334180866 *>(__this + 1);
	return AnimatorStateInfo_get_length_m2053837811(_thisAdjusted, method);
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t730739477_marshal_pinvoke(const AnimatorTransitionInfo_t730739477& unmarshaled, AnimatorTransitionInfo_t730739477_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_NormalizedTime_3 = unmarshaled.get_m_NormalizedTime_3();
	marshaled.___m_AnyState_4 = static_cast<int32_t>(unmarshaled.get_m_AnyState_4());
	marshaled.___m_TransitionType_5 = unmarshaled.get_m_TransitionType_5();
}
extern "C" void AnimatorTransitionInfo_t730739477_marshal_pinvoke_back(const AnimatorTransitionInfo_t730739477_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t730739477& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	float unmarshaled_m_NormalizedTime_temp_3 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.set_m_NormalizedTime_3(unmarshaled_m_NormalizedTime_temp_3);
	bool unmarshaled_m_AnyState_temp_4 = false;
	unmarshaled_m_AnyState_temp_4 = static_cast<bool>(marshaled.___m_AnyState_4);
	unmarshaled.set_m_AnyState_4(unmarshaled_m_AnyState_temp_4);
	int32_t unmarshaled_m_TransitionType_temp_5 = 0;
	unmarshaled_m_TransitionType_temp_5 = marshaled.___m_TransitionType_5;
	unmarshaled.set_m_TransitionType_5(unmarshaled_m_TransitionType_temp_5);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t730739477_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t730739477_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t730739477_marshal_com(const AnimatorTransitionInfo_t730739477& unmarshaled, AnimatorTransitionInfo_t730739477_marshaled_com& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_NormalizedTime_3 = unmarshaled.get_m_NormalizedTime_3();
	marshaled.___m_AnyState_4 = static_cast<int32_t>(unmarshaled.get_m_AnyState_4());
	marshaled.___m_TransitionType_5 = unmarshaled.get_m_TransitionType_5();
}
extern "C" void AnimatorTransitionInfo_t730739477_marshal_com_back(const AnimatorTransitionInfo_t730739477_marshaled_com& marshaled, AnimatorTransitionInfo_t730739477& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	float unmarshaled_m_NormalizedTime_temp_3 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.set_m_NormalizedTime_3(unmarshaled_m_NormalizedTime_temp_3);
	bool unmarshaled_m_AnyState_temp_4 = false;
	unmarshaled_m_AnyState_temp_4 = static_cast<bool>(marshaled.___m_AnyState_4);
	unmarshaled.set_m_AnyState_4(unmarshaled_m_AnyState_temp_4);
	int32_t unmarshaled_m_TransitionType_temp_5 = 0;
	unmarshaled_m_TransitionType_temp_5 = marshaled.___m_TransitionType_5;
	unmarshaled.set_m_TransitionType_5(unmarshaled_m_TransitionType_temp_5);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t730739477_marshal_com_cleanup(AnimatorTransitionInfo_t730739477_marshaled_com& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t3750814485_marshal_pinvoke(const HumanBone_t3750814485& unmarshaled, HumanBone_t3750814485_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
extern "C" void HumanBone_t3750814485_marshal_pinvoke_back(const HumanBone_t3750814485_marshaled_pinvoke& marshaled, HumanBone_t3750814485& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1));
	HumanLimit_t2892711747  unmarshaled_limit_temp_2;
	memset(&unmarshaled_limit_temp_2, 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t3750814485_marshal_pinvoke_cleanup(HumanBone_t3750814485_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t3750814485_marshal_com(const HumanBone_t3750814485& unmarshaled, HumanBone_t3750814485_marshaled_com& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
extern "C" void HumanBone_t3750814485_marshal_com_back(const HumanBone_t3750814485_marshaled_com& marshaled, HumanBone_t3750814485& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1));
	HumanLimit_t2892711747  unmarshaled_limit_temp_2;
	memset(&unmarshaled_limit_temp_2, 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t3750814485_marshal_com_cleanup(HumanBone_t3750814485_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t622692829_marshal_pinvoke(const SkeletonBone_t622692829& unmarshaled, SkeletonBone_t622692829_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
extern "C" void SkeletonBone_t622692829_marshal_pinvoke_back(const SkeletonBone_t622692829_marshaled_pinvoke& marshaled, SkeletonBone_t622692829& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_string_result(marshaled.___parentName_1));
	Vector3_t134354332  unmarshaled_position_temp_2;
	memset(&unmarshaled_position_temp_2, 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t2730452765  unmarshaled_rotation_temp_3;
	memset(&unmarshaled_rotation_temp_3, 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_t134354332  unmarshaled_scale_temp_4;
	memset(&unmarshaled_scale_temp_4, 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t622692829_marshal_pinvoke_cleanup(SkeletonBone_t622692829_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t622692829_marshal_com(const SkeletonBone_t622692829& unmarshaled, SkeletonBone_t622692829_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
extern "C" void SkeletonBone_t622692829_marshal_com_back(const SkeletonBone_t622692829_marshaled_com& marshaled, SkeletonBone_t622692829& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1));
	Vector3_t134354332  unmarshaled_position_temp_2;
	memset(&unmarshaled_position_temp_2, 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t2730452765  unmarshaled_rotation_temp_3;
	memset(&unmarshaled_rotation_temp_3, 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_t134354332  unmarshaled_scale_temp_4;
	memset(&unmarshaled_scale_temp_4, 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_t622692829_marshal_com_cleanup(SkeletonBone_t622692829_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
