#pragma once
#include "FRuntimeFloatCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVehicleEngineData // Size: 0x90
{
public:
    FRuntimeFloatCurve TorqueCurve; /* Ofs: 0x0 Size: 0x78 StructProperty PhysXVehicles.VehicleEngineData.TorqueCurve */
    float MaxRPM; /* Ofs: 0x78 Size: 0x4 FloatProperty PhysXVehicles.VehicleEngineData.MaxRPM */
    float MOI; /* Ofs: 0x7C Size: 0x4 FloatProperty PhysXVehicles.VehicleEngineData.MOI */
    float DampingRateFullThrottle; /* Ofs: 0x80 Size: 0x4 FloatProperty PhysXVehicles.VehicleEngineData.DampingRateFullThrottle */
    float DampingRateZeroThrottleClutchEngaged; /* Ofs: 0x84 Size: 0x4 FloatProperty PhysXVehicles.VehicleEngineData.DampingRateZeroThrottleClutchEngaged */
    float DampingRateZeroThrottleClutchDisengaged; /* Ofs: 0x88 Size: 0x4 FloatProperty PhysXVehicles.VehicleEngineData.DampingRateZeroThrottleClutchDisengaged */
    uint8_t UnknownData8C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVehicleEngineData = sizeof(FVehicleEngineData); // 144
    static_assert(sizeof(FVehicleEngineData) == 0x90, "Size of FVehicleEngineData is not correct.");
	auto constexpr FVehicleEngineData_TorqueCurve_Offset = offsetof(FVehicleEngineData, TorqueCurve);
	static_assert(FVehicleEngineData_TorqueCurve_Offset == 0x0, "FVehicleEngineData::TorqueCurve offset is not 0");
	auto constexpr FVehicleEngineData_MaxRPM_Offset = offsetof(FVehicleEngineData, MaxRPM);
	static_assert(FVehicleEngineData_MaxRPM_Offset == 0x78, "FVehicleEngineData::MaxRPM offset is not 78");
	auto constexpr FVehicleEngineData_MOI_Offset = offsetof(FVehicleEngineData, MOI);
	static_assert(FVehicleEngineData_MOI_Offset == 0x7c, "FVehicleEngineData::MOI offset is not 7c");
	auto constexpr FVehicleEngineData_DampingRateFullThrottle_Offset = offsetof(FVehicleEngineData, DampingRateFullThrottle);
	static_assert(FVehicleEngineData_DampingRateFullThrottle_Offset == 0x80, "FVehicleEngineData::DampingRateFullThrottle offset is not 80");
	auto constexpr FVehicleEngineData_DampingRateZeroThrottleClutchEngaged_Offset = offsetof(FVehicleEngineData, DampingRateZeroThrottleClutchEngaged);
	static_assert(FVehicleEngineData_DampingRateZeroThrottleClutchEngaged_Offset == 0x84, "FVehicleEngineData::DampingRateZeroThrottleClutchEngaged offset is not 84");
	auto constexpr FVehicleEngineData_DampingRateZeroThrottleClutchDisengaged_Offset = offsetof(FVehicleEngineData, DampingRateZeroThrottleClutchDisengaged);
	static_assert(FVehicleEngineData_DampingRateZeroThrottleClutchDisengaged_Offset == 0x88, "FVehicleEngineData::DampingRateZeroThrottleClutchDisengaged offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
