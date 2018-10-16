#pragma once
#include "EReportDetailCauseType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReportDetailCauseTypeDescription // Size: 0x20
{
public:
    TEnumAsByte<enum EReportDetailCauseType> ReportDetailCauseType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.ReportDetailCauseTypeDescription.ReportDetailCauseType */
    uint8_t UnknownData1[0x7];
    FText Description; /* Ofs: 0x8 Size: 0x18 TextProperty TslGame.ReportDetailCauseTypeDescription.Description */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReportDetailCauseTypeDescription = sizeof(FReportDetailCauseTypeDescription); // 32
    static_assert(sizeof(FReportDetailCauseTypeDescription) == 0x20, "Size of FReportDetailCauseTypeDescription is not correct.");
	auto constexpr FReportDetailCauseTypeDescription_ReportDetailCauseType_Offset = offsetof(FReportDetailCauseTypeDescription, ReportDetailCauseType);
	static_assert(FReportDetailCauseTypeDescription_ReportDetailCauseType_Offset == 0x0, "FReportDetailCauseTypeDescription::ReportDetailCauseType offset is not 0");
	auto constexpr FReportDetailCauseTypeDescription_Description_Offset = offsetof(FReportDetailCauseTypeDescription, Description);
	static_assert(FReportDetailCauseTypeDescription_Description_Offset == 0x8, "FReportDetailCauseTypeDescription::Description offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
