#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"
#include "FWuLogVehicle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogVehicleRide // Size: 0xD0
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogVehicleRide.Character */
    FWuLogVehicle Vehicle; /* Ofs: 0xA0 Size: 0x28 StructProperty TslGame.WuLogVehicleRide.Vehicle */
    int32_t SeatIndex; /* Ofs: 0xC8 Size: 0x4 IntProperty TslGame.WuLogVehicleRide.SeatIndex */
    uint8_t UnknownDataCC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogVehicleRide = sizeof(FWuLogVehicleRide); // 208
    static_assert(sizeof(FWuLogVehicleRide) == 0xD0, "Size of FWuLogVehicleRide is not correct.");
	auto constexpr FWuLogVehicleRide_Character_Offset = offsetof(FWuLogVehicleRide, Character);
	static_assert(FWuLogVehicleRide_Character_Offset == 0x58, "FWuLogVehicleRide::Character offset is not 58");
	auto constexpr FWuLogVehicleRide_Vehicle_Offset = offsetof(FWuLogVehicleRide, Vehicle);
	static_assert(FWuLogVehicleRide_Vehicle_Offset == 0xa0, "FWuLogVehicleRide::Vehicle offset is not a0");
	auto constexpr FWuLogVehicleRide_SeatIndex_Offset = offsetof(FWuLogVehicleRide, SeatIndex);
	static_assert(FWuLogVehicleRide_SeatIndex_Offset == 0xc8, "FWuLogVehicleRide::SeatIndex offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
