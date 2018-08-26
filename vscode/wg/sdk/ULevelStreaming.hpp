#pragma once
#include "FTransform.hpp"
#include "FColor.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelStreaming // Size: 0x170
	: public UObject // Size: 0x30
{
private:
	typedef ULevelStreaming t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(848); // id32("Class Engine.LevelStreaming")
		return ptr;
	}
	FName PackageName; /* Ofs: 0x30 Size: 0x8 - NameProperty Engine.LevelStreaming.PackageName */
	TAssetPtr<ExternalPtr<struct UWorld>> WorldAsset; /* Ofs: 0x38 Size: 0x1C - AssetObjectProperty Engine.LevelStreaming.WorldAsset */
	uint8_t UnknownData54[0x4];
	FName PackageNameToLoad; /* Ofs: 0x58 Size: 0x8 - NameProperty Engine.LevelStreaming.PackageNameToLoad */
	TArray<struct FName> LODPackageNames; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.LevelStreaming.LODPackageNames */
	uint8_t UnknownData70[0x10];
	FTransform LevelTransform; /* Ofs: 0x80 Size: 0x30 - StructProperty Engine.LevelStreaming.LevelTransform */
	uint8_t UnknownDataB0[0x14];
	uint8_t boolFieldC4;
	uint8_t boolFieldC5;
	uint8_t UnknownDataC6[0x2];
	int32_t LevelLODIndex; /* Ofs: 0xC8 Size: 0x4 - IntProperty Engine.LevelStreaming.LevelLODIndex */
	uint8_t UnknownDataCC[0x4];
	uint8_t boolFieldD0;
	uint8_t UnknownDataD1[0x3];
	FColor DrawColor; /* Ofs: 0xD4 Size: 0x4 - StructProperty Engine.LevelStreaming.DrawColor */
	FLinearColor LevelColor; /* Ofs: 0xD8 Size: 0x10 - StructProperty Engine.LevelStreaming.LevelColor */
	TArray<ExternalPtr<struct ULevelStreamingVolume>> EditorStreamingVolumes; /* Ofs: 0xE8 Size: 0x10 - ArrayProperty Engine.LevelStreaming.EditorStreamingVolumes */
	float MinTimeBetweenVolumeUnloadRequests; /* Ofs: 0xF8 Size: 0x4 - FloatProperty Engine.LevelStreaming.MinTimeBetweenVolumeUnloadRequests */
	uint8_t UnknownDataFC[0x4];
	TArray<struct FString> Keywords; /* Ofs: 0x100 Size: 0x10 - ArrayProperty Engine.LevelStreaming.Keywords */
	FScriptMulticastDelegate OnLevelLoaded; /* Ofs: 0x110 Size: 0x10 - MulticastDelegateProperty Engine.LevelStreaming.OnLevelLoaded */
	FScriptMulticastDelegate OnLevelUnloaded; /* Ofs: 0x120 Size: 0x10 - MulticastDelegateProperty Engine.LevelStreaming.OnLevelUnloaded */
	FScriptMulticastDelegate OnLevelShown; /* Ofs: 0x130 Size: 0x10 - MulticastDelegateProperty Engine.LevelStreaming.OnLevelShown */
	FScriptMulticastDelegate OnLevelHidden; /* Ofs: 0x140 Size: 0x10 - MulticastDelegateProperty Engine.LevelStreaming.OnLevelHidden */
	ExternalPtr<struct ULevel> LoadedLevel; /* Ofs: 0x150 Size: 0x8 - ObjectProperty Engine.LevelStreaming.LoadedLevel */
	ExternalPtr<struct ULevel> PendingUnloadLevel; /* Ofs: 0x158 Size: 0x8 - ObjectProperty Engine.LevelStreaming.PendingUnloadLevel */
	uint8_t UnknownData160[0x10];


	inline bool SetPackageName(t_structHelper inst, FName value) { inst.WriteOffset(0x30, value); }
	inline bool SetWorldAsset(t_structHelper inst, TAssetPtr<ExternalPtr<struct UWorld>> value) { inst.WriteOffset(0x38, value); }
	inline bool SetPackageNameToLoad(t_structHelper inst, FName value) { inst.WriteOffset(0x58, value); }
	inline bool SetLODPackageNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x60, value); }
	inline bool SetLevelTransform(t_structHelper inst, FTransform value) { inst.WriteOffset(0x80, value); }
	inline bool bShouldBeVisibleInEditor()
	{
		return boolFieldC4& 0x8;
	}
	inline bool SetbShouldBeVisibleInEditor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bLocked()
	{
		return boolFieldC4& 0x10;
	}
	inline bool SetbLocked(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bShouldBeLoaded()
	{
		return boolFieldC4& 0x20;
	}
	inline bool SetbShouldBeLoaded(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bShouldBeVisible()
	{
		return boolFieldC4& 0x40;
	}
	inline bool SetbShouldBeVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bIsStatic()
	{
		return boolFieldC4& 0x80;
	}
	inline bool SetbIsStatic(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bShouldBlockOnLoad()
	{
		return boolFieldC5& 0x1;
	}
	inline bool SetbShouldBlockOnLoad(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLevelLODIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC8, value); }
	inline bool bDisableDistanceStreaming()
	{
		return boolFieldD0& 0x1;
	}
	inline bool SetbDisableDistanceStreaming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDrawOnLevelStatusMap()
	{
		return boolFieldD0& 0x4;
	}
	inline bool SetbDrawOnLevelStatusMap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD0, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetDrawColor(t_structHelper inst, FColor value) { inst.WriteOffset(0xD4, value); }
	inline bool SetLevelColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xD8, value); }
	inline bool SetEditorStreamingVolumes(t_structHelper inst, TArray<ExternalPtr<struct ULevelStreamingVolume>> value) { inst.WriteOffset(0xE8, value); }
	inline bool SetMinTimeBetweenVolumeUnloadRequests(t_structHelper inst, float value) { inst.WriteOffset(0xF8, value); }
	inline bool SetKeywords(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x100, value); }
	inline bool SetOnLevelLoaded(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x110, value); }
	inline bool SetOnLevelUnloaded(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x120, value); }
	inline bool SetOnLevelShown(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x130, value); }
	inline bool SetOnLevelHidden(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x140, value); }
	inline bool SetLoadedLevel(t_structHelper inst, ExternalPtr<struct ULevel> value) { inst.WriteOffset(0x150, value); }
	inline bool SetPendingUnloadLevel(t_structHelper inst, ExternalPtr<struct ULevel> value) { inst.WriteOffset(0x158, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelStreaming = sizeof(ULevelStreaming); // 368
    static_assert(sizeof(ULevelStreaming) == 0x170, "Size of ULevelStreaming is not correct.");
	auto constexpr ULevelStreaming_PackageName_Offset = offsetof(ULevelStreaming, PackageName);
	static_assert(ULevelStreaming_PackageName_Offset == 0x30, "ULevelStreaming::PackageName offset is not 30");
	auto constexpr ULevelStreaming_WorldAsset_Offset = offsetof(ULevelStreaming, WorldAsset);
	static_assert(ULevelStreaming_WorldAsset_Offset == 0x38, "ULevelStreaming::WorldAsset offset is not 38");
	auto constexpr ULevelStreaming_PackageNameToLoad_Offset = offsetof(ULevelStreaming, PackageNameToLoad);
	static_assert(ULevelStreaming_PackageNameToLoad_Offset == 0x58, "ULevelStreaming::PackageNameToLoad offset is not 58");
	auto constexpr ULevelStreaming_LODPackageNames_Offset = offsetof(ULevelStreaming, LODPackageNames);
	static_assert(ULevelStreaming_LODPackageNames_Offset == 0x60, "ULevelStreaming::LODPackageNames offset is not 60");
	auto constexpr ULevelStreaming_LevelTransform_Offset = offsetof(ULevelStreaming, LevelTransform);
	static_assert(ULevelStreaming_LevelTransform_Offset == 0x80, "ULevelStreaming::LevelTransform offset is not 80");
	auto constexpr ULevelStreaming_boolFieldC4_Offset = offsetof(ULevelStreaming, boolFieldC4);
	static_assert(ULevelStreaming_boolFieldC4_Offset == 0xc4, "ULevelStreaming::boolFieldC4 offset is not c4");
	auto constexpr ULevelStreaming_boolFieldC5_Offset = offsetof(ULevelStreaming, boolFieldC5);
	static_assert(ULevelStreaming_boolFieldC5_Offset == 0xc5, "ULevelStreaming::boolFieldC5 offset is not c5");
	auto constexpr ULevelStreaming_LevelLODIndex_Offset = offsetof(ULevelStreaming, LevelLODIndex);
	static_assert(ULevelStreaming_LevelLODIndex_Offset == 0xc8, "ULevelStreaming::LevelLODIndex offset is not c8");
	auto constexpr ULevelStreaming_boolFieldD0_Offset = offsetof(ULevelStreaming, boolFieldD0);
	static_assert(ULevelStreaming_boolFieldD0_Offset == 0xd0, "ULevelStreaming::boolFieldD0 offset is not d0");
	auto constexpr ULevelStreaming_DrawColor_Offset = offsetof(ULevelStreaming, DrawColor);
	static_assert(ULevelStreaming_DrawColor_Offset == 0xd4, "ULevelStreaming::DrawColor offset is not d4");
	auto constexpr ULevelStreaming_LevelColor_Offset = offsetof(ULevelStreaming, LevelColor);
	static_assert(ULevelStreaming_LevelColor_Offset == 0xd8, "ULevelStreaming::LevelColor offset is not d8");
	auto constexpr ULevelStreaming_EditorStreamingVolumes_Offset = offsetof(ULevelStreaming, EditorStreamingVolumes);
	static_assert(ULevelStreaming_EditorStreamingVolumes_Offset == 0xe8, "ULevelStreaming::EditorStreamingVolumes offset is not e8");
	auto constexpr ULevelStreaming_MinTimeBetweenVolumeUnloadRequests_Offset = offsetof(ULevelStreaming, MinTimeBetweenVolumeUnloadRequests);
	static_assert(ULevelStreaming_MinTimeBetweenVolumeUnloadRequests_Offset == 0xf8, "ULevelStreaming::MinTimeBetweenVolumeUnloadRequests offset is not f8");
	auto constexpr ULevelStreaming_Keywords_Offset = offsetof(ULevelStreaming, Keywords);
	static_assert(ULevelStreaming_Keywords_Offset == 0x100, "ULevelStreaming::Keywords offset is not 100");
	auto constexpr ULevelStreaming_OnLevelLoaded_Offset = offsetof(ULevelStreaming, OnLevelLoaded);
	static_assert(ULevelStreaming_OnLevelLoaded_Offset == 0x110, "ULevelStreaming::OnLevelLoaded offset is not 110");
	auto constexpr ULevelStreaming_OnLevelUnloaded_Offset = offsetof(ULevelStreaming, OnLevelUnloaded);
	static_assert(ULevelStreaming_OnLevelUnloaded_Offset == 0x120, "ULevelStreaming::OnLevelUnloaded offset is not 120");
	auto constexpr ULevelStreaming_OnLevelShown_Offset = offsetof(ULevelStreaming, OnLevelShown);
	static_assert(ULevelStreaming_OnLevelShown_Offset == 0x130, "ULevelStreaming::OnLevelShown offset is not 130");
	auto constexpr ULevelStreaming_OnLevelHidden_Offset = offsetof(ULevelStreaming, OnLevelHidden);
	static_assert(ULevelStreaming_OnLevelHidden_Offset == 0x140, "ULevelStreaming::OnLevelHidden offset is not 140");
	auto constexpr ULevelStreaming_LoadedLevel_Offset = offsetof(ULevelStreaming, LoadedLevel);
	static_assert(ULevelStreaming_LoadedLevel_Offset == 0x150, "ULevelStreaming::LoadedLevel offset is not 150");
	auto constexpr ULevelStreaming_PendingUnloadLevel_Offset = offsetof(ULevelStreaming, PendingUnloadLevel);
	static_assert(ULevelStreaming_PendingUnloadLevel_Offset == 0x158, "ULevelStreaming::PendingUnloadLevel offset is not 158");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
