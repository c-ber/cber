#pragma once
#include "FLogBase.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogVehicleSpawn // Size: 0x78
 : public FLogBase // Size: 0x58
{
public:
    FString VehicleId; /* Ofs: 0x58 Size: 0x10 StrProperty TslGame.WuLogVehicleSpawn.VehicleId */
    FVector Location; /* Ofs: 0x68 Size: 0xC StructProperty TslGame.WuLogVehicleSpawn.Location */
    uint8_t UnknownData74[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogVehicleSpawn = sizeof(FWuLogVehicleSpawn); // 120
    static_assert(sizeof(FWuLogVehicleSpawn) == 0x78, "Size of FWuLogVehicleSpawn is not correct.");
	auto constexpr FWuLogVehicleSpawn_VehicleId_Offset = offsetof(FWuLogVehicleSpawn, VehicleId);
	static_assert(FWuLogVehicleSpawn_VehicleId_Offset == 0x58, "FWuLogVehicleSpawn::VehicleId offset is not 58");
	auto constexpr FWuLogVehicleSpawn_Location_Offset = offsetof(FWuLogVehicleSpawn, Location);
	static_assert(FWuLogVehicleSpawn_Location_Offset == 0x68, "FWuLogVehicleSpawn::Location offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
