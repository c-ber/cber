#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVehicleSeatInfo // Size: 0x18
{
public:
    ExternalPtr<struct UClass> SeatClass; /* Ofs: 0x0 Size: 0x8 ClassProperty TslGame.VehicleSeatInfo.SeatClass */
    FName RideSocketName; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.VehicleSeatInfo.RideSocketName */
    FName LeaveSocketName; /* Ofs: 0x10 Size: 0x8 NameProperty TslGame.VehicleSeatInfo.LeaveSocketName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVehicleSeatInfo = sizeof(FVehicleSeatInfo); // 24
    static_assert(sizeof(FVehicleSeatInfo) == 0x18, "Size of FVehicleSeatInfo is not correct.");
	auto constexpr FVehicleSeatInfo_SeatClass_Offset = offsetof(FVehicleSeatInfo, SeatClass);
	static_assert(FVehicleSeatInfo_SeatClass_Offset == 0x0, "FVehicleSeatInfo::SeatClass offset is not 0");
	auto constexpr FVehicleSeatInfo_RideSocketName_Offset = offsetof(FVehicleSeatInfo, RideSocketName);
	static_assert(FVehicleSeatInfo_RideSocketName_Offset == 0x8, "FVehicleSeatInfo::RideSocketName offset is not 8");
	auto constexpr FVehicleSeatInfo_LeaveSocketName_Offset = offsetof(FVehicleSeatInfo, LeaveSocketName);
	static_assert(FVehicleSeatInfo_LeaveSocketName_Offset == 0x10, "FVehicleSeatInfo::LeaveSocketName offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
