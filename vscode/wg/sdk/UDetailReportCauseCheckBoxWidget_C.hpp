#pragma once
#include "UUserWidget.hpp"
#include "FReportDetailCauseTypeDescription.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDetailReportCauseCheckBoxWidget_C // Size: 0x278
	: public UUserWidget // Size: 0x248
{
private:
	typedef UDetailReportCauseCheckBoxWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(176850); // id32("WidgetBlueprintGeneratedClass DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C")
		return ptr;
	}
	ExternalPtr<struct UCheckBox> CheckBox; /* Ofs: 0x248 Size: 0x8 - ObjectProperty DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C.CheckBox */
	ExternalPtr<struct UTextBlock> Description; /* Ofs: 0x250 Size: 0x8 - ObjectProperty DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C.Description */
	FReportDetailCauseTypeDescription DetailCauseData; /* Ofs: 0x258 Size: 0x20 - StructProperty DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C.DetailCauseData */


	inline bool SetCheckBox(t_structHelper inst, ExternalPtr<struct UCheckBox> value) { inst.WriteOffset(0x248, value); }
	inline bool SetDescription(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
	inline bool SetDetailCauseData(t_structHelper inst, FReportDetailCauseTypeDescription value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDetailReportCauseCheckBoxWidget_C = sizeof(UDetailReportCauseCheckBoxWidget_C); // 632
    static_assert(sizeof(UDetailReportCauseCheckBoxWidget_C) == 0x278, "Size of UDetailReportCauseCheckBoxWidget_C is not correct.");
	auto constexpr UDetailReportCauseCheckBoxWidget_C_CheckBox_Offset = offsetof(UDetailReportCauseCheckBoxWidget_C, CheckBox);
	static_assert(UDetailReportCauseCheckBoxWidget_C_CheckBox_Offset == 0x248, "UDetailReportCauseCheckBoxWidget_C::CheckBox offset is not 248");
	auto constexpr UDetailReportCauseCheckBoxWidget_C_Description_Offset = offsetof(UDetailReportCauseCheckBoxWidget_C, Description);
	static_assert(UDetailReportCauseCheckBoxWidget_C_Description_Offset == 0x250, "UDetailReportCauseCheckBoxWidget_C::Description offset is not 250");
	auto constexpr UDetailReportCauseCheckBoxWidget_C_DetailCauseData_Offset = offsetof(UDetailReportCauseCheckBoxWidget_C, DetailCauseData);
	static_assert(UDetailReportCauseCheckBoxWidget_C_DetailCauseData_Offset == 0x258, "UDetailReportCauseCheckBoxWidget_C::DetailCauseData offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
