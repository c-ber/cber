#pragma once
#include "EItemSpotType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FItemSpotTypeProperty // Size: 0x38
{
public:
    TEnumAsByte<enum EItemSpotType> SpotType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.ItemSpotTypeProperty.SpotType */
    uint8_t UnknownData1[0x3];
    float SpotPercentMin; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.ItemSpotTypeProperty.SpotPercentMin */
    float SpotPercentMax; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.ItemSpotTypeProperty.SpotPercentMax */
    int32_t ItemsPerSpotMin; /* Ofs: 0xC Size: 0x4 IntProperty TslGame.ItemSpotTypeProperty.ItemsPerSpotMin */
    int32_t ItemsPerSpotMax; /* Ofs: 0x10 Size: 0x4 IntProperty TslGame.ItemSpotTypeProperty.ItemsPerSpotMax */
    uint8_t UnknownData14[0x4];
    TArray<struct FNameWeight> WeightsPerValue; /* Ofs: 0x18 Size: 0x10 ArrayProperty TslGame.ItemSpotTypeProperty.WeightsPerValue */
    TArray<struct FNameWeight> WeightsPerCategory; /* Ofs: 0x28 Size: 0x10 ArrayProperty TslGame.ItemSpotTypeProperty.WeightsPerCategory */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFItemSpotTypeProperty = sizeof(FItemSpotTypeProperty); // 56
    static_assert(sizeof(FItemSpotTypeProperty) == 0x38, "Size of FItemSpotTypeProperty is not correct.");
	auto constexpr FItemSpotTypeProperty_SpotType_Offset = offsetof(FItemSpotTypeProperty, SpotType);
	static_assert(FItemSpotTypeProperty_SpotType_Offset == 0x0, "FItemSpotTypeProperty::SpotType offset is not 0");
	auto constexpr FItemSpotTypeProperty_SpotPercentMin_Offset = offsetof(FItemSpotTypeProperty, SpotPercentMin);
	static_assert(FItemSpotTypeProperty_SpotPercentMin_Offset == 0x4, "FItemSpotTypeProperty::SpotPercentMin offset is not 4");
	auto constexpr FItemSpotTypeProperty_SpotPercentMax_Offset = offsetof(FItemSpotTypeProperty, SpotPercentMax);
	static_assert(FItemSpotTypeProperty_SpotPercentMax_Offset == 0x8, "FItemSpotTypeProperty::SpotPercentMax offset is not 8");
	auto constexpr FItemSpotTypeProperty_ItemsPerSpotMin_Offset = offsetof(FItemSpotTypeProperty, ItemsPerSpotMin);
	static_assert(FItemSpotTypeProperty_ItemsPerSpotMin_Offset == 0xc, "FItemSpotTypeProperty::ItemsPerSpotMin offset is not c");
	auto constexpr FItemSpotTypeProperty_ItemsPerSpotMax_Offset = offsetof(FItemSpotTypeProperty, ItemsPerSpotMax);
	static_assert(FItemSpotTypeProperty_ItemsPerSpotMax_Offset == 0x10, "FItemSpotTypeProperty::ItemsPerSpotMax offset is not 10");
	auto constexpr FItemSpotTypeProperty_WeightsPerValue_Offset = offsetof(FItemSpotTypeProperty, WeightsPerValue);
	static_assert(FItemSpotTypeProperty_WeightsPerValue_Offset == 0x18, "FItemSpotTypeProperty::WeightsPerValue offset is not 18");
	auto constexpr FItemSpotTypeProperty_WeightsPerCategory_Offset = offsetof(FItemSpotTypeProperty, WeightsPerCategory);
	static_assert(FItemSpotTypeProperty_WeightsPerCategory_Offset == 0x28, "FItemSpotTypeProperty::WeightsPerCategory offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
