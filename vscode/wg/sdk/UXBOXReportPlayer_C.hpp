#pragma once
#include "UInputHookingWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UXBOXReportPlayer_C // Size: 0x368
	: public UInputHookingWidget_C // Size: 0x330
{
private:
	typedef UXBOXReportPlayer_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(195693); // id32("WidgetBlueprintGeneratedClass XBOXReportPlayer.XBOXReportPlayer_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x330 Size: 0x8 - StructProperty XBOXReportPlayer.XBOXReportPlayer_C.UberGraphFrame */
	ExternalPtr<struct UImage> Image_3; /* Ofs: 0x338 Size: 0x8 - ObjectProperty XBOXReportPlayer.XBOXReportPlayer_C.Image_3 */
	ExternalPtr<struct UImage> Image_5; /* Ofs: 0x340 Size: 0x8 - ObjectProperty XBOXReportPlayer.XBOXReportPlayer_C.Image_5 */
	ExternalPtr<struct UTextBlock> PlayerName; /* Ofs: 0x348 Size: 0x8 - ObjectProperty XBOXReportPlayer.XBOXReportPlayer_C.PlayerName */
	ExternalPtr<struct UHorizontalBox> ReportBox; /* Ofs: 0x350 Size: 0x8 - ObjectProperty XBOXReportPlayer.XBOXReportPlayer_C.ReportBox */
	ExternalPtr<struct UTextBlock> SubjectToReport; /* Ofs: 0x358 Size: 0x8 - ObjectProperty XBOXReportPlayer.XBOXReportPlayer_C.SubjectToReport */
	ExternalPtr<struct UTextBlock> TextBlock_3; /* Ofs: 0x360 Size: 0x8 - ObjectProperty XBOXReportPlayer.XBOXReportPlayer_C.TextBlock_3 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x330, value); }
	inline bool SetImage_3(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x338, value); }
	inline bool SetImage_5(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x340, value); }
	inline bool SetPlayerName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x348, value); }
	inline bool SetReportBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x350, value); }
	inline bool SetSubjectToReport(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x358, value); }
	inline bool SetTextBlock_3(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x360, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUXBOXReportPlayer_C = sizeof(UXBOXReportPlayer_C); // 872
    static_assert(sizeof(UXBOXReportPlayer_C) == 0x368, "Size of UXBOXReportPlayer_C is not correct.");
	auto constexpr UXBOXReportPlayer_C_UberGraphFrame_Offset = offsetof(UXBOXReportPlayer_C, UberGraphFrame);
	static_assert(UXBOXReportPlayer_C_UberGraphFrame_Offset == 0x330, "UXBOXReportPlayer_C::UberGraphFrame offset is not 330");
	auto constexpr UXBOXReportPlayer_C_Image_3_Offset = offsetof(UXBOXReportPlayer_C, Image_3);
	static_assert(UXBOXReportPlayer_C_Image_3_Offset == 0x338, "UXBOXReportPlayer_C::Image_3 offset is not 338");
	auto constexpr UXBOXReportPlayer_C_Image_5_Offset = offsetof(UXBOXReportPlayer_C, Image_5);
	static_assert(UXBOXReportPlayer_C_Image_5_Offset == 0x340, "UXBOXReportPlayer_C::Image_5 offset is not 340");
	auto constexpr UXBOXReportPlayer_C_PlayerName_Offset = offsetof(UXBOXReportPlayer_C, PlayerName);
	static_assert(UXBOXReportPlayer_C_PlayerName_Offset == 0x348, "UXBOXReportPlayer_C::PlayerName offset is not 348");
	auto constexpr UXBOXReportPlayer_C_ReportBox_Offset = offsetof(UXBOXReportPlayer_C, ReportBox);
	static_assert(UXBOXReportPlayer_C_ReportBox_Offset == 0x350, "UXBOXReportPlayer_C::ReportBox offset is not 350");
	auto constexpr UXBOXReportPlayer_C_SubjectToReport_Offset = offsetof(UXBOXReportPlayer_C, SubjectToReport);
	static_assert(UXBOXReportPlayer_C_SubjectToReport_Offset == 0x358, "UXBOXReportPlayer_C::SubjectToReport offset is not 358");
	auto constexpr UXBOXReportPlayer_C_TextBlock_3_Offset = offsetof(UXBOXReportPlayer_C, TextBlock_3);
	static_assert(UXBOXReportPlayer_C_TextBlock_3_Offset == 0x360, "UXBOXReportPlayer_C::TextBlock_3 offset is not 360");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
