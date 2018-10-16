#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslDataSteperWidget_C // Size: 0x2B0
	: public UUserWidget // Size: 0x248
{
private:
	typedef UTslDataSteperWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(168794); // id32("WidgetBlueprintGeneratedClass TslDataSteperWidget.TslDataSteperWidget_C")
		return ptr;
	}
	ExternalPtr<struct UButton> Button_3; /* Ofs: 0x248 Size: 0x8 - ObjectProperty TslDataSteperWidget.TslDataSteperWidget_C.Button_3 */
	ExternalPtr<struct UBorder> FocusImage; /* Ofs: 0x250 Size: 0x8 - ObjectProperty TslDataSteperWidget.TslDataSteperWidget_C.FocusImage */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x258 Size: 0x8 - ObjectProperty TslDataSteperWidget.TslDataSteperWidget_C.Image_1 */
	ExternalPtr<struct UImage> Image_4; /* Ofs: 0x260 Size: 0x8 - ObjectProperty TslDataSteperWidget.TslDataSteperWidget_C.Image_4 */
	ExternalPtr<struct UTextBlock> SelectOptionNameTextBlock; /* Ofs: 0x268 Size: 0x8 - ObjectProperty TslDataSteperWidget.TslDataSteperWidget_C.SelectOptionNameTextBlock */
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x270 Size: 0x8 - ObjectProperty TslDataSteperWidget.TslDataSteperWidget_C.TextBlock_1 */
	FText DisplayName; /* Ofs: 0x278 Size: 0x18 - TextProperty TslDataSteperWidget.TslDataSteperWidget_C.DisplayName */
	TArray<struct FString> OptionList; /* Ofs: 0x290 Size: 0x10 - ArrayProperty TslDataSteperWidget.TslDataSteperWidget_C.OptionList */
	FString SelectOption; /* Ofs: 0x2A0 Size: 0x10 - StrProperty TslDataSteperWidget.TslDataSteperWidget_C.SelectOption */


	inline bool SetButton_3(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x248, value); }
	inline bool SetFocusImage(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x250, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetImage_4(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x260, value); }
	inline bool SetSelectOptionNameTextBlock(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x270, value); }
	inline bool SetDisplayName(t_structHelper inst, FText value) { inst.WriteOffset(0x278, value); }
	inline bool SetOptionList(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x290, value); }
	inline bool SetSelectOption(t_structHelper inst, FString value) { inst.WriteOffset(0x2A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslDataSteperWidget_C = sizeof(UTslDataSteperWidget_C); // 688
    static_assert(sizeof(UTslDataSteperWidget_C) == 0x2B0, "Size of UTslDataSteperWidget_C is not correct.");
	auto constexpr UTslDataSteperWidget_C_Button_3_Offset = offsetof(UTslDataSteperWidget_C, Button_3);
	static_assert(UTslDataSteperWidget_C_Button_3_Offset == 0x248, "UTslDataSteperWidget_C::Button_3 offset is not 248");
	auto constexpr UTslDataSteperWidget_C_FocusImage_Offset = offsetof(UTslDataSteperWidget_C, FocusImage);
	static_assert(UTslDataSteperWidget_C_FocusImage_Offset == 0x250, "UTslDataSteperWidget_C::FocusImage offset is not 250");
	auto constexpr UTslDataSteperWidget_C_Image_1_Offset = offsetof(UTslDataSteperWidget_C, Image_1);
	static_assert(UTslDataSteperWidget_C_Image_1_Offset == 0x258, "UTslDataSteperWidget_C::Image_1 offset is not 258");
	auto constexpr UTslDataSteperWidget_C_Image_4_Offset = offsetof(UTslDataSteperWidget_C, Image_4);
	static_assert(UTslDataSteperWidget_C_Image_4_Offset == 0x260, "UTslDataSteperWidget_C::Image_4 offset is not 260");
	auto constexpr UTslDataSteperWidget_C_SelectOptionNameTextBlock_Offset = offsetof(UTslDataSteperWidget_C, SelectOptionNameTextBlock);
	static_assert(UTslDataSteperWidget_C_SelectOptionNameTextBlock_Offset == 0x268, "UTslDataSteperWidget_C::SelectOptionNameTextBlock offset is not 268");
	auto constexpr UTslDataSteperWidget_C_TextBlock_1_Offset = offsetof(UTslDataSteperWidget_C, TextBlock_1);
	static_assert(UTslDataSteperWidget_C_TextBlock_1_Offset == 0x270, "UTslDataSteperWidget_C::TextBlock_1 offset is not 270");
	auto constexpr UTslDataSteperWidget_C_DisplayName_Offset = offsetof(UTslDataSteperWidget_C, DisplayName);
	static_assert(UTslDataSteperWidget_C_DisplayName_Offset == 0x278, "UTslDataSteperWidget_C::DisplayName offset is not 278");
	auto constexpr UTslDataSteperWidget_C_OptionList_Offset = offsetof(UTslDataSteperWidget_C, OptionList);
	static_assert(UTslDataSteperWidget_C_OptionList_Offset == 0x290, "UTslDataSteperWidget_C::OptionList offset is not 290");
	auto constexpr UTslDataSteperWidget_C_SelectOption_Offset = offsetof(UTslDataSteperWidget_C, SelectOption);
	static_assert(UTslDataSteperWidget_C_SelectOption_Offset == 0x2a0, "UTslDataSteperWidget_C::SelectOption offset is not 2a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
