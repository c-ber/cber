#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslPlayerMatchResultInfo // Size: 0x28
{
public:
    FString PlayerName; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.TslPlayerMatchResultInfo.PlayerName */
    int32_t NumKills; /* Ofs: 0x10 Size: 0x4 IntProperty TslGame.TslPlayerMatchResultInfo.NumKills */
    int32_t Ranking; /* Ofs: 0x14 Size: 0x4 IntProperty TslGame.TslPlayerMatchResultInfo.Ranking */
    int32_t TeamId; /* Ofs: 0x18 Size: 0x4 IntProperty TslGame.TslPlayerMatchResultInfo.TeamId */
    int32_t NumStartTeamMember; /* Ofs: 0x1C Size: 0x4 IntProperty TslGame.TslPlayerMatchResultInfo.NumStartTeamMember */
    bool bIsZombie; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslPlayerMatchResultInfo.bIsZombie */
    uint8_t UnknownData21[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslPlayerMatchResultInfo = sizeof(FTslPlayerMatchResultInfo); // 40
    static_assert(sizeof(FTslPlayerMatchResultInfo) == 0x28, "Size of FTslPlayerMatchResultInfo is not correct.");
	auto constexpr FTslPlayerMatchResultInfo_PlayerName_Offset = offsetof(FTslPlayerMatchResultInfo, PlayerName);
	static_assert(FTslPlayerMatchResultInfo_PlayerName_Offset == 0x0, "FTslPlayerMatchResultInfo::PlayerName offset is not 0");
	auto constexpr FTslPlayerMatchResultInfo_NumKills_Offset = offsetof(FTslPlayerMatchResultInfo, NumKills);
	static_assert(FTslPlayerMatchResultInfo_NumKills_Offset == 0x10, "FTslPlayerMatchResultInfo::NumKills offset is not 10");
	auto constexpr FTslPlayerMatchResultInfo_Ranking_Offset = offsetof(FTslPlayerMatchResultInfo, Ranking);
	static_assert(FTslPlayerMatchResultInfo_Ranking_Offset == 0x14, "FTslPlayerMatchResultInfo::Ranking offset is not 14");
	auto constexpr FTslPlayerMatchResultInfo_TeamId_Offset = offsetof(FTslPlayerMatchResultInfo, TeamId);
	static_assert(FTslPlayerMatchResultInfo_TeamId_Offset == 0x18, "FTslPlayerMatchResultInfo::TeamId offset is not 18");
	auto constexpr FTslPlayerMatchResultInfo_NumStartTeamMember_Offset = offsetof(FTslPlayerMatchResultInfo, NumStartTeamMember);
	static_assert(FTslPlayerMatchResultInfo_NumStartTeamMember_Offset == 0x1c, "FTslPlayerMatchResultInfo::NumStartTeamMember offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
