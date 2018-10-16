#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraEmitterInternalVariableBinding // Size: 0x30
{
public:
    FGuid SourceParameterId; /* Ofs: 0x0 Size: 0x10 StructProperty Niagara.NiagaraEmitterInternalVariableBinding.SourceParameterId */
    FGuid DestinationEmitterId; /* Ofs: 0x10 Size: 0x10 StructProperty Niagara.NiagaraEmitterInternalVariableBinding.DestinationEmitterId */
    FString DestinationEmitterVariableName; /* Ofs: 0x20 Size: 0x10 StrProperty Niagara.NiagaraEmitterInternalVariableBinding.DestinationEmitterVariableName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraEmitterInternalVariableBinding = sizeof(FNiagaraEmitterInternalVariableBinding); // 48
    static_assert(sizeof(FNiagaraEmitterInternalVariableBinding) == 0x30, "Size of FNiagaraEmitterInternalVariableBinding is not correct.");
	auto constexpr FNiagaraEmitterInternalVariableBinding_SourceParameterId_Offset = offsetof(FNiagaraEmitterInternalVariableBinding, SourceParameterId);
	static_assert(FNiagaraEmitterInternalVariableBinding_SourceParameterId_Offset == 0x0, "FNiagaraEmitterInternalVariableBinding::SourceParameterId offset is not 0");
	auto constexpr FNiagaraEmitterInternalVariableBinding_DestinationEmitterId_Offset = offsetof(FNiagaraEmitterInternalVariableBinding, DestinationEmitterId);
	static_assert(FNiagaraEmitterInternalVariableBinding_DestinationEmitterId_Offset == 0x10, "FNiagaraEmitterInternalVariableBinding::DestinationEmitterId offset is not 10");
	auto constexpr FNiagaraEmitterInternalVariableBinding_DestinationEmitterVariableName_Offset = offsetof(FNiagaraEmitterInternalVariableBinding, DestinationEmitterVariableName);
	static_assert(FNiagaraEmitterInternalVariableBinding_DestinationEmitterVariableName_Offset == 0x20, "FNiagaraEmitterInternalVariableBinding::DestinationEmitterVariableName offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
