#pragma once
#include "UPawnMovementComponent.hpp"
#include "EMovementMode.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FQuat.hpp"
#include "ENetworkSmoothingMode.hpp"
#include "FFindFloorResult.hpp"
#include "EStanceMode.hpp"
#include "FNavAvoidanceMask.hpp"
#include "FCharacterMovementComponentPostPhysicsTickFunction.hpp"
#include "FRootMotionSourceGroup.hpp"
#include "FRootMotionMovementParams.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCharacterMovementComponent // Size: 0x880
	: public UPawnMovementComponent // Size: 0x270
{
private:
	typedef UCharacterMovementComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1312); // id32("Class Engine.CharacterMovementComponent")
		return ptr;
	}
	uint8_t UnknownData270[0x10];
	EncryptedExternalPtr<struct UCharacter> CharacterOwner; /* Ofs: 0x280 Size: 0x10 - EncryptedObjectProperty Engine.CharacterMovementComponent.CharacterOwner */
	uint8_t boolField290;
	uint8_t UnknownData291[0x3];
	float GravityScale; /* Ofs: 0x294 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.GravityScale */
	float MaxStepHeight; /* Ofs: 0x298 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxStepHeight */
	float JumpZVelocity; /* Ofs: 0x29C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.JumpZVelocity */
	float JumpOffJumpZFactor; /* Ofs: 0x2A0 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.JumpOffJumpZFactor */
	float WalkableFloorAngle; /* Ofs: 0x2A4 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.WalkableFloorAngle */
	float WalkableFloorZ; /* Ofs: 0x2A8 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.WalkableFloorZ */
	float ProneWalkableFloorAngle; /* Ofs: 0x2AC Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.ProneWalkableFloorAngle */
	float ProneWalkableFloorZ; /* Ofs: 0x2B0 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.ProneWalkableFloorZ */
	uint8_t UnknownData2B4[0x4];
	TEnumAsByte<enum EMovementMode> MovementMode; /* Ofs: 0x2B8 Size: 0x1 - ByteProperty Engine.CharacterMovementComponent.MovementMode */
	uint8_t CustomMovementMode; /* Ofs: 0x2B9 Size: 0x1 - ByteProperty Engine.CharacterMovementComponent.CustomMovementMode */
	uint8_t UnknownData2BA[0x26];
	float GroundFriction; /* Ofs: 0x2E0 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.GroundFriction */
	float MaxWalkSpeed; /* Ofs: 0x2E4 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxWalkSpeed */
	float MaxWalkSpeedCrouched; /* Ofs: 0x2E8 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxWalkSpeedCrouched */
	float MaxSwimSpeed; /* Ofs: 0x2EC Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxSwimSpeed */
	float MaxFlySpeed; /* Ofs: 0x2F0 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxFlySpeed */
	float MaxCustomMovementSpeed; /* Ofs: 0x2F4 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxCustomMovementSpeed */
	float MaxAcceleration; /* Ofs: 0x2F8 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxAcceleration */
	float BrakingFrictionFactor; /* Ofs: 0x2FC Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.BrakingFrictionFactor */
	float BrakingFriction; /* Ofs: 0x300 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.BrakingFriction */
	uint8_t boolField304;
	uint8_t UnknownData305[0x3];
	float BrakingDecelerationWalking; /* Ofs: 0x308 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.BrakingDecelerationWalking */
	float BrakingDecelerationFalling; /* Ofs: 0x30C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.BrakingDecelerationFalling */
	float BrakingDecelerationSwimming; /* Ofs: 0x310 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.BrakingDecelerationSwimming */
	float BrakingDecelerationFlying; /* Ofs: 0x314 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.BrakingDecelerationFlying */
	float AirControl; /* Ofs: 0x318 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.AirControl */
	float AirControlBoostMultiplier; /* Ofs: 0x31C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.AirControlBoostMultiplier */
	float AirControlBoostVelocityThreshold; /* Ofs: 0x320 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.AirControlBoostVelocityThreshold */
	float FallingLateralFriction; /* Ofs: 0x324 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.FallingLateralFriction */
	float CrouchedHalfHeight; /* Ofs: 0x328 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.CrouchedHalfHeight */
	float PronedHalfHeight; /* Ofs: 0x32C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.PronedHalfHeight */
	float PronedRadius; /* Ofs: 0x330 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.PronedRadius */
	float Buoyancy; /* Ofs: 0x334 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.Buoyancy */
	float PerchRadiusThreshold; /* Ofs: 0x338 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.PerchRadiusThreshold */
	float PerchAdditionalHeight; /* Ofs: 0x33C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.PerchAdditionalHeight */
	FRotator RotationRate; /* Ofs: 0x340 Size: 0xC - StructProperty Engine.CharacterMovementComponent.RotationRate */
	uint8_t boolField34C;
	uint8_t boolField34D;
	uint8_t UnknownData34E[0x2];
	ExternalPtr<struct USceneComponent> DeferredUpdatedMoveComponent; /* Ofs: 0x350 Size: 0x8 - ObjectProperty Engine.CharacterMovementComponent.DeferredUpdatedMoveComponent */
	float MaxOutOfWaterStepHeight; /* Ofs: 0x358 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxOutOfWaterStepHeight */
	float OutofWaterZ; /* Ofs: 0x35C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.OutofWaterZ */
	float Mass; /* Ofs: 0x360 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.Mass */
	uint8_t boolField364;
	uint8_t boolField365;
	uint8_t boolField366;
	uint8_t boolField367;
	uint8_t boolField368;
	uint8_t UnknownData369[0x3];
	float StandingDownwardForceScale; /* Ofs: 0x36C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.StandingDownwardForceScale */
	float InitialPushForceFactor; /* Ofs: 0x370 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.InitialPushForceFactor */
	float PushForceFactor; /* Ofs: 0x374 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.PushForceFactor */
	float PushForcePointZOffsetFactor; /* Ofs: 0x378 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.PushForcePointZOffsetFactor */
	float TouchForceFactor; /* Ofs: 0x37C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.TouchForceFactor */
	float MinTouchForce; /* Ofs: 0x380 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MinTouchForce */
	float MaxTouchForce; /* Ofs: 0x384 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxTouchForce */
	float RepulsionForce; /* Ofs: 0x388 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.RepulsionForce */
	uint8_t boolField38C;
	uint8_t UnknownData38D[0x3];
	float CrouchedSpeedMultiplier; /* Ofs: 0x390 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.CrouchedSpeedMultiplier */
	float UpperImpactNormalScale; /* Ofs: 0x394 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.UpperImpactNormalScale */
	FVector Acceleration; /* Ofs: 0x398 Size: 0xC - StructProperty Engine.CharacterMovementComponent.Acceleration */
	FVector LastUpdateLocation; /* Ofs: 0x3A4 Size: 0xC - StructProperty Engine.CharacterMovementComponent.LastUpdateLocation */
	FQuat LastUpdateRotation; /* Ofs: 0x3B0 Size: 0x10 - StructProperty Engine.CharacterMovementComponent.LastUpdateRotation */
	FVector LastUpdateVelocity; /* Ofs: 0x3C0 Size: 0xC - StructProperty Engine.CharacterMovementComponent.LastUpdateVelocity */
	float ServerLastTransformUpdateTimeStamp; /* Ofs: 0x3CC Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.ServerLastTransformUpdateTimeStamp */
	float ServerLastClientGoodMoveAckTime; /* Ofs: 0x3D0 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.ServerLastClientGoodMoveAckTime */
	float ServerLastClientAdjustmentTime; /* Ofs: 0x3D4 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.ServerLastClientAdjustmentTime */
	FVector PendingImpulseToApply; /* Ofs: 0x3D8 Size: 0xC - StructProperty Engine.CharacterMovementComponent.PendingImpulseToApply */
	FVector PendingForceToApply; /* Ofs: 0x3E4 Size: 0xC - StructProperty Engine.CharacterMovementComponent.PendingForceToApply */
	float AnalogInputModifier; /* Ofs: 0x3F0 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.AnalogInputModifier */
	uint8_t UnknownData3F4[0x8];
	float MaxSimulationTimeStep; /* Ofs: 0x3FC Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxSimulationTimeStep */
	int32_t MaxSimulationIterations; /* Ofs: 0x400 Size: 0x4 - IntProperty Engine.CharacterMovementComponent.MaxSimulationIterations */
	float MaxDepenetrationWithGeometry; /* Ofs: 0x404 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxDepenetrationWithGeometry */
	float MaxDepenetrationWithGeometryAsProxy; /* Ofs: 0x408 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxDepenetrationWithGeometryAsProxy */
	float MaxDepenetrationWithPawn; /* Ofs: 0x40C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxDepenetrationWithPawn */
	float MaxDepenetrationWithPawnAsProxy; /* Ofs: 0x410 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MaxDepenetrationWithPawnAsProxy */
	float NetworkSimulatedSmoothLocationTime; /* Ofs: 0x414 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NetworkSimulatedSmoothLocationTime */
	float NetworkSimulatedSmoothRotationTime; /* Ofs: 0x418 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NetworkSimulatedSmoothRotationTime */
	float ListenServerNetworkSimulatedSmoothLocationTime; /* Ofs: 0x41C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.ListenServerNetworkSimulatedSmoothLocationTime */
	float ListenServerNetworkSimulatedSmoothRotationTime; /* Ofs: 0x420 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.ListenServerNetworkSimulatedSmoothRotationTime */
	float NetProxyShrinkRadius; /* Ofs: 0x424 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NetProxyShrinkRadius */
	float NetProxyShrinkHalfHeight; /* Ofs: 0x428 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NetProxyShrinkHalfHeight */
	float NetworkMaxSmoothUpdateDistance; /* Ofs: 0x42C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NetworkMaxSmoothUpdateDistance */
	float NetworkNoSmoothUpdateDistance; /* Ofs: 0x430 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NetworkNoSmoothUpdateDistance */
	TEnumAsByte<enum ENetworkSmoothingMode> NetworkSmoothingMode; /* Ofs: 0x434 Size: 0x1 - EnumProperty Engine.CharacterMovementComponent.NetworkSmoothingMode */
	uint8_t UnknownData435[0x3];
	float NetworkMinTimeBetweenClientAckGoodMoves; /* Ofs: 0x438 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NetworkMinTimeBetweenClientAckGoodMoves */
	float NetworkMinTimeBetweenClientAdjustments; /* Ofs: 0x43C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NetworkMinTimeBetweenClientAdjustments */
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; /* Ofs: 0x440 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NetworkMinTimeBetweenClientAdjustmentsLargeCorrection */
	float NetworkLargeClientCorrectionDistance; /* Ofs: 0x444 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NetworkLargeClientCorrectionDistance */
	float LedgeCheckThreshold; /* Ofs: 0x448 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.LedgeCheckThreshold */
	float JumpOutOfWaterPitch; /* Ofs: 0x44C Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.JumpOutOfWaterPitch */
	FFindFloorResult CurrentFloor; /* Ofs: 0x450 Size: 0x98 - StructProperty Engine.CharacterMovementComponent.CurrentFloor */
	TEnumAsByte<enum EMovementMode> DefaultLandMovementMode; /* Ofs: 0x4E8 Size: 0x1 - ByteProperty Engine.CharacterMovementComponent.DefaultLandMovementMode */
	TEnumAsByte<enum EMovementMode> DefaultWaterMovementMode; /* Ofs: 0x4E9 Size: 0x1 - ByteProperty Engine.CharacterMovementComponent.DefaultWaterMovementMode */
	TEnumAsByte<enum EMovementMode> GroundMovementMode; /* Ofs: 0x4EA Size: 0x1 - ByteProperty Engine.CharacterMovementComponent.GroundMovementMode */
	uint8_t UnknownData4EB[0x1];
	uint8_t boolField4EC;
	uint8_t boolField4ED;
	uint8_t UnknownData4EE[0x2];
	TEnumAsByte<enum EStanceMode> StanceMode; /* Ofs: 0x4F0 Size: 0x1 - ByteProperty Engine.CharacterMovementComponent.StanceMode */
	TEnumAsByte<enum EStanceMode> WantsToStanceMode; /* Ofs: 0x4F1 Size: 0x1 - ByteProperty Engine.CharacterMovementComponent.WantsToStanceMode */
	uint8_t UnknownData4F2[0x2];
	uint8_t boolField4F4;
	uint8_t UnknownData4F5[0xF];
	uint8_t boolField504;
	uint8_t UnknownData505[0x13];
	float AvoidanceConsiderationRadius; /* Ofs: 0x518 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.AvoidanceConsiderationRadius */
	FVector RequestedVelocity; /* Ofs: 0x51C Size: 0xC - StructProperty Engine.CharacterMovementComponent.RequestedVelocity */
	int32_t AvoidanceUID; /* Ofs: 0x528 Size: 0x4 - IntProperty Engine.CharacterMovementComponent.AvoidanceUID */
	FNavAvoidanceMask AvoidanceGroup; /* Ofs: 0x52C Size: 0x4 - StructProperty Engine.CharacterMovementComponent.AvoidanceGroup */
	FNavAvoidanceMask GroupsToAvoid; /* Ofs: 0x530 Size: 0x4 - StructProperty Engine.CharacterMovementComponent.GroupsToAvoid */
	FNavAvoidanceMask GroupsToIgnore; /* Ofs: 0x534 Size: 0x4 - StructProperty Engine.CharacterMovementComponent.GroupsToIgnore */
	float AvoidanceWeight; /* Ofs: 0x538 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.AvoidanceWeight */
	FVector PendingLaunchVelocity; /* Ofs: 0x53C Size: 0xC - StructProperty Engine.CharacterMovementComponent.PendingLaunchVelocity */
	uint8_t UnknownData548[0xA0];
	float NavMeshProjectionInterval; /* Ofs: 0x5E8 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NavMeshProjectionInterval */
	float NavMeshProjectionTimer; /* Ofs: 0x5EC Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NavMeshProjectionTimer */
	float NavMeshProjectionInterpSpeed; /* Ofs: 0x5F0 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NavMeshProjectionInterpSpeed */
	float NavMeshProjectionHeightScaleUp; /* Ofs: 0x5F4 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NavMeshProjectionHeightScaleUp */
	float NavMeshProjectionHeightScaleDown; /* Ofs: 0x5F8 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NavMeshProjectionHeightScaleDown */
	float NavWalkingFloorDistTolerance; /* Ofs: 0x5FC Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.NavWalkingFloorDistTolerance */
	uint8_t UnknownData600[0x18];
	FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; /* Ofs: 0x618 Size: 0x58 - StructProperty Engine.CharacterMovementComponent.PostPhysicsTickFunction */
	uint8_t UnknownData670[0x10];
	float MinTimeBetweenTimeStampResets; /* Ofs: 0x680 Size: 0x4 - FloatProperty Engine.CharacterMovementComponent.MinTimeBetweenTimeStampResets */
	uint8_t UnknownData684[0x4];
	FRootMotionSourceGroup CurrentRootMotion; /* Ofs: 0x688 Size: 0x100 - StructProperty Engine.CharacterMovementComponent.CurrentRootMotion */
	uint8_t UnknownData788[0x98];
	FRootMotionMovementParams RootMotionParams; /* Ofs: 0x820 Size: 0x40 - StructProperty Engine.CharacterMovementComponent.RootMotionParams */
	FVector AnimRootMotionVelocity; /* Ofs: 0x860 Size: 0xC - StructProperty Engine.CharacterMovementComponent.AnimRootMotionVelocity */
	uint8_t boolField86C;
	uint8_t UnknownData86D[0x3];
	uint8_t boolField870;
	uint8_t UnknownData871[0xF];


	inline bool SetCharacterOwner(t_structHelper inst, EncryptedExternalPtr<struct UCharacter> value) { inst.WriteOffset(0x280, value); }
	inline bool bApplyGravityWhileJumping()
	{
		return boolField290& 0x1;
	}
	inline bool SetbApplyGravityWhileJumping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x290, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGravityScale(t_structHelper inst, float value) { inst.WriteOffset(0x294, value); }
	inline bool SetMaxStepHeight(t_structHelper inst, float value) { inst.WriteOffset(0x298, value); }
	inline bool SetJumpZVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x29C, value); }
	inline bool SetJumpOffJumpZFactor(t_structHelper inst, float value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetWalkableFloorAngle(t_structHelper inst, float value) { inst.WriteOffset(0x2A4, value); }
	inline bool SetWalkableFloorZ(t_structHelper inst, float value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetProneWalkableFloorAngle(t_structHelper inst, float value) { inst.WriteOffset(0x2AC, value); }
	inline bool SetProneWalkableFloorZ(t_structHelper inst, float value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetMovementMode(t_structHelper inst, TEnumAsByte<enum EMovementMode> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetCustomMovementMode(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x2B9, value); }
	inline bool SetGroundFriction(t_structHelper inst, float value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetMaxWalkSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x2E4, value); }
	inline bool SetMaxWalkSpeedCrouched(t_structHelper inst, float value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetMaxSwimSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x2EC, value); }
	inline bool SetMaxFlySpeed(t_structHelper inst, float value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetMaxCustomMovementSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x2F4, value); }
	inline bool SetMaxAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetBrakingFrictionFactor(t_structHelper inst, float value) { inst.WriteOffset(0x2FC, value); }
	inline bool SetBrakingFriction(t_structHelper inst, float value) { inst.WriteOffset(0x300, value); }
	inline bool bUseSeparateBrakingFriction()
	{
		return boolField304& 0x1;
	}
	inline bool SetbUseSeparateBrakingFriction(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x304, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBrakingDecelerationWalking(t_structHelper inst, float value) { inst.WriteOffset(0x308, value); }
	inline bool SetBrakingDecelerationFalling(t_structHelper inst, float value) { inst.WriteOffset(0x30C, value); }
	inline bool SetBrakingDecelerationSwimming(t_structHelper inst, float value) { inst.WriteOffset(0x310, value); }
	inline bool SetBrakingDecelerationFlying(t_structHelper inst, float value) { inst.WriteOffset(0x314, value); }
	inline bool SetAirControl(t_structHelper inst, float value) { inst.WriteOffset(0x318, value); }
	inline bool SetAirControlBoostMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x31C, value); }
	inline bool SetAirControlBoostVelocityThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x320, value); }
	inline bool SetFallingLateralFriction(t_structHelper inst, float value) { inst.WriteOffset(0x324, value); }
	inline bool SetCrouchedHalfHeight(t_structHelper inst, float value) { inst.WriteOffset(0x328, value); }
	inline bool SetPronedHalfHeight(t_structHelper inst, float value) { inst.WriteOffset(0x32C, value); }
	inline bool SetPronedRadius(t_structHelper inst, float value) { inst.WriteOffset(0x330, value); }
	inline bool SetBuoyancy(t_structHelper inst, float value) { inst.WriteOffset(0x334, value); }
	inline bool SetPerchRadiusThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x338, value); }
	inline bool SetPerchAdditionalHeight(t_structHelper inst, float value) { inst.WriteOffset(0x33C, value); }
	inline bool SetRotationRate(t_structHelper inst, FRotator value) { inst.WriteOffset(0x340, value); }
	inline bool bUseControllerDesiredRotation()
	{
		return boolField34C& 0x1;
	}
	inline bool SetbUseControllerDesiredRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOrientRotationToMovement()
	{
		return boolField34C& 0x2;
	}
	inline bool SetbOrientRotationToMovement(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bSweepWhileNavWalking()
	{
		return boolField34C& 0x4;
	}
	inline bool SetbSweepWhileNavWalking(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34C, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bMovementInProgress()
	{
		return boolField34C& 0x10;
	}
	inline bool SetbMovementInProgress(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34C, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bEnableScopedMovementUpdates()
	{
		return boolField34C& 0x20;
	}
	inline bool SetbEnableScopedMovementUpdates(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34C, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bForceMaxAccel()
	{
		return boolField34C& 0x40;
	}
	inline bool SetbForceMaxAccel(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34C, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bRunPhysicsWithNoController()
	{
		return boolField34C& 0x80;
	}
	inline bool SetbRunPhysicsWithNoController(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34C, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bForceNextFloorCheck()
	{
		return boolField34D& 0x1;
	}
	inline bool SetbForceNextFloorCheck(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShrinkProxyCapsule()
	{
		return boolField34D& 0x2;
	}
	inline bool SetbShrinkProxyCapsule(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34D, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bCanWalkOffLedges()
	{
		return boolField34D& 0x4;
	}
	inline bool SetbCanWalkOffLedges(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34D, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bCanWalkOffLedgesWhenCrouching()
	{
		return boolField34D& 0x8;
	}
	inline bool SetbCanWalkOffLedgesWhenCrouching(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34D, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bNetworkSkipProxyPredictionOnNetUpdate()
	{
		return boolField34D& 0x40;
	}
	inline bool SetbNetworkSkipProxyPredictionOnNetUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34D, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bDeferUpdateMoveComponent()
	{
		return boolField34D& 0x80;
	}
	inline bool SetbDeferUpdateMoveComponent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34D, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool SetDeferredUpdatedMoveComponent(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x350, value); }
	inline bool SetMaxOutOfWaterStepHeight(t_structHelper inst, float value) { inst.WriteOffset(0x358, value); }
	inline bool SetOutofWaterZ(t_structHelper inst, float value) { inst.WriteOffset(0x35C, value); }
	inline bool SetMass(t_structHelper inst, float value) { inst.WriteOffset(0x360, value); }
	inline bool bEnablePhysicsInteraction()
	{
		return boolField364& 0x1;
	}
	inline bool SetbEnablePhysicsInteraction(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x364, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTouchForceScaledToMass()
	{
		return boolField365& 0x1;
	}
	inline bool SetbTouchForceScaledToMass(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x365, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPushForceScaledToMass()
	{
		return boolField366& 0x1;
	}
	inline bool SetbPushForceScaledToMass(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x366, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPushForceUsingZOffset()
	{
		return boolField367& 0x1;
	}
	inline bool SetbPushForceUsingZOffset(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x367, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bScalePushForceToVelocity()
	{
		return boolField368& 0x1;
	}
	inline bool SetbScalePushForceToVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x368, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStandingDownwardForceScale(t_structHelper inst, float value) { inst.WriteOffset(0x36C, value); }
	inline bool SetInitialPushForceFactor(t_structHelper inst, float value) { inst.WriteOffset(0x370, value); }
	inline bool SetPushForceFactor(t_structHelper inst, float value) { inst.WriteOffset(0x374, value); }
	inline bool SetPushForcePointZOffsetFactor(t_structHelper inst, float value) { inst.WriteOffset(0x378, value); }
	inline bool SetTouchForceFactor(t_structHelper inst, float value) { inst.WriteOffset(0x37C, value); }
	inline bool SetMinTouchForce(t_structHelper inst, float value) { inst.WriteOffset(0x380, value); }
	inline bool SetMaxTouchForce(t_structHelper inst, float value) { inst.WriteOffset(0x384, value); }
	inline bool SetRepulsionForce(t_structHelper inst, float value) { inst.WriteOffset(0x388, value); }
	inline bool bForceBraking()
	{
		return boolField38C& 0x1;
	}
	inline bool SetbForceBraking(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCrouchedSpeedMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x390, value); }
	inline bool SetUpperImpactNormalScale(t_structHelper inst, float value) { inst.WriteOffset(0x394, value); }
	inline bool SetAcceleration(t_structHelper inst, FVector value) { inst.WriteOffset(0x398, value); }
	inline bool SetLastUpdateLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x3A4, value); }
	inline bool SetLastUpdateRotation(t_structHelper inst, FQuat value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetLastUpdateVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetServerLastTransformUpdateTimeStamp(t_structHelper inst, float value) { inst.WriteOffset(0x3CC, value); }
	inline bool SetServerLastClientGoodMoveAckTime(t_structHelper inst, float value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetServerLastClientAdjustmentTime(t_structHelper inst, float value) { inst.WriteOffset(0x3D4, value); }
	inline bool SetPendingImpulseToApply(t_structHelper inst, FVector value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetPendingForceToApply(t_structHelper inst, FVector value) { inst.WriteOffset(0x3E4, value); }
	inline bool SetAnalogInputModifier(t_structHelper inst, float value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetMaxSimulationTimeStep(t_structHelper inst, float value) { inst.WriteOffset(0x3FC, value); }
	inline bool SetMaxSimulationIterations(t_structHelper inst, int32_t value) { inst.WriteOffset(0x400, value); }
	inline bool SetMaxDepenetrationWithGeometry(t_structHelper inst, float value) { inst.WriteOffset(0x404, value); }
	inline bool SetMaxDepenetrationWithGeometryAsProxy(t_structHelper inst, float value) { inst.WriteOffset(0x408, value); }
	inline bool SetMaxDepenetrationWithPawn(t_structHelper inst, float value) { inst.WriteOffset(0x40C, value); }
	inline bool SetMaxDepenetrationWithPawnAsProxy(t_structHelper inst, float value) { inst.WriteOffset(0x410, value); }
	inline bool SetNetworkSimulatedSmoothLocationTime(t_structHelper inst, float value) { inst.WriteOffset(0x414, value); }
	inline bool SetNetworkSimulatedSmoothRotationTime(t_structHelper inst, float value) { inst.WriteOffset(0x418, value); }
	inline bool SetListenServerNetworkSimulatedSmoothLocationTime(t_structHelper inst, float value) { inst.WriteOffset(0x41C, value); }
	inline bool SetListenServerNetworkSimulatedSmoothRotationTime(t_structHelper inst, float value) { inst.WriteOffset(0x420, value); }
	inline bool SetNetProxyShrinkRadius(t_structHelper inst, float value) { inst.WriteOffset(0x424, value); }
	inline bool SetNetProxyShrinkHalfHeight(t_structHelper inst, float value) { inst.WriteOffset(0x428, value); }
	inline bool SetNetworkMaxSmoothUpdateDistance(t_structHelper inst, float value) { inst.WriteOffset(0x42C, value); }
	inline bool SetNetworkNoSmoothUpdateDistance(t_structHelper inst, float value) { inst.WriteOffset(0x430, value); }
	inline bool SetNetworkSmoothingMode(t_structHelper inst, TEnumAsByte<enum ENetworkSmoothingMode> value) { inst.WriteOffset(0x434, value); }
	inline bool SetNetworkMinTimeBetweenClientAckGoodMoves(t_structHelper inst, float value) { inst.WriteOffset(0x438, value); }
	inline bool SetNetworkMinTimeBetweenClientAdjustments(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
	inline bool SetNetworkMinTimeBetweenClientAdjustmentsLargeCorrection(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool SetNetworkLargeClientCorrectionDistance(t_structHelper inst, float value) { inst.WriteOffset(0x444, value); }
	inline bool SetLedgeCheckThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x448, value); }
	inline bool SetJumpOutOfWaterPitch(t_structHelper inst, float value) { inst.WriteOffset(0x44C, value); }
	inline bool SetCurrentFloor(t_structHelper inst, FFindFloorResult value) { inst.WriteOffset(0x450, value); }
	inline bool SetDefaultLandMovementMode(t_structHelper inst, TEnumAsByte<enum EMovementMode> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetDefaultWaterMovementMode(t_structHelper inst, TEnumAsByte<enum EMovementMode> value) { inst.WriteOffset(0x4E9, value); }
	inline bool SetGroundMovementMode(t_structHelper inst, TEnumAsByte<enum EMovementMode> value) { inst.WriteOffset(0x4EA, value); }
	inline bool bMaintainHorizontalGroundVelocity()
	{
		return boolField4EC& 0x1;
	}
	inline bool SetbMaintainHorizontalGroundVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4EC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bImpartBaseVelocityX()
	{
		return boolField4EC& 0x2;
	}
	inline bool SetbImpartBaseVelocityX(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4EC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bImpartBaseVelocityY()
	{
		return boolField4EC& 0x4;
	}
	inline bool SetbImpartBaseVelocityY(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4EC, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bImpartBaseVelocityZ()
	{
		return boolField4EC& 0x8;
	}
	inline bool SetbImpartBaseVelocityZ(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4EC, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bImpartBaseAngularVelocity()
	{
		return boolField4EC& 0x10;
	}
	inline bool SetbImpartBaseAngularVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4EC, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bJustTeleported()
	{
		return boolField4EC& 0x20;
	}
	inline bool SetbJustTeleported(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4EC, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bNetworkUpdateReceived()
	{
		return boolField4EC& 0x40;
	}
	inline bool SetbNetworkUpdateReceived(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4EC, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bNetworkMovementModeChanged()
	{
		return boolField4EC& 0x80;
	}
	inline bool SetbNetworkMovementModeChanged(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4EC, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bIgnoreClientMovementErrorChecksAndCorrection()
	{
		return boolField4ED& 0x1;
	}
	inline bool SetbIgnoreClientMovementErrorChecksAndCorrection(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4ED, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bNotifyApex()
	{
		return boolField4ED& 0x2;
	}
	inline bool SetbNotifyApex(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4ED, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bCheatFlying()
	{
		return boolField4ED& 0x4;
	}
	inline bool SetbCheatFlying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4ED, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bWantsToCrouch()
	{
		return boolField4ED& 0x8;
	}
	inline bool SetbWantsToCrouch(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4ED, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bCrouchMaintainsBaseLocation()
	{
		return boolField4ED& 0x10;
	}
	inline bool SetbCrouchMaintainsBaseLocation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4ED, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool SetStanceMode(t_structHelper inst, TEnumAsByte<enum EStanceMode> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetWantsToStanceMode(t_structHelper inst, TEnumAsByte<enum EStanceMode> value) { inst.WriteOffset(0x4F1, value); }
	inline bool bIgnoreBaseRotation()
	{
		return boolField4F4& 0x1;
	}
	inline bool SetbIgnoreBaseRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bFastAttachedMove()
	{
		return boolField4F4& 0x2;
	}
	inline bool SetbFastAttachedMove(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bAlwaysCheckFloor()
	{
		return boolField4F4& 0x4;
	}
	inline bool SetbAlwaysCheckFloor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bUseFlatBaseForFloorChecks()
	{
		return boolField4F4& 0x8;
	}
	inline bool SetbUseFlatBaseForFloorChecks(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F4, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bPerformingJumpOff()
	{
		return boolField4F4& 0x10;
	}
	inline bool SetbPerformingJumpOff(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F4, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bWantsToLeaveNavWalking()
	{
		return boolField4F4& 0x20;
	}
	inline bool SetbWantsToLeaveNavWalking(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F4, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bUseRVOAvoidance()
	{
		return boolField4F4& 0x40;
	}
	inline bool SetbUseRVOAvoidance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F4, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bRequestedMoveUseAcceleration()
	{
		return boolField4F4& 0x80;
	}
	inline bool SetbRequestedMoveUseAcceleration(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F4, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bHasRequestedVelocity()
	{
		return boolField504& 0x1;
	}
	inline bool SetbHasRequestedVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x504, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRequestedMoveWithMaxSpeed()
	{
		return boolField504& 0x2;
	}
	inline bool SetbRequestedMoveWithMaxSpeed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x504, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bWasAvoidanceUpdated()
	{
		return boolField504& 0x4;
	}
	inline bool SetbWasAvoidanceUpdated(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x504, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bProjectNavMeshWalking()
	{
		return boolField504& 0x20;
	}
	inline bool SetbProjectNavMeshWalking(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x504, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bProjectNavMeshOnBothWorldChannels()
	{
		return boolField504& 0x40;
	}
	inline bool SetbProjectNavMeshOnBothWorldChannels(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x504, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool SetAvoidanceConsiderationRadius(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
	inline bool SetRequestedVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x51C, value); }
	inline bool SetAvoidanceUID(t_structHelper inst, int32_t value) { inst.WriteOffset(0x528, value); }
	inline bool SetAvoidanceGroup(t_structHelper inst, FNavAvoidanceMask value) { inst.WriteOffset(0x52C, value); }
	inline bool SetGroupsToAvoid(t_structHelper inst, FNavAvoidanceMask value) { inst.WriteOffset(0x530, value); }
	inline bool SetGroupsToIgnore(t_structHelper inst, FNavAvoidanceMask value) { inst.WriteOffset(0x534, value); }
	inline bool SetAvoidanceWeight(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
	inline bool SetPendingLaunchVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x53C, value); }
	inline bool SetNavMeshProjectionInterval(t_structHelper inst, float value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetNavMeshProjectionTimer(t_structHelper inst, float value) { inst.WriteOffset(0x5EC, value); }
	inline bool SetNavMeshProjectionInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetNavMeshProjectionHeightScaleUp(t_structHelper inst, float value) { inst.WriteOffset(0x5F4, value); }
	inline bool SetNavMeshProjectionHeightScaleDown(t_structHelper inst, float value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetNavWalkingFloorDistTolerance(t_structHelper inst, float value) { inst.WriteOffset(0x5FC, value); }
	inline bool SetPostPhysicsTickFunction(t_structHelper inst, FCharacterMovementComponentPostPhysicsTickFunction value) { inst.WriteOffset(0x618, value); }
	inline bool SetMinTimeBetweenTimeStampResets(t_structHelper inst, float value) { inst.WriteOffset(0x680, value); }
	inline bool SetCurrentRootMotion(t_structHelper inst, FRootMotionSourceGroup value) { inst.WriteOffset(0x688, value); }
	inline bool SetRootMotionParams(t_structHelper inst, FRootMotionMovementParams value) { inst.WriteOffset(0x820, value); }
	inline bool SetAnimRootMotionVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x860, value); }
	inline bool bWasSimulatingRootMotion()
	{
		return boolField86C& 0x1;
	}
	inline bool SetbWasSimulatingRootMotion(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x86C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAllowPhysicsRotationDuringAnimRootMotion()
	{
		return boolField870& 0x1;
	}
	inline bool SetbAllowPhysicsRotationDuringAnimRootMotion(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x870, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCharacterMovementComponent = sizeof(UCharacterMovementComponent); // 2176
    static_assert(sizeof(UCharacterMovementComponent) == 0x880, "Size of UCharacterMovementComponent is not correct.");
	auto constexpr UCharacterMovementComponent_CharacterOwner_Offset = offsetof(UCharacterMovementComponent, CharacterOwner);
	static_assert(UCharacterMovementComponent_CharacterOwner_Offset == 0x280, "UCharacterMovementComponent::CharacterOwner offset is not 280");
	auto constexpr UCharacterMovementComponent_boolField290_Offset = offsetof(UCharacterMovementComponent, boolField290);
	static_assert(UCharacterMovementComponent_boolField290_Offset == 0x290, "UCharacterMovementComponent::boolField290 offset is not 290");
	auto constexpr UCharacterMovementComponent_GravityScale_Offset = offsetof(UCharacterMovementComponent, GravityScale);
	static_assert(UCharacterMovementComponent_GravityScale_Offset == 0x294, "UCharacterMovementComponent::GravityScale offset is not 294");
	auto constexpr UCharacterMovementComponent_MaxStepHeight_Offset = offsetof(UCharacterMovementComponent, MaxStepHeight);
	static_assert(UCharacterMovementComponent_MaxStepHeight_Offset == 0x298, "UCharacterMovementComponent::MaxStepHeight offset is not 298");
	auto constexpr UCharacterMovementComponent_JumpZVelocity_Offset = offsetof(UCharacterMovementComponent, JumpZVelocity);
	static_assert(UCharacterMovementComponent_JumpZVelocity_Offset == 0x29c, "UCharacterMovementComponent::JumpZVelocity offset is not 29c");
	auto constexpr UCharacterMovementComponent_JumpOffJumpZFactor_Offset = offsetof(UCharacterMovementComponent, JumpOffJumpZFactor);
	static_assert(UCharacterMovementComponent_JumpOffJumpZFactor_Offset == 0x2a0, "UCharacterMovementComponent::JumpOffJumpZFactor offset is not 2a0");
	auto constexpr UCharacterMovementComponent_WalkableFloorAngle_Offset = offsetof(UCharacterMovementComponent, WalkableFloorAngle);
	static_assert(UCharacterMovementComponent_WalkableFloorAngle_Offset == 0x2a4, "UCharacterMovementComponent::WalkableFloorAngle offset is not 2a4");
	auto constexpr UCharacterMovementComponent_WalkableFloorZ_Offset = offsetof(UCharacterMovementComponent, WalkableFloorZ);
	static_assert(UCharacterMovementComponent_WalkableFloorZ_Offset == 0x2a8, "UCharacterMovementComponent::WalkableFloorZ offset is not 2a8");
	auto constexpr UCharacterMovementComponent_ProneWalkableFloorAngle_Offset = offsetof(UCharacterMovementComponent, ProneWalkableFloorAngle);
	static_assert(UCharacterMovementComponent_ProneWalkableFloorAngle_Offset == 0x2ac, "UCharacterMovementComponent::ProneWalkableFloorAngle offset is not 2ac");
	auto constexpr UCharacterMovementComponent_ProneWalkableFloorZ_Offset = offsetof(UCharacterMovementComponent, ProneWalkableFloorZ);
	static_assert(UCharacterMovementComponent_ProneWalkableFloorZ_Offset == 0x2b0, "UCharacterMovementComponent::ProneWalkableFloorZ offset is not 2b0");
	auto constexpr UCharacterMovementComponent_MovementMode_Offset = offsetof(UCharacterMovementComponent, MovementMode);
	static_assert(UCharacterMovementComponent_MovementMode_Offset == 0x2b8, "UCharacterMovementComponent::MovementMode offset is not 2b8");
	auto constexpr UCharacterMovementComponent_CustomMovementMode_Offset = offsetof(UCharacterMovementComponent, CustomMovementMode);
	static_assert(UCharacterMovementComponent_CustomMovementMode_Offset == 0x2b9, "UCharacterMovementComponent::CustomMovementMode offset is not 2b9");
	auto constexpr UCharacterMovementComponent_GroundFriction_Offset = offsetof(UCharacterMovementComponent, GroundFriction);
	static_assert(UCharacterMovementComponent_GroundFriction_Offset == 0x2e0, "UCharacterMovementComponent::GroundFriction offset is not 2e0");
	auto constexpr UCharacterMovementComponent_MaxWalkSpeed_Offset = offsetof(UCharacterMovementComponent, MaxWalkSpeed);
	static_assert(UCharacterMovementComponent_MaxWalkSpeed_Offset == 0x2e4, "UCharacterMovementComponent::MaxWalkSpeed offset is not 2e4");
	auto constexpr UCharacterMovementComponent_MaxWalkSpeedCrouched_Offset = offsetof(UCharacterMovementComponent, MaxWalkSpeedCrouched);
	static_assert(UCharacterMovementComponent_MaxWalkSpeedCrouched_Offset == 0x2e8, "UCharacterMovementComponent::MaxWalkSpeedCrouched offset is not 2e8");
	auto constexpr UCharacterMovementComponent_MaxSwimSpeed_Offset = offsetof(UCharacterMovementComponent, MaxSwimSpeed);
	static_assert(UCharacterMovementComponent_MaxSwimSpeed_Offset == 0x2ec, "UCharacterMovementComponent::MaxSwimSpeed offset is not 2ec");
	auto constexpr UCharacterMovementComponent_MaxFlySpeed_Offset = offsetof(UCharacterMovementComponent, MaxFlySpeed);
	static_assert(UCharacterMovementComponent_MaxFlySpeed_Offset == 0x2f0, "UCharacterMovementComponent::MaxFlySpeed offset is not 2f0");
	auto constexpr UCharacterMovementComponent_MaxCustomMovementSpeed_Offset = offsetof(UCharacterMovementComponent, MaxCustomMovementSpeed);
	static_assert(UCharacterMovementComponent_MaxCustomMovementSpeed_Offset == 0x2f4, "UCharacterMovementComponent::MaxCustomMovementSpeed offset is not 2f4");
	auto constexpr UCharacterMovementComponent_MaxAcceleration_Offset = offsetof(UCharacterMovementComponent, MaxAcceleration);
	static_assert(UCharacterMovementComponent_MaxAcceleration_Offset == 0x2f8, "UCharacterMovementComponent::MaxAcceleration offset is not 2f8");
	auto constexpr UCharacterMovementComponent_BrakingFrictionFactor_Offset = offsetof(UCharacterMovementComponent, BrakingFrictionFactor);
	static_assert(UCharacterMovementComponent_BrakingFrictionFactor_Offset == 0x2fc, "UCharacterMovementComponent::BrakingFrictionFactor offset is not 2fc");
	auto constexpr UCharacterMovementComponent_BrakingFriction_Offset = offsetof(UCharacterMovementComponent, BrakingFriction);
	static_assert(UCharacterMovementComponent_BrakingFriction_Offset == 0x300, "UCharacterMovementComponent::BrakingFriction offset is not 300");
	auto constexpr UCharacterMovementComponent_boolField304_Offset = offsetof(UCharacterMovementComponent, boolField304);
	static_assert(UCharacterMovementComponent_boolField304_Offset == 0x304, "UCharacterMovementComponent::boolField304 offset is not 304");
	auto constexpr UCharacterMovementComponent_BrakingDecelerationWalking_Offset = offsetof(UCharacterMovementComponent, BrakingDecelerationWalking);
	static_assert(UCharacterMovementComponent_BrakingDecelerationWalking_Offset == 0x308, "UCharacterMovementComponent::BrakingDecelerationWalking offset is not 308");
	auto constexpr UCharacterMovementComponent_BrakingDecelerationFalling_Offset = offsetof(UCharacterMovementComponent, BrakingDecelerationFalling);
	static_assert(UCharacterMovementComponent_BrakingDecelerationFalling_Offset == 0x30c, "UCharacterMovementComponent::BrakingDecelerationFalling offset is not 30c");
	auto constexpr UCharacterMovementComponent_BrakingDecelerationSwimming_Offset = offsetof(UCharacterMovementComponent, BrakingDecelerationSwimming);
	static_assert(UCharacterMovementComponent_BrakingDecelerationSwimming_Offset == 0x310, "UCharacterMovementComponent::BrakingDecelerationSwimming offset is not 310");
	auto constexpr UCharacterMovementComponent_BrakingDecelerationFlying_Offset = offsetof(UCharacterMovementComponent, BrakingDecelerationFlying);
	static_assert(UCharacterMovementComponent_BrakingDecelerationFlying_Offset == 0x314, "UCharacterMovementComponent::BrakingDecelerationFlying offset is not 314");
	auto constexpr UCharacterMovementComponent_AirControl_Offset = offsetof(UCharacterMovementComponent, AirControl);
	static_assert(UCharacterMovementComponent_AirControl_Offset == 0x318, "UCharacterMovementComponent::AirControl offset is not 318");
	auto constexpr UCharacterMovementComponent_AirControlBoostMultiplier_Offset = offsetof(UCharacterMovementComponent, AirControlBoostMultiplier);
	static_assert(UCharacterMovementComponent_AirControlBoostMultiplier_Offset == 0x31c, "UCharacterMovementComponent::AirControlBoostMultiplier offset is not 31c");
	auto constexpr UCharacterMovementComponent_AirControlBoostVelocityThreshold_Offset = offsetof(UCharacterMovementComponent, AirControlBoostVelocityThreshold);
	static_assert(UCharacterMovementComponent_AirControlBoostVelocityThreshold_Offset == 0x320, "UCharacterMovementComponent::AirControlBoostVelocityThreshold offset is not 320");
	auto constexpr UCharacterMovementComponent_FallingLateralFriction_Offset = offsetof(UCharacterMovementComponent, FallingLateralFriction);
	static_assert(UCharacterMovementComponent_FallingLateralFriction_Offset == 0x324, "UCharacterMovementComponent::FallingLateralFriction offset is not 324");
	auto constexpr UCharacterMovementComponent_CrouchedHalfHeight_Offset = offsetof(UCharacterMovementComponent, CrouchedHalfHeight);
	static_assert(UCharacterMovementComponent_CrouchedHalfHeight_Offset == 0x328, "UCharacterMovementComponent::CrouchedHalfHeight offset is not 328");
	auto constexpr UCharacterMovementComponent_PronedHalfHeight_Offset = offsetof(UCharacterMovementComponent, PronedHalfHeight);
	static_assert(UCharacterMovementComponent_PronedHalfHeight_Offset == 0x32c, "UCharacterMovementComponent::PronedHalfHeight offset is not 32c");
	auto constexpr UCharacterMovementComponent_PronedRadius_Offset = offsetof(UCharacterMovementComponent, PronedRadius);
	static_assert(UCharacterMovementComponent_PronedRadius_Offset == 0x330, "UCharacterMovementComponent::PronedRadius offset is not 330");
	auto constexpr UCharacterMovementComponent_Buoyancy_Offset = offsetof(UCharacterMovementComponent, Buoyancy);
	static_assert(UCharacterMovementComponent_Buoyancy_Offset == 0x334, "UCharacterMovementComponent::Buoyancy offset is not 334");
	auto constexpr UCharacterMovementComponent_PerchRadiusThreshold_Offset = offsetof(UCharacterMovementComponent, PerchRadiusThreshold);
	static_assert(UCharacterMovementComponent_PerchRadiusThreshold_Offset == 0x338, "UCharacterMovementComponent::PerchRadiusThreshold offset is not 338");
	auto constexpr UCharacterMovementComponent_PerchAdditionalHeight_Offset = offsetof(UCharacterMovementComponent, PerchAdditionalHeight);
	static_assert(UCharacterMovementComponent_PerchAdditionalHeight_Offset == 0x33c, "UCharacterMovementComponent::PerchAdditionalHeight offset is not 33c");
	auto constexpr UCharacterMovementComponent_RotationRate_Offset = offsetof(UCharacterMovementComponent, RotationRate);
	static_assert(UCharacterMovementComponent_RotationRate_Offset == 0x340, "UCharacterMovementComponent::RotationRate offset is not 340");
	auto constexpr UCharacterMovementComponent_boolField34C_Offset = offsetof(UCharacterMovementComponent, boolField34C);
	static_assert(UCharacterMovementComponent_boolField34C_Offset == 0x34c, "UCharacterMovementComponent::boolField34C offset is not 34c");
	auto constexpr UCharacterMovementComponent_boolField34D_Offset = offsetof(UCharacterMovementComponent, boolField34D);
	static_assert(UCharacterMovementComponent_boolField34D_Offset == 0x34d, "UCharacterMovementComponent::boolField34D offset is not 34d");
	auto constexpr UCharacterMovementComponent_DeferredUpdatedMoveComponent_Offset = offsetof(UCharacterMovementComponent, DeferredUpdatedMoveComponent);
	static_assert(UCharacterMovementComponent_DeferredUpdatedMoveComponent_Offset == 0x350, "UCharacterMovementComponent::DeferredUpdatedMoveComponent offset is not 350");
	auto constexpr UCharacterMovementComponent_MaxOutOfWaterStepHeight_Offset = offsetof(UCharacterMovementComponent, MaxOutOfWaterStepHeight);
	static_assert(UCharacterMovementComponent_MaxOutOfWaterStepHeight_Offset == 0x358, "UCharacterMovementComponent::MaxOutOfWaterStepHeight offset is not 358");
	auto constexpr UCharacterMovementComponent_OutofWaterZ_Offset = offsetof(UCharacterMovementComponent, OutofWaterZ);
	static_assert(UCharacterMovementComponent_OutofWaterZ_Offset == 0x35c, "UCharacterMovementComponent::OutofWaterZ offset is not 35c");
	auto constexpr UCharacterMovementComponent_Mass_Offset = offsetof(UCharacterMovementComponent, Mass);
	static_assert(UCharacterMovementComponent_Mass_Offset == 0x360, "UCharacterMovementComponent::Mass offset is not 360");
	auto constexpr UCharacterMovementComponent_boolField364_Offset = offsetof(UCharacterMovementComponent, boolField364);
	static_assert(UCharacterMovementComponent_boolField364_Offset == 0x364, "UCharacterMovementComponent::boolField364 offset is not 364");
	auto constexpr UCharacterMovementComponent_boolField365_Offset = offsetof(UCharacterMovementComponent, boolField365);
	static_assert(UCharacterMovementComponent_boolField365_Offset == 0x365, "UCharacterMovementComponent::boolField365 offset is not 365");
	auto constexpr UCharacterMovementComponent_boolField366_Offset = offsetof(UCharacterMovementComponent, boolField366);
	static_assert(UCharacterMovementComponent_boolField366_Offset == 0x366, "UCharacterMovementComponent::boolField366 offset is not 366");
	auto constexpr UCharacterMovementComponent_boolField367_Offset = offsetof(UCharacterMovementComponent, boolField367);
	static_assert(UCharacterMovementComponent_boolField367_Offset == 0x367, "UCharacterMovementComponent::boolField367 offset is not 367");
	auto constexpr UCharacterMovementComponent_boolField368_Offset = offsetof(UCharacterMovementComponent, boolField368);
	static_assert(UCharacterMovementComponent_boolField368_Offset == 0x368, "UCharacterMovementComponent::boolField368 offset is not 368");
	auto constexpr UCharacterMovementComponent_StandingDownwardForceScale_Offset = offsetof(UCharacterMovementComponent, StandingDownwardForceScale);
	static_assert(UCharacterMovementComponent_StandingDownwardForceScale_Offset == 0x36c, "UCharacterMovementComponent::StandingDownwardForceScale offset is not 36c");
	auto constexpr UCharacterMovementComponent_InitialPushForceFactor_Offset = offsetof(UCharacterMovementComponent, InitialPushForceFactor);
	static_assert(UCharacterMovementComponent_InitialPushForceFactor_Offset == 0x370, "UCharacterMovementComponent::InitialPushForceFactor offset is not 370");
	auto constexpr UCharacterMovementComponent_PushForceFactor_Offset = offsetof(UCharacterMovementComponent, PushForceFactor);
	static_assert(UCharacterMovementComponent_PushForceFactor_Offset == 0x374, "UCharacterMovementComponent::PushForceFactor offset is not 374");
	auto constexpr UCharacterMovementComponent_PushForcePointZOffsetFactor_Offset = offsetof(UCharacterMovementComponent, PushForcePointZOffsetFactor);
	static_assert(UCharacterMovementComponent_PushForcePointZOffsetFactor_Offset == 0x378, "UCharacterMovementComponent::PushForcePointZOffsetFactor offset is not 378");
	auto constexpr UCharacterMovementComponent_TouchForceFactor_Offset = offsetof(UCharacterMovementComponent, TouchForceFactor);
	static_assert(UCharacterMovementComponent_TouchForceFactor_Offset == 0x37c, "UCharacterMovementComponent::TouchForceFactor offset is not 37c");
	auto constexpr UCharacterMovementComponent_MinTouchForce_Offset = offsetof(UCharacterMovementComponent, MinTouchForce);
	static_assert(UCharacterMovementComponent_MinTouchForce_Offset == 0x380, "UCharacterMovementComponent::MinTouchForce offset is not 380");
	auto constexpr UCharacterMovementComponent_MaxTouchForce_Offset = offsetof(UCharacterMovementComponent, MaxTouchForce);
	static_assert(UCharacterMovementComponent_MaxTouchForce_Offset == 0x384, "UCharacterMovementComponent::MaxTouchForce offset is not 384");
	auto constexpr UCharacterMovementComponent_RepulsionForce_Offset = offsetof(UCharacterMovementComponent, RepulsionForce);
	static_assert(UCharacterMovementComponent_RepulsionForce_Offset == 0x388, "UCharacterMovementComponent::RepulsionForce offset is not 388");
	auto constexpr UCharacterMovementComponent_boolField38C_Offset = offsetof(UCharacterMovementComponent, boolField38C);
	static_assert(UCharacterMovementComponent_boolField38C_Offset == 0x38c, "UCharacterMovementComponent::boolField38C offset is not 38c");
	auto constexpr UCharacterMovementComponent_CrouchedSpeedMultiplier_Offset = offsetof(UCharacterMovementComponent, CrouchedSpeedMultiplier);
	static_assert(UCharacterMovementComponent_CrouchedSpeedMultiplier_Offset == 0x390, "UCharacterMovementComponent::CrouchedSpeedMultiplier offset is not 390");
	auto constexpr UCharacterMovementComponent_UpperImpactNormalScale_Offset = offsetof(UCharacterMovementComponent, UpperImpactNormalScale);
	static_assert(UCharacterMovementComponent_UpperImpactNormalScale_Offset == 0x394, "UCharacterMovementComponent::UpperImpactNormalScale offset is not 394");
	auto constexpr UCharacterMovementComponent_Acceleration_Offset = offsetof(UCharacterMovementComponent, Acceleration);
	static_assert(UCharacterMovementComponent_Acceleration_Offset == 0x398, "UCharacterMovementComponent::Acceleration offset is not 398");
	auto constexpr UCharacterMovementComponent_LastUpdateLocation_Offset = offsetof(UCharacterMovementComponent, LastUpdateLocation);
	static_assert(UCharacterMovementComponent_LastUpdateLocation_Offset == 0x3a4, "UCharacterMovementComponent::LastUpdateLocation offset is not 3a4");
	auto constexpr UCharacterMovementComponent_LastUpdateRotation_Offset = offsetof(UCharacterMovementComponent, LastUpdateRotation);
	static_assert(UCharacterMovementComponent_LastUpdateRotation_Offset == 0x3b0, "UCharacterMovementComponent::LastUpdateRotation offset is not 3b0");
	auto constexpr UCharacterMovementComponent_LastUpdateVelocity_Offset = offsetof(UCharacterMovementComponent, LastUpdateVelocity);
	static_assert(UCharacterMovementComponent_LastUpdateVelocity_Offset == 0x3c0, "UCharacterMovementComponent::LastUpdateVelocity offset is not 3c0");
	auto constexpr UCharacterMovementComponent_ServerLastTransformUpdateTimeStamp_Offset = offsetof(UCharacterMovementComponent, ServerLastTransformUpdateTimeStamp);
	static_assert(UCharacterMovementComponent_ServerLastTransformUpdateTimeStamp_Offset == 0x3cc, "UCharacterMovementComponent::ServerLastTransformUpdateTimeStamp offset is not 3cc");
	auto constexpr UCharacterMovementComponent_ServerLastClientGoodMoveAckTime_Offset = offsetof(UCharacterMovementComponent, ServerLastClientGoodMoveAckTime);
	static_assert(UCharacterMovementComponent_ServerLastClientGoodMoveAckTime_Offset == 0x3d0, "UCharacterMovementComponent::ServerLastClientGoodMoveAckTime offset is not 3d0");
	auto constexpr UCharacterMovementComponent_ServerLastClientAdjustmentTime_Offset = offsetof(UCharacterMovementComponent, ServerLastClientAdjustmentTime);
	static_assert(UCharacterMovementComponent_ServerLastClientAdjustmentTime_Offset == 0x3d4, "UCharacterMovementComponent::ServerLastClientAdjustmentTime offset is not 3d4");
	auto constexpr UCharacterMovementComponent_PendingImpulseToApply_Offset = offsetof(UCharacterMovementComponent, PendingImpulseToApply);
	static_assert(UCharacterMovementComponent_PendingImpulseToApply_Offset == 0x3d8, "UCharacterMovementComponent::PendingImpulseToApply offset is not 3d8");
	auto constexpr UCharacterMovementComponent_PendingForceToApply_Offset = offsetof(UCharacterMovementComponent, PendingForceToApply);
	static_assert(UCharacterMovementComponent_PendingForceToApply_Offset == 0x3e4, "UCharacterMovementComponent::PendingForceToApply offset is not 3e4");
	auto constexpr UCharacterMovementComponent_AnalogInputModifier_Offset = offsetof(UCharacterMovementComponent, AnalogInputModifier);
	static_assert(UCharacterMovementComponent_AnalogInputModifier_Offset == 0x3f0, "UCharacterMovementComponent::AnalogInputModifier offset is not 3f0");
	auto constexpr UCharacterMovementComponent_MaxSimulationTimeStep_Offset = offsetof(UCharacterMovementComponent, MaxSimulationTimeStep);
	static_assert(UCharacterMovementComponent_MaxSimulationTimeStep_Offset == 0x3fc, "UCharacterMovementComponent::MaxSimulationTimeStep offset is not 3fc");
	auto constexpr UCharacterMovementComponent_MaxSimulationIterations_Offset = offsetof(UCharacterMovementComponent, MaxSimulationIterations);
	static_assert(UCharacterMovementComponent_MaxSimulationIterations_Offset == 0x400, "UCharacterMovementComponent::MaxSimulationIterations offset is not 400");
	auto constexpr UCharacterMovementComponent_MaxDepenetrationWithGeometry_Offset = offsetof(UCharacterMovementComponent, MaxDepenetrationWithGeometry);
	static_assert(UCharacterMovementComponent_MaxDepenetrationWithGeometry_Offset == 0x404, "UCharacterMovementComponent::MaxDepenetrationWithGeometry offset is not 404");
	auto constexpr UCharacterMovementComponent_MaxDepenetrationWithGeometryAsProxy_Offset = offsetof(UCharacterMovementComponent, MaxDepenetrationWithGeometryAsProxy);
	static_assert(UCharacterMovementComponent_MaxDepenetrationWithGeometryAsProxy_Offset == 0x408, "UCharacterMovementComponent::MaxDepenetrationWithGeometryAsProxy offset is not 408");
	auto constexpr UCharacterMovementComponent_MaxDepenetrationWithPawn_Offset = offsetof(UCharacterMovementComponent, MaxDepenetrationWithPawn);
	static_assert(UCharacterMovementComponent_MaxDepenetrationWithPawn_Offset == 0x40c, "UCharacterMovementComponent::MaxDepenetrationWithPawn offset is not 40c");
	auto constexpr UCharacterMovementComponent_MaxDepenetrationWithPawnAsProxy_Offset = offsetof(UCharacterMovementComponent, MaxDepenetrationWithPawnAsProxy);
	static_assert(UCharacterMovementComponent_MaxDepenetrationWithPawnAsProxy_Offset == 0x410, "UCharacterMovementComponent::MaxDepenetrationWithPawnAsProxy offset is not 410");
	auto constexpr UCharacterMovementComponent_NetworkSimulatedSmoothLocationTime_Offset = offsetof(UCharacterMovementComponent, NetworkSimulatedSmoothLocationTime);
	static_assert(UCharacterMovementComponent_NetworkSimulatedSmoothLocationTime_Offset == 0x414, "UCharacterMovementComponent::NetworkSimulatedSmoothLocationTime offset is not 414");
	auto constexpr UCharacterMovementComponent_NetworkSimulatedSmoothRotationTime_Offset = offsetof(UCharacterMovementComponent, NetworkSimulatedSmoothRotationTime);
	static_assert(UCharacterMovementComponent_NetworkSimulatedSmoothRotationTime_Offset == 0x418, "UCharacterMovementComponent::NetworkSimulatedSmoothRotationTime offset is not 418");
	auto constexpr UCharacterMovementComponent_ListenServerNetworkSimulatedSmoothLocationTime_Offset = offsetof(UCharacterMovementComponent, ListenServerNetworkSimulatedSmoothLocationTime);
	static_assert(UCharacterMovementComponent_ListenServerNetworkSimulatedSmoothLocationTime_Offset == 0x41c, "UCharacterMovementComponent::ListenServerNetworkSimulatedSmoothLocationTime offset is not 41c");
	auto constexpr UCharacterMovementComponent_ListenServerNetworkSimulatedSmoothRotationTime_Offset = offsetof(UCharacterMovementComponent, ListenServerNetworkSimulatedSmoothRotationTime);
	static_assert(UCharacterMovementComponent_ListenServerNetworkSimulatedSmoothRotationTime_Offset == 0x420, "UCharacterMovementComponent::ListenServerNetworkSimulatedSmoothRotationTime offset is not 420");
	auto constexpr UCharacterMovementComponent_NetProxyShrinkRadius_Offset = offsetof(UCharacterMovementComponent, NetProxyShrinkRadius);
	static_assert(UCharacterMovementComponent_NetProxyShrinkRadius_Offset == 0x424, "UCharacterMovementComponent::NetProxyShrinkRadius offset is not 424");
	auto constexpr UCharacterMovementComponent_NetProxyShrinkHalfHeight_Offset = offsetof(UCharacterMovementComponent, NetProxyShrinkHalfHeight);
	static_assert(UCharacterMovementComponent_NetProxyShrinkHalfHeight_Offset == 0x428, "UCharacterMovementComponent::NetProxyShrinkHalfHeight offset is not 428");
	auto constexpr UCharacterMovementComponent_NetworkMaxSmoothUpdateDistance_Offset = offsetof(UCharacterMovementComponent, NetworkMaxSmoothUpdateDistance);
	static_assert(UCharacterMovementComponent_NetworkMaxSmoothUpdateDistance_Offset == 0x42c, "UCharacterMovementComponent::NetworkMaxSmoothUpdateDistance offset is not 42c");
	auto constexpr UCharacterMovementComponent_NetworkNoSmoothUpdateDistance_Offset = offsetof(UCharacterMovementComponent, NetworkNoSmoothUpdateDistance);
	static_assert(UCharacterMovementComponent_NetworkNoSmoothUpdateDistance_Offset == 0x430, "UCharacterMovementComponent::NetworkNoSmoothUpdateDistance offset is not 430");
	auto constexpr UCharacterMovementComponent_NetworkSmoothingMode_Offset = offsetof(UCharacterMovementComponent, NetworkSmoothingMode);
	static_assert(UCharacterMovementComponent_NetworkSmoothingMode_Offset == 0x434, "UCharacterMovementComponent::NetworkSmoothingMode offset is not 434");
	auto constexpr UCharacterMovementComponent_NetworkMinTimeBetweenClientAckGoodMoves_Offset = offsetof(UCharacterMovementComponent, NetworkMinTimeBetweenClientAckGoodMoves);
	static_assert(UCharacterMovementComponent_NetworkMinTimeBetweenClientAckGoodMoves_Offset == 0x438, "UCharacterMovementComponent::NetworkMinTimeBetweenClientAckGoodMoves offset is not 438");
	auto constexpr UCharacterMovementComponent_NetworkMinTimeBetweenClientAdjustments_Offset = offsetof(UCharacterMovementComponent, NetworkMinTimeBetweenClientAdjustments);
	static_assert(UCharacterMovementComponent_NetworkMinTimeBetweenClientAdjustments_Offset == 0x43c, "UCharacterMovementComponent::NetworkMinTimeBetweenClientAdjustments offset is not 43c");
	auto constexpr UCharacterMovementComponent_NetworkMinTimeBetweenClientAdjustmentsLargeCorrection_Offset = offsetof(UCharacterMovementComponent, NetworkMinTimeBetweenClientAdjustmentsLargeCorrection);
	static_assert(UCharacterMovementComponent_NetworkMinTimeBetweenClientAdjustmentsLargeCorrection_Offset == 0x440, "UCharacterMovementComponent::NetworkMinTimeBetweenClientAdjustmentsLargeCorrection offset is not 440");
	auto constexpr UCharacterMovementComponent_NetworkLargeClientCorrectionDistance_Offset = offsetof(UCharacterMovementComponent, NetworkLargeClientCorrectionDistance);
	static_assert(UCharacterMovementComponent_NetworkLargeClientCorrectionDistance_Offset == 0x444, "UCharacterMovementComponent::NetworkLargeClientCorrectionDistance offset is not 444");
	auto constexpr UCharacterMovementComponent_LedgeCheckThreshold_Offset = offsetof(UCharacterMovementComponent, LedgeCheckThreshold);
	static_assert(UCharacterMovementComponent_LedgeCheckThreshold_Offset == 0x448, "UCharacterMovementComponent::LedgeCheckThreshold offset is not 448");
	auto constexpr UCharacterMovementComponent_JumpOutOfWaterPitch_Offset = offsetof(UCharacterMovementComponent, JumpOutOfWaterPitch);
	static_assert(UCharacterMovementComponent_JumpOutOfWaterPitch_Offset == 0x44c, "UCharacterMovementComponent::JumpOutOfWaterPitch offset is not 44c");
	auto constexpr UCharacterMovementComponent_CurrentFloor_Offset = offsetof(UCharacterMovementComponent, CurrentFloor);
	static_assert(UCharacterMovementComponent_CurrentFloor_Offset == 0x450, "UCharacterMovementComponent::CurrentFloor offset is not 450");
	auto constexpr UCharacterMovementComponent_DefaultLandMovementMode_Offset = offsetof(UCharacterMovementComponent, DefaultLandMovementMode);
	static_assert(UCharacterMovementComponent_DefaultLandMovementMode_Offset == 0x4e8, "UCharacterMovementComponent::DefaultLandMovementMode offset is not 4e8");
	auto constexpr UCharacterMovementComponent_DefaultWaterMovementMode_Offset = offsetof(UCharacterMovementComponent, DefaultWaterMovementMode);
	static_assert(UCharacterMovementComponent_DefaultWaterMovementMode_Offset == 0x4e9, "UCharacterMovementComponent::DefaultWaterMovementMode offset is not 4e9");
	auto constexpr UCharacterMovementComponent_GroundMovementMode_Offset = offsetof(UCharacterMovementComponent, GroundMovementMode);
	static_assert(UCharacterMovementComponent_GroundMovementMode_Offset == 0x4ea, "UCharacterMovementComponent::GroundMovementMode offset is not 4ea");
	auto constexpr UCharacterMovementComponent_boolField4EC_Offset = offsetof(UCharacterMovementComponent, boolField4EC);
	static_assert(UCharacterMovementComponent_boolField4EC_Offset == 0x4ec, "UCharacterMovementComponent::boolField4EC offset is not 4ec");
	auto constexpr UCharacterMovementComponent_boolField4ED_Offset = offsetof(UCharacterMovementComponent, boolField4ED);
	static_assert(UCharacterMovementComponent_boolField4ED_Offset == 0x4ed, "UCharacterMovementComponent::boolField4ED offset is not 4ed");
	auto constexpr UCharacterMovementComponent_StanceMode_Offset = offsetof(UCharacterMovementComponent, StanceMode);
	static_assert(UCharacterMovementComponent_StanceMode_Offset == 0x4f0, "UCharacterMovementComponent::StanceMode offset is not 4f0");
	auto constexpr UCharacterMovementComponent_WantsToStanceMode_Offset = offsetof(UCharacterMovementComponent, WantsToStanceMode);
	static_assert(UCharacterMovementComponent_WantsToStanceMode_Offset == 0x4f1, "UCharacterMovementComponent::WantsToStanceMode offset is not 4f1");
	auto constexpr UCharacterMovementComponent_boolField4F4_Offset = offsetof(UCharacterMovementComponent, boolField4F4);
	static_assert(UCharacterMovementComponent_boolField4F4_Offset == 0x4f4, "UCharacterMovementComponent::boolField4F4 offset is not 4f4");
	auto constexpr UCharacterMovementComponent_boolField504_Offset = offsetof(UCharacterMovementComponent, boolField504);
	static_assert(UCharacterMovementComponent_boolField504_Offset == 0x504, "UCharacterMovementComponent::boolField504 offset is not 504");
	auto constexpr UCharacterMovementComponent_AvoidanceConsiderationRadius_Offset = offsetof(UCharacterMovementComponent, AvoidanceConsiderationRadius);
	static_assert(UCharacterMovementComponent_AvoidanceConsiderationRadius_Offset == 0x518, "UCharacterMovementComponent::AvoidanceConsiderationRadius offset is not 518");
	auto constexpr UCharacterMovementComponent_RequestedVelocity_Offset = offsetof(UCharacterMovementComponent, RequestedVelocity);
	static_assert(UCharacterMovementComponent_RequestedVelocity_Offset == 0x51c, "UCharacterMovementComponent::RequestedVelocity offset is not 51c");
	auto constexpr UCharacterMovementComponent_AvoidanceUID_Offset = offsetof(UCharacterMovementComponent, AvoidanceUID);
	static_assert(UCharacterMovementComponent_AvoidanceUID_Offset == 0x528, "UCharacterMovementComponent::AvoidanceUID offset is not 528");
	auto constexpr UCharacterMovementComponent_AvoidanceGroup_Offset = offsetof(UCharacterMovementComponent, AvoidanceGroup);
	static_assert(UCharacterMovementComponent_AvoidanceGroup_Offset == 0x52c, "UCharacterMovementComponent::AvoidanceGroup offset is not 52c");
	auto constexpr UCharacterMovementComponent_GroupsToAvoid_Offset = offsetof(UCharacterMovementComponent, GroupsToAvoid);
	static_assert(UCharacterMovementComponent_GroupsToAvoid_Offset == 0x530, "UCharacterMovementComponent::GroupsToAvoid offset is not 530");
	auto constexpr UCharacterMovementComponent_GroupsToIgnore_Offset = offsetof(UCharacterMovementComponent, GroupsToIgnore);
	static_assert(UCharacterMovementComponent_GroupsToIgnore_Offset == 0x534, "UCharacterMovementComponent::GroupsToIgnore offset is not 534");
	auto constexpr UCharacterMovementComponent_AvoidanceWeight_Offset = offsetof(UCharacterMovementComponent, AvoidanceWeight);
	static_assert(UCharacterMovementComponent_AvoidanceWeight_Offset == 0x538, "UCharacterMovementComponent::AvoidanceWeight offset is not 538");
	auto constexpr UCharacterMovementComponent_PendingLaunchVelocity_Offset = offsetof(UCharacterMovementComponent, PendingLaunchVelocity);
	static_assert(UCharacterMovementComponent_PendingLaunchVelocity_Offset == 0x53c, "UCharacterMovementComponent::PendingLaunchVelocity offset is not 53c");
	auto constexpr UCharacterMovementComponent_NavMeshProjectionInterval_Offset = offsetof(UCharacterMovementComponent, NavMeshProjectionInterval);
	static_assert(UCharacterMovementComponent_NavMeshProjectionInterval_Offset == 0x5e8, "UCharacterMovementComponent::NavMeshProjectionInterval offset is not 5e8");
	auto constexpr UCharacterMovementComponent_NavMeshProjectionTimer_Offset = offsetof(UCharacterMovementComponent, NavMeshProjectionTimer);
	static_assert(UCharacterMovementComponent_NavMeshProjectionTimer_Offset == 0x5ec, "UCharacterMovementComponent::NavMeshProjectionTimer offset is not 5ec");
	auto constexpr UCharacterMovementComponent_NavMeshProjectionInterpSpeed_Offset = offsetof(UCharacterMovementComponent, NavMeshProjectionInterpSpeed);
	static_assert(UCharacterMovementComponent_NavMeshProjectionInterpSpeed_Offset == 0x5f0, "UCharacterMovementComponent::NavMeshProjectionInterpSpeed offset is not 5f0");
	auto constexpr UCharacterMovementComponent_NavMeshProjectionHeightScaleUp_Offset = offsetof(UCharacterMovementComponent, NavMeshProjectionHeightScaleUp);
	static_assert(UCharacterMovementComponent_NavMeshProjectionHeightScaleUp_Offset == 0x5f4, "UCharacterMovementComponent::NavMeshProjectionHeightScaleUp offset is not 5f4");
	auto constexpr UCharacterMovementComponent_NavMeshProjectionHeightScaleDown_Offset = offsetof(UCharacterMovementComponent, NavMeshProjectionHeightScaleDown);
	static_assert(UCharacterMovementComponent_NavMeshProjectionHeightScaleDown_Offset == 0x5f8, "UCharacterMovementComponent::NavMeshProjectionHeightScaleDown offset is not 5f8");
	auto constexpr UCharacterMovementComponent_NavWalkingFloorDistTolerance_Offset = offsetof(UCharacterMovementComponent, NavWalkingFloorDistTolerance);
	static_assert(UCharacterMovementComponent_NavWalkingFloorDistTolerance_Offset == 0x5fc, "UCharacterMovementComponent::NavWalkingFloorDistTolerance offset is not 5fc");
	auto constexpr UCharacterMovementComponent_PostPhysicsTickFunction_Offset = offsetof(UCharacterMovementComponent, PostPhysicsTickFunction);
	static_assert(UCharacterMovementComponent_PostPhysicsTickFunction_Offset == 0x618, "UCharacterMovementComponent::PostPhysicsTickFunction offset is not 618");
	auto constexpr UCharacterMovementComponent_MinTimeBetweenTimeStampResets_Offset = offsetof(UCharacterMovementComponent, MinTimeBetweenTimeStampResets);
	static_assert(UCharacterMovementComponent_MinTimeBetweenTimeStampResets_Offset == 0x680, "UCharacterMovementComponent::MinTimeBetweenTimeStampResets offset is not 680");
	auto constexpr UCharacterMovementComponent_CurrentRootMotion_Offset = offsetof(UCharacterMovementComponent, CurrentRootMotion);
	static_assert(UCharacterMovementComponent_CurrentRootMotion_Offset == 0x688, "UCharacterMovementComponent::CurrentRootMotion offset is not 688");
	auto constexpr UCharacterMovementComponent_RootMotionParams_Offset = offsetof(UCharacterMovementComponent, RootMotionParams);
	static_assert(UCharacterMovementComponent_RootMotionParams_Offset == 0x820, "UCharacterMovementComponent::RootMotionParams offset is not 820");
	auto constexpr UCharacterMovementComponent_AnimRootMotionVelocity_Offset = offsetof(UCharacterMovementComponent, AnimRootMotionVelocity);
	static_assert(UCharacterMovementComponent_AnimRootMotionVelocity_Offset == 0x860, "UCharacterMovementComponent::AnimRootMotionVelocity offset is not 860");
	auto constexpr UCharacterMovementComponent_boolField86C_Offset = offsetof(UCharacterMovementComponent, boolField86C);
	static_assert(UCharacterMovementComponent_boolField86C_Offset == 0x86c, "UCharacterMovementComponent::boolField86C offset is not 86c");
	auto constexpr UCharacterMovementComponent_boolField870_Offset = offsetof(UCharacterMovementComponent, boolField870);
	static_assert(UCharacterMovementComponent_boolField870_Offset == 0x870, "UCharacterMovementComponent::boolField870 offset is not 870");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
