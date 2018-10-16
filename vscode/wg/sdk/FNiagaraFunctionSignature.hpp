#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraFunctionSignature // Size: 0x40
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Niagara.NiagaraFunctionSignature.Name */
    TArray<struct FNiagaraVariable> Inputs; /* Ofs: 0x8 Size: 0x10 ArrayProperty Niagara.NiagaraFunctionSignature.Inputs */
    TArray<struct FNiagaraVariable> Outputs; /* Ofs: 0x18 Size: 0x10 ArrayProperty Niagara.NiagaraFunctionSignature.Outputs */
    FGuid OwnerId; /* Ofs: 0x28 Size: 0x10 StructProperty Niagara.NiagaraFunctionSignature.OwnerId */
    bool bRequiresContext; /* Ofs: 0x38 Size: 0x1 BitMask: 01 BoolProperty Niagara.NiagaraFunctionSignature.bRequiresContext */
    bool bMemberFunction; /* Ofs: 0x39 Size: 0x1 BitMask: 01 BoolProperty Niagara.NiagaraFunctionSignature.bMemberFunction */
    uint8_t UnknownData3A[0x6];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraFunctionSignature = sizeof(FNiagaraFunctionSignature); // 64
    static_assert(sizeof(FNiagaraFunctionSignature) == 0x40, "Size of FNiagaraFunctionSignature is not correct.");
	auto constexpr FNiagaraFunctionSignature_Name_Offset = offsetof(FNiagaraFunctionSignature, Name);
	static_assert(FNiagaraFunctionSignature_Name_Offset == 0x0, "FNiagaraFunctionSignature::Name offset is not 0");
	auto constexpr FNiagaraFunctionSignature_Inputs_Offset = offsetof(FNiagaraFunctionSignature, Inputs);
	static_assert(FNiagaraFunctionSignature_Inputs_Offset == 0x8, "FNiagaraFunctionSignature::Inputs offset is not 8");
	auto constexpr FNiagaraFunctionSignature_Outputs_Offset = offsetof(FNiagaraFunctionSignature, Outputs);
	static_assert(FNiagaraFunctionSignature_Outputs_Offset == 0x18, "FNiagaraFunctionSignature::Outputs offset is not 18");
	auto constexpr FNiagaraFunctionSignature_OwnerId_Offset = offsetof(FNiagaraFunctionSignature, OwnerId);
	static_assert(FNiagaraFunctionSignature_OwnerId_Offset == 0x28, "FNiagaraFunctionSignature::OwnerId offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
