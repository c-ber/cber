#pragma once
#include "FLogBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogServerStat // Size: 0x88
 : public FLogBase // Size: 0x58
{
public:
    int32_t ElapsedTime; /* Ofs: 0x58 Size: 0x4 IntProperty TslGame.WuLogServerStat.ElapsedTime */
    int32_t NumAliveTeams; /* Ofs: 0x5C Size: 0x4 IntProperty TslGame.WuLogServerStat.NumAliveTeams */
    int32_t NumJoinPlayers; /* Ofs: 0x60 Size: 0x4 IntProperty TslGame.WuLogServerStat.NumJoinPlayers */
    int32_t NumStartPlayers; /* Ofs: 0x64 Size: 0x4 IntProperty TslGame.WuLogServerStat.NumStartPlayers */
    int32_t NumAlivePlayers; /* Ofs: 0x68 Size: 0x4 IntProperty TslGame.WuLogServerStat.NumAlivePlayers */
    float PingMin; /* Ofs: 0x6C Size: 0x4 FloatProperty TslGame.WuLogServerStat.PingMin */
    float PingMax; /* Ofs: 0x70 Size: 0x4 FloatProperty TslGame.WuLogServerStat.PingMax */
    float PingAvg; /* Ofs: 0x74 Size: 0x4 FloatProperty TslGame.WuLogServerStat.PingAvg */
    float FrameRateMin; /* Ofs: 0x78 Size: 0x4 FloatProperty TslGame.WuLogServerStat.FrameRateMin */
    float FrameRateMax; /* Ofs: 0x7C Size: 0x4 FloatProperty TslGame.WuLogServerStat.FrameRateMax */
    float FrameRateAvg; /* Ofs: 0x80 Size: 0x4 FloatProperty TslGame.WuLogServerStat.FrameRateAvg */
    uint8_t UnknownData84[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogServerStat = sizeof(FWuLogServerStat); // 136
    static_assert(sizeof(FWuLogServerStat) == 0x88, "Size of FWuLogServerStat is not correct.");
	auto constexpr FWuLogServerStat_ElapsedTime_Offset = offsetof(FWuLogServerStat, ElapsedTime);
	static_assert(FWuLogServerStat_ElapsedTime_Offset == 0x58, "FWuLogServerStat::ElapsedTime offset is not 58");
	auto constexpr FWuLogServerStat_NumAliveTeams_Offset = offsetof(FWuLogServerStat, NumAliveTeams);
	static_assert(FWuLogServerStat_NumAliveTeams_Offset == 0x5c, "FWuLogServerStat::NumAliveTeams offset is not 5c");
	auto constexpr FWuLogServerStat_NumJoinPlayers_Offset = offsetof(FWuLogServerStat, NumJoinPlayers);
	static_assert(FWuLogServerStat_NumJoinPlayers_Offset == 0x60, "FWuLogServerStat::NumJoinPlayers offset is not 60");
	auto constexpr FWuLogServerStat_NumStartPlayers_Offset = offsetof(FWuLogServerStat, NumStartPlayers);
	static_assert(FWuLogServerStat_NumStartPlayers_Offset == 0x64, "FWuLogServerStat::NumStartPlayers offset is not 64");
	auto constexpr FWuLogServerStat_NumAlivePlayers_Offset = offsetof(FWuLogServerStat, NumAlivePlayers);
	static_assert(FWuLogServerStat_NumAlivePlayers_Offset == 0x68, "FWuLogServerStat::NumAlivePlayers offset is not 68");
	auto constexpr FWuLogServerStat_PingMin_Offset = offsetof(FWuLogServerStat, PingMin);
	static_assert(FWuLogServerStat_PingMin_Offset == 0x6c, "FWuLogServerStat::PingMin offset is not 6c");
	auto constexpr FWuLogServerStat_PingMax_Offset = offsetof(FWuLogServerStat, PingMax);
	static_assert(FWuLogServerStat_PingMax_Offset == 0x70, "FWuLogServerStat::PingMax offset is not 70");
	auto constexpr FWuLogServerStat_PingAvg_Offset = offsetof(FWuLogServerStat, PingAvg);
	static_assert(FWuLogServerStat_PingAvg_Offset == 0x74, "FWuLogServerStat::PingAvg offset is not 74");
	auto constexpr FWuLogServerStat_FrameRateMin_Offset = offsetof(FWuLogServerStat, FrameRateMin);
	static_assert(FWuLogServerStat_FrameRateMin_Offset == 0x78, "FWuLogServerStat::FrameRateMin offset is not 78");
	auto constexpr FWuLogServerStat_FrameRateMax_Offset = offsetof(FWuLogServerStat, FrameRateMax);
	static_assert(FWuLogServerStat_FrameRateMax_Offset == 0x7c, "FWuLogServerStat::FrameRateMax offset is not 7c");
	auto constexpr FWuLogServerStat_FrameRateAvg_Offset = offsetof(FWuLogServerStat, FrameRateAvg);
	static_assert(FWuLogServerStat_FrameRateAvg_Offset == 0x80, "FWuLogServerStat::FrameRateAvg offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
