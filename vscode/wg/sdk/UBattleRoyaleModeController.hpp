#pragma once
#include "UModeController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBattleRoyaleModeController // Size: 0x670
	: public UModeController // Size: 0x520
{
private:
	typedef UBattleRoyaleModeController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1885); // id32("Class TslGame.BattleRoyaleModeController")
		return ptr;
	}
	uint8_t UnknownData520[0x70];
	TArray<struct FBattleRoyalePoisionGasData> NormalPoisonGasDataArray; /* Ofs: 0x590 Size: 0x10 - ArrayProperty TslGame.BattleRoyaleModeController.NormalPoisonGasDataArray */
	TArray<struct FBattleRoyalePoisionGasData> FastPoisonGasDataArray; /* Ofs: 0x5A0 Size: 0x10 - ArrayProperty TslGame.BattleRoyaleModeController.FastPoisonGasDataArray */
	int32_t FastZonePlayerCount; /* Ofs: 0x5B0 Size: 0x4 - IntProperty TslGame.BattleRoyaleModeController.FastZonePlayerCount */
	float BattleRoyaleZoneTypeCheckTime; /* Ofs: 0x5B4 Size: 0x4 - FloatProperty TslGame.BattleRoyaleModeController.BattleRoyaleZoneTypeCheckTime */
	TArray<float> PoisonWarningTime; /* Ofs: 0x5B8 Size: 0x10 - ArrayProperty TslGame.BattleRoyaleModeController.PoisonWarningTime */
	float WaterVolumeRayHeight; /* Ofs: 0x5C8 Size: 0x4 - FloatProperty TslGame.BattleRoyaleModeController.WaterVolumeRayHeight */
	uint8_t UnknownData5CC[0x4];
	FString TestMapDataName; /* Ofs: 0x5D0 Size: 0x10 - StrProperty TslGame.BattleRoyaleModeController.TestMapDataName */
	int32_t NextPoisonGasIndex; /* Ofs: 0x5E0 Size: 0x4 - IntProperty TslGame.BattleRoyaleModeController.NextPoisonGasIndex */
	uint8_t UnknownData5E4[0x4];
	TArray<ExternalPtr<struct UTslBlueZoneCreateArea>> BlueZoneCreateAreas; /* Ofs: 0x5E8 Size: 0x10 - ArrayProperty TslGame.BattleRoyaleModeController.BlueZoneCreateAreas */
	TArray<ExternalPtr<struct UTslPhysicsVolume>> OceanPhysicsVolume; /* Ofs: 0x5F8 Size: 0x10 - ArrayProperty TslGame.BattleRoyaleModeController.OceanPhysicsVolume */
	TArray<ExternalPtr<struct UTslPassBluezoneArea>> PassBluezoneAreas; /* Ofs: 0x608 Size: 0x10 - ArrayProperty TslGame.BattleRoyaleModeController.PassBluezoneAreas */
	TArray<ExternalPtr<struct UTslPassBlueZoneAreaRectangle>> PassBluezoneAreasRectangle; /* Ofs: 0x618 Size: 0x10 - ArrayProperty TslGame.BattleRoyaleModeController.PassBluezoneAreasRectangle */
	uint8_t UnknownData628[0x48];


	inline bool SetNormalPoisonGasDataArray(t_structHelper inst, TArray<struct FBattleRoyalePoisionGasData> value) { inst.WriteOffset(0x590, value); }
	inline bool SetFastPoisonGasDataArray(t_structHelper inst, TArray<struct FBattleRoyalePoisionGasData> value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetFastZonePlayerCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetBattleRoyaleZoneTypeCheckTime(t_structHelper inst, float value) { inst.WriteOffset(0x5B4, value); }
	inline bool SetPoisonWarningTime(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetWaterVolumeRayHeight(t_structHelper inst, float value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetTestMapDataName(t_structHelper inst, FString value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetNextPoisonGasIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetBlueZoneCreateAreas(t_structHelper inst, TArray<ExternalPtr<struct UTslBlueZoneCreateArea>> value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetOceanPhysicsVolume(t_structHelper inst, TArray<ExternalPtr<struct UTslPhysicsVolume>> value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetPassBluezoneAreas(t_structHelper inst, TArray<ExternalPtr<struct UTslPassBluezoneArea>> value) { inst.WriteOffset(0x608, value); }
	inline bool SetPassBluezoneAreasRectangle(t_structHelper inst, TArray<ExternalPtr<struct UTslPassBlueZoneAreaRectangle>> value) { inst.WriteOffset(0x618, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBattleRoyaleModeController = sizeof(UBattleRoyaleModeController); // 1648
    static_assert(sizeof(UBattleRoyaleModeController) == 0x670, "Size of UBattleRoyaleModeController is not correct.");
	auto constexpr UBattleRoyaleModeController_NormalPoisonGasDataArray_Offset = offsetof(UBattleRoyaleModeController, NormalPoisonGasDataArray);
	static_assert(UBattleRoyaleModeController_NormalPoisonGasDataArray_Offset == 0x590, "UBattleRoyaleModeController::NormalPoisonGasDataArray offset is not 590");
	auto constexpr UBattleRoyaleModeController_FastPoisonGasDataArray_Offset = offsetof(UBattleRoyaleModeController, FastPoisonGasDataArray);
	static_assert(UBattleRoyaleModeController_FastPoisonGasDataArray_Offset == 0x5a0, "UBattleRoyaleModeController::FastPoisonGasDataArray offset is not 5a0");
	auto constexpr UBattleRoyaleModeController_FastZonePlayerCount_Offset = offsetof(UBattleRoyaleModeController, FastZonePlayerCount);
	static_assert(UBattleRoyaleModeController_FastZonePlayerCount_Offset == 0x5b0, "UBattleRoyaleModeController::FastZonePlayerCount offset is not 5b0");
	auto constexpr UBattleRoyaleModeController_BattleRoyaleZoneTypeCheckTime_Offset = offsetof(UBattleRoyaleModeController, BattleRoyaleZoneTypeCheckTime);
	static_assert(UBattleRoyaleModeController_BattleRoyaleZoneTypeCheckTime_Offset == 0x5b4, "UBattleRoyaleModeController::BattleRoyaleZoneTypeCheckTime offset is not 5b4");
	auto constexpr UBattleRoyaleModeController_PoisonWarningTime_Offset = offsetof(UBattleRoyaleModeController, PoisonWarningTime);
	static_assert(UBattleRoyaleModeController_PoisonWarningTime_Offset == 0x5b8, "UBattleRoyaleModeController::PoisonWarningTime offset is not 5b8");
	auto constexpr UBattleRoyaleModeController_WaterVolumeRayHeight_Offset = offsetof(UBattleRoyaleModeController, WaterVolumeRayHeight);
	static_assert(UBattleRoyaleModeController_WaterVolumeRayHeight_Offset == 0x5c8, "UBattleRoyaleModeController::WaterVolumeRayHeight offset is not 5c8");
	auto constexpr UBattleRoyaleModeController_TestMapDataName_Offset = offsetof(UBattleRoyaleModeController, TestMapDataName);
	static_assert(UBattleRoyaleModeController_TestMapDataName_Offset == 0x5d0, "UBattleRoyaleModeController::TestMapDataName offset is not 5d0");
	auto constexpr UBattleRoyaleModeController_NextPoisonGasIndex_Offset = offsetof(UBattleRoyaleModeController, NextPoisonGasIndex);
	static_assert(UBattleRoyaleModeController_NextPoisonGasIndex_Offset == 0x5e0, "UBattleRoyaleModeController::NextPoisonGasIndex offset is not 5e0");
	auto constexpr UBattleRoyaleModeController_BlueZoneCreateAreas_Offset = offsetof(UBattleRoyaleModeController, BlueZoneCreateAreas);
	static_assert(UBattleRoyaleModeController_BlueZoneCreateAreas_Offset == 0x5e8, "UBattleRoyaleModeController::BlueZoneCreateAreas offset is not 5e8");
	auto constexpr UBattleRoyaleModeController_OceanPhysicsVolume_Offset = offsetof(UBattleRoyaleModeController, OceanPhysicsVolume);
	static_assert(UBattleRoyaleModeController_OceanPhysicsVolume_Offset == 0x5f8, "UBattleRoyaleModeController::OceanPhysicsVolume offset is not 5f8");
	auto constexpr UBattleRoyaleModeController_PassBluezoneAreas_Offset = offsetof(UBattleRoyaleModeController, PassBluezoneAreas);
	static_assert(UBattleRoyaleModeController_PassBluezoneAreas_Offset == 0x608, "UBattleRoyaleModeController::PassBluezoneAreas offset is not 608");
	auto constexpr UBattleRoyaleModeController_PassBluezoneAreasRectangle_Offset = offsetof(UBattleRoyaleModeController, PassBluezoneAreasRectangle);
	static_assert(UBattleRoyaleModeController_PassBluezoneAreasRectangle_Offset == 0x618, "UBattleRoyaleModeController::PassBluezoneAreasRectangle offset is not 618");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
