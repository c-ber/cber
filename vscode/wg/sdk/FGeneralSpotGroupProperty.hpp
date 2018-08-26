#pragma once
#include "EThingSpotGroupType.hpp"
#include "EThingGroupSpawnType.hpp"
#include "FFloatRange.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGeneralSpotGroupProperty // Size: 0x20
{
public:
    TEnumAsByte<enum EThingSpotGroupType> GroupType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.GeneralSpotGroupProperty.GroupType */
    bool bActiveByStartVolume; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty TslGame.GeneralSpotGroupProperty.bActiveByStartVolume */
    TEnumAsByte<enum EThingGroupSpawnType> SpawnType; /* Ofs: 0x2 Size: 0x1 EnumProperty TslGame.GeneralSpotGroupProperty.SpawnType */
    uint8_t UnknownData3[0x1];
    FFloatRange TotalCountRange; /* Ofs: 0x4 Size: 0x10 StructProperty TslGame.GeneralSpotGroupProperty.TotalCountRange */
    float TotalCountMultiplierWithPlayerCount; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.GeneralSpotGroupProperty.TotalCountMultiplierWithPlayerCount */
    float ProbabilityPercent; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.GeneralSpotGroupProperty.ProbabilityPercent */
    float ProbabilityPercentMultiplierWithPlayerCount; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.GeneralSpotGroupProperty.ProbabilityPercentMultiplierWithPlayerCount */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGeneralSpotGroupProperty = sizeof(FGeneralSpotGroupProperty); // 32
    static_assert(sizeof(FGeneralSpotGroupProperty) == 0x20, "Size of FGeneralSpotGroupProperty is not correct.");
	auto constexpr FGeneralSpotGroupProperty_GroupType_Offset = offsetof(FGeneralSpotGroupProperty, GroupType);
	static_assert(FGeneralSpotGroupProperty_GroupType_Offset == 0x0, "FGeneralSpotGroupProperty::GroupType offset is not 0");
	auto constexpr FGeneralSpotGroupProperty_SpawnType_Offset = offsetof(FGeneralSpotGroupProperty, SpawnType);
	static_assert(FGeneralSpotGroupProperty_SpawnType_Offset == 0x2, "FGeneralSpotGroupProperty::SpawnType offset is not 2");
	auto constexpr FGeneralSpotGroupProperty_TotalCountRange_Offset = offsetof(FGeneralSpotGroupProperty, TotalCountRange);
	static_assert(FGeneralSpotGroupProperty_TotalCountRange_Offset == 0x4, "FGeneralSpotGroupProperty::TotalCountRange offset is not 4");
	auto constexpr FGeneralSpotGroupProperty_TotalCountMultiplierWithPlayerCount_Offset = offsetof(FGeneralSpotGroupProperty, TotalCountMultiplierWithPlayerCount);
	static_assert(FGeneralSpotGroupProperty_TotalCountMultiplierWithPlayerCount_Offset == 0x14, "FGeneralSpotGroupProperty::TotalCountMultiplierWithPlayerCount offset is not 14");
	auto constexpr FGeneralSpotGroupProperty_ProbabilityPercent_Offset = offsetof(FGeneralSpotGroupProperty, ProbabilityPercent);
	static_assert(FGeneralSpotGroupProperty_ProbabilityPercent_Offset == 0x18, "FGeneralSpotGroupProperty::ProbabilityPercent offset is not 18");
	auto constexpr FGeneralSpotGroupProperty_ProbabilityPercentMultiplierWithPlayerCount_Offset = offsetof(FGeneralSpotGroupProperty, ProbabilityPercentMultiplierWithPlayerCount);
	static_assert(FGeneralSpotGroupProperty_ProbabilityPercentMultiplierWithPlayerCount_Offset == 0x1c, "FGeneralSpotGroupProperty::ProbabilityPercentMultiplierWithPlayerCount offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
