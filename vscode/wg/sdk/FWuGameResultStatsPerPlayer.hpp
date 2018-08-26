#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuGameResultStatsPerPlayer // Size: 0x8
{
public:
    int32_t KillCount; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.WuGameResultStatsPerPlayer.KillCount */
    float Score; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.WuGameResultStatsPerPlayer.Score */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuGameResultStatsPerPlayer = sizeof(FWuGameResultStatsPerPlayer); // 8
    static_assert(sizeof(FWuGameResultStatsPerPlayer) == 0x8, "Size of FWuGameResultStatsPerPlayer is not correct.");
	auto constexpr FWuGameResultStatsPerPlayer_KillCount_Offset = offsetof(FWuGameResultStatsPerPlayer, KillCount);
	static_assert(FWuGameResultStatsPerPlayer_KillCount_Offset == 0x0, "FWuGameResultStatsPerPlayer::KillCount offset is not 0");
	auto constexpr FWuGameResultStatsPerPlayer_Score_Offset = offsetof(FWuGameResultStatsPerPlayer, Score);
	static_assert(FWuGameResultStatsPerPlayer_Score_Offset == 0x4, "FWuGameResultStatsPerPlayer::Score offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
