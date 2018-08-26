#pragma once
#include "FCollectionParameterBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCollectionScalarParameter // Size: 0x20
 : public FCollectionParameterBase // Size: 0x18
{
public:
    float DefaultValue; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.CollectionScalarParameter.DefaultValue */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCollectionScalarParameter = sizeof(FCollectionScalarParameter); // 32
    static_assert(sizeof(FCollectionScalarParameter) == 0x20, "Size of FCollectionScalarParameter is not correct.");
	auto constexpr FCollectionScalarParameter_DefaultValue_Offset = offsetof(FCollectionScalarParameter, DefaultValue);
	static_assert(FCollectionScalarParameter_DefaultValue_Offset == 0x18, "FCollectionScalarParameter::DefaultValue offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
