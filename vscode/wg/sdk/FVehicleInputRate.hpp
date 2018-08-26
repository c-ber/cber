#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVehicleInputRate // Size: 0x8
{
public:
    float RiseRate; /* Ofs: 0x0 Size: 0x4 FloatProperty PhysXVehicles.VehicleInputRate.RiseRate */
    float FallRate; /* Ofs: 0x4 Size: 0x4 FloatProperty PhysXVehicles.VehicleInputRate.FallRate */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVehicleInputRate = sizeof(FVehicleInputRate); // 8
    static_assert(sizeof(FVehicleInputRate) == 0x8, "Size of FVehicleInputRate is not correct.");
	auto constexpr FVehicleInputRate_RiseRate_Offset = offsetof(FVehicleInputRate, RiseRate);
	static_assert(FVehicleInputRate_RiseRate_Offset == 0x0, "FVehicleInputRate::RiseRate offset is not 0");
	auto constexpr FVehicleInputRate_FallRate_Offset = offsetof(FVehicleInputRate, FallRate);
	static_assert(FVehicleInputRate_FallRate_Offset == 0x4, "FVehicleInputRate::FallRate offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
