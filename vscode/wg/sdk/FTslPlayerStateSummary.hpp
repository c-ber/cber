#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslPlayerStateSummary // Size: 0x40
{
public:
    FString UniqueId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.TslPlayerStateSummary.UniqueId */
    FString PlayerName; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.TslPlayerStateSummary.PlayerName */
    int32_t TeamNumber; /* Ofs: 0x20 Size: 0x4 IntProperty TslGame.TslPlayerStateSummary.TeamNumber */
    int32_t Ranking; /* Ofs: 0x24 Size: 0x4 IntProperty TslGame.TslPlayerStateSummary.Ranking */
    int32_t HeadShots; /* Ofs: 0x28 Size: 0x4 IntProperty TslGame.TslPlayerStateSummary.HeadShots */
    int32_t NumKills; /* Ofs: 0x2C Size: 0x4 IntProperty TslGame.TslPlayerStateSummary.NumKills */
    float TotalGivenDamages; /* Ofs: 0x30 Size: 0x4 FloatProperty TslGame.TslPlayerStateSummary.TotalGivenDamages */
    float LongestDistanceKill; /* Ofs: 0x34 Size: 0x4 FloatProperty TslGame.TslPlayerStateSummary.LongestDistanceKill */
    float TotalMovedDistanceMeter; /* Ofs: 0x38 Size: 0x4 FloatProperty TslGame.TslPlayerStateSummary.TotalMovedDistanceMeter */
    uint8_t UnknownData3C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslPlayerStateSummary = sizeof(FTslPlayerStateSummary); // 64
    static_assert(sizeof(FTslPlayerStateSummary) == 0x40, "Size of FTslPlayerStateSummary is not correct.");
	auto constexpr FTslPlayerStateSummary_UniqueId_Offset = offsetof(FTslPlayerStateSummary, UniqueId);
	static_assert(FTslPlayerStateSummary_UniqueId_Offset == 0x0, "FTslPlayerStateSummary::UniqueId offset is not 0");
	auto constexpr FTslPlayerStateSummary_PlayerName_Offset = offsetof(FTslPlayerStateSummary, PlayerName);
	static_assert(FTslPlayerStateSummary_PlayerName_Offset == 0x10, "FTslPlayerStateSummary::PlayerName offset is not 10");
	auto constexpr FTslPlayerStateSummary_TeamNumber_Offset = offsetof(FTslPlayerStateSummary, TeamNumber);
	static_assert(FTslPlayerStateSummary_TeamNumber_Offset == 0x20, "FTslPlayerStateSummary::TeamNumber offset is not 20");
	auto constexpr FTslPlayerStateSummary_Ranking_Offset = offsetof(FTslPlayerStateSummary, Ranking);
	static_assert(FTslPlayerStateSummary_Ranking_Offset == 0x24, "FTslPlayerStateSummary::Ranking offset is not 24");
	auto constexpr FTslPlayerStateSummary_HeadShots_Offset = offsetof(FTslPlayerStateSummary, HeadShots);
	static_assert(FTslPlayerStateSummary_HeadShots_Offset == 0x28, "FTslPlayerStateSummary::HeadShots offset is not 28");
	auto constexpr FTslPlayerStateSummary_NumKills_Offset = offsetof(FTslPlayerStateSummary, NumKills);
	static_assert(FTslPlayerStateSummary_NumKills_Offset == 0x2c, "FTslPlayerStateSummary::NumKills offset is not 2c");
	auto constexpr FTslPlayerStateSummary_TotalGivenDamages_Offset = offsetof(FTslPlayerStateSummary, TotalGivenDamages);
	static_assert(FTslPlayerStateSummary_TotalGivenDamages_Offset == 0x30, "FTslPlayerStateSummary::TotalGivenDamages offset is not 30");
	auto constexpr FTslPlayerStateSummary_LongestDistanceKill_Offset = offsetof(FTslPlayerStateSummary, LongestDistanceKill);
	static_assert(FTslPlayerStateSummary_LongestDistanceKill_Offset == 0x34, "FTslPlayerStateSummary::LongestDistanceKill offset is not 34");
	auto constexpr FTslPlayerStateSummary_TotalMovedDistanceMeter_Offset = offsetof(FTslPlayerStateSummary, TotalMovedDistanceMeter);
	static_assert(FTslPlayerStateSummary_TotalMovedDistanceMeter_Offset == 0x38, "FTslPlayerStateSummary::TotalMovedDistanceMeter offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
