#pragma once
#include "UBaseOptionWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVoiceSettingWidget_C // Size: 0x488
	: public UBaseOptionWidget_C // Size: 0x3F4
{
private:
	typedef UVoiceSettingWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169158); // id32("WidgetBlueprintGeneratedClass VoiceSettingWidget.VoiceSettingWidget_C")
		return ptr;
	}
	uint8_t UnknownData3F4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x3F8 Size: 0x8 - StructProperty VoiceSettingWidget.VoiceSettingWidget_C.UberGraphFrame */
	ExternalPtr<struct UChildOptionTitleWidget_C> ChildOptionTitleWidget; /* Ofs: 0x400 Size: 0x8 - ObjectProperty VoiceSettingWidget.VoiceSettingWidget_C.ChildOptionTitleWidget */
	ExternalPtr<struct UQualityComboBox_C> MyVoiceComboBox; /* Ofs: 0x408 Size: 0x8 - ObjectProperty VoiceSettingWidget.VoiceSettingWidget_C.MyVoiceComboBox */
	ExternalPtr<struct UQualityComboBox_C> VoiceChannelComboBox; /* Ofs: 0x410 Size: 0x8 - ObjectProperty VoiceSettingWidget.VoiceSettingWidget_C.VoiceChannelComboBox */
	ExternalPtr<struct UQualitySliderWidget_C> VoiceInputVolumeSlider; /* Ofs: 0x418 Size: 0x8 - ObjectProperty VoiceSettingWidget.VoiceSettingWidget_C.VoiceInputVolumeSlider */
	ExternalPtr<struct UQualitySliderWidget_C> VoiceOutputVolumeSlider; /* Ofs: 0x420 Size: 0x8 - ObjectProperty VoiceSettingWidget.VoiceSettingWidget_C.VoiceOutputVolumeSlider */
	FString MyVoiceAlwaysOptionString; /* Ofs: 0x428 Size: 0x10 - StrProperty VoiceSettingWidget.VoiceSettingWidget_C.MyVoiceAlwaysOptionString */
	FString MyVoicePushToTalkOptionString; /* Ofs: 0x438 Size: 0x10 - StrProperty VoiceSettingWidget.VoiceSettingWidget_C.MyVoicePushToTalkOptionString */
	FString MyVoiceMuteOptionString; /* Ofs: 0x448 Size: 0x10 - StrProperty VoiceSettingWidget.VoiceSettingWidget_C.MyVoiceMuteOptionString */
	FString VoiceChannelAllOptionString; /* Ofs: 0x458 Size: 0x10 - StrProperty VoiceSettingWidget.VoiceSettingWidget_C.VoiceChannelAllOptionString */
	FString VoiceChannelOnlyTeamOptionString; /* Ofs: 0x468 Size: 0x10 - StrProperty VoiceSettingWidget.VoiceSettingWidget_C.VoiceChannelOnlyTeamOptionString */
	FString VoiceChannelNoneOptionString; /* Ofs: 0x478 Size: 0x10 - StrProperty VoiceSettingWidget.VoiceSettingWidget_C.VoiceChannelNoneOptionString */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetChildOptionTitleWidget(t_structHelper inst, ExternalPtr<struct UChildOptionTitleWidget_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetMyVoiceComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x408, value); }
	inline bool SetVoiceChannelComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x410, value); }
	inline bool SetVoiceInputVolumeSlider(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x418, value); }
	inline bool SetVoiceOutputVolumeSlider(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x420, value); }
	inline bool SetMyVoiceAlwaysOptionString(t_structHelper inst, FString value) { inst.WriteOffset(0x428, value); }
	inline bool SetMyVoicePushToTalkOptionString(t_structHelper inst, FString value) { inst.WriteOffset(0x438, value); }
	inline bool SetMyVoiceMuteOptionString(t_structHelper inst, FString value) { inst.WriteOffset(0x448, value); }
	inline bool SetVoiceChannelAllOptionString(t_structHelper inst, FString value) { inst.WriteOffset(0x458, value); }
	inline bool SetVoiceChannelOnlyTeamOptionString(t_structHelper inst, FString value) { inst.WriteOffset(0x468, value); }
	inline bool SetVoiceChannelNoneOptionString(t_structHelper inst, FString value) { inst.WriteOffset(0x478, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVoiceSettingWidget_C = sizeof(UVoiceSettingWidget_C); // 1160
    static_assert(sizeof(UVoiceSettingWidget_C) == 0x488, "Size of UVoiceSettingWidget_C is not correct.");
	auto constexpr UVoiceSettingWidget_C_UberGraphFrame_Offset = offsetof(UVoiceSettingWidget_C, UberGraphFrame);
	static_assert(UVoiceSettingWidget_C_UberGraphFrame_Offset == 0x3f8, "UVoiceSettingWidget_C::UberGraphFrame offset is not 3f8");
	auto constexpr UVoiceSettingWidget_C_ChildOptionTitleWidget_Offset = offsetof(UVoiceSettingWidget_C, ChildOptionTitleWidget);
	static_assert(UVoiceSettingWidget_C_ChildOptionTitleWidget_Offset == 0x400, "UVoiceSettingWidget_C::ChildOptionTitleWidget offset is not 400");
	auto constexpr UVoiceSettingWidget_C_MyVoiceComboBox_Offset = offsetof(UVoiceSettingWidget_C, MyVoiceComboBox);
	static_assert(UVoiceSettingWidget_C_MyVoiceComboBox_Offset == 0x408, "UVoiceSettingWidget_C::MyVoiceComboBox offset is not 408");
	auto constexpr UVoiceSettingWidget_C_VoiceChannelComboBox_Offset = offsetof(UVoiceSettingWidget_C, VoiceChannelComboBox);
	static_assert(UVoiceSettingWidget_C_VoiceChannelComboBox_Offset == 0x410, "UVoiceSettingWidget_C::VoiceChannelComboBox offset is not 410");
	auto constexpr UVoiceSettingWidget_C_VoiceInputVolumeSlider_Offset = offsetof(UVoiceSettingWidget_C, VoiceInputVolumeSlider);
	static_assert(UVoiceSettingWidget_C_VoiceInputVolumeSlider_Offset == 0x418, "UVoiceSettingWidget_C::VoiceInputVolumeSlider offset is not 418");
	auto constexpr UVoiceSettingWidget_C_VoiceOutputVolumeSlider_Offset = offsetof(UVoiceSettingWidget_C, VoiceOutputVolumeSlider);
	static_assert(UVoiceSettingWidget_C_VoiceOutputVolumeSlider_Offset == 0x420, "UVoiceSettingWidget_C::VoiceOutputVolumeSlider offset is not 420");
	auto constexpr UVoiceSettingWidget_C_MyVoiceAlwaysOptionString_Offset = offsetof(UVoiceSettingWidget_C, MyVoiceAlwaysOptionString);
	static_assert(UVoiceSettingWidget_C_MyVoiceAlwaysOptionString_Offset == 0x428, "UVoiceSettingWidget_C::MyVoiceAlwaysOptionString offset is not 428");
	auto constexpr UVoiceSettingWidget_C_MyVoicePushToTalkOptionString_Offset = offsetof(UVoiceSettingWidget_C, MyVoicePushToTalkOptionString);
	static_assert(UVoiceSettingWidget_C_MyVoicePushToTalkOptionString_Offset == 0x438, "UVoiceSettingWidget_C::MyVoicePushToTalkOptionString offset is not 438");
	auto constexpr UVoiceSettingWidget_C_MyVoiceMuteOptionString_Offset = offsetof(UVoiceSettingWidget_C, MyVoiceMuteOptionString);
	static_assert(UVoiceSettingWidget_C_MyVoiceMuteOptionString_Offset == 0x448, "UVoiceSettingWidget_C::MyVoiceMuteOptionString offset is not 448");
	auto constexpr UVoiceSettingWidget_C_VoiceChannelAllOptionString_Offset = offsetof(UVoiceSettingWidget_C, VoiceChannelAllOptionString);
	static_assert(UVoiceSettingWidget_C_VoiceChannelAllOptionString_Offset == 0x458, "UVoiceSettingWidget_C::VoiceChannelAllOptionString offset is not 458");
	auto constexpr UVoiceSettingWidget_C_VoiceChannelOnlyTeamOptionString_Offset = offsetof(UVoiceSettingWidget_C, VoiceChannelOnlyTeamOptionString);
	static_assert(UVoiceSettingWidget_C_VoiceChannelOnlyTeamOptionString_Offset == 0x468, "UVoiceSettingWidget_C::VoiceChannelOnlyTeamOptionString offset is not 468");
	auto constexpr UVoiceSettingWidget_C_VoiceChannelNoneOptionString_Offset = offsetof(UVoiceSettingWidget_C, VoiceChannelNoneOptionString);
	static_assert(UVoiceSettingWidget_C_VoiceChannelNoneOptionString_Offset == 0x478, "UVoiceSettingWidget_C::VoiceChannelNoneOptionString offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
