#pragma once
#include "EItemSpotGroupType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FItemSpotGroupTypeProperty // Size: 0x168
{
public:
    TEnumAsByte<enum EItemSpotGroupType> SpotGroupType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.ItemSpotGroupTypeProperty.SpotGroupType */
    uint8_t UnknownData1[0x3];
    float SpotGroupPercent; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.ItemSpotGroupTypeProperty.SpotGroupPercent */
    TArray<struct FItemSpotTypeProperty> SpotTypeProperties; /* Ofs: 0x8 Size: 0x10 ArrayProperty TslGame.ItemSpotGroupTypeProperty.SpotTypeProperties */
    uint8_t UnknownData18[0x150];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFItemSpotGroupTypeProperty = sizeof(FItemSpotGroupTypeProperty); // 360
    static_assert(sizeof(FItemSpotGroupTypeProperty) == 0x168, "Size of FItemSpotGroupTypeProperty is not correct.");
	auto constexpr FItemSpotGroupTypeProperty_SpotGroupType_Offset = offsetof(FItemSpotGroupTypeProperty, SpotGroupType);
	static_assert(FItemSpotGroupTypeProperty_SpotGroupType_Offset == 0x0, "FItemSpotGroupTypeProperty::SpotGroupType offset is not 0");
	auto constexpr FItemSpotGroupTypeProperty_SpotGroupPercent_Offset = offsetof(FItemSpotGroupTypeProperty, SpotGroupPercent);
	static_assert(FItemSpotGroupTypeProperty_SpotGroupPercent_Offset == 0x4, "FItemSpotGroupTypeProperty::SpotGroupPercent offset is not 4");
	auto constexpr FItemSpotGroupTypeProperty_SpotTypeProperties_Offset = offsetof(FItemSpotGroupTypeProperty, SpotTypeProperties);
	static_assert(FItemSpotGroupTypeProperty_SpotTypeProperties_Offset == 0x8, "FItemSpotGroupTypeProperty::SpotTypeProperties offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
