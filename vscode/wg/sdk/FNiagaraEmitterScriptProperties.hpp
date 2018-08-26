#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraEmitterScriptProperties // Size: 0x28
{
public:
    ExternalPtr<struct UNiagaraScript> Script; /* Ofs: 0x0 Size: 0x8 ObjectProperty Niagara.NiagaraEmitterScriptProperties.Script */
    TArray<struct FNiagaraEventReceiverProperties> EventReceivers; /* Ofs: 0x8 Size: 0x10 ArrayProperty Niagara.NiagaraEmitterScriptProperties.EventReceivers */
    TArray<struct FNiagaraEventGeneratorProperties> EventGenerators; /* Ofs: 0x18 Size: 0x10 ArrayProperty Niagara.NiagaraEmitterScriptProperties.EventGenerators */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraEmitterScriptProperties = sizeof(FNiagaraEmitterScriptProperties); // 40
    static_assert(sizeof(FNiagaraEmitterScriptProperties) == 0x28, "Size of FNiagaraEmitterScriptProperties is not correct.");
	auto constexpr FNiagaraEmitterScriptProperties_Script_Offset = offsetof(FNiagaraEmitterScriptProperties, Script);
	static_assert(FNiagaraEmitterScriptProperties_Script_Offset == 0x0, "FNiagaraEmitterScriptProperties::Script offset is not 0");
	auto constexpr FNiagaraEmitterScriptProperties_EventReceivers_Offset = offsetof(FNiagaraEmitterScriptProperties, EventReceivers);
	static_assert(FNiagaraEmitterScriptProperties_EventReceivers_Offset == 0x8, "FNiagaraEmitterScriptProperties::EventReceivers offset is not 8");
	auto constexpr FNiagaraEmitterScriptProperties_EventGenerators_Offset = offsetof(FNiagaraEmitterScriptProperties, EventGenerators);
	static_assert(FNiagaraEmitterScriptProperties_EventGenerators_Offset == 0x18, "FNiagaraEmitterScriptProperties::EventGenerators offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
