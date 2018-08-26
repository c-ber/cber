#pragma once
#include "UGameMode.hpp"
#include "EMatchStartType.hpp"
#include "ECameraViewBehaviour.hpp"
#include "FCustomGameUpdateCharacterInfo.hpp"
#include "FRedZoneCustomOption.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGameMode // Size: 0x960
	: public UGameMode // Size: 0x4E0
{
private:
	typedef UTslGameMode t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1893); // id32("Class TslGame.TslGameMode")
		return ptr;
	}
//	ExternalPtr<struct UClass> MalePawnClass; /* Ofs: 0x4D8 Size: 0x8 - ClassProperty TslGame.TslGameMode.MalePawnClass */
	ExternalPtr<struct UClass> PerfBotPlayerControllerClass; /* Ofs: 0x4E0 Size: 0x8 - ClassProperty TslGame.TslGameMode.PerfBotPlayerControllerClass */
	ExternalPtr<struct UClass> ModeControllerClass; /* Ofs: 0x4E8 Size: 0x8 - ClassProperty TslGame.TslGameMode.ModeControllerClass */
	ExternalPtr<struct UClass> ESportsModeControllerClass; /* Ofs: 0x4F0 Size: 0x8 - ClassProperty TslGame.TslGameMode.ESportsModeControllerClass */
	TArray<ExternalPtr<struct UClass>> AdditionalModeControllerClasses; /* Ofs: 0x4F8 Size: 0x10 - ArrayProperty TslGame.TslGameMode.AdditionalModeControllerClasses */
	ExternalPtr<struct UClass> InitialItemDonatorClass; /* Ofs: 0x508 Size: 0x8 - ClassProperty TslGame.TslGameMode.InitialItemDonatorClass */
	TArray<struct FMatchPreparerClass> MatchPreparerClasses; /* Ofs: 0x510 Size: 0x10 - ArrayProperty TslGame.TslGameMode.MatchPreparerClasses */
	TEnumAsByte<enum EMatchStartType> MatchStartType; /* Ofs: 0x520 Size: 0x1 - EnumProperty TslGame.TslGameMode.MatchStartType */
	TEnumAsByte<enum ECameraViewBehaviour> CameraViewBehaviour; /* Ofs: 0x521 Size: 0x1 - EnumProperty TslGame.TslGameMode.CameraViewBehaviour */
	uint8_t boolField522;
	uint8_t UnknownData523[0x1];
	int32_t PostMatchWaitingTime; /* Ofs: 0x524 Size: 0x4 - IntProperty TslGame.TslGameMode.PostMatchWaitingTime */
	int32_t CustomGamePostMatchWaitingTime; /* Ofs: 0x528 Size: 0x4 - IntProperty TslGame.TslGameMode.CustomGamePostMatchWaitingTime */
	int32_t ESportsPostMatchWaitingTime; /* Ofs: 0x52C Size: 0x4 - IntProperty TslGame.TslGameMode.ESportsPostMatchWaitingTime */
	int32_t ServerQuitAfterLeavingMapTime; /* Ofs: 0x530 Size: 0x4 - IntProperty TslGame.TslGameMode.ServerQuitAfterLeavingMapTime */
	int32_t MinPlayers; /* Ofs: 0x534 Size: 0x4 - IntProperty TslGame.TslGameMode.MinPlayers */
	int32_t PlayerSpawnTryMaxCount; /* Ofs: 0x538 Size: 0x4 - IntProperty TslGame.TslGameMode.PlayerSpawnTryMaxCount */
	uint8_t boolField53C;
	uint8_t boolField53D;
	uint8_t boolField53E;
	uint8_t boolField53F;
	uint8_t boolField540;
	uint8_t boolField541;
	uint8_t boolField542;
	uint8_t boolField543;
	uint8_t boolField544;
	uint8_t UnknownData545[0x7];
	uint8_t boolField54C;
	uint8_t boolField54D;
	uint8_t boolField54E;
	uint8_t boolField54F;
	uint8_t boolField550;
	uint8_t boolField551;
	uint8_t UnknownData552[0x2];
	float LastCircleAlgorithmPercent; /* Ofs: 0x554 Size: 0x4 - FloatProperty TslGame.TslGameMode.LastCircleAlgorithmPercent */
	FCustomGameUpdateCharacterInfo CustomGameUpdateCharacterInfo; /* Ofs: 0x558 Size: 0x28 - StructProperty TslGame.TslGameMode.CustomGameUpdateCharacterInfo */
	TArray<struct FLimitCustomStringParameter> LimitCustomStringParameters; /* Ofs: 0x580 Size: 0x10 - ArrayProperty TslGame.TslGameMode.LimitCustomStringParameters */
	float MultiplierBlueZone; /* Ofs: 0x590 Size: 0x4 - FloatProperty TslGame.TslGameMode.MultiplierBlueZone */
	float MultiplierCarePackage; /* Ofs: 0x594 Size: 0x4 - FloatProperty TslGame.TslGameMode.MultiplierCarePackage */
	FRedZoneCustomOption RedZoneCustomOption; /* Ofs: 0x598 Size: 0x1C - StructProperty TslGame.TslGameMode.RedZoneCustomOption */
	uint8_t UnknownData5B4[0x4];
	TArray<struct FBlueZoneCustomOption> BlueZoneCustomOptions; /* Ofs: 0x5B8 Size: 0x10 - ArrayProperty TslGame.TslGameMode.BlueZoneCustomOptions */
	int32_t TownWeight; /* Ofs: 0x5C8 Size: 0x4 - IntProperty TslGame.TslGameMode.TownWeight */
	int32_t FieldWeight; /* Ofs: 0x5CC Size: 0x4 - IntProperty TslGame.TslGameMode.FieldWeight */
	int32_t MountainWeight; /* Ofs: 0x5D0 Size: 0x4 - IntProperty TslGame.TslGameMode.MountainWeight */
	int32_t EditorTestTeamMemberCount; /* Ofs: 0x5D4 Size: 0x4 - IntProperty TslGame.TslGameMode.EditorTestTeamMemberCount */
	TMap<struct FString, struct URewardData> RewardDataMap; /* Ofs: 0x5D8 Size: 0x50 - MapProperty TslGame.TslGameMode.RewardDataMap */
	ExternalPtr<struct URewardData> RewardData; /* Ofs: 0x628 Size: 0x8 - ObjectProperty TslGame.TslGameMode.RewardData */
	ExternalPtr<struct UTslPlayerState> WinnerPlayerState; /* Ofs: 0x630 Size: 0x8 - ObjectProperty TslGame.TslGameMode.WinnerPlayerState */
	int32_t WinnerTeam; /* Ofs: 0x638 Size: 0x4 - IntProperty TslGame.TslGameMode.WinnerTeam */
	uint8_t UnknownData63C[0x4];
	ExternalPtr<struct UClass> ItemSpawnProcessorClass; /* Ofs: 0x640 Size: 0x8 - ClassProperty TslGame.TslGameMode.ItemSpawnProcessorClass */
	ExternalPtr<struct UClass> CustomGameItemSpawnProcessorClass; /* Ofs: 0x648 Size: 0x8 - ClassProperty TslGame.TslGameMode.CustomGameItemSpawnProcessorClass */
	ExternalPtr<struct UClass> ThingSpawnProcessorClass; /* Ofs: 0x650 Size: 0x8 - ClassProperty TslGame.TslGameMode.ThingSpawnProcessorClass */
	ExternalPtr<struct UClass> ESportsThingSpawnProcessorClass; /* Ofs: 0x658 Size: 0x8 - ClassProperty TslGame.TslGameMode.ESportsThingSpawnProcessorClass */
	ExternalPtr<struct UClass> BasicBeltItemClassForNoBelt; /* Ofs: 0x660 Size: 0x8 - ClassProperty TslGame.TslGameMode.BasicBeltItemClassForNoBelt */
	TMap<int32_t, struct UTslPlayerStart> TeamPlayerStarts; /* Ofs: 0x668 Size: 0x50 - MapProperty TslGame.TslGameMode.TeamPlayerStarts */
	TArray<ExternalPtr<struct UActor>> PlayerStarts; /* Ofs: 0x6B8 Size: 0x10 - ArrayProperty TslGame.TslGameMode.PlayerStarts */
	TArray<struct FPlayerStartsUserCount> PlayerStartsUserCount; /* Ofs: 0x6C8 Size: 0x10 - ArrayProperty TslGame.TslGameMode.PlayerStartsUserCount */
	TMap<struct FString, struct UTslPlayerStart> PlayerStartsUniqueIdMap; /* Ofs: 0x6D8 Size: 0x50 - MapProperty TslGame.TslGameMode.PlayerStartsUniqueIdMap */
	int32_t PlayerStartCount; /* Ofs: 0x728 Size: 0x4 - IntProperty TslGame.TslGameMode.PlayerStartCount */
	uint8_t UnknownData72C[0x4];
	ExternalPtr<struct UClass> WarModeModeControllerClass; /* Ofs: 0x730 Size: 0x8 - ClassProperty TslGame.TslGameMode.WarModeModeControllerClass */
	ExternalPtr<struct UClass> ModePresetClass; /* Ofs: 0x738 Size: 0x8 - ClassProperty TslGame.TslGameMode.ModePresetClass */
	uint8_t UnknownData740[0x18];
	ExternalPtr<struct UItemSpawnProcessor> ItemSpawnProcessor; /* Ofs: 0x758 Size: 0x8 - ObjectProperty TslGame.TslGameMode.ItemSpawnProcessor */
	ExternalPtr<struct UThingSpawnProcessor> ThingSpawnProcessor; /* Ofs: 0x760 Size: 0x8 - ObjectProperty TslGame.TslGameMode.ThingSpawnProcessor */
	ExternalPtr<struct UGeneralItemSpawner> InitialItemDonator; /* Ofs: 0x768 Size: 0x8 - ObjectProperty TslGame.TslGameMode.InitialItemDonator */
	ExternalPtr<struct UMatchPreparer> MatchPreparer; /* Ofs: 0x770 Size: 0x8 - ObjectProperty TslGame.TslGameMode.MatchPreparer */
	ExternalPtr<struct UModeController> ModeController; /* Ofs: 0x778 Size: 0x8 - ObjectProperty TslGame.TslGameMode.ModeController */
	ExternalPtr<struct UDroppedItemGridManager> DroppedItemGridManager; /* Ofs: 0x780 Size: 0x8 - ObjectProperty TslGame.TslGameMode.DroppedItemGridManager */
	ExternalPtr<struct UWarModeModeController> WarModeModeController; /* Ofs: 0x788 Size: 0x8 - ObjectProperty TslGame.TslGameMode.WarModeModeController */
	ExternalPtr<struct UModePreset> ModePreset; /* Ofs: 0x790 Size: 0x8 - ObjectProperty TslGame.TslGameMode.ModePreset */
	uint8_t UnknownData798[0x8];
	TArray<ExternalPtr<struct UModeController>> AdditinalModeControllers; /* Ofs: 0x7A0 Size: 0x10 - ArrayProperty TslGame.TslGameMode.AdditinalModeControllers */
	uint8_t UnknownData7B0[0xA0];
	TMap<struct FString, struct UPlayerState> JoinedUserPlayerStateMap; /* Ofs: 0x850 Size: 0x50 - MapProperty TslGame.TslGameMode.JoinedUserPlayerStateMap */
	TArray<struct FTeams> Teams; /* Ofs: 0x8A0 Size: 0x10 - ArrayProperty TslGame.TslGameMode.Teams */
	uint8_t UnknownData8B0[0xB0];


//	inline bool SetMalePawnClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetPerfBotPlayerControllerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetModeControllerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetESportsModeControllerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetAdditionalModeControllerClasses(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetInitialItemDonatorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x508, value); }
	inline bool SetMatchPreparerClasses(t_structHelper inst, TArray<struct FMatchPreparerClass> value) { inst.WriteOffset(0x510, value); }
	inline bool SetMatchStartType(t_structHelper inst, TEnumAsByte<enum EMatchStartType> value) { inst.WriteOffset(0x520, value); }
	inline bool SetCameraViewBehaviour(t_structHelper inst, TEnumAsByte<enum ECameraViewBehaviour> value) { inst.WriteOffset(0x521, value); }
	inline bool PlayerRespawn()
	{
		return boolField522& 0x1;
	}
	inline bool SetPlayerRespawn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x522, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPostMatchWaitingTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x524, value); }
	inline bool SetCustomGamePostMatchWaitingTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x528, value); }
	inline bool SetESportsPostMatchWaitingTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x52C, value); }
	inline bool SetServerQuitAfterLeavingMapTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x530, value); }
	inline bool SetMinPlayers(t_structHelper inst, int32_t value) { inst.WriteOffset(0x534, value); }
	inline bool SetPlayerSpawnTryMaxCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x538, value); }
	inline bool bEnablePerfBotInPIE()
	{
		return boolField53C& 0x1;
	}
	inline bool SetbEnablePerfBotInPIE(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x53C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnablePerfBotLogin()
	{
		return boolField53D& 0x1;
	}
	inline bool SetbEnablePerfBotLogin(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x53D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsPerfBotSpawnToRandomPosition()
	{
		return boolField53E& 0x1;
	}
	inline bool SetbIsPerfBotSpawnToRandomPosition(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x53E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseXboxUnauthorizedDevice()
	{
		return boolField53F& 0x1;
	}
	inline bool SetbUseXboxUnauthorizedDevice(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x53F, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCanRestartPerfBot()
	{
		return boolField540& 0x1;
	}
	inline bool SetbCanRestartPerfBot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x540, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableObserverInPIE()
	{
		return boolField541& 0x1;
	}
	inline bool SetbEnableObserverInPIE(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x541, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsBattleRoyale()
	{
		return boolField542& 0x1;
	}
	inline bool SetIsBattleRoyale(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x542, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bStartPlayerAtMatchStart()
	{
		return boolField543& 0x1;
	}
	inline bool SetbStartPlayerAtMatchStart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x543, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShouldSpawnAtStartSpot()
	{
		return boolField544& 0x1;
	}
	inline bool SetbShouldSpawnAtStartSpot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x544, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsEditorTestZombieMode()
	{
		return boolField54C& 0x1;
	}
	inline bool SetbIsEditorTestZombieMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsCustomGame()
	{
		return boolField54D& 0x1;
	}
	inline bool SetbIsCustomGame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCanAllSpectate()
	{
		return boolField54E& 0x1;
	}
	inline bool SetbCanAllSpectate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsFlareGunMode()
	{
		return boolField54F& 0x1;
	}
	inline bool SetbIsFlareGunMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54F, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bKillerSpectateMode()
	{
		return boolField550& 0x1;
	}
	inline bool SetbKillerSpectateMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x550, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShowLastCircleMark()
	{
		return boolField551& 0x1;
	}
	inline bool SetbShowLastCircleMark(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x551, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLastCircleAlgorithmPercent(t_structHelper inst, float value) { inst.WriteOffset(0x554, value); }
	inline bool SetCustomGameUpdateCharacterInfo(t_structHelper inst, FCustomGameUpdateCharacterInfo value) { inst.WriteOffset(0x558, value); }
	inline bool SetLimitCustomStringParameters(t_structHelper inst, TArray<struct FLimitCustomStringParameter> value) { inst.WriteOffset(0x580, value); }
	inline bool SetMultiplierBlueZone(t_structHelper inst, float value) { inst.WriteOffset(0x590, value); }
	inline bool SetMultiplierCarePackage(t_structHelper inst, float value) { inst.WriteOffset(0x594, value); }
	inline bool SetRedZoneCustomOption(t_structHelper inst, FRedZoneCustomOption value) { inst.WriteOffset(0x598, value); }
	inline bool SetBlueZoneCustomOptions(t_structHelper inst, TArray<struct FBlueZoneCustomOption> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetTownWeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetFieldWeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5CC, value); }
	inline bool SetMountainWeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetEditorTestTeamMemberCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5D4, value); }
	inline bool SetRewardDataMap(t_structHelper inst, TMap<struct FString, struct URewardData> value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetRewardData(t_structHelper inst, ExternalPtr<struct URewardData> value) { inst.WriteOffset(0x628, value); }
	inline bool SetWinnerPlayerState(t_structHelper inst, ExternalPtr<struct UTslPlayerState> value) { inst.WriteOffset(0x630, value); }
	inline bool SetWinnerTeam(t_structHelper inst, int32_t value) { inst.WriteOffset(0x638, value); }
	inline bool SetItemSpawnProcessorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x640, value); }
	inline bool SetCustomGameItemSpawnProcessorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x648, value); }
	inline bool SetThingSpawnProcessorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x650, value); }
	inline bool SetESportsThingSpawnProcessorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x658, value); }
	inline bool SetBasicBeltItemClassForNoBelt(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x660, value); }
	inline bool SetTeamPlayerStarts(t_structHelper inst, TMap<int32_t, struct UTslPlayerStart> value) { inst.WriteOffset(0x668, value); }
	inline bool SetPlayerStarts(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x6B8, value); }
	inline bool SetPlayerStartsUserCount(t_structHelper inst, TArray<struct FPlayerStartsUserCount> value) { inst.WriteOffset(0x6C8, value); }
	inline bool SetPlayerStartsUniqueIdMap(t_structHelper inst, TMap<struct FString, struct UTslPlayerStart> value) { inst.WriteOffset(0x6D8, value); }
	inline bool SetPlayerStartCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x728, value); }
	inline bool SetWarModeModeControllerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x730, value); }
	inline bool SetModePresetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x738, value); }
	inline bool SetItemSpawnProcessor(t_structHelper inst, ExternalPtr<struct UItemSpawnProcessor> value) { inst.WriteOffset(0x758, value); }
	inline bool SetThingSpawnProcessor(t_structHelper inst, ExternalPtr<struct UThingSpawnProcessor> value) { inst.WriteOffset(0x760, value); }
	inline bool SetInitialItemDonator(t_structHelper inst, ExternalPtr<struct UGeneralItemSpawner> value) { inst.WriteOffset(0x768, value); }
	inline bool SetMatchPreparer(t_structHelper inst, ExternalPtr<struct UMatchPreparer> value) { inst.WriteOffset(0x770, value); }
	inline bool SetModeController(t_structHelper inst, ExternalPtr<struct UModeController> value) { inst.WriteOffset(0x778, value); }
	inline bool SetDroppedItemGridManager(t_structHelper inst, ExternalPtr<struct UDroppedItemGridManager> value) { inst.WriteOffset(0x780, value); }
	inline bool SetWarModeModeController(t_structHelper inst, ExternalPtr<struct UWarModeModeController> value) { inst.WriteOffset(0x788, value); }
	inline bool SetModePreset(t_structHelper inst, ExternalPtr<struct UModePreset> value) { inst.WriteOffset(0x790, value); }
	inline bool SetAdditinalModeControllers(t_structHelper inst, TArray<ExternalPtr<struct UModeController>> value) { inst.WriteOffset(0x7A0, value); }
	inline bool SetJoinedUserPlayerStateMap(t_structHelper inst, TMap<struct FString, struct UPlayerState> value) { inst.WriteOffset(0x850, value); }
	inline bool SetTeams(t_structHelper inst, TArray<struct FTeams> value) { inst.WriteOffset(0x8A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGameMode = sizeof(UTslGameMode); // 2400
    static_assert(sizeof(UTslGameMode) == 0x960, "Size of UTslGameMode is not correct.");
//	auto constexpr UTslGameMode_MalePawnClass_Offset = offsetof(UTslGameMode, MalePawnClass);
//	static_assert(UTslGameMode_MalePawnClass_Offset == 0x4d8, "UTslGameMode::MalePawnClass offset is not 4d8");
	auto constexpr UTslGameMode_PerfBotPlayerControllerClass_Offset = offsetof(UTslGameMode, PerfBotPlayerControllerClass);
	static_assert(UTslGameMode_PerfBotPlayerControllerClass_Offset == 0x4e0, "UTslGameMode::PerfBotPlayerControllerClass offset is not 4e0");
	auto constexpr UTslGameMode_ModeControllerClass_Offset = offsetof(UTslGameMode, ModeControllerClass);
	static_assert(UTslGameMode_ModeControllerClass_Offset == 0x4e8, "UTslGameMode::ModeControllerClass offset is not 4e8");
	auto constexpr UTslGameMode_ESportsModeControllerClass_Offset = offsetof(UTslGameMode, ESportsModeControllerClass);
	static_assert(UTslGameMode_ESportsModeControllerClass_Offset == 0x4f0, "UTslGameMode::ESportsModeControllerClass offset is not 4f0");
	auto constexpr UTslGameMode_AdditionalModeControllerClasses_Offset = offsetof(UTslGameMode, AdditionalModeControllerClasses);
	static_assert(UTslGameMode_AdditionalModeControllerClasses_Offset == 0x4f8, "UTslGameMode::AdditionalModeControllerClasses offset is not 4f8");
	auto constexpr UTslGameMode_InitialItemDonatorClass_Offset = offsetof(UTslGameMode, InitialItemDonatorClass);
	static_assert(UTslGameMode_InitialItemDonatorClass_Offset == 0x508, "UTslGameMode::InitialItemDonatorClass offset is not 508");
	auto constexpr UTslGameMode_MatchPreparerClasses_Offset = offsetof(UTslGameMode, MatchPreparerClasses);
	static_assert(UTslGameMode_MatchPreparerClasses_Offset == 0x510, "UTslGameMode::MatchPreparerClasses offset is not 510");
	auto constexpr UTslGameMode_MatchStartType_Offset = offsetof(UTslGameMode, MatchStartType);
	static_assert(UTslGameMode_MatchStartType_Offset == 0x520, "UTslGameMode::MatchStartType offset is not 520");
	auto constexpr UTslGameMode_CameraViewBehaviour_Offset = offsetof(UTslGameMode, CameraViewBehaviour);
	static_assert(UTslGameMode_CameraViewBehaviour_Offset == 0x521, "UTslGameMode::CameraViewBehaviour offset is not 521");
	auto constexpr UTslGameMode_boolField522_Offset = offsetof(UTslGameMode, boolField522);
	static_assert(UTslGameMode_boolField522_Offset == 0x522, "UTslGameMode::boolField522 offset is not 522");
	auto constexpr UTslGameMode_PostMatchWaitingTime_Offset = offsetof(UTslGameMode, PostMatchWaitingTime);
	static_assert(UTslGameMode_PostMatchWaitingTime_Offset == 0x524, "UTslGameMode::PostMatchWaitingTime offset is not 524");
	auto constexpr UTslGameMode_CustomGamePostMatchWaitingTime_Offset = offsetof(UTslGameMode, CustomGamePostMatchWaitingTime);
	static_assert(UTslGameMode_CustomGamePostMatchWaitingTime_Offset == 0x528, "UTslGameMode::CustomGamePostMatchWaitingTime offset is not 528");
	auto constexpr UTslGameMode_ESportsPostMatchWaitingTime_Offset = offsetof(UTslGameMode, ESportsPostMatchWaitingTime);
	static_assert(UTslGameMode_ESportsPostMatchWaitingTime_Offset == 0x52c, "UTslGameMode::ESportsPostMatchWaitingTime offset is not 52c");
	auto constexpr UTslGameMode_ServerQuitAfterLeavingMapTime_Offset = offsetof(UTslGameMode, ServerQuitAfterLeavingMapTime);
	static_assert(UTslGameMode_ServerQuitAfterLeavingMapTime_Offset == 0x530, "UTslGameMode::ServerQuitAfterLeavingMapTime offset is not 530");
	auto constexpr UTslGameMode_MinPlayers_Offset = offsetof(UTslGameMode, MinPlayers);
	static_assert(UTslGameMode_MinPlayers_Offset == 0x534, "UTslGameMode::MinPlayers offset is not 534");
	auto constexpr UTslGameMode_PlayerSpawnTryMaxCount_Offset = offsetof(UTslGameMode, PlayerSpawnTryMaxCount);
	static_assert(UTslGameMode_PlayerSpawnTryMaxCount_Offset == 0x538, "UTslGameMode::PlayerSpawnTryMaxCount offset is not 538");
	auto constexpr UTslGameMode_boolField53C_Offset = offsetof(UTslGameMode, boolField53C);
	static_assert(UTslGameMode_boolField53C_Offset == 0x53c, "UTslGameMode::boolField53C offset is not 53c");
	auto constexpr UTslGameMode_boolField53D_Offset = offsetof(UTslGameMode, boolField53D);
	static_assert(UTslGameMode_boolField53D_Offset == 0x53d, "UTslGameMode::boolField53D offset is not 53d");
	auto constexpr UTslGameMode_boolField53E_Offset = offsetof(UTslGameMode, boolField53E);
	static_assert(UTslGameMode_boolField53E_Offset == 0x53e, "UTslGameMode::boolField53E offset is not 53e");
	auto constexpr UTslGameMode_boolField53F_Offset = offsetof(UTslGameMode, boolField53F);
	static_assert(UTslGameMode_boolField53F_Offset == 0x53f, "UTslGameMode::boolField53F offset is not 53f");
	auto constexpr UTslGameMode_boolField540_Offset = offsetof(UTslGameMode, boolField540);
	static_assert(UTslGameMode_boolField540_Offset == 0x540, "UTslGameMode::boolField540 offset is not 540");
	auto constexpr UTslGameMode_boolField541_Offset = offsetof(UTslGameMode, boolField541);
	static_assert(UTslGameMode_boolField541_Offset == 0x541, "UTslGameMode::boolField541 offset is not 541");
	auto constexpr UTslGameMode_boolField542_Offset = offsetof(UTslGameMode, boolField542);
	static_assert(UTslGameMode_boolField542_Offset == 0x542, "UTslGameMode::boolField542 offset is not 542");
	auto constexpr UTslGameMode_boolField543_Offset = offsetof(UTslGameMode, boolField543);
	static_assert(UTslGameMode_boolField543_Offset == 0x543, "UTslGameMode::boolField543 offset is not 543");
	auto constexpr UTslGameMode_boolField544_Offset = offsetof(UTslGameMode, boolField544);
	static_assert(UTslGameMode_boolField544_Offset == 0x544, "UTslGameMode::boolField544 offset is not 544");
	auto constexpr UTslGameMode_boolField54C_Offset = offsetof(UTslGameMode, boolField54C);
	static_assert(UTslGameMode_boolField54C_Offset == 0x54c, "UTslGameMode::boolField54C offset is not 54c");
	auto constexpr UTslGameMode_boolField54D_Offset = offsetof(UTslGameMode, boolField54D);
	static_assert(UTslGameMode_boolField54D_Offset == 0x54d, "UTslGameMode::boolField54D offset is not 54d");
	auto constexpr UTslGameMode_boolField54E_Offset = offsetof(UTslGameMode, boolField54E);
	static_assert(UTslGameMode_boolField54E_Offset == 0x54e, "UTslGameMode::boolField54E offset is not 54e");
	auto constexpr UTslGameMode_boolField54F_Offset = offsetof(UTslGameMode, boolField54F);
	static_assert(UTslGameMode_boolField54F_Offset == 0x54f, "UTslGameMode::boolField54F offset is not 54f");
	auto constexpr UTslGameMode_boolField550_Offset = offsetof(UTslGameMode, boolField550);
	static_assert(UTslGameMode_boolField550_Offset == 0x550, "UTslGameMode::boolField550 offset is not 550");
	auto constexpr UTslGameMode_boolField551_Offset = offsetof(UTslGameMode, boolField551);
	static_assert(UTslGameMode_boolField551_Offset == 0x551, "UTslGameMode::boolField551 offset is not 551");
	auto constexpr UTslGameMode_LastCircleAlgorithmPercent_Offset = offsetof(UTslGameMode, LastCircleAlgorithmPercent);
	static_assert(UTslGameMode_LastCircleAlgorithmPercent_Offset == 0x554, "UTslGameMode::LastCircleAlgorithmPercent offset is not 554");
	auto constexpr UTslGameMode_CustomGameUpdateCharacterInfo_Offset = offsetof(UTslGameMode, CustomGameUpdateCharacterInfo);
	static_assert(UTslGameMode_CustomGameUpdateCharacterInfo_Offset == 0x558, "UTslGameMode::CustomGameUpdateCharacterInfo offset is not 558");
	auto constexpr UTslGameMode_LimitCustomStringParameters_Offset = offsetof(UTslGameMode, LimitCustomStringParameters);
	static_assert(UTslGameMode_LimitCustomStringParameters_Offset == 0x580, "UTslGameMode::LimitCustomStringParameters offset is not 580");
	auto constexpr UTslGameMode_MultiplierBlueZone_Offset = offsetof(UTslGameMode, MultiplierBlueZone);
	static_assert(UTslGameMode_MultiplierBlueZone_Offset == 0x590, "UTslGameMode::MultiplierBlueZone offset is not 590");
	auto constexpr UTslGameMode_MultiplierCarePackage_Offset = offsetof(UTslGameMode, MultiplierCarePackage);
	static_assert(UTslGameMode_MultiplierCarePackage_Offset == 0x594, "UTslGameMode::MultiplierCarePackage offset is not 594");
	auto constexpr UTslGameMode_RedZoneCustomOption_Offset = offsetof(UTslGameMode, RedZoneCustomOption);
	static_assert(UTslGameMode_RedZoneCustomOption_Offset == 0x598, "UTslGameMode::RedZoneCustomOption offset is not 598");
	auto constexpr UTslGameMode_BlueZoneCustomOptions_Offset = offsetof(UTslGameMode, BlueZoneCustomOptions);
	static_assert(UTslGameMode_BlueZoneCustomOptions_Offset == 0x5b8, "UTslGameMode::BlueZoneCustomOptions offset is not 5b8");
	auto constexpr UTslGameMode_TownWeight_Offset = offsetof(UTslGameMode, TownWeight);
	static_assert(UTslGameMode_TownWeight_Offset == 0x5c8, "UTslGameMode::TownWeight offset is not 5c8");
	auto constexpr UTslGameMode_FieldWeight_Offset = offsetof(UTslGameMode, FieldWeight);
	static_assert(UTslGameMode_FieldWeight_Offset == 0x5cc, "UTslGameMode::FieldWeight offset is not 5cc");
	auto constexpr UTslGameMode_MountainWeight_Offset = offsetof(UTslGameMode, MountainWeight);
	static_assert(UTslGameMode_MountainWeight_Offset == 0x5d0, "UTslGameMode::MountainWeight offset is not 5d0");
	auto constexpr UTslGameMode_EditorTestTeamMemberCount_Offset = offsetof(UTslGameMode, EditorTestTeamMemberCount);
	static_assert(UTslGameMode_EditorTestTeamMemberCount_Offset == 0x5d4, "UTslGameMode::EditorTestTeamMemberCount offset is not 5d4");
	auto constexpr UTslGameMode_RewardDataMap_Offset = offsetof(UTslGameMode, RewardDataMap);
	static_assert(UTslGameMode_RewardDataMap_Offset == 0x5d8, "UTslGameMode::RewardDataMap offset is not 5d8");
	auto constexpr UTslGameMode_RewardData_Offset = offsetof(UTslGameMode, RewardData);
	static_assert(UTslGameMode_RewardData_Offset == 0x628, "UTslGameMode::RewardData offset is not 628");
	auto constexpr UTslGameMode_WinnerPlayerState_Offset = offsetof(UTslGameMode, WinnerPlayerState);
	static_assert(UTslGameMode_WinnerPlayerState_Offset == 0x630, "UTslGameMode::WinnerPlayerState offset is not 630");
	auto constexpr UTslGameMode_WinnerTeam_Offset = offsetof(UTslGameMode, WinnerTeam);
	static_assert(UTslGameMode_WinnerTeam_Offset == 0x638, "UTslGameMode::WinnerTeam offset is not 638");
	auto constexpr UTslGameMode_ItemSpawnProcessorClass_Offset = offsetof(UTslGameMode, ItemSpawnProcessorClass);
	static_assert(UTslGameMode_ItemSpawnProcessorClass_Offset == 0x640, "UTslGameMode::ItemSpawnProcessorClass offset is not 640");
	auto constexpr UTslGameMode_CustomGameItemSpawnProcessorClass_Offset = offsetof(UTslGameMode, CustomGameItemSpawnProcessorClass);
	static_assert(UTslGameMode_CustomGameItemSpawnProcessorClass_Offset == 0x648, "UTslGameMode::CustomGameItemSpawnProcessorClass offset is not 648");
	auto constexpr UTslGameMode_ThingSpawnProcessorClass_Offset = offsetof(UTslGameMode, ThingSpawnProcessorClass);
	static_assert(UTslGameMode_ThingSpawnProcessorClass_Offset == 0x650, "UTslGameMode::ThingSpawnProcessorClass offset is not 650");
	auto constexpr UTslGameMode_ESportsThingSpawnProcessorClass_Offset = offsetof(UTslGameMode, ESportsThingSpawnProcessorClass);
	static_assert(UTslGameMode_ESportsThingSpawnProcessorClass_Offset == 0x658, "UTslGameMode::ESportsThingSpawnProcessorClass offset is not 658");
	auto constexpr UTslGameMode_BasicBeltItemClassForNoBelt_Offset = offsetof(UTslGameMode, BasicBeltItemClassForNoBelt);
	static_assert(UTslGameMode_BasicBeltItemClassForNoBelt_Offset == 0x660, "UTslGameMode::BasicBeltItemClassForNoBelt offset is not 660");
	auto constexpr UTslGameMode_TeamPlayerStarts_Offset = offsetof(UTslGameMode, TeamPlayerStarts);
	static_assert(UTslGameMode_TeamPlayerStarts_Offset == 0x668, "UTslGameMode::TeamPlayerStarts offset is not 668");
	auto constexpr UTslGameMode_PlayerStarts_Offset = offsetof(UTslGameMode, PlayerStarts);
	static_assert(UTslGameMode_PlayerStarts_Offset == 0x6b8, "UTslGameMode::PlayerStarts offset is not 6b8");
	auto constexpr UTslGameMode_PlayerStartsUserCount_Offset = offsetof(UTslGameMode, PlayerStartsUserCount);
	static_assert(UTslGameMode_PlayerStartsUserCount_Offset == 0x6c8, "UTslGameMode::PlayerStartsUserCount offset is not 6c8");
	auto constexpr UTslGameMode_PlayerStartsUniqueIdMap_Offset = offsetof(UTslGameMode, PlayerStartsUniqueIdMap);
	static_assert(UTslGameMode_PlayerStartsUniqueIdMap_Offset == 0x6d8, "UTslGameMode::PlayerStartsUniqueIdMap offset is not 6d8");
	auto constexpr UTslGameMode_PlayerStartCount_Offset = offsetof(UTslGameMode, PlayerStartCount);
	static_assert(UTslGameMode_PlayerStartCount_Offset == 0x728, "UTslGameMode::PlayerStartCount offset is not 728");
	auto constexpr UTslGameMode_WarModeModeControllerClass_Offset = offsetof(UTslGameMode, WarModeModeControllerClass);
	static_assert(UTslGameMode_WarModeModeControllerClass_Offset == 0x730, "UTslGameMode::WarModeModeControllerClass offset is not 730");
	auto constexpr UTslGameMode_ModePresetClass_Offset = offsetof(UTslGameMode, ModePresetClass);
	static_assert(UTslGameMode_ModePresetClass_Offset == 0x738, "UTslGameMode::ModePresetClass offset is not 738");
	auto constexpr UTslGameMode_ItemSpawnProcessor_Offset = offsetof(UTslGameMode, ItemSpawnProcessor);
	static_assert(UTslGameMode_ItemSpawnProcessor_Offset == 0x758, "UTslGameMode::ItemSpawnProcessor offset is not 758");
	auto constexpr UTslGameMode_ThingSpawnProcessor_Offset = offsetof(UTslGameMode, ThingSpawnProcessor);
	static_assert(UTslGameMode_ThingSpawnProcessor_Offset == 0x760, "UTslGameMode::ThingSpawnProcessor offset is not 760");
	auto constexpr UTslGameMode_InitialItemDonator_Offset = offsetof(UTslGameMode, InitialItemDonator);
	static_assert(UTslGameMode_InitialItemDonator_Offset == 0x768, "UTslGameMode::InitialItemDonator offset is not 768");
	auto constexpr UTslGameMode_MatchPreparer_Offset = offsetof(UTslGameMode, MatchPreparer);
	static_assert(UTslGameMode_MatchPreparer_Offset == 0x770, "UTslGameMode::MatchPreparer offset is not 770");
	auto constexpr UTslGameMode_ModeController_Offset = offsetof(UTslGameMode, ModeController);
	static_assert(UTslGameMode_ModeController_Offset == 0x778, "UTslGameMode::ModeController offset is not 778");
	auto constexpr UTslGameMode_DroppedItemGridManager_Offset = offsetof(UTslGameMode, DroppedItemGridManager);
	static_assert(UTslGameMode_DroppedItemGridManager_Offset == 0x780, "UTslGameMode::DroppedItemGridManager offset is not 780");
	auto constexpr UTslGameMode_WarModeModeController_Offset = offsetof(UTslGameMode, WarModeModeController);
	static_assert(UTslGameMode_WarModeModeController_Offset == 0x788, "UTslGameMode::WarModeModeController offset is not 788");
	auto constexpr UTslGameMode_ModePreset_Offset = offsetof(UTslGameMode, ModePreset);
	static_assert(UTslGameMode_ModePreset_Offset == 0x790, "UTslGameMode::ModePreset offset is not 790");
	auto constexpr UTslGameMode_AdditinalModeControllers_Offset = offsetof(UTslGameMode, AdditinalModeControllers);
	static_assert(UTslGameMode_AdditinalModeControllers_Offset == 0x7a0, "UTslGameMode::AdditinalModeControllers offset is not 7a0");
	auto constexpr UTslGameMode_JoinedUserPlayerStateMap_Offset = offsetof(UTslGameMode, JoinedUserPlayerStateMap);
	static_assert(UTslGameMode_JoinedUserPlayerStateMap_Offset == 0x850, "UTslGameMode::JoinedUserPlayerStateMap offset is not 850");
	auto constexpr UTslGameMode_Teams_Offset = offsetof(UTslGameMode, Teams);
	static_assert(UTslGameMode_Teams_Offset == 0x8a0, "UTslGameMode::Teams offset is not 8a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
