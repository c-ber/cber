#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraParameterBinding // Size: 0x30
{
public:
    FGuid SourceParameterId; /* Ofs: 0x0 Size: 0x10 StructProperty Niagara.NiagaraParameterBinding.SourceParameterId */
    FGuid DestinationEmitterId; /* Ofs: 0x10 Size: 0x10 StructProperty Niagara.NiagaraParameterBinding.DestinationEmitterId */
    FGuid DestinationParameterId; /* Ofs: 0x20 Size: 0x10 StructProperty Niagara.NiagaraParameterBinding.DestinationParameterId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraParameterBinding = sizeof(FNiagaraParameterBinding); // 48
    static_assert(sizeof(FNiagaraParameterBinding) == 0x30, "Size of FNiagaraParameterBinding is not correct.");
	auto constexpr FNiagaraParameterBinding_SourceParameterId_Offset = offsetof(FNiagaraParameterBinding, SourceParameterId);
	static_assert(FNiagaraParameterBinding_SourceParameterId_Offset == 0x0, "FNiagaraParameterBinding::SourceParameterId offset is not 0");
	auto constexpr FNiagaraParameterBinding_DestinationEmitterId_Offset = offsetof(FNiagaraParameterBinding, DestinationEmitterId);
	static_assert(FNiagaraParameterBinding_DestinationEmitterId_Offset == 0x10, "FNiagaraParameterBinding::DestinationEmitterId offset is not 10");
	auto constexpr FNiagaraParameterBinding_DestinationParameterId_Offset = offsetof(FNiagaraParameterBinding, DestinationParameterId);
	static_assert(FNiagaraParameterBinding_DestinationParameterId_Offset == 0x20, "FNiagaraParameterBinding::DestinationParameterId offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
