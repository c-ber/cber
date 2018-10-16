#pragma once
#include "EReportCause.hpp"
#include "EReportDetailCauseType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReportCauseData // Size: 0x30
{
public:
    FText DisplayName; /* Ofs: 0x0 Size: 0x18 TextProperty TslGame.ReportCauseData.DisplayName */
    TEnumAsByte<enum EReportCause> ReportCauseType; /* Ofs: 0x18 Size: 0x1 EnumProperty TslGame.ReportCauseData.ReportCauseType */
    uint8_t UnknownData19[0x7];
    TArray<EReportDetailCauseType> DetailCauseTypeList; /* Ofs: 0x20 Size: 0x10 ArrayProperty TslGame.ReportCauseData.DetailCauseTypeList */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReportCauseData = sizeof(FReportCauseData); // 48
    static_assert(sizeof(FReportCauseData) == 0x30, "Size of FReportCauseData is not correct.");
	auto constexpr FReportCauseData_DisplayName_Offset = offsetof(FReportCauseData, DisplayName);
	static_assert(FReportCauseData_DisplayName_Offset == 0x0, "FReportCauseData::DisplayName offset is not 0");
	auto constexpr FReportCauseData_ReportCauseType_Offset = offsetof(FReportCauseData, ReportCauseType);
	static_assert(FReportCauseData_ReportCauseType_Offset == 0x18, "FReportCauseData::ReportCauseType offset is not 18");
	auto constexpr FReportCauseData_DetailCauseTypeList_Offset = offsetof(FReportCauseData, DetailCauseTypeList);
	static_assert(FReportCauseData_DetailCauseTypeList_Offset == 0x20, "FReportCauseData::DetailCauseTypeList offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
