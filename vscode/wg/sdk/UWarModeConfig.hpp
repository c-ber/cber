#pragma once
#include "FBattleRoyalePoisionGasData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeConfig // Size: 0x108
	: public UObject // Size: 0x30
{
private:
	typedef UWarModeConfig t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1886); // id32("Class TslGame.WarModeConfig")
		return ptr;
	}
	float ReviveCastingTime; /* Ofs: 0x30 Size: 0x4 - FloatProperty TslGame.WarModeConfig.ReviveCastingTime */
	uint8_t UnknownData34[0x4];
	ExternalPtr<struct UClass> WarModeRespawnKitClass; /* Ofs: 0x38 Size: 0x8 - ClassProperty TslGame.WarModeConfig.WarModeRespawnKitClass */
	uint8_t boolField40;
	uint8_t boolField41;
	uint8_t UnknownData42[0x6];
	TArray<struct FBattleRoyalePoisionGasData> WarRoyaleBluezoneGasDataArray; /* Ofs: 0x48 Size: 0x10 - ArrayProperty TslGame.WarModeConfig.WarRoyaleBluezoneGasDataArray */
	FBattleRoyalePoisionGasData StaticBluezoneGasData; /* Ofs: 0x58 Size: 0x40 - StructProperty TslGame.WarModeConfig.StaticBluezoneGasData */
	TArray<struct FBattleRoyalePoisionGasData> StaticBluezoneGasDataArray; /* Ofs: 0x98 Size: 0x10 - ArrayProperty TslGame.WarModeConfig.StaticBluezoneGasDataArray */
	float EjectionAreaBorderRadius; /* Ofs: 0xA8 Size: 0x4 - FloatProperty TslGame.WarModeConfig.EjectionAreaBorderRadius */
	int32_t GoalScore; /* Ofs: 0xAC Size: 0x4 - IntProperty TslGame.WarModeConfig.GoalScore */
	float TimeLimitInSec; /* Ofs: 0xB0 Size: 0x4 - FloatProperty TslGame.WarModeConfig.TimeLimitInSec */
	uint8_t boolFieldB4;
	uint8_t UnknownDataB5[0x3];
	int32_t PointDBNO; /* Ofs: 0xB8 Size: 0x4 - IntProperty TslGame.WarModeConfig.PointDBNO */
	int32_t PointKill; /* Ofs: 0xBC Size: 0x4 - IntProperty TslGame.WarModeConfig.PointKill */
	int32_t PointTeamDBNO; /* Ofs: 0xC0 Size: 0x4 - IntProperty TslGame.WarModeConfig.PointTeamDBNO */
	int32_t PointTeamKill; /* Ofs: 0xC4 Size: 0x4 - IntProperty TslGame.WarModeConfig.PointTeamKill */
	int32_t PointRevive; /* Ofs: 0xC8 Size: 0x4 - IntProperty TslGame.WarModeConfig.PointRevive */
	uint8_t UnknownDataCC[0x4];
	ExternalPtr<struct UCurveFloat> BonusKillPointRatioCurve; /* Ofs: 0xD0 Size: 0x8 - ObjectProperty TslGame.WarModeConfig.BonusKillPointRatioCurve */
	uint8_t boolFieldD8;
	uint8_t boolFieldD9;
	uint8_t boolFieldDA;
	uint8_t UnknownDataDB[0x1];
	float LootBoxLifeTime; /* Ofs: 0xDC Size: 0x4 - FloatProperty TslGame.WarModeConfig.LootBoxLifeTime */
	uint8_t boolFieldE0;
	uint8_t UnknownDataE1[0x3];
	int32_t SquadSize; /* Ofs: 0xE4 Size: 0x4 - IntProperty TslGame.WarModeConfig.SquadSize */
	float RespawnOffTimeLeftRatio; /* Ofs: 0xE8 Size: 0x4 - FloatProperty TslGame.WarModeConfig.RespawnOffTimeLeftRatio */
	float HealthByRevive; /* Ofs: 0xEC Size: 0x4 - FloatProperty TslGame.WarModeConfig.HealthByRevive */
	float GroggyDamagePerSecond; /* Ofs: 0xF0 Size: 0x4 - FloatProperty TslGame.WarModeConfig.GroggyDamagePerSecond */
	float GroggyEnabledAltitudeInCentiMeter; /* Ofs: 0xF4 Size: 0x4 - FloatProperty TslGame.WarModeConfig.GroggyEnabledAltitudeInCentiMeter */
	uint8_t boolFieldF8;
	uint8_t UnknownDataF9[0x7];
	ExternalPtr<struct UWarModeRespawnKit> WarModeRespawnKit; /* Ofs: 0x100 Size: 0x8 - ObjectProperty TslGame.WarModeConfig.WarModeRespawnKit */


	inline bool SetReviveCastingTime(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetWarModeRespawnKitClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x38, value); }
	inline bool bUseEndCircleArea()
	{
		return boolField40& 0x1;
	}
	inline bool SetbUseEndCircleArea(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseWarRoyaleBluezone()
	{
		return boolField41& 0x1;
	}
	inline bool SetbUseWarRoyaleBluezone(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWarRoyaleBluezoneGasDataArray(t_structHelper inst, TArray<struct FBattleRoyalePoisionGasData> value) { inst.WriteOffset(0x48, value); }
	inline bool SetStaticBluezoneGasData(t_structHelper inst, FBattleRoyalePoisionGasData value) { inst.WriteOffset(0x58, value); }
	inline bool SetStaticBluezoneGasDataArray(t_structHelper inst, TArray<struct FBattleRoyalePoisionGasData> value) { inst.WriteOffset(0x98, value); }
	inline bool SetEjectionAreaBorderRadius(t_structHelper inst, float value) { inst.WriteOffset(0xA8, value); }
	inline bool SetGoalScore(t_structHelper inst, int32_t value) { inst.WriteOffset(0xAC, value); }
	inline bool SetTimeLimitInSec(t_structHelper inst, float value) { inst.WriteOffset(0xB0, value); }
	inline bool bCanHaveNegativeScore()
	{
		return boolFieldB4& 0x1;
	}
	inline bool SetbCanHaveNegativeScore(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPointDBNO(t_structHelper inst, int32_t value) { inst.WriteOffset(0xB8, value); }
	inline bool SetPointKill(t_structHelper inst, int32_t value) { inst.WriteOffset(0xBC, value); }
	inline bool SetPointTeamDBNO(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC0, value); }
	inline bool SetPointTeamKill(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC4, value); }
	inline bool SetPointRevive(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC8, value); }
	inline bool SetBonusKillPointRatioCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xD0, value); }
	inline bool bUseRedZone()
	{
		return boolFieldD8& 0x1;
	}
	inline bool SetbUseRedZone(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTeamElimination()
	{
		return boolFieldD9& 0x1;
	}
	inline bool SetbTeamElimination(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableDBNO()
	{
		return boolFieldDA& 0x1;
	}
	inline bool SetbEnableDBNO(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xDA, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLootBoxLifeTime(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
	inline bool bEnableSquadInTeam()
	{
		return boolFieldE0& 0x1;
	}
	inline bool SetbEnableSquadInTeam(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSquadSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0xE4, value); }
	inline bool SetRespawnOffTimeLeftRatio(t_structHelper inst, float value) { inst.WriteOffset(0xE8, value); }
	inline bool SetHealthByRevive(t_structHelper inst, float value) { inst.WriteOffset(0xEC, value); }
	inline bool SetGroggyDamagePerSecond(t_structHelper inst, float value) { inst.WriteOffset(0xF0, value); }
	inline bool SetGroggyEnabledAltitudeInCentiMeter(t_structHelper inst, float value) { inst.WriteOffset(0xF4, value); }
	inline bool bUseTeamXRay()
	{
		return boolFieldF8& 0x1;
	}
	inline bool SetbUseTeamXRay(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWarModeRespawnKit(t_structHelper inst, ExternalPtr<struct UWarModeRespawnKit> value) { inst.WriteOffset(0x100, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeConfig = sizeof(UWarModeConfig); // 264
    static_assert(sizeof(UWarModeConfig) == 0x108, "Size of UWarModeConfig is not correct.");
	auto constexpr UWarModeConfig_ReviveCastingTime_Offset = offsetof(UWarModeConfig, ReviveCastingTime);
	static_assert(UWarModeConfig_ReviveCastingTime_Offset == 0x30, "UWarModeConfig::ReviveCastingTime offset is not 30");
	auto constexpr UWarModeConfig_WarModeRespawnKitClass_Offset = offsetof(UWarModeConfig, WarModeRespawnKitClass);
	static_assert(UWarModeConfig_WarModeRespawnKitClass_Offset == 0x38, "UWarModeConfig::WarModeRespawnKitClass offset is not 38");
	auto constexpr UWarModeConfig_boolField40_Offset = offsetof(UWarModeConfig, boolField40);
	static_assert(UWarModeConfig_boolField40_Offset == 0x40, "UWarModeConfig::boolField40 offset is not 40");
	auto constexpr UWarModeConfig_boolField41_Offset = offsetof(UWarModeConfig, boolField41);
	static_assert(UWarModeConfig_boolField41_Offset == 0x41, "UWarModeConfig::boolField41 offset is not 41");
	auto constexpr UWarModeConfig_WarRoyaleBluezoneGasDataArray_Offset = offsetof(UWarModeConfig, WarRoyaleBluezoneGasDataArray);
	static_assert(UWarModeConfig_WarRoyaleBluezoneGasDataArray_Offset == 0x48, "UWarModeConfig::WarRoyaleBluezoneGasDataArray offset is not 48");
	auto constexpr UWarModeConfig_StaticBluezoneGasData_Offset = offsetof(UWarModeConfig, StaticBluezoneGasData);
	static_assert(UWarModeConfig_StaticBluezoneGasData_Offset == 0x58, "UWarModeConfig::StaticBluezoneGasData offset is not 58");
	auto constexpr UWarModeConfig_StaticBluezoneGasDataArray_Offset = offsetof(UWarModeConfig, StaticBluezoneGasDataArray);
	static_assert(UWarModeConfig_StaticBluezoneGasDataArray_Offset == 0x98, "UWarModeConfig::StaticBluezoneGasDataArray offset is not 98");
	auto constexpr UWarModeConfig_EjectionAreaBorderRadius_Offset = offsetof(UWarModeConfig, EjectionAreaBorderRadius);
	static_assert(UWarModeConfig_EjectionAreaBorderRadius_Offset == 0xa8, "UWarModeConfig::EjectionAreaBorderRadius offset is not a8");
	auto constexpr UWarModeConfig_GoalScore_Offset = offsetof(UWarModeConfig, GoalScore);
	static_assert(UWarModeConfig_GoalScore_Offset == 0xac, "UWarModeConfig::GoalScore offset is not ac");
	auto constexpr UWarModeConfig_TimeLimitInSec_Offset = offsetof(UWarModeConfig, TimeLimitInSec);
	static_assert(UWarModeConfig_TimeLimitInSec_Offset == 0xb0, "UWarModeConfig::TimeLimitInSec offset is not b0");
	auto constexpr UWarModeConfig_boolFieldB4_Offset = offsetof(UWarModeConfig, boolFieldB4);
	static_assert(UWarModeConfig_boolFieldB4_Offset == 0xb4, "UWarModeConfig::boolFieldB4 offset is not b4");
	auto constexpr UWarModeConfig_PointDBNO_Offset = offsetof(UWarModeConfig, PointDBNO);
	static_assert(UWarModeConfig_PointDBNO_Offset == 0xb8, "UWarModeConfig::PointDBNO offset is not b8");
	auto constexpr UWarModeConfig_PointKill_Offset = offsetof(UWarModeConfig, PointKill);
	static_assert(UWarModeConfig_PointKill_Offset == 0xbc, "UWarModeConfig::PointKill offset is not bc");
	auto constexpr UWarModeConfig_PointTeamDBNO_Offset = offsetof(UWarModeConfig, PointTeamDBNO);
	static_assert(UWarModeConfig_PointTeamDBNO_Offset == 0xc0, "UWarModeConfig::PointTeamDBNO offset is not c0");
	auto constexpr UWarModeConfig_PointTeamKill_Offset = offsetof(UWarModeConfig, PointTeamKill);
	static_assert(UWarModeConfig_PointTeamKill_Offset == 0xc4, "UWarModeConfig::PointTeamKill offset is not c4");
	auto constexpr UWarModeConfig_PointRevive_Offset = offsetof(UWarModeConfig, PointRevive);
	static_assert(UWarModeConfig_PointRevive_Offset == 0xc8, "UWarModeConfig::PointRevive offset is not c8");
	auto constexpr UWarModeConfig_BonusKillPointRatioCurve_Offset = offsetof(UWarModeConfig, BonusKillPointRatioCurve);
	static_assert(UWarModeConfig_BonusKillPointRatioCurve_Offset == 0xd0, "UWarModeConfig::BonusKillPointRatioCurve offset is not d0");
	auto constexpr UWarModeConfig_boolFieldD8_Offset = offsetof(UWarModeConfig, boolFieldD8);
	static_assert(UWarModeConfig_boolFieldD8_Offset == 0xd8, "UWarModeConfig::boolFieldD8 offset is not d8");
	auto constexpr UWarModeConfig_boolFieldD9_Offset = offsetof(UWarModeConfig, boolFieldD9);
	static_assert(UWarModeConfig_boolFieldD9_Offset == 0xd9, "UWarModeConfig::boolFieldD9 offset is not d9");
	auto constexpr UWarModeConfig_boolFieldDA_Offset = offsetof(UWarModeConfig, boolFieldDA);
	static_assert(UWarModeConfig_boolFieldDA_Offset == 0xda, "UWarModeConfig::boolFieldDA offset is not da");
	auto constexpr UWarModeConfig_LootBoxLifeTime_Offset = offsetof(UWarModeConfig, LootBoxLifeTime);
	static_assert(UWarModeConfig_LootBoxLifeTime_Offset == 0xdc, "UWarModeConfig::LootBoxLifeTime offset is not dc");
	auto constexpr UWarModeConfig_boolFieldE0_Offset = offsetof(UWarModeConfig, boolFieldE0);
	static_assert(UWarModeConfig_boolFieldE0_Offset == 0xe0, "UWarModeConfig::boolFieldE0 offset is not e0");
	auto constexpr UWarModeConfig_SquadSize_Offset = offsetof(UWarModeConfig, SquadSize);
	static_assert(UWarModeConfig_SquadSize_Offset == 0xe4, "UWarModeConfig::SquadSize offset is not e4");
	auto constexpr UWarModeConfig_RespawnOffTimeLeftRatio_Offset = offsetof(UWarModeConfig, RespawnOffTimeLeftRatio);
	static_assert(UWarModeConfig_RespawnOffTimeLeftRatio_Offset == 0xe8, "UWarModeConfig::RespawnOffTimeLeftRatio offset is not e8");
	auto constexpr UWarModeConfig_HealthByRevive_Offset = offsetof(UWarModeConfig, HealthByRevive);
	static_assert(UWarModeConfig_HealthByRevive_Offset == 0xec, "UWarModeConfig::HealthByRevive offset is not ec");
	auto constexpr UWarModeConfig_GroggyDamagePerSecond_Offset = offsetof(UWarModeConfig, GroggyDamagePerSecond);
	static_assert(UWarModeConfig_GroggyDamagePerSecond_Offset == 0xf0, "UWarModeConfig::GroggyDamagePerSecond offset is not f0");
	auto constexpr UWarModeConfig_GroggyEnabledAltitudeInCentiMeter_Offset = offsetof(UWarModeConfig, GroggyEnabledAltitudeInCentiMeter);
	static_assert(UWarModeConfig_GroggyEnabledAltitudeInCentiMeter_Offset == 0xf4, "UWarModeConfig::GroggyEnabledAltitudeInCentiMeter offset is not f4");
	auto constexpr UWarModeConfig_boolFieldF8_Offset = offsetof(UWarModeConfig, boolFieldF8);
	static_assert(UWarModeConfig_boolFieldF8_Offset == 0xf8, "UWarModeConfig::boolFieldF8 offset is not f8");
	auto constexpr UWarModeConfig_WarModeRespawnKit_Offset = offsetof(UWarModeConfig, WarModeRespawnKit);
	static_assert(UWarModeConfig_WarModeRespawnKit_Offset == 0x100, "UWarModeConfig::WarModeRespawnKit offset is not 100");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
