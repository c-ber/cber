#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReplicatedVehicleState // Size: 0x14
{
public:
    float SteeringInput; /* Ofs: 0x0 Size: 0x4 FloatProperty PhysXVehicles.ReplicatedVehicleState.SteeringInput */
    float ThrottleInput; /* Ofs: 0x4 Size: 0x4 FloatProperty PhysXVehicles.ReplicatedVehicleState.ThrottleInput */
    float BrakeInput; /* Ofs: 0x8 Size: 0x4 FloatProperty PhysXVehicles.ReplicatedVehicleState.BrakeInput */
    float HandbrakeInput; /* Ofs: 0xC Size: 0x4 FloatProperty PhysXVehicles.ReplicatedVehicleState.HandbrakeInput */
    int32_t CurrentGear; /* Ofs: 0x10 Size: 0x4 IntProperty PhysXVehicles.ReplicatedVehicleState.CurrentGear */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReplicatedVehicleState = sizeof(FReplicatedVehicleState); // 20
    static_assert(sizeof(FReplicatedVehicleState) == 0x14, "Size of FReplicatedVehicleState is not correct.");
	auto constexpr FReplicatedVehicleState_SteeringInput_Offset = offsetof(FReplicatedVehicleState, SteeringInput);
	static_assert(FReplicatedVehicleState_SteeringInput_Offset == 0x0, "FReplicatedVehicleState::SteeringInput offset is not 0");
	auto constexpr FReplicatedVehicleState_ThrottleInput_Offset = offsetof(FReplicatedVehicleState, ThrottleInput);
	static_assert(FReplicatedVehicleState_ThrottleInput_Offset == 0x4, "FReplicatedVehicleState::ThrottleInput offset is not 4");
	auto constexpr FReplicatedVehicleState_BrakeInput_Offset = offsetof(FReplicatedVehicleState, BrakeInput);
	static_assert(FReplicatedVehicleState_BrakeInput_Offset == 0x8, "FReplicatedVehicleState::BrakeInput offset is not 8");
	auto constexpr FReplicatedVehicleState_HandbrakeInput_Offset = offsetof(FReplicatedVehicleState, HandbrakeInput);
	static_assert(FReplicatedVehicleState_HandbrakeInput_Offset == 0xc, "FReplicatedVehicleState::HandbrakeInput offset is not c");
	auto constexpr FReplicatedVehicleState_CurrentGear_Offset = offsetof(FReplicatedVehicleState, CurrentGear);
	static_assert(FReplicatedVehicleState_CurrentGear_Offset == 0x10, "FReplicatedVehicleState::CurrentGear offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
