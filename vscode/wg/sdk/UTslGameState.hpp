#pragma once
#include "UGameState.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "EMatchStartType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGameState // Size: 0x750
	: public UGameState // Size: 0x470
{
private:
	typedef UTslGameState t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1396); // id32("Class TslGame.TslGameState")
		return ptr;
	}
//	FString MatchShortGuid; /* Ofs: 0x468 Size: 0x10 - StrProperty TslGame.TslGameState.MatchShortGuid */
	uint8_t UnknownData470[0x8];
	FVector RedZonePosition; /* Ofs: 0x478 Size: 0xC - StructProperty TslGame.TslGameState.RedZonePosition */
	uint8_t boolField484;
	uint8_t UnknownData485[0x3];
	float SafetyZoneRadius; /* Ofs: 0x488 Size: 0x4 - FloatProperty TslGame.TslGameState.SafetyZoneRadius */
	uint8_t UnknownData48C[0xC];
	ExternalPtr<struct UTimerTextBlockUpdater> RespawnTimerUpdater; /* Ofs: 0x498 Size: 0x8 - ObjectProperty TslGame.TslGameState.RespawnTimerUpdater */
	float SafetyZoneBeginRadius; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty TslGame.TslGameState.SafetyZoneBeginRadius */
	FVector LerpSafetyZonePosition; /* Ofs: 0x4A4 Size: 0xC - StructProperty TslGame.TslGameState.LerpSafetyZonePosition */
	int32_t RemainingTime; /* Ofs: 0x4B0 Size: 0x4 - IntProperty TslGame.TslGameState.RemainingTime */
	FVector2D LastCirclePosition; /* Ofs: 0x4B4 Size: 0x8 - StructProperty TslGame.TslGameState.LastCirclePosition */
	uint8_t boolField4BC;
	uint8_t UnknownData4BD[0x3];
	float MatchElapsedTimeSec; /* Ofs: 0x4C0 Size: 0x4 - FloatProperty TslGame.TslGameState.MatchElapsedTimeSec */
	uint8_t UnknownData4C4[0x4];
	int32_t MatchElapsedMinutes; /* Ofs: 0x4C8 Size: 0x4 - IntProperty TslGame.TslGameState.MatchElapsedMinutes */
	int32_t NumTeams; /* Ofs: 0x4CC Size: 0x4 - IntProperty TslGame.TslGameState.NumTeams */
	float ElapsedGasReleaseDuration; /* Ofs: 0x4D0 Size: 0x4 - FloatProperty TslGame.TslGameState.ElapsedGasReleaseDuration */
	int32_t NumStartTeams; /* Ofs: 0x4D4 Size: 0x4 - IntProperty TslGame.TslGameState.NumStartTeams */
	uint8_t UnknownData4D8[0x58];
	int32_t NumAlivePlayers; /* Ofs: 0x530 Size: 0x4 - IntProperty TslGame.TslGameState.NumAlivePlayers */
	TEnumAsByte<enum EMatchStartType> MatchStartType; /* Ofs: 0x534 Size: 0x1 - EnumProperty TslGame.TslGameState.MatchStartType */
	uint8_t boolField535;
	uint8_t UnknownData536[0x2];
	float LerpSafetyZoneRadius; /* Ofs: 0x538 Size: 0x4 - FloatProperty TslGame.TslGameState.LerpSafetyZoneRadius */
	FVector SafetyZonePosition; /* Ofs: 0x53C Size: 0xC - StructProperty TslGame.TslGameState.SafetyZonePosition */
	uint8_t boolField548;
	uint8_t UnknownData549[0xF];
	uint8_t boolField558;
	uint8_t UnknownData559[0x7];
	ExternalPtr<struct UTimerTextBlockUpdater> TimeLimitTimerUpdater; /* Ofs: 0x560 Size: 0x8 - ObjectProperty TslGame.TslGameState.TimeLimitTimerUpdater */
	uint8_t UnknownData568[0x4];
	int32_t NumStartPlayers; /* Ofs: 0x56C Size: 0x4 - IntProperty TslGame.TslGameState.NumStartPlayers */
	int32_t NumAliveZombiePlayers; /* Ofs: 0x570 Size: 0x4 - IntProperty TslGame.TslGameState.NumAliveZombiePlayers */
	uint8_t UnknownData574[0x4];
	uint8_t boolField578;
	uint8_t boolField579;
	uint8_t boolField57A;
	uint8_t boolField57B;
	float RedZoneRadius; /* Ofs: 0x57C Size: 0x4 - FloatProperty TslGame.TslGameState.RedZoneRadius */
	uint8_t UnknownData580[0x60];
	FVector SafetyZoneBeginPosition; /* Ofs: 0x5E0 Size: 0xC - StructProperty TslGame.TslGameState.SafetyZoneBeginPosition */
	uint8_t UnknownData5EC[0x44];
	ExternalPtr<struct ULevelAttribute> LevelAttribute; /* Ofs: 0x630 Size: 0x8 - ObjectProperty TslGame.TslGameState.LevelAttribute */
	uint8_t UnknownData638[0x8];
	ExternalPtr<struct UTslAccuracyManager> AccuracyManager; /* Ofs: 0x640 Size: 0x8 - ObjectProperty TslGame.TslGameState.AccuracyManager */
	uint8_t boolField648;
	uint8_t UnknownData649[0x3];
	int32_t GoalScore; /* Ofs: 0x64C Size: 0x4 - IntProperty TslGame.TslGameState.GoalScore */
	TArray<int32_t> TeamScores; /* Ofs: 0x650 Size: 0x10 - ArrayProperty TslGame.TslGameState.TeamScores */
	float NextRespawnTimeSeconds; /* Ofs: 0x660 Size: 0x4 - FloatProperty TslGame.TslGameState.NextRespawnTimeSeconds */
	float TimeLimitSeconds; /* Ofs: 0x664 Size: 0x4 - FloatProperty TslGame.TslGameState.TimeLimitSeconds */
	float LastRespawnTimeSeconds; /* Ofs: 0x668 Size: 0x4 - FloatProperty TslGame.TslGameState.LastRespawnTimeSeconds */
	uint8_t boolField66C;
	uint8_t boolField66D;
	uint8_t boolField66E;
	uint8_t UnknownData66F[0x1];
	TArray<int32_t> TeamIds; /* Ofs: 0x670 Size: 0x10 - ArrayProperty TslGame.TslGameState.TeamIds */
	TArray<int32_t> TeamIndices; /* Ofs: 0x680 Size: 0x10 - ArrayProperty TslGame.TslGameState.TeamIndices */
	TArray<struct FString> TeamLeaderNames; /* Ofs: 0x690 Size: 0x10 - ArrayProperty TslGame.TslGameState.TeamLeaderNames */
	uint8_t boolField6A0;
	uint8_t boolField6A1;
	uint8_t UnknownData6A2[0x2];
	float TotalReleaseDuration; /* Ofs: 0x6A4 Size: 0x4 - FloatProperty TslGame.TslGameState.TotalReleaseDuration */
	int32_t NumJoinPlayers; /* Ofs: 0x6A8 Size: 0x4 - IntProperty TslGame.TslGameState.NumJoinPlayers */
	uint8_t UnknownData6AC[0x54];
	int32_t NumAliveTeams; /* Ofs: 0x700 Size: 0x4 - IntProperty TslGame.TslGameState.NumAliveTeams */
	uint8_t boolField704;
	uint8_t UnknownData705[0x3];
	float ElapsedReleaseDuration; /* Ofs: 0x708 Size: 0x4 - FloatProperty TslGame.TslGameState.ElapsedReleaseDuration */
	uint8_t UnknownData70C[0x4];
	FString MatchId; /* Ofs: 0x710 Size: 0x10 - StrProperty TslGame.TslGameState.MatchId */
	float PoisonGasWarningRadius; /* Ofs: 0x720 Size: 0x4 - FloatProperty TslGame.TslGameState.PoisonGasWarningRadius */
	float ElapsedWarningDuration; /* Ofs: 0x724 Size: 0x4 - FloatProperty TslGame.TslGameState.ElapsedWarningDuration */
	uint8_t boolField728;
	uint8_t boolField729;
	uint8_t UnknownData72A[0x2];
	FVector PoisonGasWarningPosition; /* Ofs: 0x72C Size: 0xC - StructProperty TslGame.TslGameState.PoisonGasWarningPosition */
	uint8_t UnknownData738[0x4];
	float TotalWarningDuration; /* Ofs: 0x73C Size: 0x4 - FloatProperty TslGame.TslGameState.TotalWarningDuration */
	uint8_t UnknownData740[0x10];


//	inline bool SetMatchShortGuid(t_structHelper inst, FString value) { inst.WriteOffset(0x468, value); }
	inline bool SetRedZonePosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x478, value); }
	inline bool bUseXboxUnauthorizedDevice()
	{
		return boolField484& 0x1;
	}
	inline bool SetbUseXboxUnauthorizedDevice(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x484, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSafetyZoneRadius(t_structHelper inst, float value) { inst.WriteOffset(0x488, value); }
	inline bool SetRespawnTimerUpdater(t_structHelper inst, ExternalPtr<struct UTimerTextBlockUpdater> value) { inst.WriteOffset(0x498, value); }
	inline bool SetSafetyZoneBeginRadius(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetLerpSafetyZonePosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x4A4, value); }
	inline bool SetRemainingTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetLastCirclePosition(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x4B4, value); }
	inline bool bIsCustomGame()
	{
		return boolField4BC& 0x1;
	}
	inline bool SetbIsCustomGame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4BC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMatchElapsedTimeSec(t_structHelper inst, float value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetMatchElapsedMinutes(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetNumTeams(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4CC, value); }
	inline bool SetElapsedGasReleaseDuration(t_structHelper inst, float value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetNumStartTeams(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4D4, value); }
	inline bool SetNumAlivePlayers(t_structHelper inst, int32_t value) { inst.WriteOffset(0x530, value); }
	inline bool SetMatchStartType(t_structHelper inst, TEnumAsByte<enum EMatchStartType> value) { inst.WriteOffset(0x534, value); }
	inline bool bIsZombieMode()
	{
		return boolField535& 0x1;
	}
	inline bool SetbIsZombieMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x535, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLerpSafetyZoneRadius(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
	inline bool SetSafetyZonePosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x53C, value); }
	inline bool bTimerPaused()
	{
		return boolField548& 0x1;
	}
	inline bool SetbTimerPaused(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x548, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShowLastCircleMark()
	{
		return boolField558& 0x1;
	}
	inline bool SetbShowLastCircleMark(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x558, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTimeLimitTimerUpdater(t_structHelper inst, ExternalPtr<struct UTimerTextBlockUpdater> value) { inst.WriteOffset(0x560, value); }
	inline bool SetNumStartPlayers(t_structHelper inst, int32_t value) { inst.WriteOffset(0x56C, value); }
	inline bool SetNumAliveZombiePlayers(t_structHelper inst, int32_t value) { inst.WriteOffset(0x570, value); }
	inline bool bIsGasRelease()
	{
		return boolField578& 0x1;
	}
	inline bool SetbIsGasRelease(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x578, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsWorkingBlueZone()
	{
		return boolField579& 0x1;
	}
	inline bool SetbIsWorkingBlueZone(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x579, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCanShowLastCircleMark()
	{
		return boolField57A& 0x1;
	}
	inline bool SetbCanShowLastCircleMark(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x57A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsTeamMatch()
	{
		return boolField57B& 0x1;
	}
	inline bool SetbIsTeamMatch(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x57B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRedZoneRadius(t_structHelper inst, float value) { inst.WriteOffset(0x57C, value); }
	inline bool SetSafetyZoneBeginPosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetLevelAttribute(t_structHelper inst, ExternalPtr<struct ULevelAttribute> value) { inst.WriteOffset(0x630, value); }
	inline bool SetAccuracyManager(t_structHelper inst, ExternalPtr<struct UTslAccuracyManager> value) { inst.WriteOffset(0x640, value); }
	inline bool bIsWarMode()
	{
		return boolField648& 0x1;
	}
	inline bool SetbIsWarMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x648, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGoalScore(t_structHelper inst, int32_t value) { inst.WriteOffset(0x64C, value); }
	inline bool SetTeamScores(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x650, value); }
	inline bool SetNextRespawnTimeSeconds(t_structHelper inst, float value) { inst.WriteOffset(0x660, value); }
	inline bool SetTimeLimitSeconds(t_structHelper inst, float value) { inst.WriteOffset(0x664, value); }
	inline bool SetLastRespawnTimeSeconds(t_structHelper inst, float value) { inst.WriteOffset(0x668, value); }
	inline bool bIsTeamElimination()
	{
		return boolField66C& 0x1;
	}
	inline bool SetbIsTeamElimination(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x66C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseWarRoyaleBluezone()
	{
		return boolField66D& 0x1;
	}
	inline bool SetbUseWarRoyaleBluezone(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x66D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUsingSquadInTeam()
	{
		return boolField66E& 0x1;
	}
	inline bool SetbUsingSquadInTeam(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x66E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTeamIds(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x670, value); }
	inline bool SetTeamIndices(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x680, value); }
	inline bool SetTeamLeaderNames(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x690, value); }
	inline bool bUsingTeamXRay()
	{
		return boolField6A0& 0x1;
	}
	inline bool SetbUsingTeamXRay(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRespawnOffed()
	{
		return boolField6A1& 0x1;
	}
	inline bool SetbRespawnOffed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6A1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTotalReleaseDuration(t_structHelper inst, float value) { inst.WriteOffset(0x6A4, value); }
	inline bool SetNumJoinPlayers(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6A8, value); }
	inline bool SetNumAliveTeams(t_structHelper inst, int32_t value) { inst.WriteOffset(0x700, value); }
	inline bool bCanKillerSpectate()
	{
		return boolField704& 0x1;
	}
	inline bool SetbCanKillerSpectate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x704, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetElapsedReleaseDuration(t_structHelper inst, float value) { inst.WriteOffset(0x708, value); }
	inline bool SetMatchId(t_structHelper inst, FString value) { inst.WriteOffset(0x710, value); }
	inline bool SetPoisonGasWarningRadius(t_structHelper inst, float value) { inst.WriteOffset(0x720, value); }
	inline bool SetElapsedWarningDuration(t_structHelper inst, float value) { inst.WriteOffset(0x724, value); }
	inline bool bIsAnyoneKilled()
	{
		return boolField728& 0x1;
	}
	inline bool SetbIsAnyoneKilled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x728, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsWinnerZombieTeam()
	{
		return boolField729& 0x1;
	}
	inline bool SetbIsWinnerZombieTeam(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x729, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPoisonGasWarningPosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x72C, value); }
	inline bool SetTotalWarningDuration(t_structHelper inst, float value) { inst.WriteOffset(0x73C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGameState = sizeof(UTslGameState); // 1872
    static_assert(sizeof(UTslGameState) == 0x750, "Size of UTslGameState is not correct.");
//	auto constexpr UTslGameState_MatchShortGuid_Offset = offsetof(UTslGameState, MatchShortGuid);
//	static_assert(UTslGameState_MatchShortGuid_Offset == 0x468, "UTslGameState::MatchShortGuid offset is not 468");
	auto constexpr UTslGameState_RedZonePosition_Offset = offsetof(UTslGameState, RedZonePosition);
	static_assert(UTslGameState_RedZonePosition_Offset == 0x478, "UTslGameState::RedZonePosition offset is not 478");
	auto constexpr UTslGameState_boolField484_Offset = offsetof(UTslGameState, boolField484);
	static_assert(UTslGameState_boolField484_Offset == 0x484, "UTslGameState::boolField484 offset is not 484");
	auto constexpr UTslGameState_SafetyZoneRadius_Offset = offsetof(UTslGameState, SafetyZoneRadius);
	static_assert(UTslGameState_SafetyZoneRadius_Offset == 0x488, "UTslGameState::SafetyZoneRadius offset is not 488");
	auto constexpr UTslGameState_RespawnTimerUpdater_Offset = offsetof(UTslGameState, RespawnTimerUpdater);
	static_assert(UTslGameState_RespawnTimerUpdater_Offset == 0x498, "UTslGameState::RespawnTimerUpdater offset is not 498");
	auto constexpr UTslGameState_SafetyZoneBeginRadius_Offset = offsetof(UTslGameState, SafetyZoneBeginRadius);
	static_assert(UTslGameState_SafetyZoneBeginRadius_Offset == 0x4a0, "UTslGameState::SafetyZoneBeginRadius offset is not 4a0");
	auto constexpr UTslGameState_LerpSafetyZonePosition_Offset = offsetof(UTslGameState, LerpSafetyZonePosition);
	static_assert(UTslGameState_LerpSafetyZonePosition_Offset == 0x4a4, "UTslGameState::LerpSafetyZonePosition offset is not 4a4");
	auto constexpr UTslGameState_RemainingTime_Offset = offsetof(UTslGameState, RemainingTime);
	static_assert(UTslGameState_RemainingTime_Offset == 0x4b0, "UTslGameState::RemainingTime offset is not 4b0");
	auto constexpr UTslGameState_LastCirclePosition_Offset = offsetof(UTslGameState, LastCirclePosition);
	static_assert(UTslGameState_LastCirclePosition_Offset == 0x4b4, "UTslGameState::LastCirclePosition offset is not 4b4");
	auto constexpr UTslGameState_boolField4BC_Offset = offsetof(UTslGameState, boolField4BC);
	static_assert(UTslGameState_boolField4BC_Offset == 0x4bc, "UTslGameState::boolField4BC offset is not 4bc");
	auto constexpr UTslGameState_MatchElapsedTimeSec_Offset = offsetof(UTslGameState, MatchElapsedTimeSec);
	static_assert(UTslGameState_MatchElapsedTimeSec_Offset == 0x4c0, "UTslGameState::MatchElapsedTimeSec offset is not 4c0");
	auto constexpr UTslGameState_MatchElapsedMinutes_Offset = offsetof(UTslGameState, MatchElapsedMinutes);
	static_assert(UTslGameState_MatchElapsedMinutes_Offset == 0x4c8, "UTslGameState::MatchElapsedMinutes offset is not 4c8");
	auto constexpr UTslGameState_NumTeams_Offset = offsetof(UTslGameState, NumTeams);
	static_assert(UTslGameState_NumTeams_Offset == 0x4cc, "UTslGameState::NumTeams offset is not 4cc");
	auto constexpr UTslGameState_ElapsedGasReleaseDuration_Offset = offsetof(UTslGameState, ElapsedGasReleaseDuration);
	static_assert(UTslGameState_ElapsedGasReleaseDuration_Offset == 0x4d0, "UTslGameState::ElapsedGasReleaseDuration offset is not 4d0");
	auto constexpr UTslGameState_NumStartTeams_Offset = offsetof(UTslGameState, NumStartTeams);
	static_assert(UTslGameState_NumStartTeams_Offset == 0x4d4, "UTslGameState::NumStartTeams offset is not 4d4");
	auto constexpr UTslGameState_NumAlivePlayers_Offset = offsetof(UTslGameState, NumAlivePlayers);
	static_assert(UTslGameState_NumAlivePlayers_Offset == 0x530, "UTslGameState::NumAlivePlayers offset is not 530");
	auto constexpr UTslGameState_MatchStartType_Offset = offsetof(UTslGameState, MatchStartType);
	static_assert(UTslGameState_MatchStartType_Offset == 0x534, "UTslGameState::MatchStartType offset is not 534");
	auto constexpr UTslGameState_boolField535_Offset = offsetof(UTslGameState, boolField535);
	static_assert(UTslGameState_boolField535_Offset == 0x535, "UTslGameState::boolField535 offset is not 535");
	auto constexpr UTslGameState_LerpSafetyZoneRadius_Offset = offsetof(UTslGameState, LerpSafetyZoneRadius);
	static_assert(UTslGameState_LerpSafetyZoneRadius_Offset == 0x538, "UTslGameState::LerpSafetyZoneRadius offset is not 538");
	auto constexpr UTslGameState_SafetyZonePosition_Offset = offsetof(UTslGameState, SafetyZonePosition);
	static_assert(UTslGameState_SafetyZonePosition_Offset == 0x53c, "UTslGameState::SafetyZonePosition offset is not 53c");
	auto constexpr UTslGameState_boolField548_Offset = offsetof(UTslGameState, boolField548);
	static_assert(UTslGameState_boolField548_Offset == 0x548, "UTslGameState::boolField548 offset is not 548");
	auto constexpr UTslGameState_boolField558_Offset = offsetof(UTslGameState, boolField558);
	static_assert(UTslGameState_boolField558_Offset == 0x558, "UTslGameState::boolField558 offset is not 558");
	auto constexpr UTslGameState_TimeLimitTimerUpdater_Offset = offsetof(UTslGameState, TimeLimitTimerUpdater);
	static_assert(UTslGameState_TimeLimitTimerUpdater_Offset == 0x560, "UTslGameState::TimeLimitTimerUpdater offset is not 560");
	auto constexpr UTslGameState_NumStartPlayers_Offset = offsetof(UTslGameState, NumStartPlayers);
	static_assert(UTslGameState_NumStartPlayers_Offset == 0x56c, "UTslGameState::NumStartPlayers offset is not 56c");
	auto constexpr UTslGameState_NumAliveZombiePlayers_Offset = offsetof(UTslGameState, NumAliveZombiePlayers);
	static_assert(UTslGameState_NumAliveZombiePlayers_Offset == 0x570, "UTslGameState::NumAliveZombiePlayers offset is not 570");
	auto constexpr UTslGameState_boolField578_Offset = offsetof(UTslGameState, boolField578);
	static_assert(UTslGameState_boolField578_Offset == 0x578, "UTslGameState::boolField578 offset is not 578");
	auto constexpr UTslGameState_boolField579_Offset = offsetof(UTslGameState, boolField579);
	static_assert(UTslGameState_boolField579_Offset == 0x579, "UTslGameState::boolField579 offset is not 579");
	auto constexpr UTslGameState_boolField57A_Offset = offsetof(UTslGameState, boolField57A);
	static_assert(UTslGameState_boolField57A_Offset == 0x57a, "UTslGameState::boolField57A offset is not 57a");
	auto constexpr UTslGameState_boolField57B_Offset = offsetof(UTslGameState, boolField57B);
	static_assert(UTslGameState_boolField57B_Offset == 0x57b, "UTslGameState::boolField57B offset is not 57b");
	auto constexpr UTslGameState_RedZoneRadius_Offset = offsetof(UTslGameState, RedZoneRadius);
	static_assert(UTslGameState_RedZoneRadius_Offset == 0x57c, "UTslGameState::RedZoneRadius offset is not 57c");
	auto constexpr UTslGameState_SafetyZoneBeginPosition_Offset = offsetof(UTslGameState, SafetyZoneBeginPosition);
	static_assert(UTslGameState_SafetyZoneBeginPosition_Offset == 0x5e0, "UTslGameState::SafetyZoneBeginPosition offset is not 5e0");
	auto constexpr UTslGameState_LevelAttribute_Offset = offsetof(UTslGameState, LevelAttribute);
	static_assert(UTslGameState_LevelAttribute_Offset == 0x630, "UTslGameState::LevelAttribute offset is not 630");
	auto constexpr UTslGameState_AccuracyManager_Offset = offsetof(UTslGameState, AccuracyManager);
	static_assert(UTslGameState_AccuracyManager_Offset == 0x640, "UTslGameState::AccuracyManager offset is not 640");
	auto constexpr UTslGameState_boolField648_Offset = offsetof(UTslGameState, boolField648);
	static_assert(UTslGameState_boolField648_Offset == 0x648, "UTslGameState::boolField648 offset is not 648");
	auto constexpr UTslGameState_GoalScore_Offset = offsetof(UTslGameState, GoalScore);
	static_assert(UTslGameState_GoalScore_Offset == 0x64c, "UTslGameState::GoalScore offset is not 64c");
	auto constexpr UTslGameState_TeamScores_Offset = offsetof(UTslGameState, TeamScores);
	static_assert(UTslGameState_TeamScores_Offset == 0x650, "UTslGameState::TeamScores offset is not 650");
	auto constexpr UTslGameState_NextRespawnTimeSeconds_Offset = offsetof(UTslGameState, NextRespawnTimeSeconds);
	static_assert(UTslGameState_NextRespawnTimeSeconds_Offset == 0x660, "UTslGameState::NextRespawnTimeSeconds offset is not 660");
	auto constexpr UTslGameState_TimeLimitSeconds_Offset = offsetof(UTslGameState, TimeLimitSeconds);
	static_assert(UTslGameState_TimeLimitSeconds_Offset == 0x664, "UTslGameState::TimeLimitSeconds offset is not 664");
	auto constexpr UTslGameState_LastRespawnTimeSeconds_Offset = offsetof(UTslGameState, LastRespawnTimeSeconds);
	static_assert(UTslGameState_LastRespawnTimeSeconds_Offset == 0x668, "UTslGameState::LastRespawnTimeSeconds offset is not 668");
	auto constexpr UTslGameState_boolField66C_Offset = offsetof(UTslGameState, boolField66C);
	static_assert(UTslGameState_boolField66C_Offset == 0x66c, "UTslGameState::boolField66C offset is not 66c");
	auto constexpr UTslGameState_boolField66D_Offset = offsetof(UTslGameState, boolField66D);
	static_assert(UTslGameState_boolField66D_Offset == 0x66d, "UTslGameState::boolField66D offset is not 66d");
	auto constexpr UTslGameState_boolField66E_Offset = offsetof(UTslGameState, boolField66E);
	static_assert(UTslGameState_boolField66E_Offset == 0x66e, "UTslGameState::boolField66E offset is not 66e");
	auto constexpr UTslGameState_TeamIds_Offset = offsetof(UTslGameState, TeamIds);
	static_assert(UTslGameState_TeamIds_Offset == 0x670, "UTslGameState::TeamIds offset is not 670");
	auto constexpr UTslGameState_TeamIndices_Offset = offsetof(UTslGameState, TeamIndices);
	static_assert(UTslGameState_TeamIndices_Offset == 0x680, "UTslGameState::TeamIndices offset is not 680");
	auto constexpr UTslGameState_TeamLeaderNames_Offset = offsetof(UTslGameState, TeamLeaderNames);
	static_assert(UTslGameState_TeamLeaderNames_Offset == 0x690, "UTslGameState::TeamLeaderNames offset is not 690");
	auto constexpr UTslGameState_boolField6A0_Offset = offsetof(UTslGameState, boolField6A0);
	static_assert(UTslGameState_boolField6A0_Offset == 0x6a0, "UTslGameState::boolField6A0 offset is not 6a0");
	auto constexpr UTslGameState_boolField6A1_Offset = offsetof(UTslGameState, boolField6A1);
	static_assert(UTslGameState_boolField6A1_Offset == 0x6a1, "UTslGameState::boolField6A1 offset is not 6a1");
	auto constexpr UTslGameState_TotalReleaseDuration_Offset = offsetof(UTslGameState, TotalReleaseDuration);
	static_assert(UTslGameState_TotalReleaseDuration_Offset == 0x6a4, "UTslGameState::TotalReleaseDuration offset is not 6a4");
	auto constexpr UTslGameState_NumJoinPlayers_Offset = offsetof(UTslGameState, NumJoinPlayers);
	static_assert(UTslGameState_NumJoinPlayers_Offset == 0x6a8, "UTslGameState::NumJoinPlayers offset is not 6a8");
	auto constexpr UTslGameState_NumAliveTeams_Offset = offsetof(UTslGameState, NumAliveTeams);
	static_assert(UTslGameState_NumAliveTeams_Offset == 0x700, "UTslGameState::NumAliveTeams offset is not 700");
	auto constexpr UTslGameState_boolField704_Offset = offsetof(UTslGameState, boolField704);
	static_assert(UTslGameState_boolField704_Offset == 0x704, "UTslGameState::boolField704 offset is not 704");
	auto constexpr UTslGameState_ElapsedReleaseDuration_Offset = offsetof(UTslGameState, ElapsedReleaseDuration);
	static_assert(UTslGameState_ElapsedReleaseDuration_Offset == 0x708, "UTslGameState::ElapsedReleaseDuration offset is not 708");
	auto constexpr UTslGameState_MatchId_Offset = offsetof(UTslGameState, MatchId);
	static_assert(UTslGameState_MatchId_Offset == 0x710, "UTslGameState::MatchId offset is not 710");
	auto constexpr UTslGameState_PoisonGasWarningRadius_Offset = offsetof(UTslGameState, PoisonGasWarningRadius);
	static_assert(UTslGameState_PoisonGasWarningRadius_Offset == 0x720, "UTslGameState::PoisonGasWarningRadius offset is not 720");
	auto constexpr UTslGameState_ElapsedWarningDuration_Offset = offsetof(UTslGameState, ElapsedWarningDuration);
	static_assert(UTslGameState_ElapsedWarningDuration_Offset == 0x724, "UTslGameState::ElapsedWarningDuration offset is not 724");
	auto constexpr UTslGameState_boolField728_Offset = offsetof(UTslGameState, boolField728);
	static_assert(UTslGameState_boolField728_Offset == 0x728, "UTslGameState::boolField728 offset is not 728");
	auto constexpr UTslGameState_boolField729_Offset = offsetof(UTslGameState, boolField729);
	static_assert(UTslGameState_boolField729_Offset == 0x729, "UTslGameState::boolField729 offset is not 729");
	auto constexpr UTslGameState_PoisonGasWarningPosition_Offset = offsetof(UTslGameState, PoisonGasWarningPosition);
	static_assert(UTslGameState_PoisonGasWarningPosition_Offset == 0x72c, "UTslGameState::PoisonGasWarningPosition offset is not 72c");
	auto constexpr UTslGameState_TotalWarningDuration_Offset = offsetof(UTslGameState, TotalWarningDuration);
	static_assert(UTslGameState_TotalWarningDuration_Offset == 0x73c, "UTslGameState::TotalWarningDuration offset is not 73c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
