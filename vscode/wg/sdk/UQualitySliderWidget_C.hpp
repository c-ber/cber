#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UQualitySliderWidget_C // Size: 0x2E0
	: public UUserWidget // Size: 0x248
{
private:
	typedef UQualitySliderWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169409); // id32("WidgetBlueprintGeneratedClass QualitySliderWidget.QualitySliderWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty QualitySliderWidget.QualitySliderWidget_C.UberGraphFrame */
	ExternalPtr<struct UButton> Button_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty QualitySliderWidget.QualitySliderWidget_C.Button_1 */
	ExternalPtr<struct UEditableText> EditText; /* Ofs: 0x258 Size: 0x8 - ObjectProperty QualitySliderWidget.QualitySliderWidget_C.EditText */
	ExternalPtr<struct UBorder> FocusImage; /* Ofs: 0x260 Size: 0x8 - ObjectProperty QualitySliderWidget.QualitySliderWidget_C.FocusImage */
	ExternalPtr<struct UButton> LeftButton; /* Ofs: 0x268 Size: 0x8 - ObjectProperty QualitySliderWidget.QualitySliderWidget_C.LeftButton */
	ExternalPtr<struct USlider> QualitySlider; /* Ofs: 0x270 Size: 0x8 - ObjectProperty QualitySliderWidget.QualitySliderWidget_C.QualitySlider */
	ExternalPtr<struct UButton> RightButotn; /* Ofs: 0x278 Size: 0x8 - ObjectProperty QualitySliderWidget.QualitySliderWidget_C.RightButotn */
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x280 Size: 0x8 - ObjectProperty QualitySliderWidget.QualitySliderWidget_C.TextBlock_1 */
	float RangeMin; /* Ofs: 0x288 Size: 0x4 - FloatProperty QualitySliderWidget.QualitySliderWidget_C.RangeMin */
	float RangeMax; /* Ofs: 0x28C Size: 0x4 - FloatProperty QualitySliderWidget.QualitySliderWidget_C.RangeMax */
	FText QualityName; /* Ofs: 0x290 Size: 0x18 - TextProperty QualitySliderWidget.QualitySliderWidget_C.QualityName */
	FName SensitiveName; /* Ofs: 0x2A8 Size: 0x8 - NameProperty QualitySliderWidget.QualitySliderWidget_C.SensitiveName */
	TArray<struct FKey> IncreaseValueKeyList; /* Ofs: 0x2B0 Size: 0x10 - ArrayProperty QualitySliderWidget.QualitySliderWidget_C.IncreaseValueKeyList */
	TArray<struct FKey> DecreaseValueKeyList; /* Ofs: 0x2C0 Size: 0x10 - ArrayProperty QualitySliderWidget.QualitySliderWidget_C.DecreaseValueKeyList */
	float KeyUpTime; /* Ofs: 0x2D0 Size: 0x4 - FloatProperty QualitySliderWidget.QualitySliderWidget_C.KeyUpTime */
	uint8_t boolField2D4;
	uint8_t UnknownData2D5[0x3];
	float KeyDownStartTime; /* Ofs: 0x2D8 Size: 0x4 - FloatProperty QualitySliderWidget.QualitySliderWidget_C.KeyDownStartTime */
	int32_t FractionDigitsNum; /* Ofs: 0x2DC Size: 0x4 - IntProperty QualitySliderWidget.QualitySliderWidget_C.FractionDigitsNum */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetButton_1(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetEditText(t_structHelper inst, ExternalPtr<struct UEditableText> value) { inst.WriteOffset(0x258, value); }
	inline bool SetFocusImage(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x260, value); }
	inline bool SetLeftButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x268, value); }
	inline bool SetQualitySlider(t_structHelper inst, ExternalPtr<struct USlider> value) { inst.WriteOffset(0x270, value); }
	inline bool SetRightButotn(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x278, value); }
	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x280, value); }
	inline bool SetRangeMin(t_structHelper inst, float value) { inst.WriteOffset(0x288, value); }
	inline bool SetRangeMax(t_structHelper inst, float value) { inst.WriteOffset(0x28C, value); }
	inline bool SetQualityName(t_structHelper inst, FText value) { inst.WriteOffset(0x290, value); }
	inline bool SetSensitiveName(t_structHelper inst, FName value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetIncreaseValueKeyList(t_structHelper inst, TArray<struct FKey> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetDecreaseValueKeyList(t_structHelper inst, TArray<struct FKey> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetKeyUpTime(t_structHelper inst, float value) { inst.WriteOffset(0x2D0, value); }
	inline bool bPressed()
	{
		return boolField2D4& 0x1;
	}
	inline bool SetbPressed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2D4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetKeyDownStartTime(t_structHelper inst, float value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetFractionDigitsNum(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2DC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUQualitySliderWidget_C = sizeof(UQualitySliderWidget_C); // 736
    static_assert(sizeof(UQualitySliderWidget_C) == 0x2E0, "Size of UQualitySliderWidget_C is not correct.");
	auto constexpr UQualitySliderWidget_C_UberGraphFrame_Offset = offsetof(UQualitySliderWidget_C, UberGraphFrame);
	static_assert(UQualitySliderWidget_C_UberGraphFrame_Offset == 0x248, "UQualitySliderWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UQualitySliderWidget_C_Button_1_Offset = offsetof(UQualitySliderWidget_C, Button_1);
	static_assert(UQualitySliderWidget_C_Button_1_Offset == 0x250, "UQualitySliderWidget_C::Button_1 offset is not 250");
	auto constexpr UQualitySliderWidget_C_EditText_Offset = offsetof(UQualitySliderWidget_C, EditText);
	static_assert(UQualitySliderWidget_C_EditText_Offset == 0x258, "UQualitySliderWidget_C::EditText offset is not 258");
	auto constexpr UQualitySliderWidget_C_FocusImage_Offset = offsetof(UQualitySliderWidget_C, FocusImage);
	static_assert(UQualitySliderWidget_C_FocusImage_Offset == 0x260, "UQualitySliderWidget_C::FocusImage offset is not 260");
	auto constexpr UQualitySliderWidget_C_LeftButton_Offset = offsetof(UQualitySliderWidget_C, LeftButton);
	static_assert(UQualitySliderWidget_C_LeftButton_Offset == 0x268, "UQualitySliderWidget_C::LeftButton offset is not 268");
	auto constexpr UQualitySliderWidget_C_QualitySlider_Offset = offsetof(UQualitySliderWidget_C, QualitySlider);
	static_assert(UQualitySliderWidget_C_QualitySlider_Offset == 0x270, "UQualitySliderWidget_C::QualitySlider offset is not 270");
	auto constexpr UQualitySliderWidget_C_RightButotn_Offset = offsetof(UQualitySliderWidget_C, RightButotn);
	static_assert(UQualitySliderWidget_C_RightButotn_Offset == 0x278, "UQualitySliderWidget_C::RightButotn offset is not 278");
	auto constexpr UQualitySliderWidget_C_TextBlock_1_Offset = offsetof(UQualitySliderWidget_C, TextBlock_1);
	static_assert(UQualitySliderWidget_C_TextBlock_1_Offset == 0x280, "UQualitySliderWidget_C::TextBlock_1 offset is not 280");
	auto constexpr UQualitySliderWidget_C_RangeMin_Offset = offsetof(UQualitySliderWidget_C, RangeMin);
	static_assert(UQualitySliderWidget_C_RangeMin_Offset == 0x288, "UQualitySliderWidget_C::RangeMin offset is not 288");
	auto constexpr UQualitySliderWidget_C_RangeMax_Offset = offsetof(UQualitySliderWidget_C, RangeMax);
	static_assert(UQualitySliderWidget_C_RangeMax_Offset == 0x28c, "UQualitySliderWidget_C::RangeMax offset is not 28c");
	auto constexpr UQualitySliderWidget_C_QualityName_Offset = offsetof(UQualitySliderWidget_C, QualityName);
	static_assert(UQualitySliderWidget_C_QualityName_Offset == 0x290, "UQualitySliderWidget_C::QualityName offset is not 290");
	auto constexpr UQualitySliderWidget_C_SensitiveName_Offset = offsetof(UQualitySliderWidget_C, SensitiveName);
	static_assert(UQualitySliderWidget_C_SensitiveName_Offset == 0x2a8, "UQualitySliderWidget_C::SensitiveName offset is not 2a8");
	auto constexpr UQualitySliderWidget_C_IncreaseValueKeyList_Offset = offsetof(UQualitySliderWidget_C, IncreaseValueKeyList);
	static_assert(UQualitySliderWidget_C_IncreaseValueKeyList_Offset == 0x2b0, "UQualitySliderWidget_C::IncreaseValueKeyList offset is not 2b0");
	auto constexpr UQualitySliderWidget_C_DecreaseValueKeyList_Offset = offsetof(UQualitySliderWidget_C, DecreaseValueKeyList);
	static_assert(UQualitySliderWidget_C_DecreaseValueKeyList_Offset == 0x2c0, "UQualitySliderWidget_C::DecreaseValueKeyList offset is not 2c0");
	auto constexpr UQualitySliderWidget_C_KeyUpTime_Offset = offsetof(UQualitySliderWidget_C, KeyUpTime);
	static_assert(UQualitySliderWidget_C_KeyUpTime_Offset == 0x2d0, "UQualitySliderWidget_C::KeyUpTime offset is not 2d0");
	auto constexpr UQualitySliderWidget_C_boolField2D4_Offset = offsetof(UQualitySliderWidget_C, boolField2D4);
	static_assert(UQualitySliderWidget_C_boolField2D4_Offset == 0x2d4, "UQualitySliderWidget_C::boolField2D4 offset is not 2d4");
	auto constexpr UQualitySliderWidget_C_KeyDownStartTime_Offset = offsetof(UQualitySliderWidget_C, KeyDownStartTime);
	static_assert(UQualitySliderWidget_C_KeyDownStartTime_Offset == 0x2d8, "UQualitySliderWidget_C::KeyDownStartTime offset is not 2d8");
	auto constexpr UQualitySliderWidget_C_FractionDigitsNum_Offset = offsetof(UQualitySliderWidget_C, FractionDigitsNum);
	static_assert(UQualitySliderWidget_C_FractionDigitsNum_Offset == 0x2dc, "UQualitySliderWidget_C::FractionDigitsNum offset is not 2dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
