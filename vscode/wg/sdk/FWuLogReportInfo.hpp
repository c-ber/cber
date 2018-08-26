#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogReportInfo // Size: 0x118
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Reporter; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogReportInfo.Reporter */
    FWuLogCharacter ReportedPlayer; /* Ofs: 0xA0 Size: 0x48 StructProperty TslGame.WuLogReportInfo.ReportedPlayer */
    FString ReportCauseType; /* Ofs: 0xE8 Size: 0x10 StrProperty TslGame.WuLogReportInfo.ReportCauseType */
    TArray<struct FString> DetailedCauses; /* Ofs: 0xF8 Size: 0x10 ArrayProperty TslGame.WuLogReportInfo.DetailedCauses */
    FString ReportedSessionType; /* Ofs: 0x108 Size: 0x10 StrProperty TslGame.WuLogReportInfo.ReportedSessionType */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogReportInfo = sizeof(FWuLogReportInfo); // 280
    static_assert(sizeof(FWuLogReportInfo) == 0x118, "Size of FWuLogReportInfo is not correct.");
	auto constexpr FWuLogReportInfo_Reporter_Offset = offsetof(FWuLogReportInfo, Reporter);
	static_assert(FWuLogReportInfo_Reporter_Offset == 0x58, "FWuLogReportInfo::Reporter offset is not 58");
	auto constexpr FWuLogReportInfo_ReportedPlayer_Offset = offsetof(FWuLogReportInfo, ReportedPlayer);
	static_assert(FWuLogReportInfo_ReportedPlayer_Offset == 0xa0, "FWuLogReportInfo::ReportedPlayer offset is not a0");
	auto constexpr FWuLogReportInfo_ReportCauseType_Offset = offsetof(FWuLogReportInfo, ReportCauseType);
	static_assert(FWuLogReportInfo_ReportCauseType_Offset == 0xe8, "FWuLogReportInfo::ReportCauseType offset is not e8");
	auto constexpr FWuLogReportInfo_DetailedCauses_Offset = offsetof(FWuLogReportInfo, DetailedCauses);
	static_assert(FWuLogReportInfo_DetailedCauses_Offset == 0xf8, "FWuLogReportInfo::DetailedCauses offset is not f8");
	auto constexpr FWuLogReportInfo_ReportedSessionType_Offset = offsetof(FWuLogReportInfo, ReportedSessionType);
	static_assert(FWuLogReportInfo_ReportedSessionType_Offset == 0x108, "FWuLogReportInfo::ReportedSessionType offset is not 108");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
