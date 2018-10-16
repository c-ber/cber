#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWorld // Size: 0xAA0
	: public UObject // Size: 0x30
{
private:
	typedef UWorld t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(669); // id32("Class Engine.World")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	ExternalPtr<struct UNetDriver> NetDriver; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.World.NetDriver */
	ExternalPtr<struct UAISystemBase> AISystem; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Engine.World.AISystem */
	ExternalPtr<struct UDirectionalLightComponent> HeightBufferFakeLight; /* Ofs: 0x48 Size: 0x8 - ObjectProperty Engine.World.HeightBufferFakeLight */
	uint8_t UnknownData50[0x8];
	ExternalPtr<struct UNavigationSystem> NavigationSystem; /* Ofs: 0x58 Size: 0x8 - ObjectProperty Engine.World.NavigationSystem */
	uint8_t UnknownData60[0x88];
	ExternalPtr<struct UGameNetworkManager> NetworkManager; /* Ofs: 0xE8 Size: 0x8 - ObjectProperty Engine.World.NetworkManager */
	ExternalPtr<struct UWorldComposition> WorldComposition; /* Ofs: 0xF0 Size: 0x8 - ObjectProperty Engine.World.WorldComposition */
	uint8_t UnknownDataF8[0x8];
	TArray<ExternalPtr<struct ULevel>> Levels; /* Ofs: 0x100 Size: 0x10 - ArrayProperty Engine.World.Levels */
	ExternalPtr<struct ULineBatchComponent> LineBatcher; /* Ofs: 0x110 Size: 0x8 - ObjectProperty Engine.World.LineBatcher */
	TArray<ExternalPtr<struct UObject>> ExtraReferencedObjects; /* Ofs: 0x118 Size: 0x10 - ArrayProperty Engine.World.ExtraReferencedObjects */
	uint8_t UnknownData128[0x8];
	ExternalPtr<struct UPhysicsCollisionHandler> PhysicsCollisionHandler; /* Ofs: 0x130 Size: 0x8 - ObjectProperty Engine.World.PhysicsCollisionHandler */
	uint8_t UnknownData138[0x8];
	ExternalPtr<struct ULineBatchComponent> ForegroundLineBatcher; /* Ofs: 0x140 Size: 0x8 - ObjectProperty Engine.World.ForegroundLineBatcher */
	uint8_t UnknownData148[0xF0];
	ExternalPtr<struct UDemoNetDriver> DemoNetDriver; /* Ofs: 0x238 Size: 0x8 - ObjectProperty Engine.World.DemoNetDriver */
	uint8_t UnknownData240[0x38];
	ExternalPtr<struct UCanvas> CanvasForDrawMaterialToRenderTarget; /* Ofs: 0x278 Size: 0x8 - ObjectProperty Engine.World.CanvasForDrawMaterialToRenderTarget */
	uint8_t UnknownData280[0x350];
	TArray<ExternalPtr<struct UObject>> PerModuleDataObjects; /* Ofs: 0x5D0 Size: 0x10 - ArrayProperty Engine.World.PerModuleDataObjects */
	uint8_t UnknownData5E0[0x78];
	TArray<ExternalPtr<struct ULevelStreaming>> StreamingLevels; /* Ofs: 0x658 Size: 0x10 - ArrayProperty Engine.World.StreamingLevels */
	uint8_t UnknownData668[0xF0];
	ExternalPtr<struct UParticleEventManager> MyParticleEventManager; /* Ofs: 0x758 Size: 0x8 - ObjectProperty Engine.World.MyParticleEventManager */
	uint8_t UnknownData760[0x10];
	EncryptedExternalPtr<struct UGameInstance> OwningGameInstance; /* Ofs: 0x770 Size: 0x10 - CUSTOM FIELD */
	uint8_t UnknownData780[0x58];
	TArray<ExternalPtr<struct UMaterialParameterCollectionInstance>> ParameterCollectionInstances; /* Ofs: 0x7D8 Size: 0x10 - ArrayProperty Engine.World.ParameterCollectionInstances */
	uint8_t UnknownData7E8[0x8];
	FString StreamingLevelsPrefix; /* Ofs: 0x7F0 Size: 0x10 - StrProperty Engine.World.StreamingLevelsPrefix */
	uint8_t UnknownData800[0x8];
	ExternalPtr<struct UCanvas> CanvasForRenderingToTarget; /* Ofs: 0x808 Size: 0x8 - ObjectProperty Engine.World.CanvasForRenderingToTarget */
	uint8_t UnknownData810[0x8];
	ExternalPtr<struct UAvoidanceManager> AvoidanceManager; /* Ofs: 0x818 Size: 0x8 - ObjectProperty Engine.World.AvoidanceManager */
	uint8_t UnknownData820[0x18];
	TArray<struct FLevelCollection> LevelCollections; /* Ofs: 0x838 Size: 0x10 - ArrayProperty Engine.World.LevelCollections */
	ExternalPtr<struct ULevel> CurrentLevelPendingInvisibility; /* Ofs: 0x848 Size: 0x8 - ObjectProperty Engine.World.CurrentLevelPendingInvisibility */
	uint8_t UnknownData850[0x70];
	ExternalPtr<struct UPhysicsVolume> DefaultPhysicsVolume; /* Ofs: 0x8C0 Size: 0x8 - ObjectProperty Engine.World.DefaultPhysicsVolume */
	ExternalPtr<struct ULevel> CurrentLevelPendingVisibility; /* Ofs: 0x8C8 Size: 0x8 - ObjectProperty Engine.World.CurrentLevelPendingVisibility */
	uint8_t UnknownData8D0[0x10];
	EncryptedExternalPtr<struct ULevel> PersistentLevel; /* Ofs: 0x8E0 Size: 0x10 - CUSTOM FIELD */
	uint8_t UnknownData8F0[0x10];
	EncryptedExternalPtr<struct ULevel> CurrentLevel; /* Ofs: 0x900 Size: 0x10 - EncryptedObjectProperty Engine.World.CurrentLevel */
	uint8_t UnknownData910[0x10];
	ExternalPtr<struct ULineBatchComponent> PersistentLineBatcher; /* Ofs: 0x920 Size: 0x8 - ObjectProperty Engine.World.PersistentLineBatcher */
	ExternalPtr<struct UGameModeBase> AuthorityGameMode; /* Ofs: 0x928 Size: 0x8 - ObjectProperty Engine.World.AuthorityGameMode */
	uint8_t UnknownData930[0x152];
	uint8_t boolFieldA82;
	uint8_t UnknownDataA83[0x1D];


	inline bool SetNetDriver(t_structHelper inst, ExternalPtr<struct UNetDriver> value) { inst.WriteOffset(0x38, value); }
	inline bool SetAISystem(t_structHelper inst, ExternalPtr<struct UAISystemBase> value) { inst.WriteOffset(0x40, value); }
	inline bool SetHeightBufferFakeLight(t_structHelper inst, ExternalPtr<struct UDirectionalLightComponent> value) { inst.WriteOffset(0x48, value); }
	inline bool SetNavigationSystem(t_structHelper inst, ExternalPtr<struct UNavigationSystem> value) { inst.WriteOffset(0x58, value); }
	inline bool SetNetworkManager(t_structHelper inst, ExternalPtr<struct UGameNetworkManager> value) { inst.WriteOffset(0xE8, value); }
	inline bool SetWorldComposition(t_structHelper inst, ExternalPtr<struct UWorldComposition> value) { inst.WriteOffset(0xF0, value); }
	inline bool SetLevels(t_structHelper inst, TArray<ExternalPtr<struct ULevel>> value) { inst.WriteOffset(0x100, value); }
	inline bool SetLineBatcher(t_structHelper inst, ExternalPtr<struct ULineBatchComponent> value) { inst.WriteOffset(0x110, value); }
	inline bool SetExtraReferencedObjects(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x118, value); }
	inline bool SetPhysicsCollisionHandler(t_structHelper inst, ExternalPtr<struct UPhysicsCollisionHandler> value) { inst.WriteOffset(0x130, value); }
	inline bool SetForegroundLineBatcher(t_structHelper inst, ExternalPtr<struct ULineBatchComponent> value) { inst.WriteOffset(0x140, value); }
	inline bool SetDemoNetDriver(t_structHelper inst, ExternalPtr<struct UDemoNetDriver> value) { inst.WriteOffset(0x238, value); }
	inline bool SetCanvasForDrawMaterialToRenderTarget(t_structHelper inst, ExternalPtr<struct UCanvas> value) { inst.WriteOffset(0x278, value); }
	inline bool SetPerModuleDataObjects(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetStreamingLevels(t_structHelper inst, TArray<ExternalPtr<struct ULevelStreaming>> value) { inst.WriteOffset(0x658, value); }
	inline bool SetMyParticleEventManager(t_structHelper inst, ExternalPtr<struct UParticleEventManager> value) { inst.WriteOffset(0x758, value); }
	inline bool SetParameterCollectionInstances(t_structHelper inst, TArray<ExternalPtr<struct UMaterialParameterCollectionInstance>> value) { inst.WriteOffset(0x7D8, value); }
	inline bool SetStreamingLevelsPrefix(t_structHelper inst, FString value) { inst.WriteOffset(0x7F0, value); }
	inline bool SetCanvasForRenderingToTarget(t_structHelper inst, ExternalPtr<struct UCanvas> value) { inst.WriteOffset(0x808, value); }
	inline bool SetAvoidanceManager(t_structHelper inst, ExternalPtr<struct UAvoidanceManager> value) { inst.WriteOffset(0x818, value); }
	inline bool SetLevelCollections(t_structHelper inst, TArray<struct FLevelCollection> value) { inst.WriteOffset(0x838, value); }
	inline bool SetCurrentLevelPendingInvisibility(t_structHelper inst, ExternalPtr<struct ULevel> value) { inst.WriteOffset(0x848, value); }
	inline bool SetDefaultPhysicsVolume(t_structHelper inst, ExternalPtr<struct UPhysicsVolume> value) { inst.WriteOffset(0x8C0, value); }
	inline bool SetCurrentLevelPendingVisibility(t_structHelper inst, ExternalPtr<struct ULevel> value) { inst.WriteOffset(0x8C8, value); }
	inline bool SetCurrentLevel(t_structHelper inst, EncryptedExternalPtr<struct ULevel> value) { inst.WriteOffset(0x900, value); }
	inline bool SetPersistentLineBatcher(t_structHelper inst, ExternalPtr<struct ULineBatchComponent> value) { inst.WriteOffset(0x920, value); }
	inline bool SetAuthorityGameMode(t_structHelper inst, ExternalPtr<struct UGameModeBase> value) { inst.WriteOffset(0x928, value); }
	inline bool bAreConstraintsDirty()
	{
		return boolFieldA82& 0x1;
	}
	inline bool SetbAreConstraintsDirty(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA82, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWorld = sizeof(UWorld); // 2720
    static_assert(sizeof(UWorld) == 0xAA0, "Size of UWorld is not correct.");
	auto constexpr UWorld_NetDriver_Offset = offsetof(UWorld, NetDriver);
	static_assert(UWorld_NetDriver_Offset == 0x38, "UWorld::NetDriver offset is not 38");
	auto constexpr UWorld_AISystem_Offset = offsetof(UWorld, AISystem);
	static_assert(UWorld_AISystem_Offset == 0x40, "UWorld::AISystem offset is not 40");
	auto constexpr UWorld_HeightBufferFakeLight_Offset = offsetof(UWorld, HeightBufferFakeLight);
	static_assert(UWorld_HeightBufferFakeLight_Offset == 0x48, "UWorld::HeightBufferFakeLight offset is not 48");
	auto constexpr UWorld_NavigationSystem_Offset = offsetof(UWorld, NavigationSystem);
	static_assert(UWorld_NavigationSystem_Offset == 0x58, "UWorld::NavigationSystem offset is not 58");
	auto constexpr UWorld_NetworkManager_Offset = offsetof(UWorld, NetworkManager);
	static_assert(UWorld_NetworkManager_Offset == 0xe8, "UWorld::NetworkManager offset is not e8");
	auto constexpr UWorld_WorldComposition_Offset = offsetof(UWorld, WorldComposition);
	static_assert(UWorld_WorldComposition_Offset == 0xf0, "UWorld::WorldComposition offset is not f0");
	auto constexpr UWorld_Levels_Offset = offsetof(UWorld, Levels);
	static_assert(UWorld_Levels_Offset == 0x100, "UWorld::Levels offset is not 100");
	auto constexpr UWorld_LineBatcher_Offset = offsetof(UWorld, LineBatcher);
	static_assert(UWorld_LineBatcher_Offset == 0x110, "UWorld::LineBatcher offset is not 110");
	auto constexpr UWorld_ExtraReferencedObjects_Offset = offsetof(UWorld, ExtraReferencedObjects);
	static_assert(UWorld_ExtraReferencedObjects_Offset == 0x118, "UWorld::ExtraReferencedObjects offset is not 118");
	auto constexpr UWorld_PhysicsCollisionHandler_Offset = offsetof(UWorld, PhysicsCollisionHandler);
	static_assert(UWorld_PhysicsCollisionHandler_Offset == 0x130, "UWorld::PhysicsCollisionHandler offset is not 130");
	auto constexpr UWorld_ForegroundLineBatcher_Offset = offsetof(UWorld, ForegroundLineBatcher);
	static_assert(UWorld_ForegroundLineBatcher_Offset == 0x140, "UWorld::ForegroundLineBatcher offset is not 140");
	auto constexpr UWorld_DemoNetDriver_Offset = offsetof(UWorld, DemoNetDriver);
	static_assert(UWorld_DemoNetDriver_Offset == 0x238, "UWorld::DemoNetDriver offset is not 238");
	auto constexpr UWorld_CanvasForDrawMaterialToRenderTarget_Offset = offsetof(UWorld, CanvasForDrawMaterialToRenderTarget);
	static_assert(UWorld_CanvasForDrawMaterialToRenderTarget_Offset == 0x278, "UWorld::CanvasForDrawMaterialToRenderTarget offset is not 278");
	auto constexpr UWorld_PerModuleDataObjects_Offset = offsetof(UWorld, PerModuleDataObjects);
	static_assert(UWorld_PerModuleDataObjects_Offset == 0x5d0, "UWorld::PerModuleDataObjects offset is not 5d0");
	auto constexpr UWorld_StreamingLevels_Offset = offsetof(UWorld, StreamingLevels);
	static_assert(UWorld_StreamingLevels_Offset == 0x658, "UWorld::StreamingLevels offset is not 658");
	auto constexpr UWorld_MyParticleEventManager_Offset = offsetof(UWorld, MyParticleEventManager);
	static_assert(UWorld_MyParticleEventManager_Offset == 0x758, "UWorld::MyParticleEventManager offset is not 758");
	auto constexpr UWorld_OwningGameInstance_Offset = offsetof(UWorld, OwningGameInstance);
	static_assert(UWorld_OwningGameInstance_Offset == 0x770, "UWorld::OwningGameInstance offset is not 770");
	auto constexpr UWorld_ParameterCollectionInstances_Offset = offsetof(UWorld, ParameterCollectionInstances);
	static_assert(UWorld_ParameterCollectionInstances_Offset == 0x7d8, "UWorld::ParameterCollectionInstances offset is not 7d8");
	auto constexpr UWorld_StreamingLevelsPrefix_Offset = offsetof(UWorld, StreamingLevelsPrefix);
	static_assert(UWorld_StreamingLevelsPrefix_Offset == 0x7f0, "UWorld::StreamingLevelsPrefix offset is not 7f0");
	auto constexpr UWorld_CanvasForRenderingToTarget_Offset = offsetof(UWorld, CanvasForRenderingToTarget);
	static_assert(UWorld_CanvasForRenderingToTarget_Offset == 0x808, "UWorld::CanvasForRenderingToTarget offset is not 808");
	auto constexpr UWorld_AvoidanceManager_Offset = offsetof(UWorld, AvoidanceManager);
	static_assert(UWorld_AvoidanceManager_Offset == 0x818, "UWorld::AvoidanceManager offset is not 818");
	auto constexpr UWorld_LevelCollections_Offset = offsetof(UWorld, LevelCollections);
	static_assert(UWorld_LevelCollections_Offset == 0x838, "UWorld::LevelCollections offset is not 838");
	auto constexpr UWorld_CurrentLevelPendingInvisibility_Offset = offsetof(UWorld, CurrentLevelPendingInvisibility);
	static_assert(UWorld_CurrentLevelPendingInvisibility_Offset == 0x848, "UWorld::CurrentLevelPendingInvisibility offset is not 848");
	auto constexpr UWorld_DefaultPhysicsVolume_Offset = offsetof(UWorld, DefaultPhysicsVolume);
	static_assert(UWorld_DefaultPhysicsVolume_Offset == 0x8c0, "UWorld::DefaultPhysicsVolume offset is not 8c0");
	auto constexpr UWorld_CurrentLevelPendingVisibility_Offset = offsetof(UWorld, CurrentLevelPendingVisibility);
	static_assert(UWorld_CurrentLevelPendingVisibility_Offset == 0x8c8, "UWorld::CurrentLevelPendingVisibility offset is not 8c8");
	auto constexpr UWorld_PersistentLevel_Offset = offsetof(UWorld, PersistentLevel);
	static_assert(UWorld_PersistentLevel_Offset == 0x8e0, "UWorld::PersistentLevel offset is not 8e0");
	auto constexpr UWorld_CurrentLevel_Offset = offsetof(UWorld, CurrentLevel);
	static_assert(UWorld_CurrentLevel_Offset == 0x900, "UWorld::CurrentLevel offset is not 900");
	auto constexpr UWorld_PersistentLineBatcher_Offset = offsetof(UWorld, PersistentLineBatcher);
	static_assert(UWorld_PersistentLineBatcher_Offset == 0x920, "UWorld::PersistentLineBatcher offset is not 920");
	auto constexpr UWorld_AuthorityGameMode_Offset = offsetof(UWorld, AuthorityGameMode);
	static_assert(UWorld_AuthorityGameMode_Offset == 0x928, "UWorld::AuthorityGameMode offset is not 928");
	auto constexpr UWorld_boolFieldA82_Offset = offsetof(UWorld, boolFieldA82);
	static_assert(UWorld_boolFieldA82_Offset == 0xa82, "UWorld::boolFieldA82 offset is not a82");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
