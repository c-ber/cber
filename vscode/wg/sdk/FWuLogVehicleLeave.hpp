#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"
#include "FWuLogVehicle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogVehicleLeave // Size: 0xD0
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogVehicleLeave.Character */
    FWuLogVehicle Vehicle; /* Ofs: 0xA0 Size: 0x28 StructProperty TslGame.WuLogVehicleLeave.Vehicle */
    float RideDistance; /* Ofs: 0xC8 Size: 0x4 FloatProperty TslGame.WuLogVehicleLeave.RideDistance */
    int32_t SeatIndex; /* Ofs: 0xCC Size: 0x4 IntProperty TslGame.WuLogVehicleLeave.SeatIndex */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogVehicleLeave = sizeof(FWuLogVehicleLeave); // 208
    static_assert(sizeof(FWuLogVehicleLeave) == 0xD0, "Size of FWuLogVehicleLeave is not correct.");
	auto constexpr FWuLogVehicleLeave_Character_Offset = offsetof(FWuLogVehicleLeave, Character);
	static_assert(FWuLogVehicleLeave_Character_Offset == 0x58, "FWuLogVehicleLeave::Character offset is not 58");
	auto constexpr FWuLogVehicleLeave_Vehicle_Offset = offsetof(FWuLogVehicleLeave, Vehicle);
	static_assert(FWuLogVehicleLeave_Vehicle_Offset == 0xa0, "FWuLogVehicleLeave::Vehicle offset is not a0");
	auto constexpr FWuLogVehicleLeave_RideDistance_Offset = offsetof(FWuLogVehicleLeave, RideDistance);
	static_assert(FWuLogVehicleLeave_RideDistance_Offset == 0xc8, "FWuLogVehicleLeave::RideDistance offset is not c8");
	auto constexpr FWuLogVehicleLeave_SeatIndex_Offset = offsetof(FWuLogVehicleLeave, SeatIndex);
	static_assert(FWuLogVehicleLeave_SeatIndex_Offset == 0xcc, "FWuLogVehicleLeave::SeatIndex offset is not cc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
