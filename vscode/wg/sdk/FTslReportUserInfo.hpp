#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslReportUserInfo // Size: 0x38
{
public:
    FString PlayerName; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.TslReportUserInfo.PlayerName */
    FString NetId; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.TslReportUserInfo.NetId */
    FString AccountId; /* Ofs: 0x20 Size: 0x10 StrProperty TslGame.TslReportUserInfo.AccountId */
    int32_t TeamId; /* Ofs: 0x30 Size: 0x4 IntProperty TslGame.TslReportUserInfo.TeamId */
    uint8_t UnknownData34[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslReportUserInfo = sizeof(FTslReportUserInfo); // 56
    static_assert(sizeof(FTslReportUserInfo) == 0x38, "Size of FTslReportUserInfo is not correct.");
	auto constexpr FTslReportUserInfo_PlayerName_Offset = offsetof(FTslReportUserInfo, PlayerName);
	static_assert(FTslReportUserInfo_PlayerName_Offset == 0x0, "FTslReportUserInfo::PlayerName offset is not 0");
	auto constexpr FTslReportUserInfo_NetId_Offset = offsetof(FTslReportUserInfo, NetId);
	static_assert(FTslReportUserInfo_NetId_Offset == 0x10, "FTslReportUserInfo::NetId offset is not 10");
	auto constexpr FTslReportUserInfo_AccountId_Offset = offsetof(FTslReportUserInfo, AccountId);
	static_assert(FTslReportUserInfo_AccountId_Offset == 0x20, "FTslReportUserInfo::AccountId offset is not 20");
	auto constexpr FTslReportUserInfo_TeamId_Offset = offsetof(FTslReportUserInfo, TeamId);
	static_assert(FTslReportUserInfo_TeamId_Offset == 0x30, "FTslReportUserInfo::TeamId offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
