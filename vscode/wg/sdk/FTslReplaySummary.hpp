#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslReplaySummary // Size: 0x90
{
public:
    FString MatchId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.TslReplaySummary.MatchId */
    bool bIsServerRecording; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslReplaySummary.bIsServerRecording */
    uint8_t UnknownData11[0x7];
    FString RecordUserId; /* Ofs: 0x18 Size: 0x10 StrProperty TslGame.TslReplaySummary.RecordUserId */
    FString RecordAccountId; /* Ofs: 0x28 Size: 0x10 StrProperty TslGame.TslReplaySummary.RecordAccountId */
    FString RecordUserNickName; /* Ofs: 0x38 Size: 0x10 StrProperty TslGame.TslReplaySummary.RecordUserNickName */
    FString MapName; /* Ofs: 0x48 Size: 0x10 StrProperty TslGame.TslReplaySummary.MapName */
    FString WeatherName; /* Ofs: 0x58 Size: 0x10 StrProperty TslGame.TslReplaySummary.WeatherName */
    FString RegionName; /* Ofs: 0x68 Size: 0x10 StrProperty TslGame.TslReplaySummary.RegionName */
    int32_t NumPlayers; /* Ofs: 0x78 Size: 0x4 IntProperty TslGame.TslReplaySummary.NumPlayers */
    int32_t NumTeams; /* Ofs: 0x7C Size: 0x4 IntProperty TslGame.TslReplaySummary.NumTeams */
    TArray<struct FTslPlayerStateSummary> PlayerStateSummaries; /* Ofs: 0x80 Size: 0x10 ArrayProperty TslGame.TslReplaySummary.PlayerStateSummaries */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslReplaySummary = sizeof(FTslReplaySummary); // 144
    static_assert(sizeof(FTslReplaySummary) == 0x90, "Size of FTslReplaySummary is not correct.");
	auto constexpr FTslReplaySummary_MatchId_Offset = offsetof(FTslReplaySummary, MatchId);
	static_assert(FTslReplaySummary_MatchId_Offset == 0x0, "FTslReplaySummary::MatchId offset is not 0");
	auto constexpr FTslReplaySummary_RecordUserId_Offset = offsetof(FTslReplaySummary, RecordUserId);
	static_assert(FTslReplaySummary_RecordUserId_Offset == 0x18, "FTslReplaySummary::RecordUserId offset is not 18");
	auto constexpr FTslReplaySummary_RecordAccountId_Offset = offsetof(FTslReplaySummary, RecordAccountId);
	static_assert(FTslReplaySummary_RecordAccountId_Offset == 0x28, "FTslReplaySummary::RecordAccountId offset is not 28");
	auto constexpr FTslReplaySummary_RecordUserNickName_Offset = offsetof(FTslReplaySummary, RecordUserNickName);
	static_assert(FTslReplaySummary_RecordUserNickName_Offset == 0x38, "FTslReplaySummary::RecordUserNickName offset is not 38");
	auto constexpr FTslReplaySummary_MapName_Offset = offsetof(FTslReplaySummary, MapName);
	static_assert(FTslReplaySummary_MapName_Offset == 0x48, "FTslReplaySummary::MapName offset is not 48");
	auto constexpr FTslReplaySummary_WeatherName_Offset = offsetof(FTslReplaySummary, WeatherName);
	static_assert(FTslReplaySummary_WeatherName_Offset == 0x58, "FTslReplaySummary::WeatherName offset is not 58");
	auto constexpr FTslReplaySummary_RegionName_Offset = offsetof(FTslReplaySummary, RegionName);
	static_assert(FTslReplaySummary_RegionName_Offset == 0x68, "FTslReplaySummary::RegionName offset is not 68");
	auto constexpr FTslReplaySummary_NumPlayers_Offset = offsetof(FTslReplaySummary, NumPlayers);
	static_assert(FTslReplaySummary_NumPlayers_Offset == 0x78, "FTslReplaySummary::NumPlayers offset is not 78");
	auto constexpr FTslReplaySummary_NumTeams_Offset = offsetof(FTslReplaySummary, NumTeams);
	static_assert(FTslReplaySummary_NumTeams_Offset == 0x7c, "FTslReplaySummary::NumTeams offset is not 7c");
	auto constexpr FTslReplaySummary_PlayerStateSummaries_Offset = offsetof(FTslReplaySummary, PlayerStateSummaries);
	static_assert(FTslReplaySummary_PlayerStateSummaries_Offset == 0x80, "FTslReplaySummary::PlayerStateSummaries offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
