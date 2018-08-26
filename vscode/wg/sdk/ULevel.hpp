#pragma once
#include "FGuid.hpp"
#include "FIntVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevel // Size: 0x350
	: public UObject // Size: 0x30
{
private:
	typedef ULevel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1704); // id32("Class Engine.Level")
		return ptr;
	}
	uint8_t UnknownData30[0x10];
	EncryptedExternalPtr<TArray<ExternalPtr<struct UActor>>> Actors; /* Ofs: 0x40 Size: 0x10 - CUSTOM FIELD */
	uint8_t UnknownData50[0x50];
	ExternalPtr<struct UModel> Model; /* Ofs: 0xA0 Size: 0x8 - ObjectProperty Engine.Level.Model */
	uint8_t boolFieldA8;
	uint8_t UnknownDataA9[0x17];
	ExternalPtr<struct ULevelActorContainer> ActorCluster; /* Ofs: 0xC0 Size: 0x8 - ObjectProperty Engine.Level.ActorCluster */
	TArray<ExternalPtr<struct UModelComponent>> ModelComponents; /* Ofs: 0xC8 Size: 0x10 - ArrayProperty Engine.Level.ModelComponents */
	uint8_t UnknownDataD8[0x8];
	EncryptedExternalPtr<struct UWorld> OwningWorld; /* Ofs: 0xE0 Size: 0x10 - EncryptedObjectProperty Engine.Level.OwningWorld */
	uint8_t UnknownDataF0[0x8];
	TArray<struct FVector> StaticNavigableGeometry; /* Ofs: 0xF8 Size: 0x10 - ArrayProperty Engine.Level.StaticNavigableGeometry */
	ExternalPtr<struct UNavigationObjectBase> NavListEnd; /* Ofs: 0x108 Size: 0x8 - ObjectProperty Engine.Level.NavListEnd */
	TArray<struct FGuid> StreamingTextureGuids; /* Ofs: 0x110 Size: 0x10 - ArrayProperty Engine.Level.StreamingTextureGuids */
	int32_t NumTextureStreamingUnbuiltComponents; /* Ofs: 0x120 Size: 0x4 - IntProperty Engine.Level.NumTextureStreamingUnbuiltComponents */
	float ShadowmapTotalSize; /* Ofs: 0x124 Size: 0x4 - FloatProperty Engine.Level.ShadowmapTotalSize */
	TArray<ExternalPtr<struct UNavigationDataChunk>> NavDataChunks; /* Ofs: 0x128 Size: 0x10 - ArrayProperty Engine.Level.NavDataChunks */
	int32_t NumTextureStreamingDirtyResources; /* Ofs: 0x138 Size: 0x4 - IntProperty Engine.Level.NumTextureStreamingDirtyResources */
	uint8_t UnknownData13C[0x7C];
	FGuid LevelBuildDataId; /* Ofs: 0x1B8 Size: 0x10 - StructProperty Engine.Level.LevelBuildDataId */
	ExternalPtr<struct UNavigationObjectBase> NavListStart; /* Ofs: 0x1C8 Size: 0x8 - ObjectProperty Engine.Level.NavListStart */
	float LightmapTotalSize; /* Ofs: 0x1D0 Size: 0x4 - FloatProperty Engine.Level.LightmapTotalSize */
	uint8_t UnknownData1D4[0x4];
	ExternalPtr<struct ULevelScriptActor> LevelScriptActor; /* Ofs: 0x1D8 Size: 0x8 - ObjectProperty Engine.Level.LevelScriptActor */
	ExternalPtr<struct UMapBuildDataRegistry> MapBuildData; /* Ofs: 0x1E0 Size: 0x8 - ObjectProperty Engine.Level.MapBuildData */
	uint8_t UnknownData1E8[0xA0];
	uint8_t boolField288;
	uint8_t UnknownData289[0x17];
	FIntVector LightBuildLevelOffset; /* Ofs: 0x2A0 Size: 0xC - StructProperty Engine.Level.LightBuildLevelOffset */
	uint8_t UnknownData2AC[0x74];
	ExternalPtr<struct UWorldSettings> WorldSettings; /* Ofs: 0x320 Size: 0x8 - ObjectProperty Engine.Level.WorldSettings */
	uint8_t UnknownData328[0x8];
	TArray<ExternalPtr<struct UAssetUserData>> AssetUserData; /* Ofs: 0x330 Size: 0x10 - ArrayProperty Engine.Level.AssetUserData */
	uint8_t UnknownData340[0x10];


	inline bool SetModel(t_structHelper inst, ExternalPtr<struct UModel> value) { inst.WriteOffset(0xA0, value); }
	inline bool bIsLightingScenario()
	{
		return boolFieldA8& 0x1;
	}
	inline bool SetbIsLightingScenario(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetActorCluster(t_structHelper inst, ExternalPtr<struct ULevelActorContainer> value) { inst.WriteOffset(0xC0, value); }
	inline bool SetModelComponents(t_structHelper inst, TArray<ExternalPtr<struct UModelComponent>> value) { inst.WriteOffset(0xC8, value); }
	inline bool SetOwningWorld(t_structHelper inst, EncryptedExternalPtr<struct UWorld> value) { inst.WriteOffset(0xE0, value); }
	inline bool SetStaticNavigableGeometry(t_structHelper inst, TArray<struct FVector> value) { inst.WriteOffset(0xF8, value); }
	inline bool SetNavListEnd(t_structHelper inst, ExternalPtr<struct UNavigationObjectBase> value) { inst.WriteOffset(0x108, value); }
	inline bool SetStreamingTextureGuids(t_structHelper inst, TArray<struct FGuid> value) { inst.WriteOffset(0x110, value); }
	inline bool SetNumTextureStreamingUnbuiltComponents(t_structHelper inst, int32_t value) { inst.WriteOffset(0x120, value); }
	inline bool SetShadowmapTotalSize(t_structHelper inst, float value) { inst.WriteOffset(0x124, value); }
	inline bool SetNavDataChunks(t_structHelper inst, TArray<ExternalPtr<struct UNavigationDataChunk>> value) { inst.WriteOffset(0x128, value); }
	inline bool SetNumTextureStreamingDirtyResources(t_structHelper inst, int32_t value) { inst.WriteOffset(0x138, value); }
	inline bool SetLevelBuildDataId(t_structHelper inst, FGuid value) { inst.WriteOffset(0x1B8, value); }
	inline bool SetNavListStart(t_structHelper inst, ExternalPtr<struct UNavigationObjectBase> value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetLightmapTotalSize(t_structHelper inst, float value) { inst.WriteOffset(0x1D0, value); }
	inline bool SetLevelScriptActor(t_structHelper inst, ExternalPtr<struct ULevelScriptActor> value) { inst.WriteOffset(0x1D8, value); }
	inline bool SetMapBuildData(t_structHelper inst, ExternalPtr<struct UMapBuildDataRegistry> value) { inst.WriteOffset(0x1E0, value); }
	inline bool bTextureStreamingRotationChanged()
	{
		return boolField288& 0x4;
	}
	inline bool SetbTextureStreamingRotationChanged(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x288, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bIsVisible()
	{
		return boolField288& 0x8;
	}
	inline bool SetbIsVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x288, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bLocked()
	{
		return boolField288& 0x10;
	}
	inline bool SetbLocked(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x288, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool SetLightBuildLevelOffset(t_structHelper inst, FIntVector value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetWorldSettings(t_structHelper inst, ExternalPtr<struct UWorldSettings> value) { inst.WriteOffset(0x320, value); }
	inline bool SetAssetUserData(t_structHelper inst, TArray<ExternalPtr<struct UAssetUserData>> value) { inst.WriteOffset(0x330, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevel = sizeof(ULevel); // 848
    static_assert(sizeof(ULevel) == 0x350, "Size of ULevel is not correct.");
	auto constexpr ULevel_Actors_Offset = offsetof(ULevel, Actors);
	static_assert(ULevel_Actors_Offset == 0x40, "ULevel::Actors offset is not 40");
	auto constexpr ULevel_Model_Offset = offsetof(ULevel, Model);
	static_assert(ULevel_Model_Offset == 0xa0, "ULevel::Model offset is not a0");
	auto constexpr ULevel_boolFieldA8_Offset = offsetof(ULevel, boolFieldA8);
	static_assert(ULevel_boolFieldA8_Offset == 0xa8, "ULevel::boolFieldA8 offset is not a8");
	auto constexpr ULevel_ActorCluster_Offset = offsetof(ULevel, ActorCluster);
	static_assert(ULevel_ActorCluster_Offset == 0xc0, "ULevel::ActorCluster offset is not c0");
	auto constexpr ULevel_ModelComponents_Offset = offsetof(ULevel, ModelComponents);
	static_assert(ULevel_ModelComponents_Offset == 0xc8, "ULevel::ModelComponents offset is not c8");
	auto constexpr ULevel_OwningWorld_Offset = offsetof(ULevel, OwningWorld);
	static_assert(ULevel_OwningWorld_Offset == 0xe0, "ULevel::OwningWorld offset is not e0");
	auto constexpr ULevel_StaticNavigableGeometry_Offset = offsetof(ULevel, StaticNavigableGeometry);
	static_assert(ULevel_StaticNavigableGeometry_Offset == 0xf8, "ULevel::StaticNavigableGeometry offset is not f8");
	auto constexpr ULevel_NavListEnd_Offset = offsetof(ULevel, NavListEnd);
	static_assert(ULevel_NavListEnd_Offset == 0x108, "ULevel::NavListEnd offset is not 108");
	auto constexpr ULevel_StreamingTextureGuids_Offset = offsetof(ULevel, StreamingTextureGuids);
	static_assert(ULevel_StreamingTextureGuids_Offset == 0x110, "ULevel::StreamingTextureGuids offset is not 110");
	auto constexpr ULevel_NumTextureStreamingUnbuiltComponents_Offset = offsetof(ULevel, NumTextureStreamingUnbuiltComponents);
	static_assert(ULevel_NumTextureStreamingUnbuiltComponents_Offset == 0x120, "ULevel::NumTextureStreamingUnbuiltComponents offset is not 120");
	auto constexpr ULevel_ShadowmapTotalSize_Offset = offsetof(ULevel, ShadowmapTotalSize);
	static_assert(ULevel_ShadowmapTotalSize_Offset == 0x124, "ULevel::ShadowmapTotalSize offset is not 124");
	auto constexpr ULevel_NavDataChunks_Offset = offsetof(ULevel, NavDataChunks);
	static_assert(ULevel_NavDataChunks_Offset == 0x128, "ULevel::NavDataChunks offset is not 128");
	auto constexpr ULevel_NumTextureStreamingDirtyResources_Offset = offsetof(ULevel, NumTextureStreamingDirtyResources);
	static_assert(ULevel_NumTextureStreamingDirtyResources_Offset == 0x138, "ULevel::NumTextureStreamingDirtyResources offset is not 138");
	auto constexpr ULevel_LevelBuildDataId_Offset = offsetof(ULevel, LevelBuildDataId);
	static_assert(ULevel_LevelBuildDataId_Offset == 0x1b8, "ULevel::LevelBuildDataId offset is not 1b8");
	auto constexpr ULevel_NavListStart_Offset = offsetof(ULevel, NavListStart);
	static_assert(ULevel_NavListStart_Offset == 0x1c8, "ULevel::NavListStart offset is not 1c8");
	auto constexpr ULevel_LightmapTotalSize_Offset = offsetof(ULevel, LightmapTotalSize);
	static_assert(ULevel_LightmapTotalSize_Offset == 0x1d0, "ULevel::LightmapTotalSize offset is not 1d0");
	auto constexpr ULevel_LevelScriptActor_Offset = offsetof(ULevel, LevelScriptActor);
	static_assert(ULevel_LevelScriptActor_Offset == 0x1d8, "ULevel::LevelScriptActor offset is not 1d8");
	auto constexpr ULevel_MapBuildData_Offset = offsetof(ULevel, MapBuildData);
	static_assert(ULevel_MapBuildData_Offset == 0x1e0, "ULevel::MapBuildData offset is not 1e0");
	auto constexpr ULevel_boolField288_Offset = offsetof(ULevel, boolField288);
	static_assert(ULevel_boolField288_Offset == 0x288, "ULevel::boolField288 offset is not 288");
	auto constexpr ULevel_LightBuildLevelOffset_Offset = offsetof(ULevel, LightBuildLevelOffset);
	static_assert(ULevel_LightBuildLevelOffset_Offset == 0x2a0, "ULevel::LightBuildLevelOffset offset is not 2a0");
	auto constexpr ULevel_WorldSettings_Offset = offsetof(ULevel, WorldSettings);
	static_assert(ULevel_WorldSettings_Offset == 0x320, "ULevel::WorldSettings offset is not 320");
	auto constexpr ULevel_AssetUserData_Offset = offsetof(ULevel, AssetUserData);
	static_assert(ULevel_AssetUserData_Offset == 0x330, "ULevel::AssetUserData offset is not 330");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
