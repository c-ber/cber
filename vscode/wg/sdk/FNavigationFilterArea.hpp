#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavigationFilterArea // Size: 0x18
{
public:
    ExternalPtr<struct UClass> AreaClass; /* Ofs: 0x0 Size: 0x8 ClassProperty Engine.NavigationFilterArea.AreaClass */
    float TravelCostOverride; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.NavigationFilterArea.TravelCostOverride */
    float EnteringCostOverride; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.NavigationFilterArea.EnteringCostOverride */
    bool bIsExcluded : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Engine.NavigationFilterArea.bIsExcluded */
    bool bOverrideTravelCost : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 02 BoolProperty Engine.NavigationFilterArea.bOverrideTravelCost */
    bool bOverrideEnteringCost : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 04 BoolProperty Engine.NavigationFilterArea.bOverrideEnteringCost */
    uint8_t UnknownData11[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavigationFilterArea = sizeof(FNavigationFilterArea); // 24
    static_assert(sizeof(FNavigationFilterArea) == 0x18, "Size of FNavigationFilterArea is not correct.");
	auto constexpr FNavigationFilterArea_AreaClass_Offset = offsetof(FNavigationFilterArea, AreaClass);
	static_assert(FNavigationFilterArea_AreaClass_Offset == 0x0, "FNavigationFilterArea::AreaClass offset is not 0");
	auto constexpr FNavigationFilterArea_TravelCostOverride_Offset = offsetof(FNavigationFilterArea, TravelCostOverride);
	static_assert(FNavigationFilterArea_TravelCostOverride_Offset == 0x8, "FNavigationFilterArea::TravelCostOverride offset is not 8");
	auto constexpr FNavigationFilterArea_EnteringCostOverride_Offset = offsetof(FNavigationFilterArea, EnteringCostOverride);
	static_assert(FNavigationFilterArea_EnteringCostOverride_Offset == 0xc, "FNavigationFilterArea::EnteringCostOverride offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
