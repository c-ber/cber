#pragma once
#include "FVector.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVehicleDebugHit // Size: 0x28
{
public:
    FVector RelativeNormalImpulse; /* Ofs: 0x0 Size: 0xC StructProperty TslGame.VehicleDebugHit.RelativeNormalImpulse */
    FVector RelativeImpactPoint; /* Ofs: 0xC Size: 0xC StructProperty TslGame.VehicleDebugHit.RelativeImpactPoint */
    FVector AbsoluteImpactPoint; /* Ofs: 0x18 Size: 0xC StructProperty TslGame.VehicleDebugHit.AbsoluteImpactPoint */
    FColor Color; /* Ofs: 0x24 Size: 0x4 StructProperty TslGame.VehicleDebugHit.Color */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVehicleDebugHit = sizeof(FVehicleDebugHit); // 40
    static_assert(sizeof(FVehicleDebugHit) == 0x28, "Size of FVehicleDebugHit is not correct.");
	auto constexpr FVehicleDebugHit_RelativeNormalImpulse_Offset = offsetof(FVehicleDebugHit, RelativeNormalImpulse);
	static_assert(FVehicleDebugHit_RelativeNormalImpulse_Offset == 0x0, "FVehicleDebugHit::RelativeNormalImpulse offset is not 0");
	auto constexpr FVehicleDebugHit_RelativeImpactPoint_Offset = offsetof(FVehicleDebugHit, RelativeImpactPoint);
	static_assert(FVehicleDebugHit_RelativeImpactPoint_Offset == 0xc, "FVehicleDebugHit::RelativeImpactPoint offset is not c");
	auto constexpr FVehicleDebugHit_AbsoluteImpactPoint_Offset = offsetof(FVehicleDebugHit, AbsoluteImpactPoint);
	static_assert(FVehicleDebugHit_AbsoluteImpactPoint_Offset == 0x18, "FVehicleDebugHit::AbsoluteImpactPoint offset is not 18");
	auto constexpr FVehicleDebugHit_Color_Offset = offsetof(FVehicleDebugHit, Color);
	static_assert(FVehicleDebugHit_Color_Offset == 0x24, "FVehicleDebugHit::Color offset is not 24");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
