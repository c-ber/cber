#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogVehicle // Size: 0x28
{
public:
    FString VehicleType; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuLogVehicle.VehicleType */
    FString VehicleId; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.WuLogVehicle.VehicleId */
    float HealthPercent; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.WuLogVehicle.HealthPercent */
    float FeulPercent; /* Ofs: 0x24 Size: 0x4 FloatProperty TslGame.WuLogVehicle.FeulPercent */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogVehicle = sizeof(FWuLogVehicle); // 40
    static_assert(sizeof(FWuLogVehicle) == 0x28, "Size of FWuLogVehicle is not correct.");
	auto constexpr FWuLogVehicle_VehicleType_Offset = offsetof(FWuLogVehicle, VehicleType);
	static_assert(FWuLogVehicle_VehicleType_Offset == 0x0, "FWuLogVehicle::VehicleType offset is not 0");
	auto constexpr FWuLogVehicle_VehicleId_Offset = offsetof(FWuLogVehicle, VehicleId);
	static_assert(FWuLogVehicle_VehicleId_Offset == 0x10, "FWuLogVehicle::VehicleId offset is not 10");
	auto constexpr FWuLogVehicle_HealthPercent_Offset = offsetof(FWuLogVehicle, HealthPercent);
	static_assert(FWuLogVehicle_HealthPercent_Offset == 0x20, "FWuLogVehicle::HealthPercent offset is not 20");
	auto constexpr FWuLogVehicle_FeulPercent_Offset = offsetof(FWuLogVehicle, FeulPercent);
	static_assert(FWuLogVehicle_FeulPercent_Offset == 0x24, "FWuLogVehicle::FeulPercent offset is not 24");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
