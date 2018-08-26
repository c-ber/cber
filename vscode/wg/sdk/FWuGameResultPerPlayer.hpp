#pragma once
#include "FWuGameResultStatsPerPlayer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuGameResultPerPlayer // Size: 0x48
{
public:
    FString PlayerNetId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuGameResultPerPlayer.PlayerNetId */
    int32_t Rank; /* Ofs: 0x10 Size: 0x4 IntProperty TslGame.WuGameResultPerPlayer.Rank */
    uint8_t UnknownData14[0x4];
    FString GameResult; /* Ofs: 0x18 Size: 0x10 StrProperty TslGame.WuGameResultPerPlayer.GameResult */
    int32_t TeamId; /* Ofs: 0x28 Size: 0x4 IntProperty TslGame.WuGameResultPerPlayer.TeamId */
    FWuGameResultStatsPerPlayer Stats; /* Ofs: 0x2C Size: 0x8 StructProperty TslGame.WuGameResultPerPlayer.Stats */
    uint8_t UnknownData34[0x4];
    FString AccountId; /* Ofs: 0x38 Size: 0x10 StrProperty TslGame.WuGameResultPerPlayer.AccountId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuGameResultPerPlayer = sizeof(FWuGameResultPerPlayer); // 72
    static_assert(sizeof(FWuGameResultPerPlayer) == 0x48, "Size of FWuGameResultPerPlayer is not correct.");
	auto constexpr FWuGameResultPerPlayer_PlayerNetId_Offset = offsetof(FWuGameResultPerPlayer, PlayerNetId);
	static_assert(FWuGameResultPerPlayer_PlayerNetId_Offset == 0x0, "FWuGameResultPerPlayer::PlayerNetId offset is not 0");
	auto constexpr FWuGameResultPerPlayer_Rank_Offset = offsetof(FWuGameResultPerPlayer, Rank);
	static_assert(FWuGameResultPerPlayer_Rank_Offset == 0x10, "FWuGameResultPerPlayer::Rank offset is not 10");
	auto constexpr FWuGameResultPerPlayer_GameResult_Offset = offsetof(FWuGameResultPerPlayer, GameResult);
	static_assert(FWuGameResultPerPlayer_GameResult_Offset == 0x18, "FWuGameResultPerPlayer::GameResult offset is not 18");
	auto constexpr FWuGameResultPerPlayer_TeamId_Offset = offsetof(FWuGameResultPerPlayer, TeamId);
	static_assert(FWuGameResultPerPlayer_TeamId_Offset == 0x28, "FWuGameResultPerPlayer::TeamId offset is not 28");
	auto constexpr FWuGameResultPerPlayer_Stats_Offset = offsetof(FWuGameResultPerPlayer, Stats);
	static_assert(FWuGameResultPerPlayer_Stats_Offset == 0x2c, "FWuGameResultPerPlayer::Stats offset is not 2c");
	auto constexpr FWuGameResultPerPlayer_AccountId_Offset = offsetof(FWuGameResultPerPlayer, AccountId);
	static_assert(FWuGameResultPerPlayer_AccountId_Offset == 0x38, "FWuGameResultPerPlayer::AccountId offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
