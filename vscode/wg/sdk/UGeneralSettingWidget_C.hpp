#pragma once
#include "UBaseOptionWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGeneralSettingWidget_C // Size: 0x438
	: public UBaseOptionWidget_C // Size: 0x3F4
{
private:
	typedef UGeneralSettingWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169954); // id32("WidgetBlueprintGeneratedClass GeneralSettingWidget.GeneralSettingWidget_C")
		return ptr;
	}
	uint8_t UnknownData3F4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x3F8 Size: 0x8 - StructProperty GeneralSettingWidget.GeneralSettingWidget_C.UberGraphFrame */
	ExternalPtr<struct UChildOptionTitleWidget_C> ChildOptionTitleWidget; /* Ofs: 0x400 Size: 0x8 - ObjectProperty GeneralSettingWidget.GeneralSettingWidget_C.ChildOptionTitleWidget */
	ExternalPtr<struct UQualityComboBox_C> HighlightAutoClipsComboBox; /* Ofs: 0x408 Size: 0x8 - ObjectProperty GeneralSettingWidget.GeneralSettingWidget_C.HighlightAutoClipsComboBox */
	ExternalPtr<struct UQualityComboBox_C> LanguageComboBox; /* Ofs: 0x410 Size: 0x8 - ObjectProperty GeneralSettingWidget.GeneralSettingWidget_C.LanguageComboBox */
	ExternalPtr<struct UQualityComboBox_C> MiniMaptypeComboBox; /* Ofs: 0x418 Size: 0x8 - ObjectProperty GeneralSettingWidget.GeneralSettingWidget_C.MiniMaptypeComboBox */
	ExternalPtr<struct UChildOptionTitleWidget_C> VideoCaptureTitle; /* Ofs: 0x420 Size: 0x8 - ObjectProperty GeneralSettingWidget.GeneralSettingWidget_C.VideoCaptureTitle */
	FString ChineseCultureName; /* Ofs: 0x428 Size: 0x10 - StrProperty GeneralSettingWidget.GeneralSettingWidget_C.ChineseCultureName */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetChildOptionTitleWidget(t_structHelper inst, ExternalPtr<struct UChildOptionTitleWidget_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetHighlightAutoClipsComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x408, value); }
	inline bool SetLanguageComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x410, value); }
	inline bool SetMiniMaptypeComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x418, value); }
	inline bool SetVideoCaptureTitle(t_structHelper inst, ExternalPtr<struct UChildOptionTitleWidget_C> value) { inst.WriteOffset(0x420, value); }
	inline bool SetChineseCultureName(t_structHelper inst, FString value) { inst.WriteOffset(0x428, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGeneralSettingWidget_C = sizeof(UGeneralSettingWidget_C); // 1080
    static_assert(sizeof(UGeneralSettingWidget_C) == 0x438, "Size of UGeneralSettingWidget_C is not correct.");
	auto constexpr UGeneralSettingWidget_C_UberGraphFrame_Offset = offsetof(UGeneralSettingWidget_C, UberGraphFrame);
	static_assert(UGeneralSettingWidget_C_UberGraphFrame_Offset == 0x3f8, "UGeneralSettingWidget_C::UberGraphFrame offset is not 3f8");
	auto constexpr UGeneralSettingWidget_C_ChildOptionTitleWidget_Offset = offsetof(UGeneralSettingWidget_C, ChildOptionTitleWidget);
	static_assert(UGeneralSettingWidget_C_ChildOptionTitleWidget_Offset == 0x400, "UGeneralSettingWidget_C::ChildOptionTitleWidget offset is not 400");
	auto constexpr UGeneralSettingWidget_C_HighlightAutoClipsComboBox_Offset = offsetof(UGeneralSettingWidget_C, HighlightAutoClipsComboBox);
	static_assert(UGeneralSettingWidget_C_HighlightAutoClipsComboBox_Offset == 0x408, "UGeneralSettingWidget_C::HighlightAutoClipsComboBox offset is not 408");
	auto constexpr UGeneralSettingWidget_C_LanguageComboBox_Offset = offsetof(UGeneralSettingWidget_C, LanguageComboBox);
	static_assert(UGeneralSettingWidget_C_LanguageComboBox_Offset == 0x410, "UGeneralSettingWidget_C::LanguageComboBox offset is not 410");
	auto constexpr UGeneralSettingWidget_C_MiniMaptypeComboBox_Offset = offsetof(UGeneralSettingWidget_C, MiniMaptypeComboBox);
	static_assert(UGeneralSettingWidget_C_MiniMaptypeComboBox_Offset == 0x418, "UGeneralSettingWidget_C::MiniMaptypeComboBox offset is not 418");
	auto constexpr UGeneralSettingWidget_C_VideoCaptureTitle_Offset = offsetof(UGeneralSettingWidget_C, VideoCaptureTitle);
	static_assert(UGeneralSettingWidget_C_VideoCaptureTitle_Offset == 0x420, "UGeneralSettingWidget_C::VideoCaptureTitle offset is not 420");
	auto constexpr UGeneralSettingWidget_C_ChineseCultureName_Offset = offsetof(UGeneralSettingWidget_C, ChineseCultureName);
	static_assert(UGeneralSettingWidget_C_ChineseCultureName_Offset == 0x428, "UGeneralSettingWidget_C::ChineseCultureName offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
