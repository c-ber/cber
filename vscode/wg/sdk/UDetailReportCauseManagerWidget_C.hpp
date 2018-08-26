#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDetailReportCauseManagerWidget_C // Size: 0x258
	: public UUserWidget // Size: 0x248
{
private:
	typedef UDetailReportCauseManagerWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(176868); // id32("WidgetBlueprintGeneratedClass DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C")
		return ptr;
	}
	ExternalPtr<struct UVerticalBox> ListBorder; /* Ofs: 0x248 Size: 0x8 - ObjectProperty DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C.ListBorder */
	ExternalPtr<struct UTextBlock> TextBlock_24; /* Ofs: 0x250 Size: 0x8 - ObjectProperty DetailReportCauseManagerWidget.DetailReportCauseManagerWidget_C.TextBlock_24 */


	inline bool SetListBorder(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x248, value); }
	inline bool SetTextBlock_24(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDetailReportCauseManagerWidget_C = sizeof(UDetailReportCauseManagerWidget_C); // 600
    static_assert(sizeof(UDetailReportCauseManagerWidget_C) == 0x258, "Size of UDetailReportCauseManagerWidget_C is not correct.");
	auto constexpr UDetailReportCauseManagerWidget_C_ListBorder_Offset = offsetof(UDetailReportCauseManagerWidget_C, ListBorder);
	static_assert(UDetailReportCauseManagerWidget_C_ListBorder_Offset == 0x248, "UDetailReportCauseManagerWidget_C::ListBorder offset is not 248");
	auto constexpr UDetailReportCauseManagerWidget_C_TextBlock_24_Offset = offsetof(UDetailReportCauseManagerWidget_C, TextBlock_24);
	static_assert(UDetailReportCauseManagerWidget_C_TextBlock_24_Offset == 0x250, "UDetailReportCauseManagerWidget_C::TextBlock_24 offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
