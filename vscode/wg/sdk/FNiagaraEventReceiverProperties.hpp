#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraEventReceiverProperties // Size: 0x28
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Niagara.NiagaraEventReceiverProperties.Name */
    FName SourceEventGenerator; /* Ofs: 0x8 Size: 0x8 NameProperty Niagara.NiagaraEventReceiverProperties.SourceEventGenerator */
    FName SourceEmitter; /* Ofs: 0x10 Size: 0x8 NameProperty Niagara.NiagaraEventReceiverProperties.SourceEmitter */
    TArray<ExternalPtr<struct UNiagaraEventReceiverEmitterAction>> EmitterActions; /* Ofs: 0x18 Size: 0x10 ArrayProperty Niagara.NiagaraEventReceiverProperties.EmitterActions */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraEventReceiverProperties = sizeof(FNiagaraEventReceiverProperties); // 40
    static_assert(sizeof(FNiagaraEventReceiverProperties) == 0x28, "Size of FNiagaraEventReceiverProperties is not correct.");
	auto constexpr FNiagaraEventReceiverProperties_Name_Offset = offsetof(FNiagaraEventReceiverProperties, Name);
	static_assert(FNiagaraEventReceiverProperties_Name_Offset == 0x0, "FNiagaraEventReceiverProperties::Name offset is not 0");
	auto constexpr FNiagaraEventReceiverProperties_SourceEventGenerator_Offset = offsetof(FNiagaraEventReceiverProperties, SourceEventGenerator);
	static_assert(FNiagaraEventReceiverProperties_SourceEventGenerator_Offset == 0x8, "FNiagaraEventReceiverProperties::SourceEventGenerator offset is not 8");
	auto constexpr FNiagaraEventReceiverProperties_SourceEmitter_Offset = offsetof(FNiagaraEventReceiverProperties, SourceEmitter);
	static_assert(FNiagaraEventReceiverProperties_SourceEmitter_Offset == 0x10, "FNiagaraEventReceiverProperties::SourceEmitter offset is not 10");
	auto constexpr FNiagaraEventReceiverProperties_EmitterActions_Offset = offsetof(FNiagaraEventReceiverProperties, EmitterActions);
	static_assert(FNiagaraEventReceiverProperties_EmitterActions_Offset == 0x18, "FNiagaraEventReceiverProperties::EmitterActions offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
