#pragma once
#include "UMovementComponent.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjectileMovementComponent // Size: 0x2A0
	: public UMovementComponent // Size: 0x230
{
private:
	typedef UProjectileMovementComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1802); // id32("Class Engine.ProjectileMovementComponent")
		return ptr;
	}
	float InitialSpeed; /* Ofs: 0x230 Size: 0x4 - FloatProperty Engine.ProjectileMovementComponent.InitialSpeed */
	float MaxSpeed; /* Ofs: 0x234 Size: 0x4 - FloatProperty Engine.ProjectileMovementComponent.MaxSpeed */
	uint8_t boolField238;
	uint8_t UnknownData239[0x3];
	float PreviousHitTime; /* Ofs: 0x23C Size: 0x4 - FloatProperty Engine.ProjectileMovementComponent.PreviousHitTime */
	FVector PreviousHitNormal; /* Ofs: 0x240 Size: 0xC - StructProperty Engine.ProjectileMovementComponent.PreviousHitNormal */
	float ProjectileGravityScale; /* Ofs: 0x24C Size: 0x4 - FloatProperty Engine.ProjectileMovementComponent.ProjectileGravityScale */
	float Buoyancy; /* Ofs: 0x250 Size: 0x4 - FloatProperty Engine.ProjectileMovementComponent.Buoyancy */
	float Bounciness; /* Ofs: 0x254 Size: 0x4 - FloatProperty Engine.ProjectileMovementComponent.Bounciness */
	float Friction; /* Ofs: 0x258 Size: 0x4 - FloatProperty Engine.ProjectileMovementComponent.Friction */
	float BounceVelocityStopSimulatingThreshold; /* Ofs: 0x25C Size: 0x4 - FloatProperty Engine.ProjectileMovementComponent.BounceVelocityStopSimulatingThreshold */
	FScriptMulticastDelegate OnProjectileBounce; /* Ofs: 0x260 Size: 0x10 - MulticastDelegateProperty Engine.ProjectileMovementComponent.OnProjectileBounce */
	FScriptMulticastDelegate OnProjectileStop; /* Ofs: 0x270 Size: 0x10 - MulticastDelegateProperty Engine.ProjectileMovementComponent.OnProjectileStop */
	float HomingAccelerationMagnitude; /* Ofs: 0x280 Size: 0x4 - FloatProperty Engine.ProjectileMovementComponent.HomingAccelerationMagnitude */
	TWeakObjectPtr<ExternalPtr<struct USceneComponent>> HomingTargetComponent; /* Ofs: 0x284 Size: 0x8 - WeakObjectProperty Engine.ProjectileMovementComponent.HomingTargetComponent */
	float MaxSimulationTimeStep; /* Ofs: 0x28C Size: 0x4 - FloatProperty Engine.ProjectileMovementComponent.MaxSimulationTimeStep */
	int32_t MaxSimulationIterations; /* Ofs: 0x290 Size: 0x4 - IntProperty Engine.ProjectileMovementComponent.MaxSimulationIterations */
	uint8_t UnknownData294[0xC];


	inline bool SetInitialSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x230, value); }
	inline bool SetMaxSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x234, value); }
	inline bool bRotationFollowsVelocity()
	{
		return boolField238& 0x1;
	}
	inline bool SetbRotationFollowsVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x238, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShouldBounce()
	{
		return boolField238& 0x2;
	}
	inline bool SetbShouldBounce(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x238, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bInitialVelocityInLocalSpace()
	{
		return boolField238& 0x4;
	}
	inline bool SetbInitialVelocityInLocalSpace(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x238, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bForceSubStepping()
	{
		return boolField238& 0x8;
	}
	inline bool SetbForceSubStepping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x238, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bIsHomingProjectile()
	{
		return boolField238& 0x10;
	}
	inline bool SetbIsHomingProjectile(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x238, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bBounceAngleAffectsFriction()
	{
		return boolField238& 0x20;
	}
	inline bool SetbBounceAngleAffectsFriction(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x238, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bIsSliding()
	{
		return boolField238& 0x40;
	}
	inline bool SetbIsSliding(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x238, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool SetPreviousHitTime(t_structHelper inst, float value) { inst.WriteOffset(0x23C, value); }
	inline bool SetPreviousHitNormal(t_structHelper inst, FVector value) { inst.WriteOffset(0x240, value); }
	inline bool SetProjectileGravityScale(t_structHelper inst, float value) { inst.WriteOffset(0x24C, value); }
	inline bool SetBuoyancy(t_structHelper inst, float value) { inst.WriteOffset(0x250, value); }
	inline bool SetBounciness(t_structHelper inst, float value) { inst.WriteOffset(0x254, value); }
	inline bool SetFriction(t_structHelper inst, float value) { inst.WriteOffset(0x258, value); }
	inline bool SetBounceVelocityStopSimulatingThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x25C, value); }
	inline bool SetOnProjectileBounce(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x260, value); }
	inline bool SetOnProjectileStop(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x270, value); }
	inline bool SetHomingAccelerationMagnitude(t_structHelper inst, float value) { inst.WriteOffset(0x280, value); }
	inline bool SetHomingTargetComponent(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct USceneComponent>> value) { inst.WriteOffset(0x284, value); }
	inline bool SetMaxSimulationTimeStep(t_structHelper inst, float value) { inst.WriteOffset(0x28C, value); }
	inline bool SetMaxSimulationIterations(t_structHelper inst, int32_t value) { inst.WriteOffset(0x290, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjectileMovementComponent = sizeof(UProjectileMovementComponent); // 672
    static_assert(sizeof(UProjectileMovementComponent) == 0x2A0, "Size of UProjectileMovementComponent is not correct.");
	auto constexpr UProjectileMovementComponent_InitialSpeed_Offset = offsetof(UProjectileMovementComponent, InitialSpeed);
	static_assert(UProjectileMovementComponent_InitialSpeed_Offset == 0x230, "UProjectileMovementComponent::InitialSpeed offset is not 230");
	auto constexpr UProjectileMovementComponent_MaxSpeed_Offset = offsetof(UProjectileMovementComponent, MaxSpeed);
	static_assert(UProjectileMovementComponent_MaxSpeed_Offset == 0x234, "UProjectileMovementComponent::MaxSpeed offset is not 234");
	auto constexpr UProjectileMovementComponent_boolField238_Offset = offsetof(UProjectileMovementComponent, boolField238);
	static_assert(UProjectileMovementComponent_boolField238_Offset == 0x238, "UProjectileMovementComponent::boolField238 offset is not 238");
	auto constexpr UProjectileMovementComponent_PreviousHitTime_Offset = offsetof(UProjectileMovementComponent, PreviousHitTime);
	static_assert(UProjectileMovementComponent_PreviousHitTime_Offset == 0x23c, "UProjectileMovementComponent::PreviousHitTime offset is not 23c");
	auto constexpr UProjectileMovementComponent_PreviousHitNormal_Offset = offsetof(UProjectileMovementComponent, PreviousHitNormal);
	static_assert(UProjectileMovementComponent_PreviousHitNormal_Offset == 0x240, "UProjectileMovementComponent::PreviousHitNormal offset is not 240");
	auto constexpr UProjectileMovementComponent_ProjectileGravityScale_Offset = offsetof(UProjectileMovementComponent, ProjectileGravityScale);
	static_assert(UProjectileMovementComponent_ProjectileGravityScale_Offset == 0x24c, "UProjectileMovementComponent::ProjectileGravityScale offset is not 24c");
	auto constexpr UProjectileMovementComponent_Buoyancy_Offset = offsetof(UProjectileMovementComponent, Buoyancy);
	static_assert(UProjectileMovementComponent_Buoyancy_Offset == 0x250, "UProjectileMovementComponent::Buoyancy offset is not 250");
	auto constexpr UProjectileMovementComponent_Bounciness_Offset = offsetof(UProjectileMovementComponent, Bounciness);
	static_assert(UProjectileMovementComponent_Bounciness_Offset == 0x254, "UProjectileMovementComponent::Bounciness offset is not 254");
	auto constexpr UProjectileMovementComponent_Friction_Offset = offsetof(UProjectileMovementComponent, Friction);
	static_assert(UProjectileMovementComponent_Friction_Offset == 0x258, "UProjectileMovementComponent::Friction offset is not 258");
	auto constexpr UProjectileMovementComponent_BounceVelocityStopSimulatingThreshold_Offset = offsetof(UProjectileMovementComponent, BounceVelocityStopSimulatingThreshold);
	static_assert(UProjectileMovementComponent_BounceVelocityStopSimulatingThreshold_Offset == 0x25c, "UProjectileMovementComponent::BounceVelocityStopSimulatingThreshold offset is not 25c");
	auto constexpr UProjectileMovementComponent_OnProjectileBounce_Offset = offsetof(UProjectileMovementComponent, OnProjectileBounce);
	static_assert(UProjectileMovementComponent_OnProjectileBounce_Offset == 0x260, "UProjectileMovementComponent::OnProjectileBounce offset is not 260");
	auto constexpr UProjectileMovementComponent_OnProjectileStop_Offset = offsetof(UProjectileMovementComponent, OnProjectileStop);
	static_assert(UProjectileMovementComponent_OnProjectileStop_Offset == 0x270, "UProjectileMovementComponent::OnProjectileStop offset is not 270");
	auto constexpr UProjectileMovementComponent_HomingAccelerationMagnitude_Offset = offsetof(UProjectileMovementComponent, HomingAccelerationMagnitude);
	static_assert(UProjectileMovementComponent_HomingAccelerationMagnitude_Offset == 0x280, "UProjectileMovementComponent::HomingAccelerationMagnitude offset is not 280");
	auto constexpr UProjectileMovementComponent_HomingTargetComponent_Offset = offsetof(UProjectileMovementComponent, HomingTargetComponent);
	static_assert(UProjectileMovementComponent_HomingTargetComponent_Offset == 0x284, "UProjectileMovementComponent::HomingTargetComponent offset is not 284");
	auto constexpr UProjectileMovementComponent_MaxSimulationTimeStep_Offset = offsetof(UProjectileMovementComponent, MaxSimulationTimeStep);
	static_assert(UProjectileMovementComponent_MaxSimulationTimeStep_Offset == 0x28c, "UProjectileMovementComponent::MaxSimulationTimeStep offset is not 28c");
	auto constexpr UProjectileMovementComponent_MaxSimulationIterations_Offset = offsetof(UProjectileMovementComponent, MaxSimulationIterations);
	static_assert(UProjectileMovementComponent_MaxSimulationIterations_Offset == 0x290, "UProjectileMovementComponent::MaxSimulationIterations offset is not 290");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
