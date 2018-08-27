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

// System.Collections.Hashtable
struct Hashtable_t602384697;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3200476513;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t450198251;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1759378944;
// System.IntPtr[]
struct IntPtrU5BU5D_t738858890;
// System.Collections.IDictionary
struct IDictionary_t1965935985;
// System.Char[]
struct CharU5BU5D_t3230795339;
// Microsoft.Win32.IRegistryApi
struct IRegistryApi_t2048422289;
// System.Type
struct Type_t;
// System.Void
struct Void_t1003147579;
// System.Byte
struct Byte_t3648786538;
// System.Double
struct Double_t1567154213;
// System.UInt16
struct UInt16_t3713498275;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t731970336;
// System.Type[]
struct TypeU5BU5D_t3562884053;
// System.Reflection.MemberFilter
struct MemberFilter_t478655269;
// System.IAsyncResult
struct IAsyncResult_t1071638167;
// System.AsyncCallback
struct AsyncCallback_t3260757161;




#ifndef U3CMODULEU3E_T2674643418_H
#define U3CMODULEU3E_T2674643418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2674643418 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2674643418_H
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
#ifndef KEYHANDLER_T2500991909_H
#define KEYHANDLER_T2500991909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.KeyHandler
struct  KeyHandler_t2500991909  : public RuntimeObject
{
public:
	// System.String Microsoft.Win32.KeyHandler::Dir
	String_t* ___Dir_2;
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::values
	Hashtable_t602384697 * ___values_3;
	// System.String Microsoft.Win32.KeyHandler::file
	String_t* ___file_4;
	// System.Boolean Microsoft.Win32.KeyHandler::dirty
	bool ___dirty_5;

public:
	inline static int32_t get_offset_of_Dir_2() { return static_cast<int32_t>(offsetof(KeyHandler_t2500991909, ___Dir_2)); }
	inline String_t* get_Dir_2() const { return ___Dir_2; }
	inline String_t** get_address_of_Dir_2() { return &___Dir_2; }
	inline void set_Dir_2(String_t* value)
	{
		___Dir_2 = value;
		Il2CppCodeGenWriteBarrier((&___Dir_2), value);
	}

	inline static int32_t get_offset_of_values_3() { return static_cast<int32_t>(offsetof(KeyHandler_t2500991909, ___values_3)); }
	inline Hashtable_t602384697 * get_values_3() const { return ___values_3; }
	inline Hashtable_t602384697 ** get_address_of_values_3() { return &___values_3; }
	inline void set_values_3(Hashtable_t602384697 * value)
	{
		___values_3 = value;
		Il2CppCodeGenWriteBarrier((&___values_3), value);
	}

	inline static int32_t get_offset_of_file_4() { return static_cast<int32_t>(offsetof(KeyHandler_t2500991909, ___file_4)); }
	inline String_t* get_file_4() const { return ___file_4; }
	inline String_t** get_address_of_file_4() { return &___file_4; }
	inline void set_file_4(String_t* value)
	{
		___file_4 = value;
		Il2CppCodeGenWriteBarrier((&___file_4), value);
	}

	inline static int32_t get_offset_of_dirty_5() { return static_cast<int32_t>(offsetof(KeyHandler_t2500991909, ___dirty_5)); }
	inline bool get_dirty_5() const { return ___dirty_5; }
	inline bool* get_address_of_dirty_5() { return &___dirty_5; }
	inline void set_dirty_5(bool value)
	{
		___dirty_5 = value;
	}
};

struct KeyHandler_t2500991909_StaticFields
{
public:
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::key_to_handler
	Hashtable_t602384697 * ___key_to_handler_0;
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::dir_to_handler
	Hashtable_t602384697 * ___dir_to_handler_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Microsoft.Win32.KeyHandler::<>f__switch$map1
	Dictionary_2_t3200476513 * ___U3CU3Ef__switchU24map1_6;

public:
	inline static int32_t get_offset_of_key_to_handler_0() { return static_cast<int32_t>(offsetof(KeyHandler_t2500991909_StaticFields, ___key_to_handler_0)); }
	inline Hashtable_t602384697 * get_key_to_handler_0() const { return ___key_to_handler_0; }
	inline Hashtable_t602384697 ** get_address_of_key_to_handler_0() { return &___key_to_handler_0; }
	inline void set_key_to_handler_0(Hashtable_t602384697 * value)
	{
		___key_to_handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_to_handler_0), value);
	}

	inline static int32_t get_offset_of_dir_to_handler_1() { return static_cast<int32_t>(offsetof(KeyHandler_t2500991909_StaticFields, ___dir_to_handler_1)); }
	inline Hashtable_t602384697 * get_dir_to_handler_1() const { return ___dir_to_handler_1; }
	inline Hashtable_t602384697 ** get_address_of_dir_to_handler_1() { return &___dir_to_handler_1; }
	inline void set_dir_to_handler_1(Hashtable_t602384697 * value)
	{
		___dir_to_handler_1 = value;
		Il2CppCodeGenWriteBarrier((&___dir_to_handler_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_6() { return static_cast<int32_t>(offsetof(KeyHandler_t2500991909_StaticFields, ___U3CU3Ef__switchU24map1_6)); }
	inline Dictionary_2_t3200476513 * get_U3CU3Ef__switchU24map1_6() const { return ___U3CU3Ef__switchU24map1_6; }
	inline Dictionary_2_t3200476513 ** get_address_of_U3CU3Ef__switchU24map1_6() { return &___U3CU3Ef__switchU24map1_6; }
	inline void set_U3CU3Ef__switchU24map1_6(Dictionary_2_t3200476513 * value)
	{
		___U3CU3Ef__switchU24map1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYHANDLER_T2500991909_H
#ifndef EXPANDSTRING_T777443195_H
#define EXPANDSTRING_T777443195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.ExpandString
struct  ExpandString_t777443195  : public RuntimeObject
{
public:
	// System.String Microsoft.Win32.ExpandString::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(ExpandString_t777443195, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDSTRING_T777443195_H
#ifndef REGISTRY_T93167849_H
#define REGISTRY_T93167849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Registry
struct  Registry_t93167849  : public RuntimeObject
{
public:

public:
};

struct Registry_t93167849_StaticFields
{
public:
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::ClassesRoot
	RegistryKey_t450198251 * ___ClassesRoot_0;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::CurrentConfig
	RegistryKey_t450198251 * ___CurrentConfig_1;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::CurrentUser
	RegistryKey_t450198251 * ___CurrentUser_2;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::DynData
	RegistryKey_t450198251 * ___DynData_3;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::LocalMachine
	RegistryKey_t450198251 * ___LocalMachine_4;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::PerformanceData
	RegistryKey_t450198251 * ___PerformanceData_5;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::Users
	RegistryKey_t450198251 * ___Users_6;

public:
	inline static int32_t get_offset_of_ClassesRoot_0() { return static_cast<int32_t>(offsetof(Registry_t93167849_StaticFields, ___ClassesRoot_0)); }
	inline RegistryKey_t450198251 * get_ClassesRoot_0() const { return ___ClassesRoot_0; }
	inline RegistryKey_t450198251 ** get_address_of_ClassesRoot_0() { return &___ClassesRoot_0; }
	inline void set_ClassesRoot_0(RegistryKey_t450198251 * value)
	{
		___ClassesRoot_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassesRoot_0), value);
	}

	inline static int32_t get_offset_of_CurrentConfig_1() { return static_cast<int32_t>(offsetof(Registry_t93167849_StaticFields, ___CurrentConfig_1)); }
	inline RegistryKey_t450198251 * get_CurrentConfig_1() const { return ___CurrentConfig_1; }
	inline RegistryKey_t450198251 ** get_address_of_CurrentConfig_1() { return &___CurrentConfig_1; }
	inline void set_CurrentConfig_1(RegistryKey_t450198251 * value)
	{
		___CurrentConfig_1 = value;
		Il2CppCodeGenWriteBarrier((&___CurrentConfig_1), value);
	}

	inline static int32_t get_offset_of_CurrentUser_2() { return static_cast<int32_t>(offsetof(Registry_t93167849_StaticFields, ___CurrentUser_2)); }
	inline RegistryKey_t450198251 * get_CurrentUser_2() const { return ___CurrentUser_2; }
	inline RegistryKey_t450198251 ** get_address_of_CurrentUser_2() { return &___CurrentUser_2; }
	inline void set_CurrentUser_2(RegistryKey_t450198251 * value)
	{
		___CurrentUser_2 = value;
		Il2CppCodeGenWriteBarrier((&___CurrentUser_2), value);
	}

	inline static int32_t get_offset_of_DynData_3() { return static_cast<int32_t>(offsetof(Registry_t93167849_StaticFields, ___DynData_3)); }
	inline RegistryKey_t450198251 * get_DynData_3() const { return ___DynData_3; }
	inline RegistryKey_t450198251 ** get_address_of_DynData_3() { return &___DynData_3; }
	inline void set_DynData_3(RegistryKey_t450198251 * value)
	{
		___DynData_3 = value;
		Il2CppCodeGenWriteBarrier((&___DynData_3), value);
	}

	inline static int32_t get_offset_of_LocalMachine_4() { return static_cast<int32_t>(offsetof(Registry_t93167849_StaticFields, ___LocalMachine_4)); }
	inline RegistryKey_t450198251 * get_LocalMachine_4() const { return ___LocalMachine_4; }
	inline RegistryKey_t450198251 ** get_address_of_LocalMachine_4() { return &___LocalMachine_4; }
	inline void set_LocalMachine_4(RegistryKey_t450198251 * value)
	{
		___LocalMachine_4 = value;
		Il2CppCodeGenWriteBarrier((&___LocalMachine_4), value);
	}

	inline static int32_t get_offset_of_PerformanceData_5() { return static_cast<int32_t>(offsetof(Registry_t93167849_StaticFields, ___PerformanceData_5)); }
	inline RegistryKey_t450198251 * get_PerformanceData_5() const { return ___PerformanceData_5; }
	inline RegistryKey_t450198251 ** get_address_of_PerformanceData_5() { return &___PerformanceData_5; }
	inline void set_PerformanceData_5(RegistryKey_t450198251 * value)
	{
		___PerformanceData_5 = value;
		Il2CppCodeGenWriteBarrier((&___PerformanceData_5), value);
	}

	inline static int32_t get_offset_of_Users_6() { return static_cast<int32_t>(offsetof(Registry_t93167849_StaticFields, ___Users_6)); }
	inline RegistryKey_t450198251 * get_Users_6() const { return ___Users_6; }
	inline RegistryKey_t450198251 ** get_address_of_Users_6() { return &___Users_6; }
	inline void set_Users_6(RegistryKey_t450198251 * value)
	{
		___Users_6 = value;
		Il2CppCodeGenWriteBarrier((&___Users_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRY_T93167849_H
#ifndef LOCALE_T952656402_H
#define LOCALE_T952656402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t952656402  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T952656402_H
#ifndef RUNTIMEHELPERS_T3144864525_H
#define RUNTIMEHELPERS_T3144864525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeHelpers
struct  RuntimeHelpers_t3144864525  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEHELPERS_T3144864525_H
#ifndef MARSHALBYREFOBJECT_T4090830563_H
#define MARSHALBYREFOBJECT_T4090830563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t4090830563  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1759378944 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t4090830563, ____identity_0)); }
	inline ServerIdentity_t1759378944 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1759378944 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1759378944 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T4090830563_H
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
#ifndef SIMPLEENUMERATOR_T45150255_H
#define SIMPLEENUMERATOR_T45150255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/SimpleEnumerator
struct  SimpleEnumerator_t45150255  : public RuntimeObject
{
public:
	// System.Array System.Array/SimpleEnumerator::enumeratee
	RuntimeArray * ___enumeratee_0;
	// System.Int32 System.Array/SimpleEnumerator::currentpos
	int32_t ___currentpos_1;
	// System.Int32 System.Array/SimpleEnumerator::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_enumeratee_0() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t45150255, ___enumeratee_0)); }
	inline RuntimeArray * get_enumeratee_0() const { return ___enumeratee_0; }
	inline RuntimeArray ** get_address_of_enumeratee_0() { return &___enumeratee_0; }
	inline void set_enumeratee_0(RuntimeArray * value)
	{
		___enumeratee_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumeratee_0), value);
	}

	inline static int32_t get_offset_of_currentpos_1() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t45150255, ___currentpos_1)); }
	inline int32_t get_currentpos_1() const { return ___currentpos_1; }
	inline int32_t* get_address_of_currentpos_1() { return &___currentpos_1; }
	inline void set_currentpos_1(int32_t value)
	{
		___currentpos_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t45150255, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEENUMERATOR_T45150255_H
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
#ifndef CRITICALFINALIZEROBJECT_T109218179_H
#define CRITICALFINALIZEROBJECT_T109218179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t109218179  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T109218179_H
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
#ifndef INT16_T1886248118_H
#define INT16_T1886248118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t1886248118 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t1886248118, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T1886248118_H
#ifndef INATTRIBUTE_T2562046896_H
#define INATTRIBUTE_T2562046896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InAttribute
struct  InAttribute_t2562046896  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INATTRIBUTE_T2562046896_H
#ifndef SECURITYATTRIBUTE_T599326385_H
#define SECURITYATTRIBUTE_T599326385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t599326385  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T599326385_H
#ifndef GUIDATTRIBUTE_T2403385615_H
#define GUIDATTRIBUTE_T2403385615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GuidAttribute
struct  GuidAttribute_t2403385615  : public Attribute_t880686410
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::guidValue
	String_t* ___guidValue_0;

public:
	inline static int32_t get_offset_of_guidValue_0() { return static_cast<int32_t>(offsetof(GuidAttribute_t2403385615, ___guidValue_0)); }
	inline String_t* get_guidValue_0() const { return ___guidValue_0; }
	inline String_t** get_address_of_guidValue_0() { return &___guidValue_0; }
	inline void set_guidValue_0(String_t* value)
	{
		___guidValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___guidValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDATTRIBUTE_T2403385615_H
#ifndef COMIMPORTATTRIBUTE_T1433625280_H
#define COMIMPORTATTRIBUTE_T1433625280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComImportAttribute
struct  ComImportAttribute_t1433625280  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMIMPORTATTRIBUTE_T1433625280_H
#ifndef OPTIONALATTRIBUTE_T3104972909_H
#define OPTIONALATTRIBUTE_T3104972909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OptionalAttribute
struct  OptionalAttribute_t3104972909  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONALATTRIBUTE_T3104972909_H
#ifndef SBYTE_T3863729701_H
#define SBYTE_T3863729701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t3863729701 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t3863729701, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T3863729701_H
#ifndef COMPILERGENERATEDATTRIBUTE_T2533251879_H
#define COMPILERGENERATEDATTRIBUTE_T2533251879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct  CompilerGeneratedAttribute_t2533251879  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERGENERATEDATTRIBUTE_T2533251879_H
#ifndef INTERNALSVISIBLETOATTRIBUTE_T2728341308_H
#define INTERNALSVISIBLETOATTRIBUTE_T2728341308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct  InternalsVisibleToAttribute_t2728341308  : public Attribute_t880686410
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::assemblyName
	String_t* ___assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::all_visible
	bool ___all_visible_1;

public:
	inline static int32_t get_offset_of_assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t2728341308, ___assemblyName_0)); }
	inline String_t* get_assemblyName_0() const { return ___assemblyName_0; }
	inline String_t** get_address_of_assemblyName_0() { return &___assemblyName_0; }
	inline void set_assemblyName_0(String_t* value)
	{
		___assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_0), value);
	}

	inline static int32_t get_offset_of_all_visible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t2728341308, ___all_visible_1)); }
	inline bool get_all_visible_1() const { return ___all_visible_1; }
	inline bool* get_address_of_all_visible_1() { return &___all_visible_1; }
	inline void set_all_visible_1(bool value)
	{
		___all_visible_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSVISIBLETOATTRIBUTE_T2728341308_H
#ifndef RUNTIMECOMPATIBILITYATTRIBUTE_T938968159_H
#define RUNTIMECOMPATIBILITYATTRIBUTE_T938968159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct  RuntimeCompatibilityAttribute_t938968159  : public Attribute_t880686410
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::wrap_non_exception_throws
	bool ___wrap_non_exception_throws_0;

public:
	inline static int32_t get_offset_of_wrap_non_exception_throws_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_t938968159, ___wrap_non_exception_throws_0)); }
	inline bool get_wrap_non_exception_throws_0() const { return ___wrap_non_exception_throws_0; }
	inline bool* get_address_of_wrap_non_exception_throws_0() { return &___wrap_non_exception_throws_0; }
	inline void set_wrap_non_exception_throws_0(bool value)
	{
		___wrap_non_exception_throws_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMECOMPATIBILITYATTRIBUTE_T938968159_H
#ifndef DEBUGGERHIDDENATTRIBUTE_T109235999_H
#define DEBUGGERHIDDENATTRIBUTE_T109235999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerHiddenAttribute
struct  DebuggerHiddenAttribute_t109235999  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERHIDDENATTRIBUTE_T109235999_H
#ifndef DEFAULTMEMBERATTRIBUTE_T1484794271_H
#define DEFAULTMEMBERATTRIBUTE_T1484794271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.DefaultMemberAttribute
struct  DefaultMemberAttribute_t1484794271  : public Attribute_t880686410
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::member_name
	String_t* ___member_name_0;

public:
	inline static int32_t get_offset_of_member_name_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t1484794271, ___member_name_0)); }
	inline String_t* get_member_name_0() const { return ___member_name_0; }
	inline String_t** get_address_of_member_name_0() { return &___member_name_0; }
	inline void set_member_name_0(String_t* value)
	{
		___member_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTMEMBERATTRIBUTE_T1484794271_H
#ifndef DECIMALCONSTANTATTRIBUTE_T2780310222_H
#define DECIMALCONSTANTATTRIBUTE_T2780310222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DecimalConstantAttribute
struct  DecimalConstantAttribute_t2780310222  : public Attribute_t880686410
{
public:
	// System.Byte System.Runtime.CompilerServices.DecimalConstantAttribute::scale
	uint8_t ___scale_0;
	// System.Boolean System.Runtime.CompilerServices.DecimalConstantAttribute::sign
	bool ___sign_1;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::hi
	int32_t ___hi_2;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::mid
	int32_t ___mid_3;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::low
	int32_t ___low_4;

public:
	inline static int32_t get_offset_of_scale_0() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t2780310222, ___scale_0)); }
	inline uint8_t get_scale_0() const { return ___scale_0; }
	inline uint8_t* get_address_of_scale_0() { return &___scale_0; }
	inline void set_scale_0(uint8_t value)
	{
		___scale_0 = value;
	}

	inline static int32_t get_offset_of_sign_1() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t2780310222, ___sign_1)); }
	inline bool get_sign_1() const { return ___sign_1; }
	inline bool* get_address_of_sign_1() { return &___sign_1; }
	inline void set_sign_1(bool value)
	{
		___sign_1 = value;
	}

	inline static int32_t get_offset_of_hi_2() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t2780310222, ___hi_2)); }
	inline int32_t get_hi_2() const { return ___hi_2; }
	inline int32_t* get_address_of_hi_2() { return &___hi_2; }
	inline void set_hi_2(int32_t value)
	{
		___hi_2 = value;
	}

	inline static int32_t get_offset_of_mid_3() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t2780310222, ___mid_3)); }
	inline int32_t get_mid_3() const { return ___mid_3; }
	inline int32_t* get_address_of_mid_3() { return &___mid_3; }
	inline void set_mid_3(int32_t value)
	{
		___mid_3 = value;
	}

	inline static int32_t get_offset_of_low_4() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t2780310222, ___low_4)); }
	inline int32_t get_low_4() const { return ___low_4; }
	inline int32_t* get_address_of_low_4() { return &___low_4; }
	inline void set_low_4(int32_t value)
	{
		___low_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONSTANTATTRIBUTE_T2780310222_H
#ifndef FIELDOFFSETATTRIBUTE_T4023388316_H
#define FIELDOFFSETATTRIBUTE_T4023388316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FieldOffsetAttribute
struct  FieldOffsetAttribute_t4023388316  : public Attribute_t880686410
{
public:
	// System.Int32 System.Runtime.InteropServices.FieldOffsetAttribute::val
	int32_t ___val_0;

public:
	inline static int32_t get_offset_of_val_0() { return static_cast<int32_t>(offsetof(FieldOffsetAttribute_t4023388316, ___val_0)); }
	inline int32_t get_val_0() const { return ___val_0; }
	inline int32_t* get_address_of_val_0() { return &___val_0; }
	inline void set_val_0(int32_t value)
	{
		___val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDOFFSETATTRIBUTE_T4023388316_H
#ifndef COMVISIBLEATTRIBUTE_T4129239427_H
#define COMVISIBLEATTRIBUTE_T4129239427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComVisibleAttribute
struct  ComVisibleAttribute_t4129239427  : public Attribute_t880686410
{
public:
	// System.Boolean System.Runtime.InteropServices.ComVisibleAttribute::Visible
	bool ___Visible_0;

public:
	inline static int32_t get_offset_of_Visible_0() { return static_cast<int32_t>(offsetof(ComVisibleAttribute_t4129239427, ___Visible_0)); }
	inline bool get_Visible_0() const { return ___Visible_0; }
	inline bool* get_address_of_Visible_0() { return &___Visible_0; }
	inline void set_Visible_0(bool value)
	{
		___Visible_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMVISIBLEATTRIBUTE_T4129239427_H
#ifndef SERIALIZABLEATTRIBUTE_T3210405317_H
#define SERIALIZABLEATTRIBUTE_T3210405317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SerializableAttribute
struct  SerializableAttribute_t3210405317  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEATTRIBUTE_T3210405317_H
#ifndef MONOTODOATTRIBUTE_T1030676503_H
#define MONOTODOATTRIBUTE_T1030676503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t1030676503  : public Attribute_t880686410
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t1030676503, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T1030676503_H
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
#ifndef REGISTRYKEY_T450198251_H
#define REGISTRYKEY_T450198251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryKey
struct  RegistryKey_t450198251  : public MarshalByRefObject_t4090830563
{
public:
	// System.Object Microsoft.Win32.RegistryKey::handle
	RuntimeObject * ___handle_1;
	// System.Object Microsoft.Win32.RegistryKey::hive
	RuntimeObject * ___hive_2;
	// System.String Microsoft.Win32.RegistryKey::qname
	String_t* ___qname_3;
	// System.Boolean Microsoft.Win32.RegistryKey::isRemoteRoot
	bool ___isRemoteRoot_4;
	// System.Boolean Microsoft.Win32.RegistryKey::isWritable
	bool ___isWritable_5;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(RegistryKey_t450198251, ___handle_1)); }
	inline RuntimeObject * get_handle_1() const { return ___handle_1; }
	inline RuntimeObject ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(RuntimeObject * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier((&___handle_1), value);
	}

	inline static int32_t get_offset_of_hive_2() { return static_cast<int32_t>(offsetof(RegistryKey_t450198251, ___hive_2)); }
	inline RuntimeObject * get_hive_2() const { return ___hive_2; }
	inline RuntimeObject ** get_address_of_hive_2() { return &___hive_2; }
	inline void set_hive_2(RuntimeObject * value)
	{
		___hive_2 = value;
		Il2CppCodeGenWriteBarrier((&___hive_2), value);
	}

	inline static int32_t get_offset_of_qname_3() { return static_cast<int32_t>(offsetof(RegistryKey_t450198251, ___qname_3)); }
	inline String_t* get_qname_3() const { return ___qname_3; }
	inline String_t** get_address_of_qname_3() { return &___qname_3; }
	inline void set_qname_3(String_t* value)
	{
		___qname_3 = value;
		Il2CppCodeGenWriteBarrier((&___qname_3), value);
	}

	inline static int32_t get_offset_of_isRemoteRoot_4() { return static_cast<int32_t>(offsetof(RegistryKey_t450198251, ___isRemoteRoot_4)); }
	inline bool get_isRemoteRoot_4() const { return ___isRemoteRoot_4; }
	inline bool* get_address_of_isRemoteRoot_4() { return &___isRemoteRoot_4; }
	inline void set_isRemoteRoot_4(bool value)
	{
		___isRemoteRoot_4 = value;
	}

	inline static int32_t get_offset_of_isWritable_5() { return static_cast<int32_t>(offsetof(RegistryKey_t450198251, ___isWritable_5)); }
	inline bool get_isWritable_5() const { return ___isWritable_5; }
	inline bool* get_address_of_isWritable_5() { return &___isWritable_5; }
	inline void set_isWritable_5(bool value)
	{
		___isWritable_5 = value;
	}
};

struct RegistryKey_t450198251_StaticFields
{
public:
	// Microsoft.Win32.IRegistryApi Microsoft.Win32.RegistryKey::RegistryApi
	RuntimeObject* ___RegistryApi_6;

public:
	inline static int32_t get_offset_of_RegistryApi_6() { return static_cast<int32_t>(offsetof(RegistryKey_t450198251_StaticFields, ___RegistryApi_6)); }
	inline RuntimeObject* get_RegistryApi_6() const { return ___RegistryApi_6; }
	inline RuntimeObject** get_address_of_RegistryApi_6() { return &___RegistryApi_6; }
	inline void set_RegistryApi_6(RuntimeObject* value)
	{
		___RegistryApi_6 = value;
		Il2CppCodeGenWriteBarrier((&___RegistryApi_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYKEY_T450198251_H
#ifndef OBSOLETEATTRIBUTE_T776811671_H
#define OBSOLETEATTRIBUTE_T776811671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObsoleteAttribute
struct  ObsoleteAttribute_t776811671  : public Attribute_t880686410
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t776811671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((&____message_0), value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t776811671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSOLETEATTRIBUTE_T776811671_H
#ifndef OUTATTRIBUTE_T244334990_H
#define OUTATTRIBUTE_T244334990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OutAttribute
struct  OutAttribute_t244334990  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTATTRIBUTE_T244334990_H
#ifndef FIXEDBUFFERATTRIBUTE_T2884729879_H
#define FIXEDBUFFERATTRIBUTE_T2884729879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FixedBufferAttribute
struct  FixedBufferAttribute_t2884729879  : public Attribute_t880686410
{
public:
	// System.Type System.Runtime.CompilerServices.FixedBufferAttribute::elementType
	Type_t * ___elementType_0;
	// System.Int32 System.Runtime.CompilerServices.FixedBufferAttribute::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_elementType_0() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t2884729879, ___elementType_0)); }
	inline Type_t * get_elementType_0() const { return ___elementType_0; }
	inline Type_t ** get_address_of_elementType_0() { return &___elementType_0; }
	inline void set_elementType_0(Type_t * value)
	{
		___elementType_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_0), value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t2884729879, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDBUFFERATTRIBUTE_T2884729879_H
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
#ifndef PARAMARRAYATTRIBUTE_T1257851902_H
#define PARAMARRAYATTRIBUTE_T1257851902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamArrayAttribute
struct  ParamArrayAttribute_t1257851902  : public Attribute_t880686410
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMARRAYATTRIBUTE_T1257851902_H
#ifndef BYTE_T3648786538_H
#define BYTE_T3648786538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t3648786538 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t3648786538, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T3648786538_H
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
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef CHAR_T3112805374_H
#define CHAR_T3112805374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3112805374 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3112805374, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3112805374_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3112805374_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3112805374_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3112805374_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3112805374_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3112805374_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3112805374_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3112805374_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3112805374_H
#ifndef UINT16_T3713498275_H
#define UINT16_T3713498275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t3713498275 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t3713498275, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T3713498275_H
#ifndef DECIMAL_T1713522174_H
#define DECIMAL_T1713522174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t1713522174 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t1713522174, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t1713522174, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t1713522174, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t1713522174, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t1713522174_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t1713522174  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t1713522174  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t1713522174  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t1713522174  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t1713522174  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t1713522174_StaticFields, ___MinValue_0)); }
	inline Decimal_t1713522174  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t1713522174 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t1713522174  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t1713522174_StaticFields, ___MaxValue_1)); }
	inline Decimal_t1713522174  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t1713522174 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t1713522174  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t1713522174_StaticFields, ___MinusOne_2)); }
	inline Decimal_t1713522174  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t1713522174 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t1713522174  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t1713522174_StaticFields, ___One_3)); }
	inline Decimal_t1713522174  get_One_3() const { return ___One_3; }
	inline Decimal_t1713522174 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t1713522174  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t1713522174_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t1713522174  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t1713522174 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t1713522174  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T1713522174_H
#ifndef UINT64_T1931341177_H
#define UINT64_T1931341177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t1931341177 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t1931341177, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T1931341177_H
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
#ifndef UINT32_T2868879882_H
#define UINT32_T2868879882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2868879882 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2868879882, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2868879882_H
#ifndef INT64_T3653815622_H
#define INT64_T3653815622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3653815622 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3653815622, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3653815622_H
#ifndef CLSCOMPLIANTATTRIBUTE_T2272405249_H
#define CLSCOMPLIANTATTRIBUTE_T2272405249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CLSCompliantAttribute
struct  CLSCompliantAttribute_t2272405249  : public Attribute_t880686410
{
public:
	// System.Boolean System.CLSCompliantAttribute::is_compliant
	bool ___is_compliant_0;

public:
	inline static int32_t get_offset_of_is_compliant_0() { return static_cast<int32_t>(offsetof(CLSCompliantAttribute_t2272405249, ___is_compliant_0)); }
	inline bool get_is_compliant_0() const { return ___is_compliant_0; }
	inline bool* get_address_of_is_compliant_0() { return &___is_compliant_0; }
	inline void set_is_compliant_0(bool value)
	{
		___is_compliant_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLSCOMPLIANTATTRIBUTE_T2272405249_H
#ifndef DOUBLE_T1567154213_H
#define DOUBLE_T1567154213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t1567154213 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t1567154213, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T1567154213_H
#ifndef ATTRIBUTETARGETS_T3629545532_H
#define ATTRIBUTETARGETS_T3629545532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t3629545532 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AttributeTargets_t3629545532, ___value___1)); }
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
#endif // ATTRIBUTETARGETS_T3629545532_H
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
#ifndef REGISTRYVALUEOPTIONS_T4190658707_H
#define REGISTRYVALUEOPTIONS_T4190658707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryValueOptions
struct  RegistryValueOptions_t4190658707 
{
public:
	// System.Int32 Microsoft.Win32.RegistryValueOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistryValueOptions_t4190658707, ___value___1)); }
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
#endif // REGISTRYVALUEOPTIONS_T4190658707_H
#ifndef REGISTRYVALUEKIND_T288004018_H
#define REGISTRYVALUEKIND_T288004018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryValueKind
struct  RegistryValueKind_t288004018 
{
public:
	// System.Int32 Microsoft.Win32.RegistryValueKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistryValueKind_t288004018, ___value___1)); }
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
#endif // REGISTRYVALUEKIND_T288004018_H
#ifndef CALLINGCONVENTION_T3415073120_H
#define CALLINGCONVENTION_T3415073120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t3415073120 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t3415073120, ___value___1)); }
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
#endif // CALLINGCONVENTION_T3415073120_H
#ifndef REGISTRYHIVE_T39063795_H
#define REGISTRYHIVE_T39063795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryHive
struct  RegistryHive_t39063795 
{
public:
	// System.Int32 Microsoft.Win32.RegistryHive::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistryHive_t39063795, ___value___1)); }
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
#endif // REGISTRYHIVE_T39063795_H
#ifndef CHARSET_T3051724865_H
#define CHARSET_T3051724865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t3051724865 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t3051724865, ___value___1)); }
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
#endif // CHARSET_T3051724865_H
#ifndef UNMANAGEDTYPE_T1683741951_H
#define UNMANAGEDTYPE_T1683741951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t1683741951 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t1683741951, ___value___1)); }
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
#endif // UNMANAGEDTYPE_T1683741951_H
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
#ifndef ARGITERATOR_T1785595373_H
#define ARGITERATOR_T1785595373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgIterator
struct  ArgIterator_t1785595373 
{
public:
	// System.IntPtr System.ArgIterator::sig
	intptr_t ___sig_0;
	// System.IntPtr System.ArgIterator::args
	intptr_t ___args_1;
	// System.Int32 System.ArgIterator::next_arg
	int32_t ___next_arg_2;
	// System.Int32 System.ArgIterator::num_args
	int32_t ___num_args_3;

public:
	inline static int32_t get_offset_of_sig_0() { return static_cast<int32_t>(offsetof(ArgIterator_t1785595373, ___sig_0)); }
	inline intptr_t get_sig_0() const { return ___sig_0; }
	inline intptr_t* get_address_of_sig_0() { return &___sig_0; }
	inline void set_sig_0(intptr_t value)
	{
		___sig_0 = value;
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(ArgIterator_t1785595373, ___args_1)); }
	inline intptr_t get_args_1() const { return ___args_1; }
	inline intptr_t* get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(intptr_t value)
	{
		___args_1 = value;
	}

	inline static int32_t get_offset_of_next_arg_2() { return static_cast<int32_t>(offsetof(ArgIterator_t1785595373, ___next_arg_2)); }
	inline int32_t get_next_arg_2() const { return ___next_arg_2; }
	inline int32_t* get_address_of_next_arg_2() { return &___next_arg_2; }
	inline void set_next_arg_2(int32_t value)
	{
		___next_arg_2 = value;
	}

	inline static int32_t get_offset_of_num_args_3() { return static_cast<int32_t>(offsetof(ArgIterator_t1785595373, ___num_args_3)); }
	inline int32_t get_num_args_3() const { return ___num_args_3; }
	inline int32_t* get_address_of_num_args_3() { return &___num_args_3; }
	inline void set_num_args_3(int32_t value)
	{
		___num_args_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGITERATOR_T1785595373_H
#ifndef RUNTIMEARGUMENTHANDLE_T2191545027_H
#define RUNTIMEARGUMENTHANDLE_T2191545027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeArgumentHandle
struct  RuntimeArgumentHandle_t2191545027 
{
public:
	// System.IntPtr System.RuntimeArgumentHandle::args
	intptr_t ___args_0;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t2191545027, ___args_0)); }
	inline intptr_t get_args_0() const { return ___args_0; }
	inline intptr_t* get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(intptr_t value)
	{
		___args_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARGUMENTHANDLE_T2191545027_H
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
#ifndef RUNTIMEFIELDHANDLE_T1265684786_H
#define RUNTIMEFIELDHANDLE_T1265684786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1265684786 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1265684786, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T1265684786_H
#ifndef SAFEHANDLE_T1535875761_H
#define SAFEHANDLE_T1535875761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t1535875761  : public CriticalFinalizerObject_t109218179
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	intptr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t1535875761, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t1535875761, ___invalid_handle_value_1)); }
	inline intptr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline intptr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(intptr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t1535875761, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t1535875761, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T1535875761_H
#ifndef MONODOCUMENTATIONNOTEATTRIBUTE_T1273989260_H
#define MONODOCUMENTATIONNOTEATTRIBUTE_T1273989260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoDocumentationNoteAttribute
struct  MonoDocumentationNoteAttribute_t1273989260  : public MonoTODOAttribute_t1030676503
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONODOCUMENTATIONNOTEATTRIBUTE_T1273989260_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T2076245892_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T2076245892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t2076245892  : public SafeHandle_t1535875761
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T2076245892_H
#ifndef ATTRIBUTEUSAGEATTRIBUTE_T127263158_H
#define ATTRIBUTEUSAGEATTRIBUTE_T127263158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeUsageAttribute
struct  AttributeUsageAttribute_t127263158  : public Attribute_t880686410
{
public:
	// System.AttributeTargets System.AttributeUsageAttribute::valid_on
	int32_t ___valid_on_0;
	// System.Boolean System.AttributeUsageAttribute::allow_multiple
	bool ___allow_multiple_1;
	// System.Boolean System.AttributeUsageAttribute::inherited
	bool ___inherited_2;

public:
	inline static int32_t get_offset_of_valid_on_0() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t127263158, ___valid_on_0)); }
	inline int32_t get_valid_on_0() const { return ___valid_on_0; }
	inline int32_t* get_address_of_valid_on_0() { return &___valid_on_0; }
	inline void set_valid_on_0(int32_t value)
	{
		___valid_on_0 = value;
	}

	inline static int32_t get_offset_of_allow_multiple_1() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t127263158, ___allow_multiple_1)); }
	inline bool get_allow_multiple_1() const { return ___allow_multiple_1; }
	inline bool* get_address_of_allow_multiple_1() { return &___allow_multiple_1; }
	inline void set_allow_multiple_1(bool value)
	{
		___allow_multiple_1 = value;
	}

	inline static int32_t get_offset_of_inherited_2() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t127263158, ___inherited_2)); }
	inline bool get_inherited_2() const { return ___inherited_2; }
	inline bool* get_address_of_inherited_2() { return &___inherited_2; }
	inline void set_inherited_2(bool value)
	{
		___inherited_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEUSAGEATTRIBUTE_T127263158_H
#ifndef TYPEDREFERENCE_T904987300_H
#define TYPEDREFERENCE_T904987300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypedReference
struct  TypedReference_t904987300 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t1576606783  ___type_0;
	// System.IntPtr System.TypedReference::value
	intptr_t ___value_1;
	// System.IntPtr System.TypedReference::klass
	intptr_t ___klass_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t904987300, ___type_0)); }
	inline RuntimeTypeHandle_t1576606783  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t1576606783 * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t1576606783  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(TypedReference_t904987300, ___value_1)); }
	inline intptr_t get_value_1() const { return ___value_1; }
	inline intptr_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(intptr_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_klass_2() { return static_cast<int32_t>(offsetof(TypedReference_t904987300, ___klass_2)); }
	inline intptr_t get_klass_2() const { return ___klass_2; }
	inline intptr_t* get_address_of_klass_2() { return &___klass_2; }
	inline void set_klass_2(intptr_t value)
	{
		___klass_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDREFERENCE_T904987300_H
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
#ifndef MARSHALASATTRIBUTE_T121901228_H
#define MARSHALASATTRIBUTE_T121901228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalAsAttribute
struct  MarshalAsAttribute_t121901228  : public Attribute_t880686410
{
public:
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::utype
	int32_t ___utype_0;
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::ArraySubType
	int32_t ___ArraySubType_1;
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalCookie
	String_t* ___MarshalCookie_2;
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalType
	String_t* ___MarshalType_3;
	// System.Type System.Runtime.InteropServices.MarshalAsAttribute::MarshalTypeRef
	Type_t * ___MarshalTypeRef_4;
	// System.Int32 System.Runtime.InteropServices.MarshalAsAttribute::SizeConst
	int32_t ___SizeConst_5;
	// System.Int16 System.Runtime.InteropServices.MarshalAsAttribute::SizeParamIndex
	int16_t ___SizeParamIndex_6;

public:
	inline static int32_t get_offset_of_utype_0() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t121901228, ___utype_0)); }
	inline int32_t get_utype_0() const { return ___utype_0; }
	inline int32_t* get_address_of_utype_0() { return &___utype_0; }
	inline void set_utype_0(int32_t value)
	{
		___utype_0 = value;
	}

	inline static int32_t get_offset_of_ArraySubType_1() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t121901228, ___ArraySubType_1)); }
	inline int32_t get_ArraySubType_1() const { return ___ArraySubType_1; }
	inline int32_t* get_address_of_ArraySubType_1() { return &___ArraySubType_1; }
	inline void set_ArraySubType_1(int32_t value)
	{
		___ArraySubType_1 = value;
	}

	inline static int32_t get_offset_of_MarshalCookie_2() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t121901228, ___MarshalCookie_2)); }
	inline String_t* get_MarshalCookie_2() const { return ___MarshalCookie_2; }
	inline String_t** get_address_of_MarshalCookie_2() { return &___MarshalCookie_2; }
	inline void set_MarshalCookie_2(String_t* value)
	{
		___MarshalCookie_2 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalCookie_2), value);
	}

	inline static int32_t get_offset_of_MarshalType_3() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t121901228, ___MarshalType_3)); }
	inline String_t* get_MarshalType_3() const { return ___MarshalType_3; }
	inline String_t** get_address_of_MarshalType_3() { return &___MarshalType_3; }
	inline void set_MarshalType_3(String_t* value)
	{
		___MarshalType_3 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalType_3), value);
	}

	inline static int32_t get_offset_of_MarshalTypeRef_4() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t121901228, ___MarshalTypeRef_4)); }
	inline Type_t * get_MarshalTypeRef_4() const { return ___MarshalTypeRef_4; }
	inline Type_t ** get_address_of_MarshalTypeRef_4() { return &___MarshalTypeRef_4; }
	inline void set_MarshalTypeRef_4(Type_t * value)
	{
		___MarshalTypeRef_4 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalTypeRef_4), value);
	}

	inline static int32_t get_offset_of_SizeConst_5() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t121901228, ___SizeConst_5)); }
	inline int32_t get_SizeConst_5() const { return ___SizeConst_5; }
	inline int32_t* get_address_of_SizeConst_5() { return &___SizeConst_5; }
	inline void set_SizeConst_5(int32_t value)
	{
		___SizeConst_5 = value;
	}

	inline static int32_t get_offset_of_SizeParamIndex_6() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t121901228, ___SizeParamIndex_6)); }
	inline int16_t get_SizeParamIndex_6() const { return ___SizeParamIndex_6; }
	inline int16_t* get_address_of_SizeParamIndex_6() { return &___SizeParamIndex_6; }
	inline void set_SizeParamIndex_6(int16_t value)
	{
		___SizeParamIndex_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALASATTRIBUTE_T121901228_H
#ifndef DLLIMPORTATTRIBUTE_T1584032243_H
#define DLLIMPORTATTRIBUTE_T1584032243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DllImportAttribute
struct  DllImportAttribute_t1584032243  : public Attribute_t880686410
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.DllImportAttribute::CallingConvention
	int32_t ___CallingConvention_0;
	// System.Runtime.InteropServices.CharSet System.Runtime.InteropServices.DllImportAttribute::CharSet
	int32_t ___CharSet_1;
	// System.String System.Runtime.InteropServices.DllImportAttribute::Dll
	String_t* ___Dll_2;
	// System.String System.Runtime.InteropServices.DllImportAttribute::EntryPoint
	String_t* ___EntryPoint_3;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ExactSpelling
	bool ___ExactSpelling_4;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::PreserveSig
	bool ___PreserveSig_5;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::SetLastError
	bool ___SetLastError_6;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::BestFitMapping
	bool ___BestFitMapping_7;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_8;

public:
	inline static int32_t get_offset_of_CallingConvention_0() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1584032243, ___CallingConvention_0)); }
	inline int32_t get_CallingConvention_0() const { return ___CallingConvention_0; }
	inline int32_t* get_address_of_CallingConvention_0() { return &___CallingConvention_0; }
	inline void set_CallingConvention_0(int32_t value)
	{
		___CallingConvention_0 = value;
	}

	inline static int32_t get_offset_of_CharSet_1() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1584032243, ___CharSet_1)); }
	inline int32_t get_CharSet_1() const { return ___CharSet_1; }
	inline int32_t* get_address_of_CharSet_1() { return &___CharSet_1; }
	inline void set_CharSet_1(int32_t value)
	{
		___CharSet_1 = value;
	}

	inline static int32_t get_offset_of_Dll_2() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1584032243, ___Dll_2)); }
	inline String_t* get_Dll_2() const { return ___Dll_2; }
	inline String_t** get_address_of_Dll_2() { return &___Dll_2; }
	inline void set_Dll_2(String_t* value)
	{
		___Dll_2 = value;
		Il2CppCodeGenWriteBarrier((&___Dll_2), value);
	}

	inline static int32_t get_offset_of_EntryPoint_3() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1584032243, ___EntryPoint_3)); }
	inline String_t* get_EntryPoint_3() const { return ___EntryPoint_3; }
	inline String_t** get_address_of_EntryPoint_3() { return &___EntryPoint_3; }
	inline void set_EntryPoint_3(String_t* value)
	{
		___EntryPoint_3 = value;
		Il2CppCodeGenWriteBarrier((&___EntryPoint_3), value);
	}

	inline static int32_t get_offset_of_ExactSpelling_4() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1584032243, ___ExactSpelling_4)); }
	inline bool get_ExactSpelling_4() const { return ___ExactSpelling_4; }
	inline bool* get_address_of_ExactSpelling_4() { return &___ExactSpelling_4; }
	inline void set_ExactSpelling_4(bool value)
	{
		___ExactSpelling_4 = value;
	}

	inline static int32_t get_offset_of_PreserveSig_5() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1584032243, ___PreserveSig_5)); }
	inline bool get_PreserveSig_5() const { return ___PreserveSig_5; }
	inline bool* get_address_of_PreserveSig_5() { return &___PreserveSig_5; }
	inline void set_PreserveSig_5(bool value)
	{
		___PreserveSig_5 = value;
	}

	inline static int32_t get_offset_of_SetLastError_6() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1584032243, ___SetLastError_6)); }
	inline bool get_SetLastError_6() const { return ___SetLastError_6; }
	inline bool* get_address_of_SetLastError_6() { return &___SetLastError_6; }
	inline void set_SetLastError_6(bool value)
	{
		___SetLastError_6 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_7() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1584032243, ___BestFitMapping_7)); }
	inline bool get_BestFitMapping_7() const { return ___BestFitMapping_7; }
	inline bool* get_address_of_BestFitMapping_7() { return &___BestFitMapping_7; }
	inline void set_BestFitMapping_7(bool value)
	{
		___BestFitMapping_7 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_8() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1584032243, ___ThrowOnUnmappableChar_8)); }
	inline bool get_ThrowOnUnmappableChar_8() const { return ___ThrowOnUnmappableChar_8; }
	inline bool* get_address_of_ThrowOnUnmappableChar_8() { return &___ThrowOnUnmappableChar_8; }
	inline void set_ThrowOnUnmappableChar_8(bool value)
	{
		___ThrowOnUnmappableChar_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLIMPORTATTRIBUTE_T1584032243_H
#ifndef SAFEWAITHANDLE_T703036236_H
#define SAFEWAITHANDLE_T703036236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct  SafeWaitHandle_t703036236  : public SafeHandleZeroOrMinusOneIsInvalid_t2076245892
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEWAITHANDLE_T703036236_H
#ifndef ASYNCCALLBACK_T3260757161_H
#define ASYNCCALLBACK_T3260757161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3260757161  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3260757161_H
#ifndef SWAPPER_T3196327152_H
#define SWAPPER_T3196327152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/Swapper
struct  Swapper_t3196327152  : public MulticastDelegate_t1923364326
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWAPPER_T3196327152_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize0 = { sizeof (U3CModuleU3E_t2674643418), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1 = { sizeof (RuntimeObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2 = { sizeof (ValueType_t11864541), sizeof(ValueType_t11864541_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3 = { sizeof (Attribute_t880686410), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5 = { sizeof (Int32_t663185285)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5[3] = 
{
	0,
	0,
	Int32_t663185285::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize9 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize10 = { sizeof (SerializableAttribute_t3210405317), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize11 = { sizeof (AttributeUsageAttribute_t127263158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable11[3] = 
{
	AttributeUsageAttribute_t127263158::get_offset_of_valid_on_0(),
	AttributeUsageAttribute_t127263158::get_offset_of_allow_multiple_1(),
	AttributeUsageAttribute_t127263158::get_offset_of_inherited_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize12 = { sizeof (ComVisibleAttribute_t4129239427), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable12[1] = 
{
	ComVisibleAttribute_t4129239427::get_offset_of_Visible_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize13 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize14 = { sizeof (Int64_t3653815622)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable14[1] = 
{
	Int64_t3653815622::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize15 = { sizeof (UInt32_t2868879882)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable15[3] = 
{
	0,
	0,
	UInt32_t2868879882::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize16 = { sizeof (CLSCompliantAttribute_t2272405249), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable16[1] = 
{
	CLSCompliantAttribute_t2272405249::get_offset_of_is_compliant_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize17 = { sizeof (UInt64_t1931341177)+ sizeof (RuntimeObject), sizeof(uint64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable17[1] = 
{
	UInt64_t1931341177::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize18 = { sizeof (Byte_t3648786538)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable18[3] = 
{
	0,
	0,
	Byte_t3648786538::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize19 = { sizeof (SByte_t3863729701)+ sizeof (RuntimeObject), sizeof(int8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable19[1] = 
{
	SByte_t3863729701::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize20 = { sizeof (Int16_t1886248118)+ sizeof (RuntimeObject), sizeof(int16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable20[1] = 
{
	Int16_t1886248118::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize21 = { sizeof (UInt16_t3713498275)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable21[3] = 
{
	0,
	0,
	UInt16_t3713498275::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize22 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize23 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize24 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize25 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize26 = { sizeof (Char_t3112805374)+ sizeof (RuntimeObject), 1, sizeof(Char_t3112805374_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable26[10] = 
{
	0,
	0,
	Char_t3112805374::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Char_t3112805374_StaticFields::get_offset_of_category_data_3(),
	Char_t3112805374_StaticFields::get_offset_of_numeric_data_4(),
	Char_t3112805374_StaticFields::get_offset_of_numeric_data_values_5(),
	Char_t3112805374_StaticFields::get_offset_of_to_lower_data_low_6(),
	Char_t3112805374_StaticFields::get_offset_of_to_lower_data_high_7(),
	Char_t3112805374_StaticFields::get_offset_of_to_upper_data_low_8(),
	Char_t3112805374_StaticFields::get_offset_of_to_upper_data_high_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize27 = { sizeof (String_t), sizeof(char*), sizeof(String_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable27[4] = 
{
	String_t::get_offset_of_length_0(),
	String_t::get_offset_of_start_char_1(),
	String_t_StaticFields::get_offset_of_Empty_2(),
	String_t_StaticFields::get_offset_of_WhiteChars_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize28 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize29 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize30 = { sizeof (Single_t1023366992)+ sizeof (RuntimeObject), sizeof(float), 0, 0 };
extern const int32_t g_FieldOffsetTable30[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Single_t1023366992::get_offset_of_m_value_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize31 = { sizeof (Double_t1567154213)+ sizeof (RuntimeObject), sizeof(double), 0, 0 };
extern const int32_t g_FieldOffsetTable31[14] = 
{
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
	Double_t1567154213::get_offset_of_m_value_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize32 = { sizeof (Decimal_t1713522174)+ sizeof (RuntimeObject), sizeof(Decimal_t1713522174 ), sizeof(Decimal_t1713522174_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable32[9] = 
{
	Decimal_t1713522174_StaticFields::get_offset_of_MinValue_0(),
	Decimal_t1713522174_StaticFields::get_offset_of_MaxValue_1(),
	Decimal_t1713522174_StaticFields::get_offset_of_MinusOne_2(),
	Decimal_t1713522174_StaticFields::get_offset_of_One_3(),
	Decimal_t1713522174_StaticFields::get_offset_of_MaxValueDiv10_4(),
	Decimal_t1713522174::get_offset_of_flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t1713522174::get_offset_of_hi_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t1713522174::get_offset_of_lo_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t1713522174::get_offset_of_mid_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize33 = { sizeof (Boolean_t1107189290)+ sizeof (RuntimeObject), 4, sizeof(Boolean_t1107189290_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable33[3] = 
{
	Boolean_t1107189290_StaticFields::get_offset_of_FalseString_0(),
	Boolean_t1107189290_StaticFields::get_offset_of_TrueString_1(),
	Boolean_t1107189290::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize34 = { sizeof (IntPtr_t)+ sizeof (RuntimeObject), sizeof(intptr_t), sizeof(IntPtr_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable34[2] = 
{
	IntPtr_t::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntPtr_t_StaticFields::get_offset_of_Zero_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize35 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize36 = { sizeof (UIntPtr_t)+ sizeof (RuntimeObject), sizeof(uintptr_t), sizeof(UIntPtr_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable36[2] = 
{
	UIntPtr_t_StaticFields::get_offset_of_Zero_0(),
	UIntPtr_t::get_offset_of__pointer_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize37 = { sizeof (MulticastDelegate_t1923364326), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable37[2] = 
{
	MulticastDelegate_t1923364326::get_offset_of_prev_9(),
	MulticastDelegate_t1923364326::get_offset_of_kpm_next_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize38 = { sizeof (Delegate_t824990709), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable38[9] = 
{
	Delegate_t824990709::get_offset_of_method_ptr_0(),
	Delegate_t824990709::get_offset_of_invoke_impl_1(),
	Delegate_t824990709::get_offset_of_m_target_2(),
	Delegate_t824990709::get_offset_of_method_3(),
	Delegate_t824990709::get_offset_of_delegate_trampoline_4(),
	Delegate_t824990709::get_offset_of_method_code_5(),
	Delegate_t824990709::get_offset_of_method_info_6(),
	Delegate_t824990709::get_offset_of_original_method_info_7(),
	Delegate_t824990709::get_offset_of_data_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize39 = { sizeof (Enum_t394560640), sizeof(Enum_t394560640_marshaled_pinvoke), sizeof(Enum_t394560640_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable39[1] = 
{
	Enum_t394560640_StaticFields::get_offset_of_split_char_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize40 = { sizeof (RuntimeArray), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize41 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable41[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize42 = { sizeof (SimpleEnumerator_t45150255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable42[3] = 
{
	SimpleEnumerator_t45150255::get_offset_of_enumeratee_0(),
	SimpleEnumerator_t45150255::get_offset_of_currentpos_1(),
	SimpleEnumerator_t45150255::get_offset_of_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize43 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable43[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize44 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable44[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize45 = { sizeof (Swapper_t3196327152), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize46 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize47 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize48 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize49 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize50 = { sizeof (Void_t1003147579)+ sizeof (RuntimeObject), 1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize51 = { sizeof (Type_t), -1, sizeof(Type_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable51[8] = 
{
	0,
	Type_t::get_offset_of__impl_1(),
	Type_t_StaticFields::get_offset_of_Delimiter_2(),
	Type_t_StaticFields::get_offset_of_EmptyTypes_3(),
	Type_t_StaticFields::get_offset_of_FilterAttribute_4(),
	Type_t_StaticFields::get_offset_of_FilterName_5(),
	Type_t_StaticFields::get_offset_of_FilterNameIgnoreCase_6(),
	Type_t_StaticFields::get_offset_of_Missing_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize52 = { sizeof (MemberInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize53 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize54 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize55 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize56 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize57 = { sizeof (Exception_t4117462927), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable57[11] = 
{
	Exception_t4117462927::get_offset_of_trace_ips_0(),
	Exception_t4117462927::get_offset_of_inner_exception_1(),
	Exception_t4117462927::get_offset_of_message_2(),
	Exception_t4117462927::get_offset_of_help_link_3(),
	Exception_t4117462927::get_offset_of_class_name_4(),
	Exception_t4117462927::get_offset_of_stack_trace_5(),
	Exception_t4117462927::get_offset_of__remoteStackTraceString_6(),
	Exception_t4117462927::get_offset_of_remote_stack_index_7(),
	Exception_t4117462927::get_offset_of_hresult_8(),
	Exception_t4117462927::get_offset_of_source_9(),
	Exception_t4117462927::get_offset_of__data_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize58 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize59 = { sizeof (RuntimeFieldHandle_t1265684786)+ sizeof (RuntimeObject), sizeof(RuntimeFieldHandle_t1265684786 ), 0, 0 };
extern const int32_t g_FieldOffsetTable59[1] = 
{
	RuntimeFieldHandle_t1265684786::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize60 = { sizeof (RuntimeTypeHandle_t1576606783)+ sizeof (RuntimeObject), sizeof(RuntimeTypeHandle_t1576606783 ), 0, 0 };
extern const int32_t g_FieldOffsetTable60[1] = 
{
	RuntimeTypeHandle_t1576606783::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize61 = { sizeof (ParamArrayAttribute_t1257851902), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize62 = { sizeof (OutAttribute_t244334990), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize63 = { sizeof (ObsoleteAttribute_t776811671), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable63[2] = 
{
	ObsoleteAttribute_t776811671::get_offset_of__message_0(),
	ObsoleteAttribute_t776811671::get_offset_of__error_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize64 = { sizeof (DllImportAttribute_t1584032243), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable64[9] = 
{
	DllImportAttribute_t1584032243::get_offset_of_CallingConvention_0(),
	DllImportAttribute_t1584032243::get_offset_of_CharSet_1(),
	DllImportAttribute_t1584032243::get_offset_of_Dll_2(),
	DllImportAttribute_t1584032243::get_offset_of_EntryPoint_3(),
	DllImportAttribute_t1584032243::get_offset_of_ExactSpelling_4(),
	DllImportAttribute_t1584032243::get_offset_of_PreserveSig_5(),
	DllImportAttribute_t1584032243::get_offset_of_SetLastError_6(),
	DllImportAttribute_t1584032243::get_offset_of_BestFitMapping_7(),
	DllImportAttribute_t1584032243::get_offset_of_ThrowOnUnmappableChar_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize65 = { sizeof (MarshalAsAttribute_t121901228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable65[7] = 
{
	MarshalAsAttribute_t121901228::get_offset_of_utype_0(),
	MarshalAsAttribute_t121901228::get_offset_of_ArraySubType_1(),
	MarshalAsAttribute_t121901228::get_offset_of_MarshalCookie_2(),
	MarshalAsAttribute_t121901228::get_offset_of_MarshalType_3(),
	MarshalAsAttribute_t121901228::get_offset_of_MarshalTypeRef_4(),
	MarshalAsAttribute_t121901228::get_offset_of_SizeConst_5(),
	MarshalAsAttribute_t121901228::get_offset_of_SizeParamIndex_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize66 = { sizeof (InAttribute_t2562046896), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize67 = { sizeof (SecurityAttribute_t599326385), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize68 = { sizeof (GuidAttribute_t2403385615), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable68[1] = 
{
	GuidAttribute_t2403385615::get_offset_of_guidValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize69 = { sizeof (ComImportAttribute_t1433625280), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize70 = { sizeof (OptionalAttribute_t3104972909), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize71 = { sizeof (FixedBufferAttribute_t2884729879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable71[2] = 
{
	FixedBufferAttribute_t2884729879::get_offset_of_elementType_0(),
	FixedBufferAttribute_t2884729879::get_offset_of_length_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize72 = { sizeof (CompilerGeneratedAttribute_t2533251879), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize73 = { sizeof (InternalsVisibleToAttribute_t2728341308), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable73[2] = 
{
	InternalsVisibleToAttribute_t2728341308::get_offset_of_assemblyName_0(),
	InternalsVisibleToAttribute_t2728341308::get_offset_of_all_visible_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize74 = { sizeof (RuntimeCompatibilityAttribute_t938968159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable74[1] = 
{
	RuntimeCompatibilityAttribute_t938968159::get_offset_of_wrap_non_exception_throws_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize75 = { sizeof (DebuggerHiddenAttribute_t109235999), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize76 = { sizeof (DefaultMemberAttribute_t1484794271), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable76[1] = 
{
	DefaultMemberAttribute_t1484794271::get_offset_of_member_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize77 = { sizeof (DecimalConstantAttribute_t2780310222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable77[5] = 
{
	DecimalConstantAttribute_t2780310222::get_offset_of_scale_0(),
	DecimalConstantAttribute_t2780310222::get_offset_of_sign_1(),
	DecimalConstantAttribute_t2780310222::get_offset_of_hi_2(),
	DecimalConstantAttribute_t2780310222::get_offset_of_mid_3(),
	DecimalConstantAttribute_t2780310222::get_offset_of_low_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize78 = { sizeof (FieldOffsetAttribute_t4023388316), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable78[1] = 
{
	FieldOffsetAttribute_t4023388316::get_offset_of_val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize79 = { sizeof (RuntimeArgumentHandle_t2191545027)+ sizeof (RuntimeObject), sizeof(RuntimeArgumentHandle_t2191545027 ), 0, 0 };
extern const int32_t g_FieldOffsetTable79[1] = 
{
	RuntimeArgumentHandle_t2191545027::get_offset_of_args_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize80 = { sizeof (AsyncCallback_t3260757161), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize81 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize82 = { sizeof (TypedReference_t904987300)+ sizeof (RuntimeObject), sizeof(TypedReference_t904987300 ), 0, 0 };
extern const int32_t g_FieldOffsetTable82[3] = 
{
	TypedReference_t904987300::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t904987300::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t904987300::get_offset_of_klass_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize83 = { sizeof (ArgIterator_t1785595373)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable83[4] = 
{
	ArgIterator_t1785595373::get_offset_of_sig_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArgIterator_t1785595373::get_offset_of_args_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArgIterator_t1785595373::get_offset_of_next_arg_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArgIterator_t1785595373::get_offset_of_num_args_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize84 = { sizeof (MarshalByRefObject_t4090830563), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable84[1] = 
{
	MarshalByRefObject_t4090830563::get_offset_of__identity_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize85 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable85[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize86 = { sizeof (RuntimeHelpers_t3144864525), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize87 = { sizeof (Locale_t952656402), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize88 = { sizeof (MonoTODOAttribute_t1030676503), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable88[1] = 
{
	MonoTODOAttribute_t1030676503::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize89 = { sizeof (MonoDocumentationNoteAttribute_t1273989260), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize90 = { sizeof (SafeHandleZeroOrMinusOneIsInvalid_t2076245892), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize91 = { sizeof (SafeWaitHandle_t703036236), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize92 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize93 = { sizeof (Registry_t93167849), -1, sizeof(Registry_t93167849_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable93[7] = 
{
	Registry_t93167849_StaticFields::get_offset_of_ClassesRoot_0(),
	Registry_t93167849_StaticFields::get_offset_of_CurrentConfig_1(),
	Registry_t93167849_StaticFields::get_offset_of_CurrentUser_2(),
	Registry_t93167849_StaticFields::get_offset_of_DynData_3(),
	Registry_t93167849_StaticFields::get_offset_of_LocalMachine_4(),
	Registry_t93167849_StaticFields::get_offset_of_PerformanceData_5(),
	Registry_t93167849_StaticFields::get_offset_of_Users_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize94 = { sizeof (RegistryHive_t39063795)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable94[8] = 
{
	RegistryHive_t39063795::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize95 = { sizeof (RegistryKey_t450198251), -1, sizeof(RegistryKey_t450198251_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable95[6] = 
{
	RegistryKey_t450198251::get_offset_of_handle_1(),
	RegistryKey_t450198251::get_offset_of_hive_2(),
	RegistryKey_t450198251::get_offset_of_qname_3(),
	RegistryKey_t450198251::get_offset_of_isRemoteRoot_4(),
	RegistryKey_t450198251::get_offset_of_isWritable_5(),
	RegistryKey_t450198251_StaticFields::get_offset_of_RegistryApi_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize96 = { sizeof (RegistryValueKind_t288004018)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable96[8] = 
{
	RegistryValueKind_t288004018::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize97 = { sizeof (RegistryValueOptions_t4190658707)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable97[3] = 
{
	RegistryValueOptions_t4190658707::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize98 = { sizeof (ExpandString_t777443195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable98[1] = 
{
	ExpandString_t777443195::get_offset_of_value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize99 = { sizeof (KeyHandler_t2500991909), -1, sizeof(KeyHandler_t2500991909_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable99[7] = 
{
	KeyHandler_t2500991909_StaticFields::get_offset_of_key_to_handler_0(),
	KeyHandler_t2500991909_StaticFields::get_offset_of_dir_to_handler_1(),
	KeyHandler_t2500991909::get_offset_of_Dir_2(),
	KeyHandler_t2500991909::get_offset_of_values_3(),
	KeyHandler_t2500991909::get_offset_of_file_4(),
	KeyHandler_t2500991909::get_offset_of_dirty_5(),
	KeyHandler_t2500991909_StaticFields::get_offset_of_U3CU3Ef__switchU24map1_6(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
