#pragma once
#include "UActorComponent.hpp"
#include "ECollisionChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleHitComponent // Size: 0x350
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslVehicleHitComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1608); // id32("Class TslGame.TslVehicleHitComponent")
		return ptr;
	}
//	FScriptMulticastDelegate OnCharacterHit; /* Ofs: 0x1E8 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleHitComponent.OnCharacterHit */
	uint8_t UnknownData1F0[0x8];
	ExternalPtr<struct UMeshComponent> MeshComponent; /* Ofs: 0x1F8 Size: 0x8 - ObjectProperty TslGame.TslVehicleHitComponent.MeshComponent */
	float HitCharacterDuration; /* Ofs: 0x200 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.HitCharacterDuration */
	uint8_t UnknownData204[0x54];
	float LeaveCharacterIgnoreDuration; /* Ofs: 0x258 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.LeaveCharacterIgnoreDuration */
	float CharacterHitMinimumVehicleSpeed; /* Ofs: 0x25C Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.CharacterHitMinimumVehicleSpeed */
	float CharacterDamageVelocityUnitMultiplier; /* Ofs: 0x260 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.CharacterDamageVelocityUnitMultiplier */
	float CharacterDamageMassUnitMultiplier; /* Ofs: 0x264 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.CharacterDamageMassUnitMultiplier */
	ExternalPtr<struct UCurveFloat> CharacterDamageSpeedCurve; /* Ofs: 0x268 Size: 0x8 - ObjectProperty TslGame.TslVehicleHitComponent.CharacterDamageSpeedCurve */
	ExternalPtr<struct UCurveFloat> CharacterDamageSpeedCurve_Console; /* Ofs: 0x270 Size: 0x8 - ObjectProperty TslGame.TslVehicleHitComponent.CharacterDamageSpeedCurve_Console */
	ExternalPtr<struct UCurveFloat> CharacterDamageMassCurve; /* Ofs: 0x278 Size: 0x8 - ObjectProperty TslGame.TslVehicleHitComponent.CharacterDamageMassCurve */
	float MinimumCharacterDamage; /* Ofs: 0x280 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.MinimumCharacterDamage */
	float CharacterLaunchSpeedMultiplier; /* Ofs: 0x284 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.CharacterLaunchSpeedMultiplier */
	float MinimumCharacterLaunchSpeed; /* Ofs: 0x288 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.MinimumCharacterLaunchSpeed */
	float PhysicsImpulseMultiplier; /* Ofs: 0x28C Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpulseMultiplier */
	ExternalPtr<struct UPhysicalMaterial> VoidPhysicalMaterial; /* Ofs: 0x290 Size: 0x8 - ObjectProperty TslGame.TslVehicleHitComponent.VoidPhysicalMaterial */
	float PhysicsImpactModifier; /* Ofs: 0x298 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpactModifier */
	float PhysicsImpactModifierUpsideDown; /* Ofs: 0x29C Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpactModifierUpsideDown */
	float PhysicsImpactAbsorption; /* Ofs: 0x2A0 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpactAbsorption */
	float PhysicsImpactAbsorption_Console; /* Ofs: 0x2A4 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpactAbsorption_Console */
	float PhysicsImpactAbsorptionUpsideDown; /* Ofs: 0x2A8 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpactAbsorptionUpsideDown */
	float PhysicsImpactAbsorptionRider; /* Ofs: 0x2AC Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpactAbsorptionRider */
	float PhysicsImpactAbsorptionRider_Console; /* Ofs: 0x2B0 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpactAbsorptionRider_Console */
	float PhysicsImpactAbsorptionRiderUpsideDown; /* Ofs: 0x2B4 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpactAbsorptionRiderUpsideDown */
	float PhysicsImpactVehicleDamageMultiplier; /* Ofs: 0x2B8 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpactVehicleDamageMultiplier */
	float PhysicsImpactVehicleDamageMultiplier_Console; /* Ofs: 0x2BC Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpactVehicleDamageMultiplier_Console */
	float PhysicsImpactRiderDamageMultiplier; /* Ofs: 0x2C0 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpactRiderDamageMultiplier */
	float PhysicsImpactRiderDamageMultiplier_Console; /* Ofs: 0x2C4 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.PhysicsImpactRiderDamageMultiplier_Console */
	ExternalPtr<struct UClass> VehicleHitDamageType; /* Ofs: 0x2C8 Size: 0x8 - ClassProperty TslGame.TslVehicleHitComponent.VehicleHitDamageType */
	ExternalPtr<struct UClass> VehicleCrashDamageType; /* Ofs: 0x2D0 Size: 0x8 - ClassProperty TslGame.TslVehicleHitComponent.VehicleCrashDamageType */
	uint8_t UnknownData2D8[0x4];
	float ExplosionBaseDamage; /* Ofs: 0x2DC Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.ExplosionBaseDamage */
	float ExplosionMinimumDamage; /* Ofs: 0x2E0 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.ExplosionMinimumDamage */
	float ExplosionRadiusInner; /* Ofs: 0x2E4 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.ExplosionRadiusInner */
	float ExplosionRadiusOuter; /* Ofs: 0x2E8 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.ExplosionRadiusOuter */
	float ExplosionDamageFalloff; /* Ofs: 0x2EC Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.ExplosionDamageFalloff */
	ExternalPtr<struct UClass> ExplosionDamageType; /* Ofs: 0x2F0 Size: 0x8 - ClassProperty TslGame.TslVehicleHitComponent.ExplosionDamageType */
	TEnumAsByte<enum ECollisionChannel> ExplosionDamagePreventionChannel; /* Ofs: 0x2F8 Size: 0x1 - ByteProperty TslGame.TslVehicleHitComponent.ExplosionDamagePreventionChannel */
	uint8_t UnknownData2F9[0xF];
	float ImpulseLimitationSpeedThreshold; /* Ofs: 0x308 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.ImpulseLimitationSpeedThreshold */
	float ImpulseLimitationSpeedThreshold_Console; /* Ofs: 0x30C Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.ImpulseLimitationSpeedThreshold_Console */
	float CollectTime; /* Ofs: 0x310 Size: 0x4 - FloatProperty TslGame.TslVehicleHitComponent.CollectTime */
	uint8_t UnknownData314[0xC];
	TArray<struct FVehicleDebugHit> DebugHitHistory; /* Ofs: 0x320 Size: 0x10 - ArrayProperty TslGame.TslVehicleHitComponent.DebugHitHistory */
	uint8_t UnknownData330[0x8];
	TArray<ExternalPtr<struct UClass>> HitAbsorberTypes; /* Ofs: 0x338 Size: 0x10 - ArrayProperty TslGame.TslVehicleHitComponent.HitAbsorberTypes */
	uint8_t UnknownData348[0x8];


//	inline bool SetOnCharacterHit(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetMeshComponent(t_structHelper inst, ExternalPtr<struct UMeshComponent> value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetHitCharacterDuration(t_structHelper inst, float value) { inst.WriteOffset(0x200, value); }
	inline bool SetLeaveCharacterIgnoreDuration(t_structHelper inst, float value) { inst.WriteOffset(0x258, value); }
	inline bool SetCharacterHitMinimumVehicleSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x25C, value); }
	inline bool SetCharacterDamageVelocityUnitMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x260, value); }
	inline bool SetCharacterDamageMassUnitMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x264, value); }
	inline bool SetCharacterDamageSpeedCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x268, value); }
	inline bool SetCharacterDamageSpeedCurve_Console(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x270, value); }
	inline bool SetCharacterDamageMassCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x278, value); }
	inline bool SetMinimumCharacterDamage(t_structHelper inst, float value) { inst.WriteOffset(0x280, value); }
	inline bool SetCharacterLaunchSpeedMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x284, value); }
	inline bool SetMinimumCharacterLaunchSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x288, value); }
	inline bool SetPhysicsImpulseMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x28C, value); }
	inline bool SetVoidPhysicalMaterial(t_structHelper inst, ExternalPtr<struct UPhysicalMaterial> value) { inst.WriteOffset(0x290, value); }
	inline bool SetPhysicsImpactModifier(t_structHelper inst, float value) { inst.WriteOffset(0x298, value); }
	inline bool SetPhysicsImpactModifierUpsideDown(t_structHelper inst, float value) { inst.WriteOffset(0x29C, value); }
	inline bool SetPhysicsImpactAbsorption(t_structHelper inst, float value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetPhysicsImpactAbsorption_Console(t_structHelper inst, float value) { inst.WriteOffset(0x2A4, value); }
	inline bool SetPhysicsImpactAbsorptionUpsideDown(t_structHelper inst, float value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetPhysicsImpactAbsorptionRider(t_structHelper inst, float value) { inst.WriteOffset(0x2AC, value); }
	inline bool SetPhysicsImpactAbsorptionRider_Console(t_structHelper inst, float value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetPhysicsImpactAbsorptionRiderUpsideDown(t_structHelper inst, float value) { inst.WriteOffset(0x2B4, value); }
	inline bool SetPhysicsImpactVehicleDamageMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetPhysicsImpactVehicleDamageMultiplier_Console(t_structHelper inst, float value) { inst.WriteOffset(0x2BC, value); }
	inline bool SetPhysicsImpactRiderDamageMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetPhysicsImpactRiderDamageMultiplier_Console(t_structHelper inst, float value) { inst.WriteOffset(0x2C4, value); }
	inline bool SetVehicleHitDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetVehicleCrashDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetExplosionBaseDamage(t_structHelper inst, float value) { inst.WriteOffset(0x2DC, value); }
	inline bool SetExplosionMinimumDamage(t_structHelper inst, float value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetExplosionRadiusInner(t_structHelper inst, float value) { inst.WriteOffset(0x2E4, value); }
	inline bool SetExplosionRadiusOuter(t_structHelper inst, float value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetExplosionDamageFalloff(t_structHelper inst, float value) { inst.WriteOffset(0x2EC, value); }
	inline bool SetExplosionDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetExplosionDamagePreventionChannel(t_structHelper inst, TEnumAsByte<enum ECollisionChannel> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetImpulseLimitationSpeedThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x308, value); }
	inline bool SetImpulseLimitationSpeedThreshold_Console(t_structHelper inst, float value) { inst.WriteOffset(0x30C, value); }
	inline bool SetCollectTime(t_structHelper inst, float value) { inst.WriteOffset(0x310, value); }
	inline bool SetDebugHitHistory(t_structHelper inst, TArray<struct FVehicleDebugHit> value) { inst.WriteOffset(0x320, value); }
	inline bool SetHitAbsorberTypes(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x338, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleHitComponent = sizeof(UTslVehicleHitComponent); // 848
    static_assert(sizeof(UTslVehicleHitComponent) == 0x350, "Size of UTslVehicleHitComponent is not correct.");
//	auto constexpr UTslVehicleHitComponent_OnCharacterHit_Offset = offsetof(UTslVehicleHitComponent, OnCharacterHit);
//	static_assert(UTslVehicleHitComponent_OnCharacterHit_Offset == 0x1e8, "UTslVehicleHitComponent::OnCharacterHit offset is not 1e8");
	auto constexpr UTslVehicleHitComponent_MeshComponent_Offset = offsetof(UTslVehicleHitComponent, MeshComponent);
	static_assert(UTslVehicleHitComponent_MeshComponent_Offset == 0x1f8, "UTslVehicleHitComponent::MeshComponent offset is not 1f8");
	auto constexpr UTslVehicleHitComponent_HitCharacterDuration_Offset = offsetof(UTslVehicleHitComponent, HitCharacterDuration);
	static_assert(UTslVehicleHitComponent_HitCharacterDuration_Offset == 0x200, "UTslVehicleHitComponent::HitCharacterDuration offset is not 200");
	auto constexpr UTslVehicleHitComponent_LeaveCharacterIgnoreDuration_Offset = offsetof(UTslVehicleHitComponent, LeaveCharacterIgnoreDuration);
	static_assert(UTslVehicleHitComponent_LeaveCharacterIgnoreDuration_Offset == 0x258, "UTslVehicleHitComponent::LeaveCharacterIgnoreDuration offset is not 258");
	auto constexpr UTslVehicleHitComponent_CharacterHitMinimumVehicleSpeed_Offset = offsetof(UTslVehicleHitComponent, CharacterHitMinimumVehicleSpeed);
	static_assert(UTslVehicleHitComponent_CharacterHitMinimumVehicleSpeed_Offset == 0x25c, "UTslVehicleHitComponent::CharacterHitMinimumVehicleSpeed offset is not 25c");
	auto constexpr UTslVehicleHitComponent_CharacterDamageVelocityUnitMultiplier_Offset = offsetof(UTslVehicleHitComponent, CharacterDamageVelocityUnitMultiplier);
	static_assert(UTslVehicleHitComponent_CharacterDamageVelocityUnitMultiplier_Offset == 0x260, "UTslVehicleHitComponent::CharacterDamageVelocityUnitMultiplier offset is not 260");
	auto constexpr UTslVehicleHitComponent_CharacterDamageMassUnitMultiplier_Offset = offsetof(UTslVehicleHitComponent, CharacterDamageMassUnitMultiplier);
	static_assert(UTslVehicleHitComponent_CharacterDamageMassUnitMultiplier_Offset == 0x264, "UTslVehicleHitComponent::CharacterDamageMassUnitMultiplier offset is not 264");
	auto constexpr UTslVehicleHitComponent_CharacterDamageSpeedCurve_Offset = offsetof(UTslVehicleHitComponent, CharacterDamageSpeedCurve);
	static_assert(UTslVehicleHitComponent_CharacterDamageSpeedCurve_Offset == 0x268, "UTslVehicleHitComponent::CharacterDamageSpeedCurve offset is not 268");
	auto constexpr UTslVehicleHitComponent_CharacterDamageSpeedCurve_Console_Offset = offsetof(UTslVehicleHitComponent, CharacterDamageSpeedCurve_Console);
	static_assert(UTslVehicleHitComponent_CharacterDamageSpeedCurve_Console_Offset == 0x270, "UTslVehicleHitComponent::CharacterDamageSpeedCurve_Console offset is not 270");
	auto constexpr UTslVehicleHitComponent_CharacterDamageMassCurve_Offset = offsetof(UTslVehicleHitComponent, CharacterDamageMassCurve);
	static_assert(UTslVehicleHitComponent_CharacterDamageMassCurve_Offset == 0x278, "UTslVehicleHitComponent::CharacterDamageMassCurve offset is not 278");
	auto constexpr UTslVehicleHitComponent_MinimumCharacterDamage_Offset = offsetof(UTslVehicleHitComponent, MinimumCharacterDamage);
	static_assert(UTslVehicleHitComponent_MinimumCharacterDamage_Offset == 0x280, "UTslVehicleHitComponent::MinimumCharacterDamage offset is not 280");
	auto constexpr UTslVehicleHitComponent_CharacterLaunchSpeedMultiplier_Offset = offsetof(UTslVehicleHitComponent, CharacterLaunchSpeedMultiplier);
	static_assert(UTslVehicleHitComponent_CharacterLaunchSpeedMultiplier_Offset == 0x284, "UTslVehicleHitComponent::CharacterLaunchSpeedMultiplier offset is not 284");
	auto constexpr UTslVehicleHitComponent_MinimumCharacterLaunchSpeed_Offset = offsetof(UTslVehicleHitComponent, MinimumCharacterLaunchSpeed);
	static_assert(UTslVehicleHitComponent_MinimumCharacterLaunchSpeed_Offset == 0x288, "UTslVehicleHitComponent::MinimumCharacterLaunchSpeed offset is not 288");
	auto constexpr UTslVehicleHitComponent_PhysicsImpulseMultiplier_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpulseMultiplier);
	static_assert(UTslVehicleHitComponent_PhysicsImpulseMultiplier_Offset == 0x28c, "UTslVehicleHitComponent::PhysicsImpulseMultiplier offset is not 28c");
	auto constexpr UTslVehicleHitComponent_VoidPhysicalMaterial_Offset = offsetof(UTslVehicleHitComponent, VoidPhysicalMaterial);
	static_assert(UTslVehicleHitComponent_VoidPhysicalMaterial_Offset == 0x290, "UTslVehicleHitComponent::VoidPhysicalMaterial offset is not 290");
	auto constexpr UTslVehicleHitComponent_PhysicsImpactModifier_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpactModifier);
	static_assert(UTslVehicleHitComponent_PhysicsImpactModifier_Offset == 0x298, "UTslVehicleHitComponent::PhysicsImpactModifier offset is not 298");
	auto constexpr UTslVehicleHitComponent_PhysicsImpactModifierUpsideDown_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpactModifierUpsideDown);
	static_assert(UTslVehicleHitComponent_PhysicsImpactModifierUpsideDown_Offset == 0x29c, "UTslVehicleHitComponent::PhysicsImpactModifierUpsideDown offset is not 29c");
	auto constexpr UTslVehicleHitComponent_PhysicsImpactAbsorption_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpactAbsorption);
	static_assert(UTslVehicleHitComponent_PhysicsImpactAbsorption_Offset == 0x2a0, "UTslVehicleHitComponent::PhysicsImpactAbsorption offset is not 2a0");
	auto constexpr UTslVehicleHitComponent_PhysicsImpactAbsorption_Console_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpactAbsorption_Console);
	static_assert(UTslVehicleHitComponent_PhysicsImpactAbsorption_Console_Offset == 0x2a4, "UTslVehicleHitComponent::PhysicsImpactAbsorption_Console offset is not 2a4");
	auto constexpr UTslVehicleHitComponent_PhysicsImpactAbsorptionUpsideDown_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpactAbsorptionUpsideDown);
	static_assert(UTslVehicleHitComponent_PhysicsImpactAbsorptionUpsideDown_Offset == 0x2a8, "UTslVehicleHitComponent::PhysicsImpactAbsorptionUpsideDown offset is not 2a8");
	auto constexpr UTslVehicleHitComponent_PhysicsImpactAbsorptionRider_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpactAbsorptionRider);
	static_assert(UTslVehicleHitComponent_PhysicsImpactAbsorptionRider_Offset == 0x2ac, "UTslVehicleHitComponent::PhysicsImpactAbsorptionRider offset is not 2ac");
	auto constexpr UTslVehicleHitComponent_PhysicsImpactAbsorptionRider_Console_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpactAbsorptionRider_Console);
	static_assert(UTslVehicleHitComponent_PhysicsImpactAbsorptionRider_Console_Offset == 0x2b0, "UTslVehicleHitComponent::PhysicsImpactAbsorptionRider_Console offset is not 2b0");
	auto constexpr UTslVehicleHitComponent_PhysicsImpactAbsorptionRiderUpsideDown_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpactAbsorptionRiderUpsideDown);
	static_assert(UTslVehicleHitComponent_PhysicsImpactAbsorptionRiderUpsideDown_Offset == 0x2b4, "UTslVehicleHitComponent::PhysicsImpactAbsorptionRiderUpsideDown offset is not 2b4");
	auto constexpr UTslVehicleHitComponent_PhysicsImpactVehicleDamageMultiplier_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpactVehicleDamageMultiplier);
	static_assert(UTslVehicleHitComponent_PhysicsImpactVehicleDamageMultiplier_Offset == 0x2b8, "UTslVehicleHitComponent::PhysicsImpactVehicleDamageMultiplier offset is not 2b8");
	auto constexpr UTslVehicleHitComponent_PhysicsImpactVehicleDamageMultiplier_Console_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpactVehicleDamageMultiplier_Console);
	static_assert(UTslVehicleHitComponent_PhysicsImpactVehicleDamageMultiplier_Console_Offset == 0x2bc, "UTslVehicleHitComponent::PhysicsImpactVehicleDamageMultiplier_Console offset is not 2bc");
	auto constexpr UTslVehicleHitComponent_PhysicsImpactRiderDamageMultiplier_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpactRiderDamageMultiplier);
	static_assert(UTslVehicleHitComponent_PhysicsImpactRiderDamageMultiplier_Offset == 0x2c0, "UTslVehicleHitComponent::PhysicsImpactRiderDamageMultiplier offset is not 2c0");
	auto constexpr UTslVehicleHitComponent_PhysicsImpactRiderDamageMultiplier_Console_Offset = offsetof(UTslVehicleHitComponent, PhysicsImpactRiderDamageMultiplier_Console);
	static_assert(UTslVehicleHitComponent_PhysicsImpactRiderDamageMultiplier_Console_Offset == 0x2c4, "UTslVehicleHitComponent::PhysicsImpactRiderDamageMultiplier_Console offset is not 2c4");
	auto constexpr UTslVehicleHitComponent_VehicleHitDamageType_Offset = offsetof(UTslVehicleHitComponent, VehicleHitDamageType);
	static_assert(UTslVehicleHitComponent_VehicleHitDamageType_Offset == 0x2c8, "UTslVehicleHitComponent::VehicleHitDamageType offset is not 2c8");
	auto constexpr UTslVehicleHitComponent_VehicleCrashDamageType_Offset = offsetof(UTslVehicleHitComponent, VehicleCrashDamageType);
	static_assert(UTslVehicleHitComponent_VehicleCrashDamageType_Offset == 0x2d0, "UTslVehicleHitComponent::VehicleCrashDamageType offset is not 2d0");
	auto constexpr UTslVehicleHitComponent_ExplosionBaseDamage_Offset = offsetof(UTslVehicleHitComponent, ExplosionBaseDamage);
	static_assert(UTslVehicleHitComponent_ExplosionBaseDamage_Offset == 0x2dc, "UTslVehicleHitComponent::ExplosionBaseDamage offset is not 2dc");
	auto constexpr UTslVehicleHitComponent_ExplosionMinimumDamage_Offset = offsetof(UTslVehicleHitComponent, ExplosionMinimumDamage);
	static_assert(UTslVehicleHitComponent_ExplosionMinimumDamage_Offset == 0x2e0, "UTslVehicleHitComponent::ExplosionMinimumDamage offset is not 2e0");
	auto constexpr UTslVehicleHitComponent_ExplosionRadiusInner_Offset = offsetof(UTslVehicleHitComponent, ExplosionRadiusInner);
	static_assert(UTslVehicleHitComponent_ExplosionRadiusInner_Offset == 0x2e4, "UTslVehicleHitComponent::ExplosionRadiusInner offset is not 2e4");
	auto constexpr UTslVehicleHitComponent_ExplosionRadiusOuter_Offset = offsetof(UTslVehicleHitComponent, ExplosionRadiusOuter);
	static_assert(UTslVehicleHitComponent_ExplosionRadiusOuter_Offset == 0x2e8, "UTslVehicleHitComponent::ExplosionRadiusOuter offset is not 2e8");
	auto constexpr UTslVehicleHitComponent_ExplosionDamageFalloff_Offset = offsetof(UTslVehicleHitComponent, ExplosionDamageFalloff);
	static_assert(UTslVehicleHitComponent_ExplosionDamageFalloff_Offset == 0x2ec, "UTslVehicleHitComponent::ExplosionDamageFalloff offset is not 2ec");
	auto constexpr UTslVehicleHitComponent_ExplosionDamageType_Offset = offsetof(UTslVehicleHitComponent, ExplosionDamageType);
	static_assert(UTslVehicleHitComponent_ExplosionDamageType_Offset == 0x2f0, "UTslVehicleHitComponent::ExplosionDamageType offset is not 2f0");
	auto constexpr UTslVehicleHitComponent_ExplosionDamagePreventionChannel_Offset = offsetof(UTslVehicleHitComponent, ExplosionDamagePreventionChannel);
	static_assert(UTslVehicleHitComponent_ExplosionDamagePreventionChannel_Offset == 0x2f8, "UTslVehicleHitComponent::ExplosionDamagePreventionChannel offset is not 2f8");
	auto constexpr UTslVehicleHitComponent_ImpulseLimitationSpeedThreshold_Offset = offsetof(UTslVehicleHitComponent, ImpulseLimitationSpeedThreshold);
	static_assert(UTslVehicleHitComponent_ImpulseLimitationSpeedThreshold_Offset == 0x308, "UTslVehicleHitComponent::ImpulseLimitationSpeedThreshold offset is not 308");
	auto constexpr UTslVehicleHitComponent_ImpulseLimitationSpeedThreshold_Console_Offset = offsetof(UTslVehicleHitComponent, ImpulseLimitationSpeedThreshold_Console);
	static_assert(UTslVehicleHitComponent_ImpulseLimitationSpeedThreshold_Console_Offset == 0x30c, "UTslVehicleHitComponent::ImpulseLimitationSpeedThreshold_Console offset is not 30c");
	auto constexpr UTslVehicleHitComponent_CollectTime_Offset = offsetof(UTslVehicleHitComponent, CollectTime);
	static_assert(UTslVehicleHitComponent_CollectTime_Offset == 0x310, "UTslVehicleHitComponent::CollectTime offset is not 310");
	auto constexpr UTslVehicleHitComponent_DebugHitHistory_Offset = offsetof(UTslVehicleHitComponent, DebugHitHistory);
	static_assert(UTslVehicleHitComponent_DebugHitHistory_Offset == 0x320, "UTslVehicleHitComponent::DebugHitHistory offset is not 320");
	auto constexpr UTslVehicleHitComponent_HitAbsorberTypes_Offset = offsetof(UTslVehicleHitComponent, HitAbsorberTypes);
	static_assert(UTslVehicleHitComponent_HitAbsorberTypes_Offset == 0x338, "UTslVehicleHitComponent::HitAbsorberTypes offset is not 338");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
