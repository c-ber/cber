#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPhysXWheelState // Size: 0x1C
{
public:
    float LongitudinalSlip; /* Ofs: 0x0 Size: 0x4 FloatProperty PhysXVehicles.PhysXWheelState.LongitudinalSlip */
    float LateralSlip; /* Ofs: 0x4 Size: 0x4 FloatProperty PhysXVehicles.PhysXWheelState.LateralSlip */
    float SuspSpringForce; /* Ofs: 0x8 Size: 0x4 FloatProperty PhysXVehicles.PhysXWheelState.SuspSpringForce */
    float TireFriction; /* Ofs: 0xC Size: 0x4 FloatProperty PhysXVehicles.PhysXWheelState.TireFriction */
    bool bInAir; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty PhysXVehicles.PhysXWheelState.bInAir */
    uint8_t UnknownData11[0x3];
    float RotationSpeed; /* Ofs: 0x14 Size: 0x4 FloatProperty PhysXVehicles.PhysXWheelState.RotationSpeed */
    float Radius; /* Ofs: 0x18 Size: 0x4 FloatProperty PhysXVehicles.PhysXWheelState.Radius */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPhysXWheelState = sizeof(FPhysXWheelState); // 28
    static_assert(sizeof(FPhysXWheelState) == 0x1C, "Size of FPhysXWheelState is not correct.");
	auto constexpr FPhysXWheelState_LongitudinalSlip_Offset = offsetof(FPhysXWheelState, LongitudinalSlip);
	static_assert(FPhysXWheelState_LongitudinalSlip_Offset == 0x0, "FPhysXWheelState::LongitudinalSlip offset is not 0");
	auto constexpr FPhysXWheelState_LateralSlip_Offset = offsetof(FPhysXWheelState, LateralSlip);
	static_assert(FPhysXWheelState_LateralSlip_Offset == 0x4, "FPhysXWheelState::LateralSlip offset is not 4");
	auto constexpr FPhysXWheelState_SuspSpringForce_Offset = offsetof(FPhysXWheelState, SuspSpringForce);
	static_assert(FPhysXWheelState_SuspSpringForce_Offset == 0x8, "FPhysXWheelState::SuspSpringForce offset is not 8");
	auto constexpr FPhysXWheelState_TireFriction_Offset = offsetof(FPhysXWheelState, TireFriction);
	static_assert(FPhysXWheelState_TireFriction_Offset == 0xc, "FPhysXWheelState::TireFriction offset is not c");
	auto constexpr FPhysXWheelState_RotationSpeed_Offset = offsetof(FPhysXWheelState, RotationSpeed);
	static_assert(FPhysXWheelState_RotationSpeed_Offset == 0x14, "FPhysXWheelState::RotationSpeed offset is not 14");
	auto constexpr FPhysXWheelState_Radius_Offset = offsetof(FPhysXWheelState, Radius);
	static_assert(FPhysXWheelState_Radius_Offset == 0x18, "FPhysXWheelState::Radius offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
