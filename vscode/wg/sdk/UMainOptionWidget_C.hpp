#pragma once
#include "UInputHookingWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMainOptionWidget_C // Size: 0x3E8
	: public UInputHookingWidget_C // Size: 0x330
{
private:
	typedef UMainOptionWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(170040); // id32("WidgetBlueprintGeneratedClass MainOptionWidget.MainOptionWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x330 Size: 0x8 - StructProperty MainOptionWidget.MainOptionWidget_C.UberGraphFrame */
	ExternalPtr<struct UOptionSettingsButotn_C> ApplyButton; /* Ofs: 0x338 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.ApplyButton */
	ExternalPtr<struct UOptionSettingsButotn_C> CancelButton; /* Ofs: 0x340 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.CancelButton */
	ExternalPtr<struct UOptionSettingsButotn_C> DefaultButton; /* Ofs: 0x348 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.DefaultButton */
	ExternalPtr<struct UGameplayOptionWidget_BP_C> GameOptionWidget_BP; /* Ofs: 0x350 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.GameOptionWidget_BP */
	ExternalPtr<struct UImage> Image_2; /* Ofs: 0x358 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.Image_2 */
	ExternalPtr<struct UImage> Image_6; /* Ofs: 0x360 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.Image_6 */
	ExternalPtr<struct UKeyOptionWidget_BP_C> KeyOptionWidget_BP; /* Ofs: 0x368 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.KeyOptionWidget_BP */
	ExternalPtr<struct UOptionButton_C> OptionButton0; /* Ofs: 0x370 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.OptionButton0 */
	ExternalPtr<struct UOptionButton_C> OptionButton1; /* Ofs: 0x378 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.OptionButton1 */
	ExternalPtr<struct UOptionButton_C> OptionButton2; /* Ofs: 0x380 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.OptionButton2 */
	ExternalPtr<struct UOptionButton_C> OptionButton3; /* Ofs: 0x388 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.OptionButton3 */
	ExternalPtr<struct UHorizontalBox> OptionButtonHorizontalBox; /* Ofs: 0x390 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.OptionButtonHorizontalBox */
	ExternalPtr<struct UWidgetSwitcher> OptionSwitch; /* Ofs: 0x398 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.OptionSwitch */
	ExternalPtr<struct UOptionTitleWidget_C> OptionTitleWidget; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.OptionTitleWidget */
	ExternalPtr<struct UOptionSettingsButotn_C> ResetButton; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.ResetButton */
	ExternalPtr<struct USoundOptionWidget_C> SoundOptionWidget; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.SoundOptionWidget */
	ExternalPtr<struct UUIBlurBackground_C> UIBlurBackground; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.UIBlurBackground */
	ExternalPtr<struct UGraphicOptionWidget_C> VedioOptionWidget; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.VedioOptionWidget */
	ExternalPtr<struct UTslBaseOptionWidget> SelectedOption; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty MainOptionWidget.MainOptionWidget_C.SelectedOption */
	FText DisplayOptoinText; /* Ofs: 0x3D0 Size: 0x18 - TextProperty MainOptionWidget.MainOptionWidget_C.DisplayOptoinText */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x330, value); }
	inline bool SetApplyButton(t_structHelper inst, ExternalPtr<struct UOptionSettingsButotn_C> value) { inst.WriteOffset(0x338, value); }
	inline bool SetCancelButton(t_structHelper inst, ExternalPtr<struct UOptionSettingsButotn_C> value) { inst.WriteOffset(0x340, value); }
	inline bool SetDefaultButton(t_structHelper inst, ExternalPtr<struct UOptionSettingsButotn_C> value) { inst.WriteOffset(0x348, value); }
	inline bool SetGameOptionWidget_BP(t_structHelper inst, ExternalPtr<struct UGameplayOptionWidget_BP_C> value) { inst.WriteOffset(0x350, value); }
	inline bool SetImage_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x358, value); }
	inline bool SetImage_6(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x360, value); }
	inline bool SetKeyOptionWidget_BP(t_structHelper inst, ExternalPtr<struct UKeyOptionWidget_BP_C> value) { inst.WriteOffset(0x368, value); }
	inline bool SetOptionButton0(t_structHelper inst, ExternalPtr<struct UOptionButton_C> value) { inst.WriteOffset(0x370, value); }
	inline bool SetOptionButton1(t_structHelper inst, ExternalPtr<struct UOptionButton_C> value) { inst.WriteOffset(0x378, value); }
	inline bool SetOptionButton2(t_structHelper inst, ExternalPtr<struct UOptionButton_C> value) { inst.WriteOffset(0x380, value); }
	inline bool SetOptionButton3(t_structHelper inst, ExternalPtr<struct UOptionButton_C> value) { inst.WriteOffset(0x388, value); }
	inline bool SetOptionButtonHorizontalBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x390, value); }
	inline bool SetOptionSwitch(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x398, value); }
	inline bool SetOptionTitleWidget(t_structHelper inst, ExternalPtr<struct UOptionTitleWidget_C> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetResetButton(t_structHelper inst, ExternalPtr<struct UOptionSettingsButotn_C> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetSoundOptionWidget(t_structHelper inst, ExternalPtr<struct USoundOptionWidget_C> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetUIBlurBackground(t_structHelper inst, ExternalPtr<struct UUIBlurBackground_C> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetVedioOptionWidget(t_structHelper inst, ExternalPtr<struct UGraphicOptionWidget_C> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetSelectedOption(t_structHelper inst, ExternalPtr<struct UTslBaseOptionWidget> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetDisplayOptoinText(t_structHelper inst, FText value) { inst.WriteOffset(0x3D0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMainOptionWidget_C = sizeof(UMainOptionWidget_C); // 1000
    static_assert(sizeof(UMainOptionWidget_C) == 0x3E8, "Size of UMainOptionWidget_C is not correct.");
	auto constexpr UMainOptionWidget_C_UberGraphFrame_Offset = offsetof(UMainOptionWidget_C, UberGraphFrame);
	static_assert(UMainOptionWidget_C_UberGraphFrame_Offset == 0x330, "UMainOptionWidget_C::UberGraphFrame offset is not 330");
	auto constexpr UMainOptionWidget_C_ApplyButton_Offset = offsetof(UMainOptionWidget_C, ApplyButton);
	static_assert(UMainOptionWidget_C_ApplyButton_Offset == 0x338, "UMainOptionWidget_C::ApplyButton offset is not 338");
	auto constexpr UMainOptionWidget_C_CancelButton_Offset = offsetof(UMainOptionWidget_C, CancelButton);
	static_assert(UMainOptionWidget_C_CancelButton_Offset == 0x340, "UMainOptionWidget_C::CancelButton offset is not 340");
	auto constexpr UMainOptionWidget_C_DefaultButton_Offset = offsetof(UMainOptionWidget_C, DefaultButton);
	static_assert(UMainOptionWidget_C_DefaultButton_Offset == 0x348, "UMainOptionWidget_C::DefaultButton offset is not 348");
	auto constexpr UMainOptionWidget_C_GameOptionWidget_BP_Offset = offsetof(UMainOptionWidget_C, GameOptionWidget_BP);
	static_assert(UMainOptionWidget_C_GameOptionWidget_BP_Offset == 0x350, "UMainOptionWidget_C::GameOptionWidget_BP offset is not 350");
	auto constexpr UMainOptionWidget_C_Image_2_Offset = offsetof(UMainOptionWidget_C, Image_2);
	static_assert(UMainOptionWidget_C_Image_2_Offset == 0x358, "UMainOptionWidget_C::Image_2 offset is not 358");
	auto constexpr UMainOptionWidget_C_Image_6_Offset = offsetof(UMainOptionWidget_C, Image_6);
	static_assert(UMainOptionWidget_C_Image_6_Offset == 0x360, "UMainOptionWidget_C::Image_6 offset is not 360");
	auto constexpr UMainOptionWidget_C_KeyOptionWidget_BP_Offset = offsetof(UMainOptionWidget_C, KeyOptionWidget_BP);
	static_assert(UMainOptionWidget_C_KeyOptionWidget_BP_Offset == 0x368, "UMainOptionWidget_C::KeyOptionWidget_BP offset is not 368");
	auto constexpr UMainOptionWidget_C_OptionButton0_Offset = offsetof(UMainOptionWidget_C, OptionButton0);
	static_assert(UMainOptionWidget_C_OptionButton0_Offset == 0x370, "UMainOptionWidget_C::OptionButton0 offset is not 370");
	auto constexpr UMainOptionWidget_C_OptionButton1_Offset = offsetof(UMainOptionWidget_C, OptionButton1);
	static_assert(UMainOptionWidget_C_OptionButton1_Offset == 0x378, "UMainOptionWidget_C::OptionButton1 offset is not 378");
	auto constexpr UMainOptionWidget_C_OptionButton2_Offset = offsetof(UMainOptionWidget_C, OptionButton2);
	static_assert(UMainOptionWidget_C_OptionButton2_Offset == 0x380, "UMainOptionWidget_C::OptionButton2 offset is not 380");
	auto constexpr UMainOptionWidget_C_OptionButton3_Offset = offsetof(UMainOptionWidget_C, OptionButton3);
	static_assert(UMainOptionWidget_C_OptionButton3_Offset == 0x388, "UMainOptionWidget_C::OptionButton3 offset is not 388");
	auto constexpr UMainOptionWidget_C_OptionButtonHorizontalBox_Offset = offsetof(UMainOptionWidget_C, OptionButtonHorizontalBox);
	static_assert(UMainOptionWidget_C_OptionButtonHorizontalBox_Offset == 0x390, "UMainOptionWidget_C::OptionButtonHorizontalBox offset is not 390");
	auto constexpr UMainOptionWidget_C_OptionSwitch_Offset = offsetof(UMainOptionWidget_C, OptionSwitch);
	static_assert(UMainOptionWidget_C_OptionSwitch_Offset == 0x398, "UMainOptionWidget_C::OptionSwitch offset is not 398");
	auto constexpr UMainOptionWidget_C_OptionTitleWidget_Offset = offsetof(UMainOptionWidget_C, OptionTitleWidget);
	static_assert(UMainOptionWidget_C_OptionTitleWidget_Offset == 0x3a0, "UMainOptionWidget_C::OptionTitleWidget offset is not 3a0");
	auto constexpr UMainOptionWidget_C_ResetButton_Offset = offsetof(UMainOptionWidget_C, ResetButton);
	static_assert(UMainOptionWidget_C_ResetButton_Offset == 0x3a8, "UMainOptionWidget_C::ResetButton offset is not 3a8");
	auto constexpr UMainOptionWidget_C_SoundOptionWidget_Offset = offsetof(UMainOptionWidget_C, SoundOptionWidget);
	static_assert(UMainOptionWidget_C_SoundOptionWidget_Offset == 0x3b0, "UMainOptionWidget_C::SoundOptionWidget offset is not 3b0");
	auto constexpr UMainOptionWidget_C_UIBlurBackground_Offset = offsetof(UMainOptionWidget_C, UIBlurBackground);
	static_assert(UMainOptionWidget_C_UIBlurBackground_Offset == 0x3b8, "UMainOptionWidget_C::UIBlurBackground offset is not 3b8");
	auto constexpr UMainOptionWidget_C_VedioOptionWidget_Offset = offsetof(UMainOptionWidget_C, VedioOptionWidget);
	static_assert(UMainOptionWidget_C_VedioOptionWidget_Offset == 0x3c0, "UMainOptionWidget_C::VedioOptionWidget offset is not 3c0");
	auto constexpr UMainOptionWidget_C_SelectedOption_Offset = offsetof(UMainOptionWidget_C, SelectedOption);
	static_assert(UMainOptionWidget_C_SelectedOption_Offset == 0x3c8, "UMainOptionWidget_C::SelectedOption offset is not 3c8");
	auto constexpr UMainOptionWidget_C_DisplayOptoinText_Offset = offsetof(UMainOptionWidget_C, DisplayOptoinText);
	static_assert(UMainOptionWidget_C_DisplayOptoinText_Offset == 0x3d0, "UMainOptionWidget_C::DisplayOptoinText offset is not 3d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
