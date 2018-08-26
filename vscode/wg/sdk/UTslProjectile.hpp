#pragma once
#include "UActor.hpp"
#include "FVector.hpp"
#include "EProjectileExplosionRotationType.hpp"
#include "EProjectileExplodeState.hpp"
#include "FRotator.hpp"
#include "FVector2D.hpp"
#include "FProjectileData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslProjectile // Size: 0x5B0
	: public UActor // Size: 0x410
{
private:
	typedef UTslProjectile t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1483); // id32("Class TslGame.TslProjectile")
		return ptr;
	}
	ExternalPtr<struct UProjectileMovementComponent> MovementComp; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.TslProjectile.MovementComp */
	ExternalPtr<struct USphereComponent> CollisionComp; /* Ofs: 0x418 Size: 0x8 - ObjectProperty TslGame.TslProjectile.CollisionComp */
	ExternalPtr<struct UParticleSystemComponent> ParticleComp; /* Ofs: 0x420 Size: 0x8 - ObjectProperty TslGame.TslProjectile.ParticleComp */
	ExternalPtr<struct UStaticMeshComponent> MeshComp; /* Ofs: 0x428 Size: 0x8 - ObjectProperty TslGame.TslProjectile.MeshComp */
	ExternalPtr<struct UPhysicsConstraintComponent> MeshConstraint; /* Ofs: 0x430 Size: 0x8 - ObjectProperty TslGame.TslProjectile.MeshConstraint */
	FVector MeshInitialRotationRate; /* Ofs: 0x438 Size: 0xC - StructProperty TslGame.TslProjectile.MeshInitialRotationRate */
	uint8_t boolField444;
	uint8_t UnknownData445[0x3];
	FVector SpawnLocation; /* Ofs: 0x448 Size: 0xC - StructProperty TslGame.TslProjectile.SpawnLocation */
	uint8_t UnknownData454[0xC];
	uint8_t boolField460;
	uint8_t boolField461;
	TEnumAsByte<enum EProjectileExplosionRotationType> ExplosionRotationType; /* Ofs: 0x462 Size: 0x1 - EnumProperty TslGame.TslProjectile.ExplosionRotationType */
	uint8_t UnknownData463[0x5];
	FName ParticleToMeshAttachPointName; /* Ofs: 0x468 Size: 0x8 - NameProperty TslGame.TslProjectile.ParticleToMeshAttachPointName */
	uint8_t UnknownData470[0x8];
	ExternalPtr<struct UClass> ExplosionTemplate; /* Ofs: 0x478 Size: 0x8 - ClassProperty TslGame.TslProjectile.ExplosionTemplate */
	ExternalPtr<struct UClass> ExplosionTemplateInAir; /* Ofs: 0x480 Size: 0x8 - ClassProperty TslGame.TslProjectile.ExplosionTemplateInAir */
	ExternalPtr<struct UClass> ExplosionTemplateInWater; /* Ofs: 0x488 Size: 0x8 - ClassProperty TslGame.TslProjectile.ExplosionTemplateInWater */
	ExternalPtr<struct UAkAudioEvent> ImpactSound; /* Ofs: 0x490 Size: 0x8 - ObjectProperty TslGame.TslProjectile.ImpactSound */
	ExternalPtr<struct UAkComponent> AkComp; /* Ofs: 0x498 Size: 0x8 - ObjectProperty TslGame.TslProjectile.AkComp */
	uint8_t UnknownData4A0[0x8];
	TEnumAsByte<enum EProjectileExplodeState> ExplodeState; /* Ofs: 0x4A8 Size: 0x1 - EnumProperty TslGame.TslProjectile.ExplodeState */
	uint8_t boolField4A9;
	uint8_t UnknownData4AA[0x2];
	FRotator ClientMeshRotation; /* Ofs: 0x4AC Size: 0xC - StructProperty TslGame.TslProjectile.ClientMeshRotation */
	FRotator ServerMeshRotation; /* Ofs: 0x4B8 Size: 0xC - StructProperty TslGame.TslProjectile.ServerMeshRotation */
	float VelocityStopStepDistance; /* Ofs: 0x4C4 Size: 0x4 - FloatProperty TslGame.TslProjectile.VelocityStopStepDistance */
	FVector LastStepLocation; /* Ofs: 0x4C8 Size: 0xC - StructProperty TslGame.TslProjectile.LastStepLocation */
	FVector LastTickLocation; /* Ofs: 0x4D4 Size: 0xC - StructProperty TslGame.TslProjectile.LastTickLocation */
	uint8_t UnknownData4E0[0xC];
	FVector2D LocationTargetInterpInMap; /* Ofs: 0x4EC Size: 0x8 - StructProperty TslGame.TslProjectile.LocationTargetInterpInMap */
	FVector2D LocationTargetInterpOutMap; /* Ofs: 0x4F4 Size: 0x8 - StructProperty TslGame.TslProjectile.LocationTargetInterpOutMap */
	float TeleportThreshold; /* Ofs: 0x4FC Size: 0x4 - FloatProperty TslGame.TslProjectile.TeleportThreshold */
	float MinVelocityForDestructibleTrace; /* Ofs: 0x500 Size: 0x4 - FloatProperty TslGame.TslProjectile.MinVelocityForDestructibleTrace */
	int32_t StepBuffer; /* Ofs: 0x504 Size: 0x4 - IntProperty TslGame.TslProjectile.StepBuffer */
	float FinalInterpSpeed; /* Ofs: 0x508 Size: 0x4 - FloatProperty TslGame.TslProjectile.FinalInterpSpeed */
	uint8_t boolField50C;
	uint8_t UnknownData50D[0x3];
	float VelocityCheckTimerTick; /* Ofs: 0x510 Size: 0x4 - FloatProperty TslGame.TslProjectile.VelocityCheckTimerTick */
	uint8_t boolField514;
	uint8_t UnknownData515[0x3];
	float PostExplodeLifetime; /* Ofs: 0x518 Size: 0x4 - FloatProperty TslGame.TslProjectile.PostExplodeLifetime */
	FVector LastImpactVelocity; /* Ofs: 0x51C Size: 0xC - StructProperty TslGame.TslProjectile.LastImpactVelocity */
	FProjectileData ProjectileConfig; /* Ofs: 0x528 Size: 0x40 - StructProperty TslGame.TslProjectile.ProjectileConfig */
	ExternalPtr<struct UClass> ReplicatedEffectActor; /* Ofs: 0x568 Size: 0x8 - ClassProperty TslGame.TslProjectile.ReplicatedEffectActor */
	FScriptMulticastDelegate OnEnterWater; /* Ofs: 0x570 Size: 0x10 - MulticastDelegateProperty TslGame.TslProjectile.OnEnterWater */
	uint8_t UnknownData580[0x30];


	inline bool SetMovementComp(t_structHelper inst, ExternalPtr<struct UProjectileMovementComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetCollisionComp(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetParticleComp(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetMeshComp(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x428, value); }
	inline bool SetMeshConstraint(t_structHelper inst, ExternalPtr<struct UPhysicsConstraintComponent> value) { inst.WriteOffset(0x430, value); }
	inline bool SetMeshInitialRotationRate(t_structHelper inst, FVector value) { inst.WriteOffset(0x438, value); }
	inline bool bSyncServerAndClientRotation()
	{
		return boolField444& 0x1;
	}
	inline bool SetbSyncServerAndClientRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x444, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSpawnLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x448, value); }
	inline bool HideMeshAtExplosion()
	{
		return boolField460& 0x1;
	}
	inline bool SetHideMeshAtExplosion(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x460, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool ExplosionInWater()
	{
		return boolField461& 0x1;
	}
	inline bool SetExplosionInWater(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x461, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetExplosionRotationType(t_structHelper inst, TEnumAsByte<enum EProjectileExplosionRotationType> value) { inst.WriteOffset(0x462, value); }
	inline bool SetParticleToMeshAttachPointName(t_structHelper inst, FName value) { inst.WriteOffset(0x468, value); }
	inline bool SetExplosionTemplate(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x478, value); }
	inline bool SetExplosionTemplateInAir(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x480, value); }
	inline bool SetExplosionTemplateInWater(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x488, value); }
	inline bool SetImpactSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x490, value); }
	inline bool SetAkComp(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x498, value); }
	inline bool SetExplodeState(t_structHelper inst, TEnumAsByte<enum EProjectileExplodeState> value) { inst.WriteOffset(0x4A8, value); }
	inline bool bActiveParticle()
	{
		return boolField4A9& 0x1;
	}
	inline bool SetbActiveParticle(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDoTick()
	{
		return boolField4A9& 0x2;
	}
	inline bool SetbDoTick(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A9, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetClientMeshRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x4AC, value); }
	inline bool SetServerMeshRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetVelocityStopStepDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4C4, value); }
	inline bool SetLastStepLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetLastTickLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x4D4, value); }
	inline bool SetLocationTargetInterpInMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x4EC, value); }
	inline bool SetLocationTargetInterpOutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x4F4, value); }
	inline bool SetTeleportThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x4FC, value); }
	inline bool SetMinVelocityForDestructibleTrace(t_structHelper inst, float value) { inst.WriteOffset(0x500, value); }
	inline bool SetStepBuffer(t_structHelper inst, int32_t value) { inst.WriteOffset(0x504, value); }
	inline bool SetFinalInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x508, value); }
	inline bool bConstantInterpStep()
	{
		return boolField50C& 0x1;
	}
	inline bool SetbConstantInterpStep(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVelocityCheckTimerTick(t_structHelper inst, float value) { inst.WriteOffset(0x510, value); }
	inline bool bPropagateEffectActor()
	{
		return boolField514& 0x1;
	}
	inline bool SetbPropagateEffectActor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x514, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPostExplodeLifetime(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
	inline bool SetLastImpactVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x51C, value); }
	inline bool SetProjectileConfig(t_structHelper inst, FProjectileData value) { inst.WriteOffset(0x528, value); }
	inline bool SetReplicatedEffectActor(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x568, value); }
	inline bool SetOnEnterWater(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x570, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslProjectile = sizeof(UTslProjectile); // 1456
    static_assert(sizeof(UTslProjectile) == 0x5B0, "Size of UTslProjectile is not correct.");
	auto constexpr UTslProjectile_MovementComp_Offset = offsetof(UTslProjectile, MovementComp);
	static_assert(UTslProjectile_MovementComp_Offset == 0x410, "UTslProjectile::MovementComp offset is not 410");
	auto constexpr UTslProjectile_CollisionComp_Offset = offsetof(UTslProjectile, CollisionComp);
	static_assert(UTslProjectile_CollisionComp_Offset == 0x418, "UTslProjectile::CollisionComp offset is not 418");
	auto constexpr UTslProjectile_ParticleComp_Offset = offsetof(UTslProjectile, ParticleComp);
	static_assert(UTslProjectile_ParticleComp_Offset == 0x420, "UTslProjectile::ParticleComp offset is not 420");
	auto constexpr UTslProjectile_MeshComp_Offset = offsetof(UTslProjectile, MeshComp);
	static_assert(UTslProjectile_MeshComp_Offset == 0x428, "UTslProjectile::MeshComp offset is not 428");
	auto constexpr UTslProjectile_MeshConstraint_Offset = offsetof(UTslProjectile, MeshConstraint);
	static_assert(UTslProjectile_MeshConstraint_Offset == 0x430, "UTslProjectile::MeshConstraint offset is not 430");
	auto constexpr UTslProjectile_MeshInitialRotationRate_Offset = offsetof(UTslProjectile, MeshInitialRotationRate);
	static_assert(UTslProjectile_MeshInitialRotationRate_Offset == 0x438, "UTslProjectile::MeshInitialRotationRate offset is not 438");
	auto constexpr UTslProjectile_boolField444_Offset = offsetof(UTslProjectile, boolField444);
	static_assert(UTslProjectile_boolField444_Offset == 0x444, "UTslProjectile::boolField444 offset is not 444");
	auto constexpr UTslProjectile_SpawnLocation_Offset = offsetof(UTslProjectile, SpawnLocation);
	static_assert(UTslProjectile_SpawnLocation_Offset == 0x448, "UTslProjectile::SpawnLocation offset is not 448");
	auto constexpr UTslProjectile_boolField460_Offset = offsetof(UTslProjectile, boolField460);
	static_assert(UTslProjectile_boolField460_Offset == 0x460, "UTslProjectile::boolField460 offset is not 460");
	auto constexpr UTslProjectile_boolField461_Offset = offsetof(UTslProjectile, boolField461);
	static_assert(UTslProjectile_boolField461_Offset == 0x461, "UTslProjectile::boolField461 offset is not 461");
	auto constexpr UTslProjectile_ExplosionRotationType_Offset = offsetof(UTslProjectile, ExplosionRotationType);
	static_assert(UTslProjectile_ExplosionRotationType_Offset == 0x462, "UTslProjectile::ExplosionRotationType offset is not 462");
	auto constexpr UTslProjectile_ParticleToMeshAttachPointName_Offset = offsetof(UTslProjectile, ParticleToMeshAttachPointName);
	static_assert(UTslProjectile_ParticleToMeshAttachPointName_Offset == 0x468, "UTslProjectile::ParticleToMeshAttachPointName offset is not 468");
	auto constexpr UTslProjectile_ExplosionTemplate_Offset = offsetof(UTslProjectile, ExplosionTemplate);
	static_assert(UTslProjectile_ExplosionTemplate_Offset == 0x478, "UTslProjectile::ExplosionTemplate offset is not 478");
	auto constexpr UTslProjectile_ExplosionTemplateInAir_Offset = offsetof(UTslProjectile, ExplosionTemplateInAir);
	static_assert(UTslProjectile_ExplosionTemplateInAir_Offset == 0x480, "UTslProjectile::ExplosionTemplateInAir offset is not 480");
	auto constexpr UTslProjectile_ExplosionTemplateInWater_Offset = offsetof(UTslProjectile, ExplosionTemplateInWater);
	static_assert(UTslProjectile_ExplosionTemplateInWater_Offset == 0x488, "UTslProjectile::ExplosionTemplateInWater offset is not 488");
	auto constexpr UTslProjectile_ImpactSound_Offset = offsetof(UTslProjectile, ImpactSound);
	static_assert(UTslProjectile_ImpactSound_Offset == 0x490, "UTslProjectile::ImpactSound offset is not 490");
	auto constexpr UTslProjectile_AkComp_Offset = offsetof(UTslProjectile, AkComp);
	static_assert(UTslProjectile_AkComp_Offset == 0x498, "UTslProjectile::AkComp offset is not 498");
	auto constexpr UTslProjectile_ExplodeState_Offset = offsetof(UTslProjectile, ExplodeState);
	static_assert(UTslProjectile_ExplodeState_Offset == 0x4a8, "UTslProjectile::ExplodeState offset is not 4a8");
	auto constexpr UTslProjectile_boolField4A9_Offset = offsetof(UTslProjectile, boolField4A9);
	static_assert(UTslProjectile_boolField4A9_Offset == 0x4a9, "UTslProjectile::boolField4A9 offset is not 4a9");
	auto constexpr UTslProjectile_ClientMeshRotation_Offset = offsetof(UTslProjectile, ClientMeshRotation);
	static_assert(UTslProjectile_ClientMeshRotation_Offset == 0x4ac, "UTslProjectile::ClientMeshRotation offset is not 4ac");
	auto constexpr UTslProjectile_ServerMeshRotation_Offset = offsetof(UTslProjectile, ServerMeshRotation);
	static_assert(UTslProjectile_ServerMeshRotation_Offset == 0x4b8, "UTslProjectile::ServerMeshRotation offset is not 4b8");
	auto constexpr UTslProjectile_VelocityStopStepDistance_Offset = offsetof(UTslProjectile, VelocityStopStepDistance);
	static_assert(UTslProjectile_VelocityStopStepDistance_Offset == 0x4c4, "UTslProjectile::VelocityStopStepDistance offset is not 4c4");
	auto constexpr UTslProjectile_LastStepLocation_Offset = offsetof(UTslProjectile, LastStepLocation);
	static_assert(UTslProjectile_LastStepLocation_Offset == 0x4c8, "UTslProjectile::LastStepLocation offset is not 4c8");
	auto constexpr UTslProjectile_LastTickLocation_Offset = offsetof(UTslProjectile, LastTickLocation);
	static_assert(UTslProjectile_LastTickLocation_Offset == 0x4d4, "UTslProjectile::LastTickLocation offset is not 4d4");
	auto constexpr UTslProjectile_LocationTargetInterpInMap_Offset = offsetof(UTslProjectile, LocationTargetInterpInMap);
	static_assert(UTslProjectile_LocationTargetInterpInMap_Offset == 0x4ec, "UTslProjectile::LocationTargetInterpInMap offset is not 4ec");
	auto constexpr UTslProjectile_LocationTargetInterpOutMap_Offset = offsetof(UTslProjectile, LocationTargetInterpOutMap);
	static_assert(UTslProjectile_LocationTargetInterpOutMap_Offset == 0x4f4, "UTslProjectile::LocationTargetInterpOutMap offset is not 4f4");
	auto constexpr UTslProjectile_TeleportThreshold_Offset = offsetof(UTslProjectile, TeleportThreshold);
	static_assert(UTslProjectile_TeleportThreshold_Offset == 0x4fc, "UTslProjectile::TeleportThreshold offset is not 4fc");
	auto constexpr UTslProjectile_MinVelocityForDestructibleTrace_Offset = offsetof(UTslProjectile, MinVelocityForDestructibleTrace);
	static_assert(UTslProjectile_MinVelocityForDestructibleTrace_Offset == 0x500, "UTslProjectile::MinVelocityForDestructibleTrace offset is not 500");
	auto constexpr UTslProjectile_StepBuffer_Offset = offsetof(UTslProjectile, StepBuffer);
	static_assert(UTslProjectile_StepBuffer_Offset == 0x504, "UTslProjectile::StepBuffer offset is not 504");
	auto constexpr UTslProjectile_FinalInterpSpeed_Offset = offsetof(UTslProjectile, FinalInterpSpeed);
	static_assert(UTslProjectile_FinalInterpSpeed_Offset == 0x508, "UTslProjectile::FinalInterpSpeed offset is not 508");
	auto constexpr UTslProjectile_boolField50C_Offset = offsetof(UTslProjectile, boolField50C);
	static_assert(UTslProjectile_boolField50C_Offset == 0x50c, "UTslProjectile::boolField50C offset is not 50c");
	auto constexpr UTslProjectile_VelocityCheckTimerTick_Offset = offsetof(UTslProjectile, VelocityCheckTimerTick);
	static_assert(UTslProjectile_VelocityCheckTimerTick_Offset == 0x510, "UTslProjectile::VelocityCheckTimerTick offset is not 510");
	auto constexpr UTslProjectile_boolField514_Offset = offsetof(UTslProjectile, boolField514);
	static_assert(UTslProjectile_boolField514_Offset == 0x514, "UTslProjectile::boolField514 offset is not 514");
	auto constexpr UTslProjectile_PostExplodeLifetime_Offset = offsetof(UTslProjectile, PostExplodeLifetime);
	static_assert(UTslProjectile_PostExplodeLifetime_Offset == 0x518, "UTslProjectile::PostExplodeLifetime offset is not 518");
	auto constexpr UTslProjectile_LastImpactVelocity_Offset = offsetof(UTslProjectile, LastImpactVelocity);
	static_assert(UTslProjectile_LastImpactVelocity_Offset == 0x51c, "UTslProjectile::LastImpactVelocity offset is not 51c");
	auto constexpr UTslProjectile_ProjectileConfig_Offset = offsetof(UTslProjectile, ProjectileConfig);
	static_assert(UTslProjectile_ProjectileConfig_Offset == 0x528, "UTslProjectile::ProjectileConfig offset is not 528");
	auto constexpr UTslProjectile_ReplicatedEffectActor_Offset = offsetof(UTslProjectile, ReplicatedEffectActor);
	static_assert(UTslProjectile_ReplicatedEffectActor_Offset == 0x568, "UTslProjectile::ReplicatedEffectActor offset is not 568");
	auto constexpr UTslProjectile_OnEnterWater_Offset = offsetof(UTslProjectile, OnEnterWater);
	static_assert(UTslProjectile_OnEnterWater_Offset == 0x570, "UTslProjectile::OnEnterWater offset is not 570");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
