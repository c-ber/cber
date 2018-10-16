#pragma once
#include "UPawnMovementComponent.hpp"
#include "FVector.hpp"
#include "FNavAvoidanceMask.hpp"
#include "FReplicatedVehicleState.hpp"
#include "FVehicleInputRate.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWheeledVehicleMovementComponent // Size: 0x3E0
	: public UPawnMovementComponent // Size: 0x270
{
private:
	typedef UWheeledVehicleMovementComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1989); // id32("Class PhysXVehicles.WheeledVehicleMovementComponent")
		return ptr;
	}
	uint8_t UnknownData270[0x8];
	uint8_t boolField278;
	uint8_t UnknownData279[0x7];
	TArray<bool> TirePunctured; /* Ofs: 0x280 Size: 0x10 - ArrayProperty PhysXVehicles.WheeledVehicleMovementComponent.TirePunctured */
	TArray<struct FWheelSetup> WheelSetups; /* Ofs: 0x290 Size: 0x10 - ArrayProperty PhysXVehicles.WheeledVehicleMovementComponent.WheelSetups */
	float Mass; /* Ofs: 0x2A0 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.Mass */
	float DragCoefficient; /* Ofs: 0x2A4 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.DragCoefficient */
	float ChassisWidth; /* Ofs: 0x2A8 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.ChassisWidth */
	float ChassisHeight; /* Ofs: 0x2AC Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.ChassisHeight */
	uint8_t boolField2B0;
	uint8_t UnknownData2B1[0x3];
	float DragArea; /* Ofs: 0x2B4 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.DragArea */
	float EstimatedMaxEngineSpeed; /* Ofs: 0x2B8 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.EstimatedMaxEngineSpeed */
	float MaxEngineRPM; /* Ofs: 0x2BC Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.MaxEngineRPM */
	float DebugDragMagnitude; /* Ofs: 0x2C0 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.DebugDragMagnitude */
	FVector InertiaTensorScale; /* Ofs: 0x2C4 Size: 0xC - StructProperty PhysXVehicles.WheeledVehicleMovementComponent.InertiaTensorScale */
	float MinNormalizedTireLoad; /* Ofs: 0x2D0 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.MinNormalizedTireLoad */
	float MinNormalizedTireLoadFiltered; /* Ofs: 0x2D4 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.MinNormalizedTireLoadFiltered */
	float MaxNormalizedTireLoad; /* Ofs: 0x2D8 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.MaxNormalizedTireLoad */
	float MaxNormalizedTireLoadFiltered; /* Ofs: 0x2DC Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.MaxNormalizedTireLoadFiltered */
	float ThresholdLongitudinalSpeed; /* Ofs: 0x2E0 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.ThresholdLongitudinalSpeed */
	int32_t LowForwardSpeedSubStepCount; /* Ofs: 0x2E4 Size: 0x4 - IntProperty PhysXVehicles.WheeledVehicleMovementComponent.LowForwardSpeedSubStepCount */
	int32_t HighForwardSpeedSubStepCount; /* Ofs: 0x2E8 Size: 0x4 - IntProperty PhysXVehicles.WheeledVehicleMovementComponent.HighForwardSpeedSubStepCount */
	uint8_t UnknownData2EC[0x4];
	TArray<ExternalPtr<struct UVehicleWheel>> Wheels; /* Ofs: 0x2F0 Size: 0x10 - ArrayProperty PhysXVehicles.WheeledVehicleMovementComponent.Wheels */
	uint8_t UnknownData300[0x18];
	uint8_t boolField318;
	uint8_t UnknownData319[0x3];
	float RVOAvoidanceRadius; /* Ofs: 0x31C Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.RVOAvoidanceRadius */
	float RVOAvoidanceHeight; /* Ofs: 0x320 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.RVOAvoidanceHeight */
	float AvoidanceConsiderationRadius; /* Ofs: 0x324 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.AvoidanceConsiderationRadius */
	float RVOSteeringStep; /* Ofs: 0x328 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.RVOSteeringStep */
	float RVOThrottleStep; /* Ofs: 0x32C Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.RVOThrottleStep */
	int32_t AvoidanceUID; /* Ofs: 0x330 Size: 0x4 - IntProperty PhysXVehicles.WheeledVehicleMovementComponent.AvoidanceUID */
	FNavAvoidanceMask AvoidanceGroup; /* Ofs: 0x334 Size: 0x4 - StructProperty PhysXVehicles.WheeledVehicleMovementComponent.AvoidanceGroup */
	FNavAvoidanceMask GroupsToAvoid; /* Ofs: 0x338 Size: 0x4 - StructProperty PhysXVehicles.WheeledVehicleMovementComponent.GroupsToAvoid */
	FNavAvoidanceMask GroupsToIgnore; /* Ofs: 0x33C Size: 0x4 - StructProperty PhysXVehicles.WheeledVehicleMovementComponent.GroupsToIgnore */
	float AvoidanceWeight; /* Ofs: 0x340 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.AvoidanceWeight */
	FVector PendingLaunchVelocity; /* Ofs: 0x344 Size: 0xC - StructProperty PhysXVehicles.WheeledVehicleMovementComponent.PendingLaunchVelocity */
	FReplicatedVehicleState ReplicatedState; /* Ofs: 0x350 Size: 0x14 - StructProperty PhysXVehicles.WheeledVehicleMovementComponent.ReplicatedState */
	uint8_t UnknownData364[0x4];
	float RawSteeringInput; /* Ofs: 0x368 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.RawSteeringInput */
	float RawThrottleInput; /* Ofs: 0x36C Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.RawThrottleInput */
	float RawBrakeInput; /* Ofs: 0x370 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.RawBrakeInput */
	uint8_t boolField374;
	uint8_t UnknownData375[0x3];
	float SteeringInput; /* Ofs: 0x378 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.SteeringInput */
	float ThrottleInput; /* Ofs: 0x37C Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.ThrottleInput */
	float BrakeInput; /* Ofs: 0x380 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.BrakeInput */
	float HandbrakeInput; /* Ofs: 0x384 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.HandbrakeInput */
	float IdleBrakeInput; /* Ofs: 0x388 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.IdleBrakeInput */
	float StopThreshold; /* Ofs: 0x38C Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.StopThreshold */
	float WrongDirectionThreshold; /* Ofs: 0x390 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent.WrongDirectionThreshold */
	FVehicleInputRate ThrottleInputRate; /* Ofs: 0x394 Size: 0x8 - StructProperty PhysXVehicles.WheeledVehicleMovementComponent.ThrottleInputRate */
	FVehicleInputRate BrakeInputRate; /* Ofs: 0x39C Size: 0x8 - StructProperty PhysXVehicles.WheeledVehicleMovementComponent.BrakeInputRate */
	FVehicleInputRate HandbrakeInputRate; /* Ofs: 0x3A4 Size: 0x8 - StructProperty PhysXVehicles.WheeledVehicleMovementComponent.HandbrakeInputRate */
	FVehicleInputRate SteeringInputRate; /* Ofs: 0x3AC Size: 0x8 - StructProperty PhysXVehicles.WheeledVehicleMovementComponent.SteeringInputRate */
	uint8_t boolField3B4;
	uint8_t UnknownData3B5[0x2B];


	inline bool bDeprecatedSpringOffsetMode()
	{
		return boolField278& 0x1;
	}
	inline bool SetbDeprecatedSpringOffsetMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x278, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTirePunctured(t_structHelper inst, TArray<bool> value) { inst.WriteOffset(0x280, value); }
	inline bool SetWheelSetups(t_structHelper inst, TArray<struct FWheelSetup> value) { inst.WriteOffset(0x290, value); }
	inline bool SetMass(t_structHelper inst, float value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetDragCoefficient(t_structHelper inst, float value) { inst.WriteOffset(0x2A4, value); }
	inline bool SetChassisWidth(t_structHelper inst, float value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetChassisHeight(t_structHelper inst, float value) { inst.WriteOffset(0x2AC, value); }
	inline bool bReverseAsBrake()
	{
		return boolField2B0& 0x1;
	}
	inline bool SetbReverseAsBrake(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDragArea(t_structHelper inst, float value) { inst.WriteOffset(0x2B4, value); }
	inline bool SetEstimatedMaxEngineSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetMaxEngineRPM(t_structHelper inst, float value) { inst.WriteOffset(0x2BC, value); }
	inline bool SetDebugDragMagnitude(t_structHelper inst, float value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetInertiaTensorScale(t_structHelper inst, FVector value) { inst.WriteOffset(0x2C4, value); }
	inline bool SetMinNormalizedTireLoad(t_structHelper inst, float value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetMinNormalizedTireLoadFiltered(t_structHelper inst, float value) { inst.WriteOffset(0x2D4, value); }
	inline bool SetMaxNormalizedTireLoad(t_structHelper inst, float value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetMaxNormalizedTireLoadFiltered(t_structHelper inst, float value) { inst.WriteOffset(0x2DC, value); }
	inline bool SetThresholdLongitudinalSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetLowForwardSpeedSubStepCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2E4, value); }
	inline bool SetHighForwardSpeedSubStepCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetWheels(t_structHelper inst, TArray<ExternalPtr<struct UVehicleWheel>> value) { inst.WriteOffset(0x2F0, value); }
	inline bool bUseRVOAvoidance()
	{
		return boolField318& 0x1;
	}
	inline bool SetbUseRVOAvoidance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x318, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRVOAvoidanceRadius(t_structHelper inst, float value) { inst.WriteOffset(0x31C, value); }
	inline bool SetRVOAvoidanceHeight(t_structHelper inst, float value) { inst.WriteOffset(0x320, value); }
	inline bool SetAvoidanceConsiderationRadius(t_structHelper inst, float value) { inst.WriteOffset(0x324, value); }
	inline bool SetRVOSteeringStep(t_structHelper inst, float value) { inst.WriteOffset(0x328, value); }
	inline bool SetRVOThrottleStep(t_structHelper inst, float value) { inst.WriteOffset(0x32C, value); }
	inline bool SetAvoidanceUID(t_structHelper inst, int32_t value) { inst.WriteOffset(0x330, value); }
	inline bool SetAvoidanceGroup(t_structHelper inst, FNavAvoidanceMask value) { inst.WriteOffset(0x334, value); }
	inline bool SetGroupsToAvoid(t_structHelper inst, FNavAvoidanceMask value) { inst.WriteOffset(0x338, value); }
	inline bool SetGroupsToIgnore(t_structHelper inst, FNavAvoidanceMask value) { inst.WriteOffset(0x33C, value); }
	inline bool SetAvoidanceWeight(t_structHelper inst, float value) { inst.WriteOffset(0x340, value); }
	inline bool SetPendingLaunchVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x344, value); }
	inline bool SetReplicatedState(t_structHelper inst, FReplicatedVehicleState value) { inst.WriteOffset(0x350, value); }
	inline bool SetRawSteeringInput(t_structHelper inst, float value) { inst.WriteOffset(0x368, value); }
	inline bool SetRawThrottleInput(t_structHelper inst, float value) { inst.WriteOffset(0x36C, value); }
	inline bool SetRawBrakeInput(t_structHelper inst, float value) { inst.WriteOffset(0x370, value); }
	inline bool bRawHandbrakeInput()
	{
		return boolField374& 0x1;
	}
	inline bool SetbRawHandbrakeInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x374, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRawGearUpInput()
	{
		return boolField374& 0x2;
	}
	inline bool SetbRawGearUpInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x374, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bRawGearDownInput()
	{
		return boolField374& 0x4;
	}
	inline bool SetbRawGearDownInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x374, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetSteeringInput(t_structHelper inst, float value) { inst.WriteOffset(0x378, value); }
	inline bool SetThrottleInput(t_structHelper inst, float value) { inst.WriteOffset(0x37C, value); }
	inline bool SetBrakeInput(t_structHelper inst, float value) { inst.WriteOffset(0x380, value); }
	inline bool SetHandbrakeInput(t_structHelper inst, float value) { inst.WriteOffset(0x384, value); }
	inline bool SetIdleBrakeInput(t_structHelper inst, float value) { inst.WriteOffset(0x388, value); }
	inline bool SetStopThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x38C, value); }
	inline bool SetWrongDirectionThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x390, value); }
	inline bool SetThrottleInputRate(t_structHelper inst, FVehicleInputRate value) { inst.WriteOffset(0x394, value); }
	inline bool SetBrakeInputRate(t_structHelper inst, FVehicleInputRate value) { inst.WriteOffset(0x39C, value); }
	inline bool SetHandbrakeInputRate(t_structHelper inst, FVehicleInputRate value) { inst.WriteOffset(0x3A4, value); }
	inline bool SetSteeringInputRate(t_structHelper inst, FVehicleInputRate value) { inst.WriteOffset(0x3AC, value); }
	inline bool bWasAvoidanceUpdated()
	{
		return boolField3B4& 0x1;
	}
	inline bool SetbWasAvoidanceUpdated(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3B4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWheeledVehicleMovementComponent = sizeof(UWheeledVehicleMovementComponent); // 992
    static_assert(sizeof(UWheeledVehicleMovementComponent) == 0x3E0, "Size of UWheeledVehicleMovementComponent is not correct.");
	auto constexpr UWheeledVehicleMovementComponent_boolField278_Offset = offsetof(UWheeledVehicleMovementComponent, boolField278);
	static_assert(UWheeledVehicleMovementComponent_boolField278_Offset == 0x278, "UWheeledVehicleMovementComponent::boolField278 offset is not 278");
	auto constexpr UWheeledVehicleMovementComponent_TirePunctured_Offset = offsetof(UWheeledVehicleMovementComponent, TirePunctured);
	static_assert(UWheeledVehicleMovementComponent_TirePunctured_Offset == 0x280, "UWheeledVehicleMovementComponent::TirePunctured offset is not 280");
	auto constexpr UWheeledVehicleMovementComponent_WheelSetups_Offset = offsetof(UWheeledVehicleMovementComponent, WheelSetups);
	static_assert(UWheeledVehicleMovementComponent_WheelSetups_Offset == 0x290, "UWheeledVehicleMovementComponent::WheelSetups offset is not 290");
	auto constexpr UWheeledVehicleMovementComponent_Mass_Offset = offsetof(UWheeledVehicleMovementComponent, Mass);
	static_assert(UWheeledVehicleMovementComponent_Mass_Offset == 0x2a0, "UWheeledVehicleMovementComponent::Mass offset is not 2a0");
	auto constexpr UWheeledVehicleMovementComponent_DragCoefficient_Offset = offsetof(UWheeledVehicleMovementComponent, DragCoefficient);
	static_assert(UWheeledVehicleMovementComponent_DragCoefficient_Offset == 0x2a4, "UWheeledVehicleMovementComponent::DragCoefficient offset is not 2a4");
	auto constexpr UWheeledVehicleMovementComponent_ChassisWidth_Offset = offsetof(UWheeledVehicleMovementComponent, ChassisWidth);
	static_assert(UWheeledVehicleMovementComponent_ChassisWidth_Offset == 0x2a8, "UWheeledVehicleMovementComponent::ChassisWidth offset is not 2a8");
	auto constexpr UWheeledVehicleMovementComponent_ChassisHeight_Offset = offsetof(UWheeledVehicleMovementComponent, ChassisHeight);
	static_assert(UWheeledVehicleMovementComponent_ChassisHeight_Offset == 0x2ac, "UWheeledVehicleMovementComponent::ChassisHeight offset is not 2ac");
	auto constexpr UWheeledVehicleMovementComponent_boolField2B0_Offset = offsetof(UWheeledVehicleMovementComponent, boolField2B0);
	static_assert(UWheeledVehicleMovementComponent_boolField2B0_Offset == 0x2b0, "UWheeledVehicleMovementComponent::boolField2B0 offset is not 2b0");
	auto constexpr UWheeledVehicleMovementComponent_DragArea_Offset = offsetof(UWheeledVehicleMovementComponent, DragArea);
	static_assert(UWheeledVehicleMovementComponent_DragArea_Offset == 0x2b4, "UWheeledVehicleMovementComponent::DragArea offset is not 2b4");
	auto constexpr UWheeledVehicleMovementComponent_EstimatedMaxEngineSpeed_Offset = offsetof(UWheeledVehicleMovementComponent, EstimatedMaxEngineSpeed);
	static_assert(UWheeledVehicleMovementComponent_EstimatedMaxEngineSpeed_Offset == 0x2b8, "UWheeledVehicleMovementComponent::EstimatedMaxEngineSpeed offset is not 2b8");
	auto constexpr UWheeledVehicleMovementComponent_MaxEngineRPM_Offset = offsetof(UWheeledVehicleMovementComponent, MaxEngineRPM);
	static_assert(UWheeledVehicleMovementComponent_MaxEngineRPM_Offset == 0x2bc, "UWheeledVehicleMovementComponent::MaxEngineRPM offset is not 2bc");
	auto constexpr UWheeledVehicleMovementComponent_DebugDragMagnitude_Offset = offsetof(UWheeledVehicleMovementComponent, DebugDragMagnitude);
	static_assert(UWheeledVehicleMovementComponent_DebugDragMagnitude_Offset == 0x2c0, "UWheeledVehicleMovementComponent::DebugDragMagnitude offset is not 2c0");
	auto constexpr UWheeledVehicleMovementComponent_InertiaTensorScale_Offset = offsetof(UWheeledVehicleMovementComponent, InertiaTensorScale);
	static_assert(UWheeledVehicleMovementComponent_InertiaTensorScale_Offset == 0x2c4, "UWheeledVehicleMovementComponent::InertiaTensorScale offset is not 2c4");
	auto constexpr UWheeledVehicleMovementComponent_MinNormalizedTireLoad_Offset = offsetof(UWheeledVehicleMovementComponent, MinNormalizedTireLoad);
	static_assert(UWheeledVehicleMovementComponent_MinNormalizedTireLoad_Offset == 0x2d0, "UWheeledVehicleMovementComponent::MinNormalizedTireLoad offset is not 2d0");
	auto constexpr UWheeledVehicleMovementComponent_MinNormalizedTireLoadFiltered_Offset = offsetof(UWheeledVehicleMovementComponent, MinNormalizedTireLoadFiltered);
	static_assert(UWheeledVehicleMovementComponent_MinNormalizedTireLoadFiltered_Offset == 0x2d4, "UWheeledVehicleMovementComponent::MinNormalizedTireLoadFiltered offset is not 2d4");
	auto constexpr UWheeledVehicleMovementComponent_MaxNormalizedTireLoad_Offset = offsetof(UWheeledVehicleMovementComponent, MaxNormalizedTireLoad);
	static_assert(UWheeledVehicleMovementComponent_MaxNormalizedTireLoad_Offset == 0x2d8, "UWheeledVehicleMovementComponent::MaxNormalizedTireLoad offset is not 2d8");
	auto constexpr UWheeledVehicleMovementComponent_MaxNormalizedTireLoadFiltered_Offset = offsetof(UWheeledVehicleMovementComponent, MaxNormalizedTireLoadFiltered);
	static_assert(UWheeledVehicleMovementComponent_MaxNormalizedTireLoadFiltered_Offset == 0x2dc, "UWheeledVehicleMovementComponent::MaxNormalizedTireLoadFiltered offset is not 2dc");
	auto constexpr UWheeledVehicleMovementComponent_ThresholdLongitudinalSpeed_Offset = offsetof(UWheeledVehicleMovementComponent, ThresholdLongitudinalSpeed);
	static_assert(UWheeledVehicleMovementComponent_ThresholdLongitudinalSpeed_Offset == 0x2e0, "UWheeledVehicleMovementComponent::ThresholdLongitudinalSpeed offset is not 2e0");
	auto constexpr UWheeledVehicleMovementComponent_LowForwardSpeedSubStepCount_Offset = offsetof(UWheeledVehicleMovementComponent, LowForwardSpeedSubStepCount);
	static_assert(UWheeledVehicleMovementComponent_LowForwardSpeedSubStepCount_Offset == 0x2e4, "UWheeledVehicleMovementComponent::LowForwardSpeedSubStepCount offset is not 2e4");
	auto constexpr UWheeledVehicleMovementComponent_HighForwardSpeedSubStepCount_Offset = offsetof(UWheeledVehicleMovementComponent, HighForwardSpeedSubStepCount);
	static_assert(UWheeledVehicleMovementComponent_HighForwardSpeedSubStepCount_Offset == 0x2e8, "UWheeledVehicleMovementComponent::HighForwardSpeedSubStepCount offset is not 2e8");
	auto constexpr UWheeledVehicleMovementComponent_Wheels_Offset = offsetof(UWheeledVehicleMovementComponent, Wheels);
	static_assert(UWheeledVehicleMovementComponent_Wheels_Offset == 0x2f0, "UWheeledVehicleMovementComponent::Wheels offset is not 2f0");
	auto constexpr UWheeledVehicleMovementComponent_boolField318_Offset = offsetof(UWheeledVehicleMovementComponent, boolField318);
	static_assert(UWheeledVehicleMovementComponent_boolField318_Offset == 0x318, "UWheeledVehicleMovementComponent::boolField318 offset is not 318");
	auto constexpr UWheeledVehicleMovementComponent_RVOAvoidanceRadius_Offset = offsetof(UWheeledVehicleMovementComponent, RVOAvoidanceRadius);
	static_assert(UWheeledVehicleMovementComponent_RVOAvoidanceRadius_Offset == 0x31c, "UWheeledVehicleMovementComponent::RVOAvoidanceRadius offset is not 31c");
	auto constexpr UWheeledVehicleMovementComponent_RVOAvoidanceHeight_Offset = offsetof(UWheeledVehicleMovementComponent, RVOAvoidanceHeight);
	static_assert(UWheeledVehicleMovementComponent_RVOAvoidanceHeight_Offset == 0x320, "UWheeledVehicleMovementComponent::RVOAvoidanceHeight offset is not 320");
	auto constexpr UWheeledVehicleMovementComponent_AvoidanceConsiderationRadius_Offset = offsetof(UWheeledVehicleMovementComponent, AvoidanceConsiderationRadius);
	static_assert(UWheeledVehicleMovementComponent_AvoidanceConsiderationRadius_Offset == 0x324, "UWheeledVehicleMovementComponent::AvoidanceConsiderationRadius offset is not 324");
	auto constexpr UWheeledVehicleMovementComponent_RVOSteeringStep_Offset = offsetof(UWheeledVehicleMovementComponent, RVOSteeringStep);
	static_assert(UWheeledVehicleMovementComponent_RVOSteeringStep_Offset == 0x328, "UWheeledVehicleMovementComponent::RVOSteeringStep offset is not 328");
	auto constexpr UWheeledVehicleMovementComponent_RVOThrottleStep_Offset = offsetof(UWheeledVehicleMovementComponent, RVOThrottleStep);
	static_assert(UWheeledVehicleMovementComponent_RVOThrottleStep_Offset == 0x32c, "UWheeledVehicleMovementComponent::RVOThrottleStep offset is not 32c");
	auto constexpr UWheeledVehicleMovementComponent_AvoidanceUID_Offset = offsetof(UWheeledVehicleMovementComponent, AvoidanceUID);
	static_assert(UWheeledVehicleMovementComponent_AvoidanceUID_Offset == 0x330, "UWheeledVehicleMovementComponent::AvoidanceUID offset is not 330");
	auto constexpr UWheeledVehicleMovementComponent_AvoidanceGroup_Offset = offsetof(UWheeledVehicleMovementComponent, AvoidanceGroup);
	static_assert(UWheeledVehicleMovementComponent_AvoidanceGroup_Offset == 0x334, "UWheeledVehicleMovementComponent::AvoidanceGroup offset is not 334");
	auto constexpr UWheeledVehicleMovementComponent_GroupsToAvoid_Offset = offsetof(UWheeledVehicleMovementComponent, GroupsToAvoid);
	static_assert(UWheeledVehicleMovementComponent_GroupsToAvoid_Offset == 0x338, "UWheeledVehicleMovementComponent::GroupsToAvoid offset is not 338");
	auto constexpr UWheeledVehicleMovementComponent_GroupsToIgnore_Offset = offsetof(UWheeledVehicleMovementComponent, GroupsToIgnore);
	static_assert(UWheeledVehicleMovementComponent_GroupsToIgnore_Offset == 0x33c, "UWheeledVehicleMovementComponent::GroupsToIgnore offset is not 33c");
	auto constexpr UWheeledVehicleMovementComponent_AvoidanceWeight_Offset = offsetof(UWheeledVehicleMovementComponent, AvoidanceWeight);
	static_assert(UWheeledVehicleMovementComponent_AvoidanceWeight_Offset == 0x340, "UWheeledVehicleMovementComponent::AvoidanceWeight offset is not 340");
	auto constexpr UWheeledVehicleMovementComponent_PendingLaunchVelocity_Offset = offsetof(UWheeledVehicleMovementComponent, PendingLaunchVelocity);
	static_assert(UWheeledVehicleMovementComponent_PendingLaunchVelocity_Offset == 0x344, "UWheeledVehicleMovementComponent::PendingLaunchVelocity offset is not 344");
	auto constexpr UWheeledVehicleMovementComponent_ReplicatedState_Offset = offsetof(UWheeledVehicleMovementComponent, ReplicatedState);
	static_assert(UWheeledVehicleMovementComponent_ReplicatedState_Offset == 0x350, "UWheeledVehicleMovementComponent::ReplicatedState offset is not 350");
	auto constexpr UWheeledVehicleMovementComponent_RawSteeringInput_Offset = offsetof(UWheeledVehicleMovementComponent, RawSteeringInput);
	static_assert(UWheeledVehicleMovementComponent_RawSteeringInput_Offset == 0x368, "UWheeledVehicleMovementComponent::RawSteeringInput offset is not 368");
	auto constexpr UWheeledVehicleMovementComponent_RawThrottleInput_Offset = offsetof(UWheeledVehicleMovementComponent, RawThrottleInput);
	static_assert(UWheeledVehicleMovementComponent_RawThrottleInput_Offset == 0x36c, "UWheeledVehicleMovementComponent::RawThrottleInput offset is not 36c");
	auto constexpr UWheeledVehicleMovementComponent_RawBrakeInput_Offset = offsetof(UWheeledVehicleMovementComponent, RawBrakeInput);
	static_assert(UWheeledVehicleMovementComponent_RawBrakeInput_Offset == 0x370, "UWheeledVehicleMovementComponent::RawBrakeInput offset is not 370");
	auto constexpr UWheeledVehicleMovementComponent_boolField374_Offset = offsetof(UWheeledVehicleMovementComponent, boolField374);
	static_assert(UWheeledVehicleMovementComponent_boolField374_Offset == 0x374, "UWheeledVehicleMovementComponent::boolField374 offset is not 374");
	auto constexpr UWheeledVehicleMovementComponent_SteeringInput_Offset = offsetof(UWheeledVehicleMovementComponent, SteeringInput);
	static_assert(UWheeledVehicleMovementComponent_SteeringInput_Offset == 0x378, "UWheeledVehicleMovementComponent::SteeringInput offset is not 378");
	auto constexpr UWheeledVehicleMovementComponent_ThrottleInput_Offset = offsetof(UWheeledVehicleMovementComponent, ThrottleInput);
	static_assert(UWheeledVehicleMovementComponent_ThrottleInput_Offset == 0x37c, "UWheeledVehicleMovementComponent::ThrottleInput offset is not 37c");
	auto constexpr UWheeledVehicleMovementComponent_BrakeInput_Offset = offsetof(UWheeledVehicleMovementComponent, BrakeInput);
	static_assert(UWheeledVehicleMovementComponent_BrakeInput_Offset == 0x380, "UWheeledVehicleMovementComponent::BrakeInput offset is not 380");
	auto constexpr UWheeledVehicleMovementComponent_HandbrakeInput_Offset = offsetof(UWheeledVehicleMovementComponent, HandbrakeInput);
	static_assert(UWheeledVehicleMovementComponent_HandbrakeInput_Offset == 0x384, "UWheeledVehicleMovementComponent::HandbrakeInput offset is not 384");
	auto constexpr UWheeledVehicleMovementComponent_IdleBrakeInput_Offset = offsetof(UWheeledVehicleMovementComponent, IdleBrakeInput);
	static_assert(UWheeledVehicleMovementComponent_IdleBrakeInput_Offset == 0x388, "UWheeledVehicleMovementComponent::IdleBrakeInput offset is not 388");
	auto constexpr UWheeledVehicleMovementComponent_StopThreshold_Offset = offsetof(UWheeledVehicleMovementComponent, StopThreshold);
	static_assert(UWheeledVehicleMovementComponent_StopThreshold_Offset == 0x38c, "UWheeledVehicleMovementComponent::StopThreshold offset is not 38c");
	auto constexpr UWheeledVehicleMovementComponent_WrongDirectionThreshold_Offset = offsetof(UWheeledVehicleMovementComponent, WrongDirectionThreshold);
	static_assert(UWheeledVehicleMovementComponent_WrongDirectionThreshold_Offset == 0x390, "UWheeledVehicleMovementComponent::WrongDirectionThreshold offset is not 390");
	auto constexpr UWheeledVehicleMovementComponent_ThrottleInputRate_Offset = offsetof(UWheeledVehicleMovementComponent, ThrottleInputRate);
	static_assert(UWheeledVehicleMovementComponent_ThrottleInputRate_Offset == 0x394, "UWheeledVehicleMovementComponent::ThrottleInputRate offset is not 394");
	auto constexpr UWheeledVehicleMovementComponent_BrakeInputRate_Offset = offsetof(UWheeledVehicleMovementComponent, BrakeInputRate);
	static_assert(UWheeledVehicleMovementComponent_BrakeInputRate_Offset == 0x39c, "UWheeledVehicleMovementComponent::BrakeInputRate offset is not 39c");
	auto constexpr UWheeledVehicleMovementComponent_HandbrakeInputRate_Offset = offsetof(UWheeledVehicleMovementComponent, HandbrakeInputRate);
	static_assert(UWheeledVehicleMovementComponent_HandbrakeInputRate_Offset == 0x3a4, "UWheeledVehicleMovementComponent::HandbrakeInputRate offset is not 3a4");
	auto constexpr UWheeledVehicleMovementComponent_SteeringInputRate_Offset = offsetof(UWheeledVehicleMovementComponent, SteeringInputRate);
	static_assert(UWheeledVehicleMovementComponent_SteeringInputRate_Offset == 0x3ac, "UWheeledVehicleMovementComponent::SteeringInputRate offset is not 3ac");
	auto constexpr UWheeledVehicleMovementComponent_boolField3B4_Offset = offsetof(UWheeledVehicleMovementComponent, boolField3B4);
	static_assert(UWheeledVehicleMovementComponent_boolField3B4_Offset == 0x3b4, "UWheeledVehicleMovementComponent::boolField3B4 offset is not 3b4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
