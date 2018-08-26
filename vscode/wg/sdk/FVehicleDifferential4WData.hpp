#pragma once
#include "EVehicleDifferential4W.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVehicleDifferential4WData // Size: 0x1C
{
public:
    TEnumAsByte<enum EVehicleDifferential4W> DifferentialType; /* Ofs: 0x0 Size: 0x1 ByteProperty PhysXVehicles.VehicleDifferential4WData.DifferentialType */
    uint8_t UnknownData1[0x3];
    float FrontRearSplit; /* Ofs: 0x4 Size: 0x4 FloatProperty PhysXVehicles.VehicleDifferential4WData.FrontRearSplit */
    float FrontLeftRightSplit; /* Ofs: 0x8 Size: 0x4 FloatProperty PhysXVehicles.VehicleDifferential4WData.FrontLeftRightSplit */
    float RearLeftRightSplit; /* Ofs: 0xC Size: 0x4 FloatProperty PhysXVehicles.VehicleDifferential4WData.RearLeftRightSplit */
    float CentreBias; /* Ofs: 0x10 Size: 0x4 FloatProperty PhysXVehicles.VehicleDifferential4WData.CentreBias */
    float FrontBias; /* Ofs: 0x14 Size: 0x4 FloatProperty PhysXVehicles.VehicleDifferential4WData.FrontBias */
    float RearBias; /* Ofs: 0x18 Size: 0x4 FloatProperty PhysXVehicles.VehicleDifferential4WData.RearBias */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVehicleDifferential4WData = sizeof(FVehicleDifferential4WData); // 28
    static_assert(sizeof(FVehicleDifferential4WData) == 0x1C, "Size of FVehicleDifferential4WData is not correct.");
	auto constexpr FVehicleDifferential4WData_DifferentialType_Offset = offsetof(FVehicleDifferential4WData, DifferentialType);
	static_assert(FVehicleDifferential4WData_DifferentialType_Offset == 0x0, "FVehicleDifferential4WData::DifferentialType offset is not 0");
	auto constexpr FVehicleDifferential4WData_FrontRearSplit_Offset = offsetof(FVehicleDifferential4WData, FrontRearSplit);
	static_assert(FVehicleDifferential4WData_FrontRearSplit_Offset == 0x4, "FVehicleDifferential4WData::FrontRearSplit offset is not 4");
	auto constexpr FVehicleDifferential4WData_FrontLeftRightSplit_Offset = offsetof(FVehicleDifferential4WData, FrontLeftRightSplit);
	static_assert(FVehicleDifferential4WData_FrontLeftRightSplit_Offset == 0x8, "FVehicleDifferential4WData::FrontLeftRightSplit offset is not 8");
	auto constexpr FVehicleDifferential4WData_RearLeftRightSplit_Offset = offsetof(FVehicleDifferential4WData, RearLeftRightSplit);
	static_assert(FVehicleDifferential4WData_RearLeftRightSplit_Offset == 0xc, "FVehicleDifferential4WData::RearLeftRightSplit offset is not c");
	auto constexpr FVehicleDifferential4WData_CentreBias_Offset = offsetof(FVehicleDifferential4WData, CentreBias);
	static_assert(FVehicleDifferential4WData_CentreBias_Offset == 0x10, "FVehicleDifferential4WData::CentreBias offset is not 10");
	auto constexpr FVehicleDifferential4WData_FrontBias_Offset = offsetof(FVehicleDifferential4WData, FrontBias);
	static_assert(FVehicleDifferential4WData_FrontBias_Offset == 0x14, "FVehicleDifferential4WData::FrontBias offset is not 14");
	auto constexpr FVehicleDifferential4WData_RearBias_Offset = offsetof(FVehicleDifferential4WData, RearBias);
	static_assert(FVehicleDifferential4WData_RearBias_Offset == 0x18, "FVehicleDifferential4WData::RearBias offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
