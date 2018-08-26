#pragma once
#include "UBaseOptionWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundSettingWidget_C // Size: 0x458
	: public UBaseOptionWidget_C // Size: 0x3F4
{
private:
	typedef USoundSettingWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169241); // id32("WidgetBlueprintGeneratedClass SoundSettingWidget.SoundSettingWidget_C")
		return ptr;
	}
	uint8_t UnknownData3F4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x3F8 Size: 0x8 - StructProperty SoundSettingWidget.SoundSettingWidget_C.UberGraphFrame */
	ExternalPtr<struct UTslCheckBox_C> BGMSoundCheckBox; /* Ofs: 0x400 Size: 0x8 - ObjectProperty SoundSettingWidget.SoundSettingWidget_C.BGMSoundCheckBox */
	ExternalPtr<struct UQualitySliderWidget_C> BGMSoundSliderWidget; /* Ofs: 0x408 Size: 0x8 - ObjectProperty SoundSettingWidget.SoundSettingWidget_C.BGMSoundSliderWidget */
	ExternalPtr<struct UChildOptionTitleWidget_C> ChildOptionTitleWidget; /* Ofs: 0x410 Size: 0x8 - ObjectProperty SoundSettingWidget.SoundSettingWidget_C.ChildOptionTitleWidget */
	ExternalPtr<struct UTslCheckBox_C> EffectSoundCheckBox; /* Ofs: 0x418 Size: 0x8 - ObjectProperty SoundSettingWidget.SoundSettingWidget_C.EffectSoundCheckBox */
	ExternalPtr<struct UQualitySliderWidget_C> EffectSoundSliderWidget; /* Ofs: 0x420 Size: 0x8 - ObjectProperty SoundSettingWidget.SoundSettingWidget_C.EffectSoundSliderWidget */
	ExternalPtr<struct UTslCheckBox_C> HrtfGunShotSoundCheckBox; /* Ofs: 0x428 Size: 0x8 - ObjectProperty SoundSettingWidget.SoundSettingWidget_C.HrtfGunShotSoundCheckBox */
	ExternalPtr<struct UVerticalBox> MainPanel; /* Ofs: 0x430 Size: 0x8 - ObjectProperty SoundSettingWidget.SoundSettingWidget_C.MainPanel */
	ExternalPtr<struct UTslCheckBox_C> MasterSoundCheckBox; /* Ofs: 0x438 Size: 0x8 - ObjectProperty SoundSettingWidget.SoundSettingWidget_C.MasterSoundCheckBox */
	ExternalPtr<struct UQualitySliderWidget_C> MasterSoundSliderWidget; /* Ofs: 0x440 Size: 0x8 - ObjectProperty SoundSettingWidget.SoundSettingWidget_C.MasterSoundSliderWidget */
	ExternalPtr<struct UTslCheckBox_C> UISoundCheckBox; /* Ofs: 0x448 Size: 0x8 - ObjectProperty SoundSettingWidget.SoundSettingWidget_C.UISoundCheckBox */
	ExternalPtr<struct UQualitySliderWidget_C> UISoundSliderWidget; /* Ofs: 0x450 Size: 0x8 - ObjectProperty SoundSettingWidget.SoundSettingWidget_C.UISoundSliderWidget */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetBGMSoundCheckBox(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetBGMSoundSliderWidget(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x408, value); }
	inline bool SetChildOptionTitleWidget(t_structHelper inst, ExternalPtr<struct UChildOptionTitleWidget_C> value) { inst.WriteOffset(0x410, value); }
	inline bool SetEffectSoundCheckBox(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x418, value); }
	inline bool SetEffectSoundSliderWidget(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x420, value); }
	inline bool SetHrtfGunShotSoundCheckBox(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x428, value); }
	inline bool SetMainPanel(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x430, value); }
	inline bool SetMasterSoundCheckBox(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x438, value); }
	inline bool SetMasterSoundSliderWidget(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x440, value); }
	inline bool SetUISoundCheckBox(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x448, value); }
	inline bool SetUISoundSliderWidget(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x450, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundSettingWidget_C = sizeof(USoundSettingWidget_C); // 1112
    static_assert(sizeof(USoundSettingWidget_C) == 0x458, "Size of USoundSettingWidget_C is not correct.");
	auto constexpr USoundSettingWidget_C_UberGraphFrame_Offset = offsetof(USoundSettingWidget_C, UberGraphFrame);
	static_assert(USoundSettingWidget_C_UberGraphFrame_Offset == 0x3f8, "USoundSettingWidget_C::UberGraphFrame offset is not 3f8");
	auto constexpr USoundSettingWidget_C_BGMSoundCheckBox_Offset = offsetof(USoundSettingWidget_C, BGMSoundCheckBox);
	static_assert(USoundSettingWidget_C_BGMSoundCheckBox_Offset == 0x400, "USoundSettingWidget_C::BGMSoundCheckBox offset is not 400");
	auto constexpr USoundSettingWidget_C_BGMSoundSliderWidget_Offset = offsetof(USoundSettingWidget_C, BGMSoundSliderWidget);
	static_assert(USoundSettingWidget_C_BGMSoundSliderWidget_Offset == 0x408, "USoundSettingWidget_C::BGMSoundSliderWidget offset is not 408");
	auto constexpr USoundSettingWidget_C_ChildOptionTitleWidget_Offset = offsetof(USoundSettingWidget_C, ChildOptionTitleWidget);
	static_assert(USoundSettingWidget_C_ChildOptionTitleWidget_Offset == 0x410, "USoundSettingWidget_C::ChildOptionTitleWidget offset is not 410");
	auto constexpr USoundSettingWidget_C_EffectSoundCheckBox_Offset = offsetof(USoundSettingWidget_C, EffectSoundCheckBox);
	static_assert(USoundSettingWidget_C_EffectSoundCheckBox_Offset == 0x418, "USoundSettingWidget_C::EffectSoundCheckBox offset is not 418");
	auto constexpr USoundSettingWidget_C_EffectSoundSliderWidget_Offset = offsetof(USoundSettingWidget_C, EffectSoundSliderWidget);
	static_assert(USoundSettingWidget_C_EffectSoundSliderWidget_Offset == 0x420, "USoundSettingWidget_C::EffectSoundSliderWidget offset is not 420");
	auto constexpr USoundSettingWidget_C_HrtfGunShotSoundCheckBox_Offset = offsetof(USoundSettingWidget_C, HrtfGunShotSoundCheckBox);
	static_assert(USoundSettingWidget_C_HrtfGunShotSoundCheckBox_Offset == 0x428, "USoundSettingWidget_C::HrtfGunShotSoundCheckBox offset is not 428");
	auto constexpr USoundSettingWidget_C_MainPanel_Offset = offsetof(USoundSettingWidget_C, MainPanel);
	static_assert(USoundSettingWidget_C_MainPanel_Offset == 0x430, "USoundSettingWidget_C::MainPanel offset is not 430");
	auto constexpr USoundSettingWidget_C_MasterSoundCheckBox_Offset = offsetof(USoundSettingWidget_C, MasterSoundCheckBox);
	static_assert(USoundSettingWidget_C_MasterSoundCheckBox_Offset == 0x438, "USoundSettingWidget_C::MasterSoundCheckBox offset is not 438");
	auto constexpr USoundSettingWidget_C_MasterSoundSliderWidget_Offset = offsetof(USoundSettingWidget_C, MasterSoundSliderWidget);
	static_assert(USoundSettingWidget_C_MasterSoundSliderWidget_Offset == 0x440, "USoundSettingWidget_C::MasterSoundSliderWidget offset is not 440");
	auto constexpr USoundSettingWidget_C_UISoundCheckBox_Offset = offsetof(USoundSettingWidget_C, UISoundCheckBox);
	static_assert(USoundSettingWidget_C_UISoundCheckBox_Offset == 0x448, "USoundSettingWidget_C::UISoundCheckBox offset is not 448");
	auto constexpr USoundSettingWidget_C_UISoundSliderWidget_Offset = offsetof(USoundSettingWidget_C, UISoundSliderWidget);
	static_assert(USoundSettingWidget_C_UISoundSliderWidget_Offset == 0x450, "USoundSettingWidget_C::UISoundSliderWidget offset is not 450");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
