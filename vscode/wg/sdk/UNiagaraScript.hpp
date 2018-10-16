#pragma once
#include "FNiagaraParameters.hpp"
#include "FNiagaraScriptDataUsageInfo.hpp"
#include "ENiagaraScriptUsage.hpp"
#include "ENiagaraNumericOutputTypeSelectionMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraScript // Size: 0xF0
	: public UObject // Size: 0x30
{
private:
	typedef UNiagaraScript t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(24); // id32("Class Niagara.NiagaraScript")
		return ptr;
	}
	TArray<uint8_t> ByteCode; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Niagara.NiagaraScript.ByteCode */
	FNiagaraParameters Parameters; /* Ofs: 0x40 Size: 0x10 - StructProperty Niagara.NiagaraScript.Parameters */
	FNiagaraParameters InternalParameters; /* Ofs: 0x50 Size: 0x10 - StructProperty Niagara.NiagaraScript.InternalParameters */
	TArray<struct FNiagaraVariable> Attributes; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Niagara.NiagaraScript.Attributes */
	TArray<struct FNiagaraDataSetProperties> EventReceivers; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Niagara.NiagaraScript.EventReceivers */
	TArray<struct FNiagaraDataSetProperties> EventGenerators; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Niagara.NiagaraScript.EventGenerators */
	FNiagaraScriptDataUsageInfo DataUsage; /* Ofs: 0x90 Size: 0x1 - StructProperty Niagara.NiagaraScript.DataUsage */
	TEnumAsByte<enum ENiagaraScriptUsage> Usage; /* Ofs: 0x91 Size: 0x1 - EnumProperty Niagara.NiagaraScript.Usage */
	uint8_t UnknownData92[0x6];
	TArray<struct FNiagaraScriptDataInterfaceInfo> DataInterfaceInfo; /* Ofs: 0x98 Size: 0x10 - ArrayProperty Niagara.NiagaraScript.DataInterfaceInfo */
	TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; /* Ofs: 0xA8 Size: 0x10 - ArrayProperty Niagara.NiagaraScript.CalledVMExternalFunctions */
	TEnumAsByte<enum ENiagaraNumericOutputTypeSelectionMode> NumericOutputTypeSelectionMode; /* Ofs: 0xB8 Size: 0x1 - EnumProperty Niagara.NiagaraScript.NumericOutputTypeSelectionMode */
	uint8_t UnknownDataB9[0x27];
	TArray<struct FNiagaraStatScope> StatScopes; /* Ofs: 0xE0 Size: 0x10 - ArrayProperty Niagara.NiagaraScript.StatScopes */


	inline bool SetByteCode(t_structHelper inst, TArray<uint8_t> value) { inst.WriteOffset(0x30, value); }
	inline bool SetParameters(t_structHelper inst, FNiagaraParameters value) { inst.WriteOffset(0x40, value); }
	inline bool SetInternalParameters(t_structHelper inst, FNiagaraParameters value) { inst.WriteOffset(0x50, value); }
	inline bool SetAttributes(t_structHelper inst, TArray<struct FNiagaraVariable> value) { inst.WriteOffset(0x60, value); }
	inline bool SetEventReceivers(t_structHelper inst, TArray<struct FNiagaraDataSetProperties> value) { inst.WriteOffset(0x70, value); }
	inline bool SetEventGenerators(t_structHelper inst, TArray<struct FNiagaraDataSetProperties> value) { inst.WriteOffset(0x80, value); }
	inline bool SetDataUsage(t_structHelper inst, FNiagaraScriptDataUsageInfo value) { inst.WriteOffset(0x90, value); }
	inline bool SetUsage(t_structHelper inst, TEnumAsByte<enum ENiagaraScriptUsage> value) { inst.WriteOffset(0x91, value); }
	inline bool SetDataInterfaceInfo(t_structHelper inst, TArray<struct FNiagaraScriptDataInterfaceInfo> value) { inst.WriteOffset(0x98, value); }
	inline bool SetCalledVMExternalFunctions(t_structHelper inst, TArray<struct FVMExternalFunctionBindingInfo> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetNumericOutputTypeSelectionMode(t_structHelper inst, TEnumAsByte<enum ENiagaraNumericOutputTypeSelectionMode> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetStatScopes(t_structHelper inst, TArray<struct FNiagaraStatScope> value) { inst.WriteOffset(0xE0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraScript = sizeof(UNiagaraScript); // 240
    static_assert(sizeof(UNiagaraScript) == 0xF0, "Size of UNiagaraScript is not correct.");
	auto constexpr UNiagaraScript_ByteCode_Offset = offsetof(UNiagaraScript, ByteCode);
	static_assert(UNiagaraScript_ByteCode_Offset == 0x30, "UNiagaraScript::ByteCode offset is not 30");
	auto constexpr UNiagaraScript_Parameters_Offset = offsetof(UNiagaraScript, Parameters);
	static_assert(UNiagaraScript_Parameters_Offset == 0x40, "UNiagaraScript::Parameters offset is not 40");
	auto constexpr UNiagaraScript_InternalParameters_Offset = offsetof(UNiagaraScript, InternalParameters);
	static_assert(UNiagaraScript_InternalParameters_Offset == 0x50, "UNiagaraScript::InternalParameters offset is not 50");
	auto constexpr UNiagaraScript_Attributes_Offset = offsetof(UNiagaraScript, Attributes);
	static_assert(UNiagaraScript_Attributes_Offset == 0x60, "UNiagaraScript::Attributes offset is not 60");
	auto constexpr UNiagaraScript_EventReceivers_Offset = offsetof(UNiagaraScript, EventReceivers);
	static_assert(UNiagaraScript_EventReceivers_Offset == 0x70, "UNiagaraScript::EventReceivers offset is not 70");
	auto constexpr UNiagaraScript_EventGenerators_Offset = offsetof(UNiagaraScript, EventGenerators);
	static_assert(UNiagaraScript_EventGenerators_Offset == 0x80, "UNiagaraScript::EventGenerators offset is not 80");
	auto constexpr UNiagaraScript_DataUsage_Offset = offsetof(UNiagaraScript, DataUsage);
	static_assert(UNiagaraScript_DataUsage_Offset == 0x90, "UNiagaraScript::DataUsage offset is not 90");
	auto constexpr UNiagaraScript_Usage_Offset = offsetof(UNiagaraScript, Usage);
	static_assert(UNiagaraScript_Usage_Offset == 0x91, "UNiagaraScript::Usage offset is not 91");
	auto constexpr UNiagaraScript_DataInterfaceInfo_Offset = offsetof(UNiagaraScript, DataInterfaceInfo);
	static_assert(UNiagaraScript_DataInterfaceInfo_Offset == 0x98, "UNiagaraScript::DataInterfaceInfo offset is not 98");
	auto constexpr UNiagaraScript_CalledVMExternalFunctions_Offset = offsetof(UNiagaraScript, CalledVMExternalFunctions);
	static_assert(UNiagaraScript_CalledVMExternalFunctions_Offset == 0xa8, "UNiagaraScript::CalledVMExternalFunctions offset is not a8");
	auto constexpr UNiagaraScript_NumericOutputTypeSelectionMode_Offset = offsetof(UNiagaraScript, NumericOutputTypeSelectionMode);
	static_assert(UNiagaraScript_NumericOutputTypeSelectionMode_Offset == 0xb8, "UNiagaraScript::NumericOutputTypeSelectionMode offset is not b8");
	auto constexpr UNiagaraScript_StatScopes_Offset = offsetof(UNiagaraScript, StatScopes);
	static_assert(UNiagaraScript_StatScopes_Offset == 0xe0, "UNiagaraScript::StatScopes offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
