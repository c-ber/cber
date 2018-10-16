#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCheckBox_C // Size: 0x2A1
	: public UUserWidget // Size: 0x248
{
private:
	typedef UTslCheckBox_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169637); // id32("WidgetBlueprintGeneratedClass TslCheckBox.TslCheckBox_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty TslCheckBox.TslCheckBox_C.UberGraphFrame */
	ExternalPtr<struct UButton> Button_3; /* Ofs: 0x250 Size: 0x8 - ObjectProperty TslCheckBox.TslCheckBox_C.Button_3 */
	ExternalPtr<struct UBorder> FocusImage; /* Ofs: 0x258 Size: 0x8 - ObjectProperty TslCheckBox.TslCheckBox_C.FocusImage */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x260 Size: 0x8 - ObjectProperty TslCheckBox.TslCheckBox_C.Image_1 */
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x268 Size: 0x8 - ObjectProperty TslCheckBox.TslCheckBox_C.TextBlock_1 */
	FText DisplayName; /* Ofs: 0x270 Size: 0x18 - TextProperty TslCheckBox.TslCheckBox_C.DisplayName */
	uint8_t boolField288;
	uint8_t UnknownData289[0x7];
	TArray<struct FKey> CheckBoxToggleKeyList; /* Ofs: 0x290 Size: 0x10 - ArrayProperty TslCheckBox.TslCheckBox_C.CheckBoxToggleKeyList */
	uint8_t boolField2A0;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetButton_3(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetFocusImage(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x258, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x260, value); }
	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
	inline bool SetDisplayName(t_structHelper inst, FText value) { inst.WriteOffset(0x270, value); }
	inline bool bChecked()
	{
		return boolField288& 0x1;
	}
	inline bool SetbChecked(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x288, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCheckBoxToggleKeyList(t_structHelper inst, TArray<struct FKey> value) { inst.WriteOffset(0x290, value); }
	inline bool IsToggleKeyPressed()
	{
		return boolField2A0& 0x1;
	}
	inline bool SetIsToggleKeyPressed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCheckBox_C = sizeof(UTslCheckBox_C); // 673
    static_assert(sizeof(UTslCheckBox_C) == 0x2A1, "Size of UTslCheckBox_C is not correct.");
	auto constexpr UTslCheckBox_C_UberGraphFrame_Offset = offsetof(UTslCheckBox_C, UberGraphFrame);
	static_assert(UTslCheckBox_C_UberGraphFrame_Offset == 0x248, "UTslCheckBox_C::UberGraphFrame offset is not 248");
	auto constexpr UTslCheckBox_C_Button_3_Offset = offsetof(UTslCheckBox_C, Button_3);
	static_assert(UTslCheckBox_C_Button_3_Offset == 0x250, "UTslCheckBox_C::Button_3 offset is not 250");
	auto constexpr UTslCheckBox_C_FocusImage_Offset = offsetof(UTslCheckBox_C, FocusImage);
	static_assert(UTslCheckBox_C_FocusImage_Offset == 0x258, "UTslCheckBox_C::FocusImage offset is not 258");
	auto constexpr UTslCheckBox_C_Image_1_Offset = offsetof(UTslCheckBox_C, Image_1);
	static_assert(UTslCheckBox_C_Image_1_Offset == 0x260, "UTslCheckBox_C::Image_1 offset is not 260");
	auto constexpr UTslCheckBox_C_TextBlock_1_Offset = offsetof(UTslCheckBox_C, TextBlock_1);
	static_assert(UTslCheckBox_C_TextBlock_1_Offset == 0x268, "UTslCheckBox_C::TextBlock_1 offset is not 268");
	auto constexpr UTslCheckBox_C_DisplayName_Offset = offsetof(UTslCheckBox_C, DisplayName);
	static_assert(UTslCheckBox_C_DisplayName_Offset == 0x270, "UTslCheckBox_C::DisplayName offset is not 270");
	auto constexpr UTslCheckBox_C_boolField288_Offset = offsetof(UTslCheckBox_C, boolField288);
	static_assert(UTslCheckBox_C_boolField288_Offset == 0x288, "UTslCheckBox_C::boolField288 offset is not 288");
	auto constexpr UTslCheckBox_C_CheckBoxToggleKeyList_Offset = offsetof(UTslCheckBox_C, CheckBoxToggleKeyList);
	static_assert(UTslCheckBox_C_CheckBoxToggleKeyList_Offset == 0x290, "UTslCheckBox_C::CheckBoxToggleKeyList offset is not 290");
	auto constexpr UTslCheckBox_C_boolField2A0_Offset = offsetof(UTslCheckBox_C, boolField2A0);
	static_assert(UTslCheckBox_C_boolField2A0_Offset == 0x2a0, "UTslCheckBox_C::boolField2A0 offset is not 2a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
