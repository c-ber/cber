#pragma once
#include "UBaseOptionWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UQualitySettingsWidget_C // Size: 0x468
	: public UBaseOptionWidget_C // Size: 0x3F4
{
private:
	typedef UQualitySettingsWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169462); // id32("WidgetBlueprintGeneratedClass QualitySettingsWidget.QualitySettingsWidget_C")
		return ptr;
	}
	uint8_t UnknownData3F4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x3F8 Size: 0x8 - StructProperty QualitySettingsWidget.QualitySettingsWidget_C.UberGraphFrame */
	ExternalPtr<struct UQualityComboBox_C> AnitiAliasingComboBox; /* Ofs: 0x400 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.AnitiAliasingComboBox */
	ExternalPtr<struct UChildOptionTitleWidget_C> ChildOptionTitleWidget; /* Ofs: 0x408 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.ChildOptionTitleWidget */
	ExternalPtr<struct UQualityComboBox_C> EffectComboBox; /* Ofs: 0x410 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.EffectComboBox */
	ExternalPtr<struct UQualityComboBox_C> FoliageComboBox; /* Ofs: 0x418 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.FoliageComboBox */
	ExternalPtr<struct UQualityComboBox_C> MainQualityComboBox; /* Ofs: 0x420 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.MainQualityComboBox */
	ExternalPtr<struct UTslCheckBox_C> MotionBlurCheckBox; /* Ofs: 0x428 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.MotionBlurCheckBox */
	ExternalPtr<struct UQualityComboBox_C> PostProcessComboBox; /* Ofs: 0x430 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.PostProcessComboBox */
	ExternalPtr<struct UQualitySliderWidget_C> ScreenScaleSlider; /* Ofs: 0x438 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.ScreenScaleSlider */
	ExternalPtr<struct UQualityComboBox_C> ShadowsComboBox; /* Ofs: 0x440 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.ShadowsComboBox */
	ExternalPtr<struct UQualityComboBox_C> TextureComboBox; /* Ofs: 0x448 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.TextureComboBox */
	ExternalPtr<struct UVerticalBox> VerticalBox_1; /* Ofs: 0x450 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.VerticalBox_1 */
	ExternalPtr<struct UQualityComboBox_C> ViewDistanceComboBox; /* Ofs: 0x458 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.ViewDistanceComboBox */
	ExternalPtr<struct UTslCheckBox_C> VSyncCheckBox; /* Ofs: 0x460 Size: 0x8 - ObjectProperty QualitySettingsWidget.QualitySettingsWidget_C.VSyncCheckBox */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetAnitiAliasingComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetChildOptionTitleWidget(t_structHelper inst, ExternalPtr<struct UChildOptionTitleWidget_C> value) { inst.WriteOffset(0x408, value); }
	inline bool SetEffectComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x410, value); }
	inline bool SetFoliageComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x418, value); }
	inline bool SetMainQualityComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x420, value); }
	inline bool SetMotionBlurCheckBox(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x428, value); }
	inline bool SetPostProcessComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x430, value); }
	inline bool SetScreenScaleSlider(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x438, value); }
	inline bool SetShadowsComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x440, value); }
	inline bool SetTextureComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x448, value); }
	inline bool SetVerticalBox_1(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x450, value); }
	inline bool SetViewDistanceComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x458, value); }
	inline bool SetVSyncCheckBox(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUQualitySettingsWidget_C = sizeof(UQualitySettingsWidget_C); // 1128
    static_assert(sizeof(UQualitySettingsWidget_C) == 0x468, "Size of UQualitySettingsWidget_C is not correct.");
	auto constexpr UQualitySettingsWidget_C_UberGraphFrame_Offset = offsetof(UQualitySettingsWidget_C, UberGraphFrame);
	static_assert(UQualitySettingsWidget_C_UberGraphFrame_Offset == 0x3f8, "UQualitySettingsWidget_C::UberGraphFrame offset is not 3f8");
	auto constexpr UQualitySettingsWidget_C_AnitiAliasingComboBox_Offset = offsetof(UQualitySettingsWidget_C, AnitiAliasingComboBox);
	static_assert(UQualitySettingsWidget_C_AnitiAliasingComboBox_Offset == 0x400, "UQualitySettingsWidget_C::AnitiAliasingComboBox offset is not 400");
	auto constexpr UQualitySettingsWidget_C_ChildOptionTitleWidget_Offset = offsetof(UQualitySettingsWidget_C, ChildOptionTitleWidget);
	static_assert(UQualitySettingsWidget_C_ChildOptionTitleWidget_Offset == 0x408, "UQualitySettingsWidget_C::ChildOptionTitleWidget offset is not 408");
	auto constexpr UQualitySettingsWidget_C_EffectComboBox_Offset = offsetof(UQualitySettingsWidget_C, EffectComboBox);
	static_assert(UQualitySettingsWidget_C_EffectComboBox_Offset == 0x410, "UQualitySettingsWidget_C::EffectComboBox offset is not 410");
	auto constexpr UQualitySettingsWidget_C_FoliageComboBox_Offset = offsetof(UQualitySettingsWidget_C, FoliageComboBox);
	static_assert(UQualitySettingsWidget_C_FoliageComboBox_Offset == 0x418, "UQualitySettingsWidget_C::FoliageComboBox offset is not 418");
	auto constexpr UQualitySettingsWidget_C_MainQualityComboBox_Offset = offsetof(UQualitySettingsWidget_C, MainQualityComboBox);
	static_assert(UQualitySettingsWidget_C_MainQualityComboBox_Offset == 0x420, "UQualitySettingsWidget_C::MainQualityComboBox offset is not 420");
	auto constexpr UQualitySettingsWidget_C_MotionBlurCheckBox_Offset = offsetof(UQualitySettingsWidget_C, MotionBlurCheckBox);
	static_assert(UQualitySettingsWidget_C_MotionBlurCheckBox_Offset == 0x428, "UQualitySettingsWidget_C::MotionBlurCheckBox offset is not 428");
	auto constexpr UQualitySettingsWidget_C_PostProcessComboBox_Offset = offsetof(UQualitySettingsWidget_C, PostProcessComboBox);
	static_assert(UQualitySettingsWidget_C_PostProcessComboBox_Offset == 0x430, "UQualitySettingsWidget_C::PostProcessComboBox offset is not 430");
	auto constexpr UQualitySettingsWidget_C_ScreenScaleSlider_Offset = offsetof(UQualitySettingsWidget_C, ScreenScaleSlider);
	static_assert(UQualitySettingsWidget_C_ScreenScaleSlider_Offset == 0x438, "UQualitySettingsWidget_C::ScreenScaleSlider offset is not 438");
	auto constexpr UQualitySettingsWidget_C_ShadowsComboBox_Offset = offsetof(UQualitySettingsWidget_C, ShadowsComboBox);
	static_assert(UQualitySettingsWidget_C_ShadowsComboBox_Offset == 0x440, "UQualitySettingsWidget_C::ShadowsComboBox offset is not 440");
	auto constexpr UQualitySettingsWidget_C_TextureComboBox_Offset = offsetof(UQualitySettingsWidget_C, TextureComboBox);
	static_assert(UQualitySettingsWidget_C_TextureComboBox_Offset == 0x448, "UQualitySettingsWidget_C::TextureComboBox offset is not 448");
	auto constexpr UQualitySettingsWidget_C_VerticalBox_1_Offset = offsetof(UQualitySettingsWidget_C, VerticalBox_1);
	static_assert(UQualitySettingsWidget_C_VerticalBox_1_Offset == 0x450, "UQualitySettingsWidget_C::VerticalBox_1 offset is not 450");
	auto constexpr UQualitySettingsWidget_C_ViewDistanceComboBox_Offset = offsetof(UQualitySettingsWidget_C, ViewDistanceComboBox);
	static_assert(UQualitySettingsWidget_C_ViewDistanceComboBox_Offset == 0x458, "UQualitySettingsWidget_C::ViewDistanceComboBox offset is not 458");
	auto constexpr UQualitySettingsWidget_C_VSyncCheckBox_Offset = offsetof(UQualitySettingsWidget_C, VSyncCheckBox);
	static_assert(UQualitySettingsWidget_C_VSyncCheckBox_Offset == 0x460, "UQualitySettingsWidget_C::VSyncCheckBox offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
