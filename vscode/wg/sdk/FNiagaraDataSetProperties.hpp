#pragma once
#include "FNiagaraDataSetID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraDataSetProperties // Size: 0x20
{
public:
    FNiagaraDataSetID ID; /* Ofs: 0x0 Size: 0x10 StructProperty Niagara.NiagaraDataSetProperties.ID */
    TArray<struct FNiagaraVariable> Variables; /* Ofs: 0x10 Size: 0x10 ArrayProperty Niagara.NiagaraDataSetProperties.Variables */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraDataSetProperties = sizeof(FNiagaraDataSetProperties); // 32
    static_assert(sizeof(FNiagaraDataSetProperties) == 0x20, "Size of FNiagaraDataSetProperties is not correct.");
	auto constexpr FNiagaraDataSetProperties_ID_Offset = offsetof(FNiagaraDataSetProperties, ID);
	static_assert(FNiagaraDataSetProperties_ID_Offset == 0x0, "FNiagaraDataSetProperties::ID offset is not 0");
	auto constexpr FNiagaraDataSetProperties_Variables_Offset = offsetof(FNiagaraDataSetProperties, Variables);
	static_assert(FNiagaraDataSetProperties_Variables_Offset == 0x10, "FNiagaraDataSetProperties::Variables offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
