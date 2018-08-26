#pragma once
#include "FCollectionParameterBase.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCollectionVectorParameter // Size: 0x28
 : public FCollectionParameterBase // Size: 0x18
{
public:
    FLinearColor DefaultValue; /* Ofs: 0x18 Size: 0x10 StructProperty Engine.CollectionVectorParameter.DefaultValue */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCollectionVectorParameter = sizeof(FCollectionVectorParameter); // 40
    static_assert(sizeof(FCollectionVectorParameter) == 0x28, "Size of FCollectionVectorParameter is not correct.");
	auto constexpr FCollectionVectorParameter_DefaultValue_Offset = offsetof(FCollectionVectorParameter, DefaultValue);
	static_assert(FCollectionVectorParameter_DefaultValue_Offset == 0x18, "FCollectionVectorParameter::DefaultValue offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
