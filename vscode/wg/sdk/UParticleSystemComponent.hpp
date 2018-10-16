#pragma once
#include "UPrimitiveComponent.hpp"
#include "EParticleSignificanceLevel.hpp"
#include "FVector.hpp"
#include "ParticleSystemLODMethod.hpp"
#include "EAttachLocation.hpp"
#include "EAttachmentRule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleSystemComponent // Size: 0xB70
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UParticleSystemComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1496); // id32("Class Engine.ParticleSystemComponent")
		return ptr;
	}
//	ExternalPtr<struct UParticleSystem> Template; /* Ofs: 0x8E8 Size: 0x8 - ObjectProperty Engine.ParticleSystemComponent.Template */
	TArray<ExternalPtr<struct UMaterialInterface>> EmitterMaterials; /* Ofs: 0x8F0 Size: 0x10 - ArrayProperty Engine.ParticleSystemComponent.EmitterMaterials */
	TArray<ExternalPtr<struct USkeletalMeshComponent>> SkelMeshComponents; /* Ofs: 0x900 Size: 0x10 - ArrayProperty Engine.ParticleSystemComponent.SkelMeshComponents */
	uint8_t boolField910;
	uint8_t boolField911;
	uint8_t UnknownData912[0x2];
	TEnumAsByte<enum EParticleSignificanceLevel> RequiredSignificance; /* Ofs: 0x914 Size: 0x1 - EnumProperty Engine.ParticleSystemComponent.RequiredSignificance */
	uint8_t UnknownData915[0xB];
	TArray<struct FParticleSysParam> InstanceParameters; /* Ofs: 0x920 Size: 0x10 - ArrayProperty Engine.ParticleSystemComponent.InstanceParameters */
	FScriptMulticastDelegate OnParticleSpawn; /* Ofs: 0x930 Size: 0x10 - MulticastDelegateProperty Engine.ParticleSystemComponent.OnParticleSpawn */
	FScriptMulticastDelegate OnParticleBurst; /* Ofs: 0x940 Size: 0x10 - MulticastDelegateProperty Engine.ParticleSystemComponent.OnParticleBurst */
	FScriptMulticastDelegate OnParticleDeath; /* Ofs: 0x950 Size: 0x10 - MulticastDelegateProperty Engine.ParticleSystemComponent.OnParticleDeath */
	FScriptMulticastDelegate OnParticleCollide; /* Ofs: 0x960 Size: 0x10 - MulticastDelegateProperty Engine.ParticleSystemComponent.OnParticleCollide */
	FVector OldPosition; /* Ofs: 0x970 Size: 0xC - StructProperty Engine.ParticleSystemComponent.OldPosition */
	FVector PartSysVelocity; /* Ofs: 0x97C Size: 0xC - StructProperty Engine.ParticleSystemComponent.PartSysVelocity */
	float WarmupTime; /* Ofs: 0x988 Size: 0x4 - FloatProperty Engine.ParticleSystemComponent.WarmupTime */
	float WarmupTickRate; /* Ofs: 0x98C Size: 0x4 - FloatProperty Engine.ParticleSystemComponent.WarmupTickRate */
	uint8_t boolField990;
	uint8_t UnknownData991[0xB];
	float SecondsBeforeInactive; /* Ofs: 0x99C Size: 0x4 - FloatProperty Engine.ParticleSystemComponent.SecondsBeforeInactive */
	uint8_t UnknownData9A0[0x8];
	float MaxTimeBeforeForceUpdateTransform; /* Ofs: 0x9A8 Size: 0x4 - FloatProperty Engine.ParticleSystemComponent.MaxTimeBeforeForceUpdateTransform */
	uint8_t UnknownData9AC[0x4];
	uint8_t boolField9B0;
	uint8_t UnknownData9B1[0x3];
	TEnumAsByte<enum ParticleSystemLODMethod> LODMethod; /* Ofs: 0x9B4 Size: 0x1 - ByteProperty Engine.ParticleSystemComponent.LODMethod */
	uint8_t UnknownData9B5[0x3];
	uint8_t boolField9B8;
	uint8_t UnknownData9B9[0x1F];
	TArray<ExternalPtr<struct UParticleSystemReplay>> ReplayClips; /* Ofs: 0x9D8 Size: 0x10 - ArrayProperty Engine.ParticleSystemComponent.ReplayClips */
	uint8_t UnknownData9E8[0x60];
	float CustomTimeDilation; /* Ofs: 0xA48 Size: 0x4 - FloatProperty Engine.ParticleSystemComponent.CustomTimeDilation */
	uint8_t UnknownDataA4C[0x4];
	FScriptMulticastDelegate OnSystemFinished; /* Ofs: 0xA50 Size: 0x10 - MulticastDelegateProperty Engine.ParticleSystemComponent.OnSystemFinished */
	TWeakObjectPtr<ExternalPtr<struct USceneComponent>> AutoAttachParent; /* Ofs: 0xA60 Size: 0x8 - WeakObjectProperty Engine.ParticleSystemComponent.AutoAttachParent */
	FName AutoAttachSocketName; /* Ofs: 0xA68 Size: 0x8 - NameProperty Engine.ParticleSystemComponent.AutoAttachSocketName */
	TEnumAsByte<enum EAttachLocation> AutoAttachLocationType; /* Ofs: 0xA70 Size: 0x1 - ByteProperty Engine.ParticleSystemComponent.AutoAttachLocationType */
	TEnumAsByte<enum EAttachmentRule> AutoAttachLocationRule; /* Ofs: 0xA71 Size: 0x1 - EnumProperty Engine.ParticleSystemComponent.AutoAttachLocationRule */
	TEnumAsByte<enum EAttachmentRule> AutoAttachRotationRule; /* Ofs: 0xA72 Size: 0x1 - EnumProperty Engine.ParticleSystemComponent.AutoAttachRotationRule */
	TEnumAsByte<enum EAttachmentRule> AutoAttachScaleRule; /* Ofs: 0xA73 Size: 0x1 - EnumProperty Engine.ParticleSystemComponent.AutoAttachScaleRule */
	uint8_t UnknownDataA74[0xFC];


//	inline bool SetTemplate(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetEmitterMaterials(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInterface>> value) { inst.WriteOffset(0x8F0, value); }
	inline bool SetSkelMeshComponents(t_structHelper inst, TArray<ExternalPtr<struct USkeletalMeshComponent>> value) { inst.WriteOffset(0x900, value); }
	inline bool bResetOnDetach()
	{
		return boolField910& 0x80;
	}
	inline bool SetbResetOnDetach(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x910, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bUpdateOnDedicatedServer()
	{
		return boolField911& 0x1;
	}
	inline bool SetbUpdateOnDedicatedServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x911, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAllowRecycling()
	{
		return boolField911& 0x8;
	}
	inline bool SetbAllowRecycling(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x911, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bAutoManageAttachment()
	{
		return boolField911& 0x10;
	}
	inline bool SetbAutoManageAttachment(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x911, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool SetRequiredSignificance(t_structHelper inst, TEnumAsByte<enum EParticleSignificanceLevel> value) { inst.WriteOffset(0x914, value); }
	inline bool SetInstanceParameters(t_structHelper inst, TArray<struct FParticleSysParam> value) { inst.WriteOffset(0x920, value); }
	inline bool SetOnParticleSpawn(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x930, value); }
	inline bool SetOnParticleBurst(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x940, value); }
	inline bool SetOnParticleDeath(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x950, value); }
	inline bool SetOnParticleCollide(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x960, value); }
	inline bool SetOldPosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x970, value); }
	inline bool SetPartSysVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x97C, value); }
	inline bool SetWarmupTime(t_structHelper inst, float value) { inst.WriteOffset(0x988, value); }
	inline bool SetWarmupTickRate(t_structHelper inst, float value) { inst.WriteOffset(0x98C, value); }
	inline bool bWarmingUp()
	{
		return boolField990& 0x1;
	}
	inline bool SetbWarmingUp(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x990, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSecondsBeforeInactive(t_structHelper inst, float value) { inst.WriteOffset(0x99C, value); }
	inline bool SetMaxTimeBeforeForceUpdateTransform(t_structHelper inst, float value) { inst.WriteOffset(0x9A8, value); }
	inline bool bOverrideLODMethod()
	{
		return boolField9B0& 0x1;
	}
	inline bool SetbOverrideLODMethod(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLODMethod(t_structHelper inst, TEnumAsByte<enum ParticleSystemLODMethod> value) { inst.WriteOffset(0x9B4, value); }
	inline bool bSkipUpdateDynamicDataDuringTick()
	{
		return boolField9B8& 0x1;
	}
	inline bool SetbSkipUpdateDynamicDataDuringTick(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9B8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReplayClips(t_structHelper inst, TArray<ExternalPtr<struct UParticleSystemReplay>> value) { inst.WriteOffset(0x9D8, value); }
	inline bool SetCustomTimeDilation(t_structHelper inst, float value) { inst.WriteOffset(0xA48, value); }
	inline bool SetOnSystemFinished(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xA50, value); }
	inline bool SetAutoAttachParent(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct USceneComponent>> value) { inst.WriteOffset(0xA60, value); }
	inline bool SetAutoAttachSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0xA68, value); }
	inline bool SetAutoAttachLocationType(t_structHelper inst, TEnumAsByte<enum EAttachLocation> value) { inst.WriteOffset(0xA70, value); }
	inline bool SetAutoAttachLocationRule(t_structHelper inst, TEnumAsByte<enum EAttachmentRule> value) { inst.WriteOffset(0xA71, value); }
	inline bool SetAutoAttachRotationRule(t_structHelper inst, TEnumAsByte<enum EAttachmentRule> value) { inst.WriteOffset(0xA72, value); }
	inline bool SetAutoAttachScaleRule(t_structHelper inst, TEnumAsByte<enum EAttachmentRule> value) { inst.WriteOffset(0xA73, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleSystemComponent = sizeof(UParticleSystemComponent); // 2928
    static_assert(sizeof(UParticleSystemComponent) == 0xB70, "Size of UParticleSystemComponent is not correct.");
//	auto constexpr UParticleSystemComponent_Template_Offset = offsetof(UParticleSystemComponent, Template);
//	static_assert(UParticleSystemComponent_Template_Offset == 0x8e8, "UParticleSystemComponent::Template offset is not 8e8");
	auto constexpr UParticleSystemComponent_EmitterMaterials_Offset = offsetof(UParticleSystemComponent, EmitterMaterials);
	static_assert(UParticleSystemComponent_EmitterMaterials_Offset == 0x8f0, "UParticleSystemComponent::EmitterMaterials offset is not 8f0");
	auto constexpr UParticleSystemComponent_SkelMeshComponents_Offset = offsetof(UParticleSystemComponent, SkelMeshComponents);
	static_assert(UParticleSystemComponent_SkelMeshComponents_Offset == 0x900, "UParticleSystemComponent::SkelMeshComponents offset is not 900");
	auto constexpr UParticleSystemComponent_boolField910_Offset = offsetof(UParticleSystemComponent, boolField910);
	static_assert(UParticleSystemComponent_boolField910_Offset == 0x910, "UParticleSystemComponent::boolField910 offset is not 910");
	auto constexpr UParticleSystemComponent_boolField911_Offset = offsetof(UParticleSystemComponent, boolField911);
	static_assert(UParticleSystemComponent_boolField911_Offset == 0x911, "UParticleSystemComponent::boolField911 offset is not 911");
	auto constexpr UParticleSystemComponent_RequiredSignificance_Offset = offsetof(UParticleSystemComponent, RequiredSignificance);
	static_assert(UParticleSystemComponent_RequiredSignificance_Offset == 0x914, "UParticleSystemComponent::RequiredSignificance offset is not 914");
	auto constexpr UParticleSystemComponent_InstanceParameters_Offset = offsetof(UParticleSystemComponent, InstanceParameters);
	static_assert(UParticleSystemComponent_InstanceParameters_Offset == 0x920, "UParticleSystemComponent::InstanceParameters offset is not 920");
	auto constexpr UParticleSystemComponent_OnParticleSpawn_Offset = offsetof(UParticleSystemComponent, OnParticleSpawn);
	static_assert(UParticleSystemComponent_OnParticleSpawn_Offset == 0x930, "UParticleSystemComponent::OnParticleSpawn offset is not 930");
	auto constexpr UParticleSystemComponent_OnParticleBurst_Offset = offsetof(UParticleSystemComponent, OnParticleBurst);
	static_assert(UParticleSystemComponent_OnParticleBurst_Offset == 0x940, "UParticleSystemComponent::OnParticleBurst offset is not 940");
	auto constexpr UParticleSystemComponent_OnParticleDeath_Offset = offsetof(UParticleSystemComponent, OnParticleDeath);
	static_assert(UParticleSystemComponent_OnParticleDeath_Offset == 0x950, "UParticleSystemComponent::OnParticleDeath offset is not 950");
	auto constexpr UParticleSystemComponent_OnParticleCollide_Offset = offsetof(UParticleSystemComponent, OnParticleCollide);
	static_assert(UParticleSystemComponent_OnParticleCollide_Offset == 0x960, "UParticleSystemComponent::OnParticleCollide offset is not 960");
	auto constexpr UParticleSystemComponent_OldPosition_Offset = offsetof(UParticleSystemComponent, OldPosition);
	static_assert(UParticleSystemComponent_OldPosition_Offset == 0x970, "UParticleSystemComponent::OldPosition offset is not 970");
	auto constexpr UParticleSystemComponent_PartSysVelocity_Offset = offsetof(UParticleSystemComponent, PartSysVelocity);
	static_assert(UParticleSystemComponent_PartSysVelocity_Offset == 0x97c, "UParticleSystemComponent::PartSysVelocity offset is not 97c");
	auto constexpr UParticleSystemComponent_WarmupTime_Offset = offsetof(UParticleSystemComponent, WarmupTime);
	static_assert(UParticleSystemComponent_WarmupTime_Offset == 0x988, "UParticleSystemComponent::WarmupTime offset is not 988");
	auto constexpr UParticleSystemComponent_WarmupTickRate_Offset = offsetof(UParticleSystemComponent, WarmupTickRate);
	static_assert(UParticleSystemComponent_WarmupTickRate_Offset == 0x98c, "UParticleSystemComponent::WarmupTickRate offset is not 98c");
	auto constexpr UParticleSystemComponent_boolField990_Offset = offsetof(UParticleSystemComponent, boolField990);
	static_assert(UParticleSystemComponent_boolField990_Offset == 0x990, "UParticleSystemComponent::boolField990 offset is not 990");
	auto constexpr UParticleSystemComponent_SecondsBeforeInactive_Offset = offsetof(UParticleSystemComponent, SecondsBeforeInactive);
	static_assert(UParticleSystemComponent_SecondsBeforeInactive_Offset == 0x99c, "UParticleSystemComponent::SecondsBeforeInactive offset is not 99c");
	auto constexpr UParticleSystemComponent_MaxTimeBeforeForceUpdateTransform_Offset = offsetof(UParticleSystemComponent, MaxTimeBeforeForceUpdateTransform);
	static_assert(UParticleSystemComponent_MaxTimeBeforeForceUpdateTransform_Offset == 0x9a8, "UParticleSystemComponent::MaxTimeBeforeForceUpdateTransform offset is not 9a8");
	auto constexpr UParticleSystemComponent_boolField9B0_Offset = offsetof(UParticleSystemComponent, boolField9B0);
	static_assert(UParticleSystemComponent_boolField9B0_Offset == 0x9b0, "UParticleSystemComponent::boolField9B0 offset is not 9b0");
	auto constexpr UParticleSystemComponent_LODMethod_Offset = offsetof(UParticleSystemComponent, LODMethod);
	static_assert(UParticleSystemComponent_LODMethod_Offset == 0x9b4, "UParticleSystemComponent::LODMethod offset is not 9b4");
	auto constexpr UParticleSystemComponent_boolField9B8_Offset = offsetof(UParticleSystemComponent, boolField9B8);
	static_assert(UParticleSystemComponent_boolField9B8_Offset == 0x9b8, "UParticleSystemComponent::boolField9B8 offset is not 9b8");
	auto constexpr UParticleSystemComponent_ReplayClips_Offset = offsetof(UParticleSystemComponent, ReplayClips);
	static_assert(UParticleSystemComponent_ReplayClips_Offset == 0x9d8, "UParticleSystemComponent::ReplayClips offset is not 9d8");
	auto constexpr UParticleSystemComponent_CustomTimeDilation_Offset = offsetof(UParticleSystemComponent, CustomTimeDilation);
	static_assert(UParticleSystemComponent_CustomTimeDilation_Offset == 0xa48, "UParticleSystemComponent::CustomTimeDilation offset is not a48");
	auto constexpr UParticleSystemComponent_OnSystemFinished_Offset = offsetof(UParticleSystemComponent, OnSystemFinished);
	static_assert(UParticleSystemComponent_OnSystemFinished_Offset == 0xa50, "UParticleSystemComponent::OnSystemFinished offset is not a50");
	auto constexpr UParticleSystemComponent_AutoAttachParent_Offset = offsetof(UParticleSystemComponent, AutoAttachParent);
	static_assert(UParticleSystemComponent_AutoAttachParent_Offset == 0xa60, "UParticleSystemComponent::AutoAttachParent offset is not a60");
	auto constexpr UParticleSystemComponent_AutoAttachSocketName_Offset = offsetof(UParticleSystemComponent, AutoAttachSocketName);
	static_assert(UParticleSystemComponent_AutoAttachSocketName_Offset == 0xa68, "UParticleSystemComponent::AutoAttachSocketName offset is not a68");
	auto constexpr UParticleSystemComponent_AutoAttachLocationType_Offset = offsetof(UParticleSystemComponent, AutoAttachLocationType);
	static_assert(UParticleSystemComponent_AutoAttachLocationType_Offset == 0xa70, "UParticleSystemComponent::AutoAttachLocationType offset is not a70");
	auto constexpr UParticleSystemComponent_AutoAttachLocationRule_Offset = offsetof(UParticleSystemComponent, AutoAttachLocationRule);
	static_assert(UParticleSystemComponent_AutoAttachLocationRule_Offset == 0xa71, "UParticleSystemComponent::AutoAttachLocationRule offset is not a71");
	auto constexpr UParticleSystemComponent_AutoAttachRotationRule_Offset = offsetof(UParticleSystemComponent, AutoAttachRotationRule);
	static_assert(UParticleSystemComponent_AutoAttachRotationRule_Offset == 0xa72, "UParticleSystemComponent::AutoAttachRotationRule offset is not a72");
	auto constexpr UParticleSystemComponent_AutoAttachScaleRule_Offset = offsetof(UParticleSystemComponent, AutoAttachScaleRule);
	static_assert(UParticleSystemComponent_AutoAttachScaleRule_Offset == 0xa73, "UParticleSystemComponent::AutoAttachScaleRule offset is not a73");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
