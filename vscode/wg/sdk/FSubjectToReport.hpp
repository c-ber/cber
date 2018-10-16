#pragma once
#include "ESubjectToReport.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSubjectToReport // Size: 0x20
{
public:
    FText DisplayName; /* Ofs: 0x0 Size: 0x18 TextProperty TslGame.SubjectToReport.DisplayName */
    TEnumAsByte<enum ESubjectToReport> SubjectToReportType; /* Ofs: 0x18 Size: 0x1 EnumProperty TslGame.SubjectToReport.SubjectToReportType */
    uint8_t UnknownData19[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSubjectToReport = sizeof(FSubjectToReport); // 32
    static_assert(sizeof(FSubjectToReport) == 0x20, "Size of FSubjectToReport is not correct.");
	auto constexpr FSubjectToReport_DisplayName_Offset = offsetof(FSubjectToReport, DisplayName);
	static_assert(FSubjectToReport_DisplayName_Offset == 0x0, "FSubjectToReport::DisplayName offset is not 0");
	auto constexpr FSubjectToReport_SubjectToReportType_Offset = offsetof(FSubjectToReport, SubjectToReportType);
	static_assert(FSubjectToReport_SubjectToReportType_Offset == 0x18, "FSubjectToReport::SubjectToReportType offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
