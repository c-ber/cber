#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVehicleTransmissionData // Size: 0x30
{
public:
    bool bUseGearAutoBox; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty PhysXVehicles.VehicleTransmissionData.bUseGearAutoBox */
    uint8_t UnknownData1[0x3];
    float GearSwitchTime; /* Ofs: 0x4 Size: 0x4 FloatProperty PhysXVehicles.VehicleTransmissionData.GearSwitchTime */
    float GearAutoBoxLatency; /* Ofs: 0x8 Size: 0x4 FloatProperty PhysXVehicles.VehicleTransmissionData.GearAutoBoxLatency */
    float FinalRatio; /* Ofs: 0xC Size: 0x4 FloatProperty PhysXVehicles.VehicleTransmissionData.FinalRatio */
    TArray<struct FVehicleGearData> ForwardGears; /* Ofs: 0x10 Size: 0x10 ArrayProperty PhysXVehicles.VehicleTransmissionData.ForwardGears */
    float ReverseGearRatio; /* Ofs: 0x20 Size: 0x4 FloatProperty PhysXVehicles.VehicleTransmissionData.ReverseGearRatio */
    float NeutralGearUpRatio; /* Ofs: 0x24 Size: 0x4 FloatProperty PhysXVehicles.VehicleTransmissionData.NeutralGearUpRatio */
    float ClutchStrength; /* Ofs: 0x28 Size: 0x4 FloatProperty PhysXVehicles.VehicleTransmissionData.ClutchStrength */
    uint8_t UnknownData2C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVehicleTransmissionData = sizeof(FVehicleTransmissionData); // 48
    static_assert(sizeof(FVehicleTransmissionData) == 0x30, "Size of FVehicleTransmissionData is not correct.");
	auto constexpr FVehicleTransmissionData_GearSwitchTime_Offset = offsetof(FVehicleTransmissionData, GearSwitchTime);
	static_assert(FVehicleTransmissionData_GearSwitchTime_Offset == 0x4, "FVehicleTransmissionData::GearSwitchTime offset is not 4");
	auto constexpr FVehicleTransmissionData_GearAutoBoxLatency_Offset = offsetof(FVehicleTransmissionData, GearAutoBoxLatency);
	static_assert(FVehicleTransmissionData_GearAutoBoxLatency_Offset == 0x8, "FVehicleTransmissionData::GearAutoBoxLatency offset is not 8");
	auto constexpr FVehicleTransmissionData_FinalRatio_Offset = offsetof(FVehicleTransmissionData, FinalRatio);
	static_assert(FVehicleTransmissionData_FinalRatio_Offset == 0xc, "FVehicleTransmissionData::FinalRatio offset is not c");
	auto constexpr FVehicleTransmissionData_ForwardGears_Offset = offsetof(FVehicleTransmissionData, ForwardGears);
	static_assert(FVehicleTransmissionData_ForwardGears_Offset == 0x10, "FVehicleTransmissionData::ForwardGears offset is not 10");
	auto constexpr FVehicleTransmissionData_ReverseGearRatio_Offset = offsetof(FVehicleTransmissionData, ReverseGearRatio);
	static_assert(FVehicleTransmissionData_ReverseGearRatio_Offset == 0x20, "FVehicleTransmissionData::ReverseGearRatio offset is not 20");
	auto constexpr FVehicleTransmissionData_NeutralGearUpRatio_Offset = offsetof(FVehicleTransmissionData, NeutralGearUpRatio);
	static_assert(FVehicleTransmissionData_NeutralGearUpRatio_Offset == 0x24, "FVehicleTransmissionData::NeutralGearUpRatio offset is not 24");
	auto constexpr FVehicleTransmissionData_ClutchStrength_Offset = offsetof(FVehicleTransmissionData, ClutchStrength);
	static_assert(FVehicleTransmissionData_ClutchStrength_Offset == 0x28, "FVehicleTransmissionData::ClutchStrength offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
