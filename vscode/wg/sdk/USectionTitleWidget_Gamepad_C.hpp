#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USectionTitleWidget_Gamepad_C // Size: 0x28A
	: public UUserWidget // Size: 0x248
{
private:
	typedef USectionTitleWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(62166); // id32("WidgetBlueprintGeneratedClass SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UImage> FocusImage; /* Ofs: 0x250 Size: 0x8 - ObjectProperty SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.FocusImage */
	ExternalPtr<struct UTextBlock> TitleText; /* Ofs: 0x258 Size: 0x8 - ObjectProperty SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.TitleText */
	ExternalPtr<struct UVerticalBox> VerticalBox_1; /* Ofs: 0x260 Size: 0x8 - ObjectProperty SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.VerticalBox_1 */
	FText Title; /* Ofs: 0x268 Size: 0x18 - TextProperty SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Title */
	ExternalPtr<struct UMaterialInstanceDynamic> FocusMaterial; /* Ofs: 0x280 Size: 0x8 - ObjectProperty SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.FocusMaterial */
	uint8_t boolField288;
	uint8_t boolField289;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetFocusImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetTitleText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x258, value); }
	inline bool SetVerticalBox_1(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x260, value); }
	inline bool SetTitle(t_structHelper inst, FText value) { inst.WriteOffset(0x268, value); }
	inline bool SetFocusMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x280, value); }
	inline bool bSubFocus()
	{
		return boolField288& 0x1;
	}
	inline bool SetbSubFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x288, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bFocus()
	{
		return boolField289& 0x1;
	}
	inline bool SetbFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x289, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSectionTitleWidget_Gamepad_C = sizeof(USectionTitleWidget_Gamepad_C); // 650
    static_assert(sizeof(USectionTitleWidget_Gamepad_C) == 0x28A, "Size of USectionTitleWidget_Gamepad_C is not correct.");
	auto constexpr USectionTitleWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(USectionTitleWidget_Gamepad_C, UberGraphFrame);
	static_assert(USectionTitleWidget_Gamepad_C_UberGraphFrame_Offset == 0x248, "USectionTitleWidget_Gamepad_C::UberGraphFrame offset is not 248");
	auto constexpr USectionTitleWidget_Gamepad_C_FocusImage_Offset = offsetof(USectionTitleWidget_Gamepad_C, FocusImage);
	static_assert(USectionTitleWidget_Gamepad_C_FocusImage_Offset == 0x250, "USectionTitleWidget_Gamepad_C::FocusImage offset is not 250");
	auto constexpr USectionTitleWidget_Gamepad_C_TitleText_Offset = offsetof(USectionTitleWidget_Gamepad_C, TitleText);
	static_assert(USectionTitleWidget_Gamepad_C_TitleText_Offset == 0x258, "USectionTitleWidget_Gamepad_C::TitleText offset is not 258");
	auto constexpr USectionTitleWidget_Gamepad_C_VerticalBox_1_Offset = offsetof(USectionTitleWidget_Gamepad_C, VerticalBox_1);
	static_assert(USectionTitleWidget_Gamepad_C_VerticalBox_1_Offset == 0x260, "USectionTitleWidget_Gamepad_C::VerticalBox_1 offset is not 260");
	auto constexpr USectionTitleWidget_Gamepad_C_Title_Offset = offsetof(USectionTitleWidget_Gamepad_C, Title);
	static_assert(USectionTitleWidget_Gamepad_C_Title_Offset == 0x268, "USectionTitleWidget_Gamepad_C::Title offset is not 268");
	auto constexpr USectionTitleWidget_Gamepad_C_FocusMaterial_Offset = offsetof(USectionTitleWidget_Gamepad_C, FocusMaterial);
	static_assert(USectionTitleWidget_Gamepad_C_FocusMaterial_Offset == 0x280, "USectionTitleWidget_Gamepad_C::FocusMaterial offset is not 280");
	auto constexpr USectionTitleWidget_Gamepad_C_boolField288_Offset = offsetof(USectionTitleWidget_Gamepad_C, boolField288);
	static_assert(USectionTitleWidget_Gamepad_C_boolField288_Offset == 0x288, "USectionTitleWidget_Gamepad_C::boolField288 offset is not 288");
	auto constexpr USectionTitleWidget_Gamepad_C_boolField289_Offset = offsetof(USectionTitleWidget_Gamepad_C, boolField289);
	static_assert(USectionTitleWidget_Gamepad_C_boolField289_Offset == 0x289, "USectionTitleWidget_Gamepad_C::boolField289 offset is not 289");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
