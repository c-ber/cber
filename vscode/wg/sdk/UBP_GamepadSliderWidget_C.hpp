#pragma once
#include "UTslGamepadSliderWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadSliderWidget_C // Size: 0x4C8
	: public UTslGamepadSliderWidget // Size: 0x4A0
{
private:
	typedef UBP_GamepadSliderWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(177930); // id32("WidgetBlueprintGeneratedClass BP_GamepadSliderWidget.BP_GamepadSliderWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x4A0 Size: 0x8 - StructProperty BP_GamepadSliderWidget.BP_GamepadSliderWidget_C.UberGraphFrame */
	ExternalPtr<struct UBorder> Border_5; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty BP_GamepadSliderWidget.BP_GamepadSliderWidget_C.Border_5 */
	ExternalPtr<struct USlider> MainSlider; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty BP_GamepadSliderWidget.BP_GamepadSliderWidget_C.MainSlider */
	ExternalPtr<struct UTextBlock> TitleTextBox; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty BP_GamepadSliderWidget.BP_GamepadSliderWidget_C.TitleTextBox */
	ExternalPtr<struct UTextBlock> ValueText; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty BP_GamepadSliderWidget.BP_GamepadSliderWidget_C.ValueText */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetBorder_5(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetMainSlider(t_structHelper inst, ExternalPtr<struct USlider> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetTitleTextBox(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetValueText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x4C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadSliderWidget_C = sizeof(UBP_GamepadSliderWidget_C); // 1224
    static_assert(sizeof(UBP_GamepadSliderWidget_C) == 0x4C8, "Size of UBP_GamepadSliderWidget_C is not correct.");
	auto constexpr UBP_GamepadSliderWidget_C_UberGraphFrame_Offset = offsetof(UBP_GamepadSliderWidget_C, UberGraphFrame);
	static_assert(UBP_GamepadSliderWidget_C_UberGraphFrame_Offset == 0x4a0, "UBP_GamepadSliderWidget_C::UberGraphFrame offset is not 4a0");
	auto constexpr UBP_GamepadSliderWidget_C_Border_5_Offset = offsetof(UBP_GamepadSliderWidget_C, Border_5);
	static_assert(UBP_GamepadSliderWidget_C_Border_5_Offset == 0x4a8, "UBP_GamepadSliderWidget_C::Border_5 offset is not 4a8");
	auto constexpr UBP_GamepadSliderWidget_C_MainSlider_Offset = offsetof(UBP_GamepadSliderWidget_C, MainSlider);
	static_assert(UBP_GamepadSliderWidget_C_MainSlider_Offset == 0x4b0, "UBP_GamepadSliderWidget_C::MainSlider offset is not 4b0");
	auto constexpr UBP_GamepadSliderWidget_C_TitleTextBox_Offset = offsetof(UBP_GamepadSliderWidget_C, TitleTextBox);
	static_assert(UBP_GamepadSliderWidget_C_TitleTextBox_Offset == 0x4b8, "UBP_GamepadSliderWidget_C::TitleTextBox offset is not 4b8");
	auto constexpr UBP_GamepadSliderWidget_C_ValueText_Offset = offsetof(UBP_GamepadSliderWidget_C, ValueText);
	static_assert(UBP_GamepadSliderWidget_C_ValueText_Offset == 0x4c0, "UBP_GamepadSliderWidget_C::ValueText offset is not 4c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
