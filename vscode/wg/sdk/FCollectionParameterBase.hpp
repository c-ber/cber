#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCollectionParameterBase // Size: 0x18
{
public:
    FName ParameterName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.CollectionParameterBase.ParameterName */
    FGuid ID; /* Ofs: 0x8 Size: 0x10 StructProperty Engine.CollectionParameterBase.ID */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCollectionParameterBase = sizeof(FCollectionParameterBase); // 24
    static_assert(sizeof(FCollectionParameterBase) == 0x18, "Size of FCollectionParameterBase is not correct.");
	auto constexpr FCollectionParameterBase_ParameterName_Offset = offsetof(FCollectionParameterBase, ParameterName);
	static_assert(FCollectionParameterBase_ParameterName_Offset == 0x0, "FCollectionParameterBase::ParameterName offset is not 0");
	auto constexpr FCollectionParameterBase_ID_Offset = offsetof(FCollectionParameterBase, ID);
	static_assert(FCollectionParameterBase_ID_Offset == 0x8, "FCollectionParameterBase::ID offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
