#pragma once
#include "FTslReportUserInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslReportedInfo // Size: 0x80
{
public:
    FString MatchId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.TslReportedInfo.MatchId */
    FTslReportUserInfo UserInfo; /* Ofs: 0x10 Size: 0x38 StructProperty TslGame.TslReportedInfo.UserInfo */
    FString Cause; /* Ofs: 0x48 Size: 0x10 StrProperty TslGame.TslReportedInfo.Cause */
    TArray<struct FString> DetailCauseList; /* Ofs: 0x58 Size: 0x10 ArrayProperty TslGame.TslReportedInfo.DetailCauseList */
    FString ReportedSessionType; /* Ofs: 0x68 Size: 0x10 StrProperty TslGame.TslReportedInfo.ReportedSessionType */
    float MatchElapsedTimeSec; /* Ofs: 0x78 Size: 0x4 FloatProperty TslGame.TslReportedInfo.MatchElapsedTimeSec */
    uint8_t UnknownData7C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslReportedInfo = sizeof(FTslReportedInfo); // 128
    static_assert(sizeof(FTslReportedInfo) == 0x80, "Size of FTslReportedInfo is not correct.");
	auto constexpr FTslReportedInfo_MatchId_Offset = offsetof(FTslReportedInfo, MatchId);
	static_assert(FTslReportedInfo_MatchId_Offset == 0x0, "FTslReportedInfo::MatchId offset is not 0");
	auto constexpr FTslReportedInfo_UserInfo_Offset = offsetof(FTslReportedInfo, UserInfo);
	static_assert(FTslReportedInfo_UserInfo_Offset == 0x10, "FTslReportedInfo::UserInfo offset is not 10");
	auto constexpr FTslReportedInfo_Cause_Offset = offsetof(FTslReportedInfo, Cause);
	static_assert(FTslReportedInfo_Cause_Offset == 0x48, "FTslReportedInfo::Cause offset is not 48");
	auto constexpr FTslReportedInfo_DetailCauseList_Offset = offsetof(FTslReportedInfo, DetailCauseList);
	static_assert(FTslReportedInfo_DetailCauseList_Offset == 0x58, "FTslReportedInfo::DetailCauseList offset is not 58");
	auto constexpr FTslReportedInfo_ReportedSessionType_Offset = offsetof(FTslReportedInfo, ReportedSessionType);
	static_assert(FTslReportedInfo_ReportedSessionType_Offset == 0x68, "FTslReportedInfo::ReportedSessionType offset is not 68");
	auto constexpr FTslReportedInfo_MatchElapsedTimeSec_Offset = offsetof(FTslReportedInfo, MatchElapsedTimeSec);
	static_assert(FTslReportedInfo_MatchElapsedTimeSec_Offset == 0x78, "FTslReportedInfo::MatchElapsedTimeSec offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
