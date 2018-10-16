#pragma once
#include "UInfo.hpp"
#include "FVector.hpp"
#include "EVisibilityAggressiveness.hpp"
#include "FLightmassWorldInfoSettings.hpp"
#include "FReverbSettings.hpp"
#include "FInteriorSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWorldSettings // Size: 0x5C0
	: public UInfo // Size: 0x410
{
private:
	typedef UWorldSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1746); // id32("Class Engine.WorldSettings")
		return ptr;
	}
	uint8_t boolField410;
	uint8_t UnknownData411[0x3];
	float KillZ; /* Ofs: 0x414 Size: 0x4 - FloatProperty Engine.WorldSettings.KillZ */
	ExternalPtr<struct UClass> KillZDamageType; /* Ofs: 0x418 Size: 0x8 - ClassProperty Engine.WorldSettings.KillZDamageType */
	float WorldGravityZ; /* Ofs: 0x420 Size: 0x4 - FloatProperty Engine.WorldSettings.WorldGravityZ */
	float GlobalGravityZ; /* Ofs: 0x424 Size: 0x4 - FloatProperty Engine.WorldSettings.GlobalGravityZ */
	ExternalPtr<struct UClass> DefaultPhysicsVolumeClass; /* Ofs: 0x428 Size: 0x8 - ClassProperty Engine.WorldSettings.DefaultPhysicsVolumeClass */
	ExternalPtr<struct UClass> PhysicsCollisionHandlerClass; /* Ofs: 0x430 Size: 0x8 - ClassProperty Engine.WorldSettings.PhysicsCollisionHandlerClass */
	ExternalPtr<struct UClass> DefaultGameMode; /* Ofs: 0x438 Size: 0x8 - ClassProperty Engine.WorldSettings.DefaultGameMode */
	ExternalPtr<struct UClass> GameNetworkManagerClass; /* Ofs: 0x440 Size: 0x8 - ClassProperty Engine.WorldSettings.GameNetworkManagerClass */
	int32_t PackedLightAndShadowMapTextureSize; /* Ofs: 0x448 Size: 0x4 - IntProperty Engine.WorldSettings.PackedLightAndShadowMapTextureSize */
	uint8_t boolField44C;
	uint8_t UnknownData44D[0x3];
	FVector DefaultColorScale; /* Ofs: 0x450 Size: 0xC - StructProperty Engine.WorldSettings.DefaultColorScale */
	float DefaultMaxDistanceFieldOcclusionDistance; /* Ofs: 0x45C Size: 0x4 - FloatProperty Engine.WorldSettings.DefaultMaxDistanceFieldOcclusionDistance */
	float GlobalDistanceFieldViewDistance; /* Ofs: 0x460 Size: 0x4 - FloatProperty Engine.WorldSettings.GlobalDistanceFieldViewDistance */
	float DynamicIndirectShadowsSelfShadowingIntensity; /* Ofs: 0x464 Size: 0x4 - FloatProperty Engine.WorldSettings.DynamicIndirectShadowsSelfShadowingIntensity */
	uint8_t boolField468;
	uint8_t UnknownData469[0x3];
	int32_t VisibilityCellSize; /* Ofs: 0x46C Size: 0x4 - IntProperty Engine.WorldSettings.VisibilityCellSize */
	TEnumAsByte<enum EVisibilityAggressiveness> VisibilityAggressiveness; /* Ofs: 0x470 Size: 0x1 - ByteProperty Engine.WorldSettings.VisibilityAggressiveness */
	uint8_t UnknownData471[0x3];
	uint8_t boolField474;
	uint8_t UnknownData475[0x3];
	FLightmassWorldInfoSettings LightmassSettings; /* Ofs: 0x478 Size: 0x44 - StructProperty Engine.WorldSettings.LightmassSettings */
	uint8_t UnknownData4BC[0x4];
	FReverbSettings DefaultReverbSettings; /* Ofs: 0x4C0 Size: 0x18 - StructProperty Engine.WorldSettings.DefaultReverbSettings */
	FInteriorSettings DefaultAmbientZoneSettings; /* Ofs: 0x4D8 Size: 0x24 - StructProperty Engine.WorldSettings.DefaultAmbientZoneSettings */
	uint8_t UnknownData4FC[0x4];
	ExternalPtr<struct USoundMix> DefaultBaseSoundMix; /* Ofs: 0x500 Size: 0x8 - ObjectProperty Engine.WorldSettings.DefaultBaseSoundMix */
	float WorldToMeters; /* Ofs: 0x508 Size: 0x4 - FloatProperty Engine.WorldSettings.WorldToMeters */
	float MonoCullingDistance; /* Ofs: 0x50C Size: 0x4 - FloatProperty Engine.WorldSettings.MonoCullingDistance */
	ExternalPtr<struct UBookMark> BookMarks[10]; /* Ofs: 0xA Size: 0x8 - ObjectProperty Engine.WorldSettings.BookMarks */
	ExternalPtr<struct UExtendedReflectionSettings> ReflectionSettings; /* Ofs: 0x560 Size: 0x8 - ObjectProperty Engine.WorldSettings.ReflectionSettings */
	float TimeDilation; /* Ofs: 0x568 Size: 0x4 - FloatProperty Engine.WorldSettings.TimeDilation */
	float MatineeTimeDilation; /* Ofs: 0x56C Size: 0x4 - FloatProperty Engine.WorldSettings.MatineeTimeDilation */
	float DemoPlayTimeDilation; /* Ofs: 0x570 Size: 0x4 - FloatProperty Engine.WorldSettings.DemoPlayTimeDilation */
	float MinGlobalTimeDilation; /* Ofs: 0x574 Size: 0x4 - FloatProperty Engine.WorldSettings.MinGlobalTimeDilation */
	float MaxGlobalTimeDilation; /* Ofs: 0x578 Size: 0x4 - FloatProperty Engine.WorldSettings.MaxGlobalTimeDilation */
	float MinUndilatedFrameTime; /* Ofs: 0x57C Size: 0x4 - FloatProperty Engine.WorldSettings.MinUndilatedFrameTime */
	float MaxUndilatedFrameTime; /* Ofs: 0x580 Size: 0x4 - FloatProperty Engine.WorldSettings.MaxUndilatedFrameTime */
	uint8_t UnknownData584[0x4];
	ExternalPtr<struct UPlayerState> Pauser; /* Ofs: 0x588 Size: 0x8 - ObjectProperty Engine.WorldSettings.Pauser */
	uint8_t boolField590;
	uint8_t UnknownData591[0x7];
	TArray<struct FNetViewer> ReplicationViewers; /* Ofs: 0x598 Size: 0x10 - ArrayProperty Engine.WorldSettings.ReplicationViewers */
	TArray<ExternalPtr<struct UAssetUserData>> AssetUserData; /* Ofs: 0x5A8 Size: 0x10 - ArrayProperty Engine.WorldSettings.AssetUserData */
	uint8_t UnknownData5B8[0x8];


	inline bool bEnableWorldBoundsChecks()
	{
		return boolField410& 0x1;
	}
	inline bool SetbEnableWorldBoundsChecks(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableNavigationSystem()
	{
		return boolField410& 0x2;
	}
	inline bool SetbEnableNavigationSystem(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bEnableAISystem()
	{
		return boolField410& 0x4;
	}
	inline bool SetbEnableAISystem(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bEnableWorldComposition()
	{
		return boolField410& 0x8;
	}
	inline bool SetbEnableWorldComposition(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bUseClientSideLevelStreamingVolumes()
	{
		return boolField410& 0x10;
	}
	inline bool SetbUseClientSideLevelStreamingVolumes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bEnableWorldOriginRebasing()
	{
		return boolField410& 0x20;
	}
	inline bool SetbEnableWorldOriginRebasing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bWorldGravitySet()
	{
		return boolField410& 0x40;
	}
	inline bool SetbWorldGravitySet(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bGlobalGravitySet()
	{
		return boolField410& 0x80;
	}
	inline bool SetbGlobalGravitySet(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool SetKillZ(t_structHelper inst, float value) { inst.WriteOffset(0x414, value); }
	inline bool SetKillZDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x418, value); }
	inline bool SetWorldGravityZ(t_structHelper inst, float value) { inst.WriteOffset(0x420, value); }
	inline bool SetGlobalGravityZ(t_structHelper inst, float value) { inst.WriteOffset(0x424, value); }
	inline bool SetDefaultPhysicsVolumeClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x428, value); }
	inline bool SetPhysicsCollisionHandlerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x430, value); }
	inline bool SetDefaultGameMode(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x438, value); }
	inline bool SetGameNetworkManagerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x440, value); }
	inline bool SetPackedLightAndShadowMapTextureSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x448, value); }
	inline bool bMinimizeBSPSections()
	{
		return boolField44C& 0x1;
	}
	inline bool SetbMinimizeBSPSections(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDefaultColorScale(t_structHelper inst, FVector value) { inst.WriteOffset(0x450, value); }
	inline bool SetDefaultMaxDistanceFieldOcclusionDistance(t_structHelper inst, float value) { inst.WriteOffset(0x45C, value); }
	inline bool SetGlobalDistanceFieldViewDistance(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
	inline bool SetDynamicIndirectShadowsSelfShadowingIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x464, value); }
	inline bool bPrecomputeVisibility()
	{
		return boolField468& 0x1;
	}
	inline bool SetbPrecomputeVisibility(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x468, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPlaceCellsOnlyAlongCameraTracks()
	{
		return boolField468& 0x2;
	}
	inline bool SetbPlaceCellsOnlyAlongCameraTracks(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x468, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetVisibilityCellSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x46C, value); }
	inline bool SetVisibilityAggressiveness(t_structHelper inst, TEnumAsByte<enum EVisibilityAggressiveness> value) { inst.WriteOffset(0x470, value); }
	inline bool bForceNoPrecomputedLighting()
	{
		return boolField474& 0x1;
	}
	inline bool SetbForceNoPrecomputedLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x474, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLightmassSettings(t_structHelper inst, FLightmassWorldInfoSettings value) { inst.WriteOffset(0x478, value); }
	inline bool SetDefaultReverbSettings(t_structHelper inst, FReverbSettings value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetDefaultAmbientZoneSettings(t_structHelper inst, FInteriorSettings value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetDefaultBaseSoundMix(t_structHelper inst, ExternalPtr<struct USoundMix> value) { inst.WriteOffset(0x500, value); }
	inline bool SetWorldToMeters(t_structHelper inst, float value) { inst.WriteOffset(0x508, value); }
	inline bool SetMonoCullingDistance(t_structHelper inst, float value) { inst.WriteOffset(0x50C, value); }
	inline bool SetReflectionSettings(t_structHelper inst, ExternalPtr<struct UExtendedReflectionSettings> value) { inst.WriteOffset(0x560, value); }
	inline bool SetTimeDilation(t_structHelper inst, float value) { inst.WriteOffset(0x568, value); }
	inline bool SetMatineeTimeDilation(t_structHelper inst, float value) { inst.WriteOffset(0x56C, value); }
	inline bool SetDemoPlayTimeDilation(t_structHelper inst, float value) { inst.WriteOffset(0x570, value); }
	inline bool SetMinGlobalTimeDilation(t_structHelper inst, float value) { inst.WriteOffset(0x574, value); }
	inline bool SetMaxGlobalTimeDilation(t_structHelper inst, float value) { inst.WriteOffset(0x578, value); }
	inline bool SetMinUndilatedFrameTime(t_structHelper inst, float value) { inst.WriteOffset(0x57C, value); }
	inline bool SetMaxUndilatedFrameTime(t_structHelper inst, float value) { inst.WriteOffset(0x580, value); }
	inline bool SetPauser(t_structHelper inst, ExternalPtr<struct UPlayerState> value) { inst.WriteOffset(0x588, value); }
	inline bool bHighPriorityLoading()
	{
		return boolField590& 0x1;
	}
	inline bool SetbHighPriorityLoading(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x590, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bHighPriorityLoadingLocal()
	{
		return boolField590& 0x2;
	}
	inline bool SetbHighPriorityLoadingLocal(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x590, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetReplicationViewers(t_structHelper inst, TArray<struct FNetViewer> value) { inst.WriteOffset(0x598, value); }
	inline bool SetAssetUserData(t_structHelper inst, TArray<ExternalPtr<struct UAssetUserData>> value) { inst.WriteOffset(0x5A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWorldSettings = sizeof(UWorldSettings); // 1472
    static_assert(sizeof(UWorldSettings) == 0x5C0, "Size of UWorldSettings is not correct.");
	auto constexpr UWorldSettings_boolField410_Offset = offsetof(UWorldSettings, boolField410);
	static_assert(UWorldSettings_boolField410_Offset == 0x410, "UWorldSettings::boolField410 offset is not 410");
	auto constexpr UWorldSettings_KillZ_Offset = offsetof(UWorldSettings, KillZ);
	static_assert(UWorldSettings_KillZ_Offset == 0x414, "UWorldSettings::KillZ offset is not 414");
	auto constexpr UWorldSettings_KillZDamageType_Offset = offsetof(UWorldSettings, KillZDamageType);
	static_assert(UWorldSettings_KillZDamageType_Offset == 0x418, "UWorldSettings::KillZDamageType offset is not 418");
	auto constexpr UWorldSettings_WorldGravityZ_Offset = offsetof(UWorldSettings, WorldGravityZ);
	static_assert(UWorldSettings_WorldGravityZ_Offset == 0x420, "UWorldSettings::WorldGravityZ offset is not 420");
	auto constexpr UWorldSettings_GlobalGravityZ_Offset = offsetof(UWorldSettings, GlobalGravityZ);
	static_assert(UWorldSettings_GlobalGravityZ_Offset == 0x424, "UWorldSettings::GlobalGravityZ offset is not 424");
	auto constexpr UWorldSettings_DefaultPhysicsVolumeClass_Offset = offsetof(UWorldSettings, DefaultPhysicsVolumeClass);
	static_assert(UWorldSettings_DefaultPhysicsVolumeClass_Offset == 0x428, "UWorldSettings::DefaultPhysicsVolumeClass offset is not 428");
	auto constexpr UWorldSettings_PhysicsCollisionHandlerClass_Offset = offsetof(UWorldSettings, PhysicsCollisionHandlerClass);
	static_assert(UWorldSettings_PhysicsCollisionHandlerClass_Offset == 0x430, "UWorldSettings::PhysicsCollisionHandlerClass offset is not 430");
	auto constexpr UWorldSettings_DefaultGameMode_Offset = offsetof(UWorldSettings, DefaultGameMode);
	static_assert(UWorldSettings_DefaultGameMode_Offset == 0x438, "UWorldSettings::DefaultGameMode offset is not 438");
	auto constexpr UWorldSettings_GameNetworkManagerClass_Offset = offsetof(UWorldSettings, GameNetworkManagerClass);
	static_assert(UWorldSettings_GameNetworkManagerClass_Offset == 0x440, "UWorldSettings::GameNetworkManagerClass offset is not 440");
	auto constexpr UWorldSettings_PackedLightAndShadowMapTextureSize_Offset = offsetof(UWorldSettings, PackedLightAndShadowMapTextureSize);
	static_assert(UWorldSettings_PackedLightAndShadowMapTextureSize_Offset == 0x448, "UWorldSettings::PackedLightAndShadowMapTextureSize offset is not 448");
	auto constexpr UWorldSettings_boolField44C_Offset = offsetof(UWorldSettings, boolField44C);
	static_assert(UWorldSettings_boolField44C_Offset == 0x44c, "UWorldSettings::boolField44C offset is not 44c");
	auto constexpr UWorldSettings_DefaultColorScale_Offset = offsetof(UWorldSettings, DefaultColorScale);
	static_assert(UWorldSettings_DefaultColorScale_Offset == 0x450, "UWorldSettings::DefaultColorScale offset is not 450");
	auto constexpr UWorldSettings_DefaultMaxDistanceFieldOcclusionDistance_Offset = offsetof(UWorldSettings, DefaultMaxDistanceFieldOcclusionDistance);
	static_assert(UWorldSettings_DefaultMaxDistanceFieldOcclusionDistance_Offset == 0x45c, "UWorldSettings::DefaultMaxDistanceFieldOcclusionDistance offset is not 45c");
	auto constexpr UWorldSettings_GlobalDistanceFieldViewDistance_Offset = offsetof(UWorldSettings, GlobalDistanceFieldViewDistance);
	static_assert(UWorldSettings_GlobalDistanceFieldViewDistance_Offset == 0x460, "UWorldSettings::GlobalDistanceFieldViewDistance offset is not 460");
	auto constexpr UWorldSettings_DynamicIndirectShadowsSelfShadowingIntensity_Offset = offsetof(UWorldSettings, DynamicIndirectShadowsSelfShadowingIntensity);
	static_assert(UWorldSettings_DynamicIndirectShadowsSelfShadowingIntensity_Offset == 0x464, "UWorldSettings::DynamicIndirectShadowsSelfShadowingIntensity offset is not 464");
	auto constexpr UWorldSettings_boolField468_Offset = offsetof(UWorldSettings, boolField468);
	static_assert(UWorldSettings_boolField468_Offset == 0x468, "UWorldSettings::boolField468 offset is not 468");
	auto constexpr UWorldSettings_VisibilityCellSize_Offset = offsetof(UWorldSettings, VisibilityCellSize);
	static_assert(UWorldSettings_VisibilityCellSize_Offset == 0x46c, "UWorldSettings::VisibilityCellSize offset is not 46c");
	auto constexpr UWorldSettings_VisibilityAggressiveness_Offset = offsetof(UWorldSettings, VisibilityAggressiveness);
	static_assert(UWorldSettings_VisibilityAggressiveness_Offset == 0x470, "UWorldSettings::VisibilityAggressiveness offset is not 470");
	auto constexpr UWorldSettings_boolField474_Offset = offsetof(UWorldSettings, boolField474);
	static_assert(UWorldSettings_boolField474_Offset == 0x474, "UWorldSettings::boolField474 offset is not 474");
	auto constexpr UWorldSettings_LightmassSettings_Offset = offsetof(UWorldSettings, LightmassSettings);
	static_assert(UWorldSettings_LightmassSettings_Offset == 0x478, "UWorldSettings::LightmassSettings offset is not 478");
	auto constexpr UWorldSettings_DefaultReverbSettings_Offset = offsetof(UWorldSettings, DefaultReverbSettings);
	static_assert(UWorldSettings_DefaultReverbSettings_Offset == 0x4c0, "UWorldSettings::DefaultReverbSettings offset is not 4c0");
	auto constexpr UWorldSettings_DefaultAmbientZoneSettings_Offset = offsetof(UWorldSettings, DefaultAmbientZoneSettings);
	static_assert(UWorldSettings_DefaultAmbientZoneSettings_Offset == 0x4d8, "UWorldSettings::DefaultAmbientZoneSettings offset is not 4d8");
	auto constexpr UWorldSettings_DefaultBaseSoundMix_Offset = offsetof(UWorldSettings, DefaultBaseSoundMix);
	static_assert(UWorldSettings_DefaultBaseSoundMix_Offset == 0x500, "UWorldSettings::DefaultBaseSoundMix offset is not 500");
	auto constexpr UWorldSettings_WorldToMeters_Offset = offsetof(UWorldSettings, WorldToMeters);
	static_assert(UWorldSettings_WorldToMeters_Offset == 0x508, "UWorldSettings::WorldToMeters offset is not 508");
	auto constexpr UWorldSettings_MonoCullingDistance_Offset = offsetof(UWorldSettings, MonoCullingDistance);
	static_assert(UWorldSettings_MonoCullingDistance_Offset == 0x50c, "UWorldSettings::MonoCullingDistance offset is not 50c");
	auto constexpr UWorldSettings_BookMarks_Offset = offsetof(UWorldSettings, BookMarks);
	static_assert(UWorldSettings_BookMarks_Offset == 0x510, "UWorldSettings::BookMarks offset is not 510");
	auto constexpr UWorldSettings_ReflectionSettings_Offset = offsetof(UWorldSettings, ReflectionSettings);
	static_assert(UWorldSettings_ReflectionSettings_Offset == 0x560, "UWorldSettings::ReflectionSettings offset is not 560");
	auto constexpr UWorldSettings_TimeDilation_Offset = offsetof(UWorldSettings, TimeDilation);
	static_assert(UWorldSettings_TimeDilation_Offset == 0x568, "UWorldSettings::TimeDilation offset is not 568");
	auto constexpr UWorldSettings_MatineeTimeDilation_Offset = offsetof(UWorldSettings, MatineeTimeDilation);
	static_assert(UWorldSettings_MatineeTimeDilation_Offset == 0x56c, "UWorldSettings::MatineeTimeDilation offset is not 56c");
	auto constexpr UWorldSettings_DemoPlayTimeDilation_Offset = offsetof(UWorldSettings, DemoPlayTimeDilation);
	static_assert(UWorldSettings_DemoPlayTimeDilation_Offset == 0x570, "UWorldSettings::DemoPlayTimeDilation offset is not 570");
	auto constexpr UWorldSettings_MinGlobalTimeDilation_Offset = offsetof(UWorldSettings, MinGlobalTimeDilation);
	static_assert(UWorldSettings_MinGlobalTimeDilation_Offset == 0x574, "UWorldSettings::MinGlobalTimeDilation offset is not 574");
	auto constexpr UWorldSettings_MaxGlobalTimeDilation_Offset = offsetof(UWorldSettings, MaxGlobalTimeDilation);
	static_assert(UWorldSettings_MaxGlobalTimeDilation_Offset == 0x578, "UWorldSettings::MaxGlobalTimeDilation offset is not 578");
	auto constexpr UWorldSettings_MinUndilatedFrameTime_Offset = offsetof(UWorldSettings, MinUndilatedFrameTime);
	static_assert(UWorldSettings_MinUndilatedFrameTime_Offset == 0x57c, "UWorldSettings::MinUndilatedFrameTime offset is not 57c");
	auto constexpr UWorldSettings_MaxUndilatedFrameTime_Offset = offsetof(UWorldSettings, MaxUndilatedFrameTime);
	static_assert(UWorldSettings_MaxUndilatedFrameTime_Offset == 0x580, "UWorldSettings::MaxUndilatedFrameTime offset is not 580");
	auto constexpr UWorldSettings_Pauser_Offset = offsetof(UWorldSettings, Pauser);
	static_assert(UWorldSettings_Pauser_Offset == 0x588, "UWorldSettings::Pauser offset is not 588");
	auto constexpr UWorldSettings_boolField590_Offset = offsetof(UWorldSettings, boolField590);
	static_assert(UWorldSettings_boolField590_Offset == 0x590, "UWorldSettings::boolField590 offset is not 590");
	auto constexpr UWorldSettings_ReplicationViewers_Offset = offsetof(UWorldSettings, ReplicationViewers);
	static_assert(UWorldSettings_ReplicationViewers_Offset == 0x598, "UWorldSettings::ReplicationViewers offset is not 598");
	auto constexpr UWorldSettings_AssetUserData_Offset = offsetof(UWorldSettings, AssetUserData);
	static_assert(UWorldSettings_AssetUserData_Offset == 0x5a8, "UWorldSettings::AssetUserData offset is not 5a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
