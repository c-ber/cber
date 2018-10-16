#pragma once
#include "FGeneralSpotGroupProperty.hpp"
#include "FFloatRange.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVehicleSpotGroupProperty // Size: 0x40
 : public FGeneralSpotGroupProperty // Size: 0x20
{
public:
    TArray<struct FNameWeight> WeightsPerCategory; /* Ofs: 0x20 Size: 0x10 ArrayProperty TslGame.VehicleSpotGroupProperty.WeightsPerCategory */
    FFloatRange FuelPercentRange; /* Ofs: 0x30 Size: 0x10 StructProperty TslGame.VehicleSpotGroupProperty.FuelPercentRange */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVehicleSpotGroupProperty = sizeof(FVehicleSpotGroupProperty); // 64
    static_assert(sizeof(FVehicleSpotGroupProperty) == 0x40, "Size of FVehicleSpotGroupProperty is not correct.");
	auto constexpr FVehicleSpotGroupProperty_WeightsPerCategory_Offset = offsetof(FVehicleSpotGroupProperty, WeightsPerCategory);
	static_assert(FVehicleSpotGroupProperty_WeightsPerCategory_Offset == 0x20, "FVehicleSpotGroupProperty::WeightsPerCategory offset is not 20");
	auto constexpr FVehicleSpotGroupProperty_FuelPercentRange_Offset = offsetof(FVehicleSpotGroupProperty, FuelPercentRange);
	static_assert(FVehicleSpotGroupProperty_FuelPercentRange_Offset == 0x30, "FVehicleSpotGroupProperty::FuelPercentRange offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
