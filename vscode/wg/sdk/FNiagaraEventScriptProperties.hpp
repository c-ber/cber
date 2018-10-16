#pragma once
#include "FNiagaraEmitterScriptProperties.hpp"
#include "EScriptExecutionMode.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraEventScriptProperties // Size: 0x50
 : public FNiagaraEmitterScriptProperties // Size: 0x28
{
public:
    TEnumAsByte<enum EScriptExecutionMode> ExecutionMode; /* Ofs: 0x28 Size: 0x1 EnumProperty Niagara.NiagaraEventScriptProperties.ExecutionMode */
    uint8_t UnknownData29[0x3];
    uint32_t SpawnNumber; /* Ofs: 0x2C Size: 0x4 UInt32Property Niagara.NiagaraEventScriptProperties.SpawnNumber */
    uint32_t MaxEventsPerFrame; /* Ofs: 0x30 Size: 0x4 UInt32Property Niagara.NiagaraEventScriptProperties.MaxEventsPerFrame */
    FGuid SourceEmitterID; /* Ofs: 0x34 Size: 0x10 StructProperty Niagara.NiagaraEventScriptProperties.SourceEmitterID */
    uint8_t UnknownData44[0x4];
    FName SourceEventName; /* Ofs: 0x48 Size: 0x8 NameProperty Niagara.NiagaraEventScriptProperties.SourceEventName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraEventScriptProperties = sizeof(FNiagaraEventScriptProperties); // 80
    static_assert(sizeof(FNiagaraEventScriptProperties) == 0x50, "Size of FNiagaraEventScriptProperties is not correct.");
	auto constexpr FNiagaraEventScriptProperties_ExecutionMode_Offset = offsetof(FNiagaraEventScriptProperties, ExecutionMode);
	static_assert(FNiagaraEventScriptProperties_ExecutionMode_Offset == 0x28, "FNiagaraEventScriptProperties::ExecutionMode offset is not 28");
	auto constexpr FNiagaraEventScriptProperties_SpawnNumber_Offset = offsetof(FNiagaraEventScriptProperties, SpawnNumber);
	static_assert(FNiagaraEventScriptProperties_SpawnNumber_Offset == 0x2c, "FNiagaraEventScriptProperties::SpawnNumber offset is not 2c");
	auto constexpr FNiagaraEventScriptProperties_MaxEventsPerFrame_Offset = offsetof(FNiagaraEventScriptProperties, MaxEventsPerFrame);
	static_assert(FNiagaraEventScriptProperties_MaxEventsPerFrame_Offset == 0x30, "FNiagaraEventScriptProperties::MaxEventsPerFrame offset is not 30");
	auto constexpr FNiagaraEventScriptProperties_SourceEmitterID_Offset = offsetof(FNiagaraEventScriptProperties, SourceEmitterID);
	static_assert(FNiagaraEventScriptProperties_SourceEmitterID_Offset == 0x34, "FNiagaraEventScriptProperties::SourceEmitterID offset is not 34");
	auto constexpr FNiagaraEventScriptProperties_SourceEventName_Offset = offsetof(FNiagaraEventScriptProperties, SourceEventName);
	static_assert(FNiagaraEventScriptProperties_SourceEventName_Offset == 0x48, "FNiagaraEventScriptProperties::SourceEventName offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
