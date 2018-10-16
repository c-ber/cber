#pragma once
#include "ENiagaraDataSetType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraDataSetID // Size: 0x10
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Niagara.NiagaraDataSetID.Name */
    TEnumAsByte<enum ENiagaraDataSetType> Type; /* Ofs: 0x8 Size: 0x1 EnumProperty Niagara.NiagaraDataSetID.Type */
    uint8_t UnknownData9[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraDataSetID = sizeof(FNiagaraDataSetID); // 16
    static_assert(sizeof(FNiagaraDataSetID) == 0x10, "Size of FNiagaraDataSetID is not correct.");
	auto constexpr FNiagaraDataSetID_Name_Offset = offsetof(FNiagaraDataSetID, Name);
	static_assert(FNiagaraDataSetID_Name_Offset == 0x0, "FNiagaraDataSetID::Name offset is not 0");
	auto constexpr FNiagaraDataSetID_Type_Offset = offsetof(FNiagaraDataSetID, Type);
	static_assert(FNiagaraDataSetID_Type_Offset == 0x8, "FNiagaraDataSetID::Type offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
