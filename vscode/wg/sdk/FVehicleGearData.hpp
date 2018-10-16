#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVehicleGearData // Size: 0xC
{
public:
    float Ratio; /* Ofs: 0x0 Size: 0x4 FloatProperty PhysXVehicles.VehicleGearData.Ratio */
    float DownRatio; /* Ofs: 0x4 Size: 0x4 FloatProperty PhysXVehicles.VehicleGearData.DownRatio */
    float UpRatio; /* Ofs: 0x8 Size: 0x4 FloatProperty PhysXVehicles.VehicleGearData.UpRatio */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVehicleGearData = sizeof(FVehicleGearData); // 12
    static_assert(sizeof(FVehicleGearData) == 0xC, "Size of FVehicleGearData is not correct.");
	auto constexpr FVehicleGearData_Ratio_Offset = offsetof(FVehicleGearData, Ratio);
	static_assert(FVehicleGearData_Ratio_Offset == 0x0, "FVehicleGearData::Ratio offset is not 0");
	auto constexpr FVehicleGearData_DownRatio_Offset = offsetof(FVehicleGearData, DownRatio);
	static_assert(FVehicleGearData_DownRatio_Offset == 0x4, "FVehicleGearData::DownRatio offset is not 4");
	auto constexpr FVehicleGearData_UpRatio_Offset = offsetof(FVehicleGearData, UpRatio);
	static_assert(FVehicleGearData_UpRatio_Offset == 0x8, "FVehicleGearData::UpRatio offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
