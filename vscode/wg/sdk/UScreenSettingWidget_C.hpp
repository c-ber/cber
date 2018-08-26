#pragma once
#include "UBaseOptionWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UScreenSettingWidget_C // Size: 0x428
	: public UBaseOptionWidget_C // Size: 0x3F4
{
private:
	typedef UScreenSettingWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169329); // id32("WidgetBlueprintGeneratedClass ScreenSettingWidget.ScreenSettingWidget_C")
		return ptr;
	}
	uint8_t UnknownData3F4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x3F8 Size: 0x8 - StructProperty ScreenSettingWidget.ScreenSettingWidget_C.UberGraphFrame */
	ExternalPtr<struct UChildOptionTitleWidget_C> ChildOptionTitleWidget; /* Ofs: 0x400 Size: 0x8 - ObjectProperty ScreenSettingWidget.ScreenSettingWidget_C.ChildOptionTitleWidget */
	ExternalPtr<struct UQualitySliderWidget_C> FovSliderWidget; /* Ofs: 0x408 Size: 0x8 - ObjectProperty ScreenSettingWidget.ScreenSettingWidget_C.FovSliderWidget */
	ExternalPtr<struct UQualitySliderWidget_C> QualitySliderWidget; /* Ofs: 0x410 Size: 0x8 - ObjectProperty ScreenSettingWidget.ScreenSettingWidget_C.QualitySliderWidget */
	ExternalPtr<struct UQualityComboBox_C> ResolutionCoboBox; /* Ofs: 0x418 Size: 0x8 - ObjectProperty ScreenSettingWidget.ScreenSettingWidget_C.ResolutionCoboBox */
	ExternalPtr<struct UQualityComboBox_C> ScreenComboBox; /* Ofs: 0x420 Size: 0x8 - ObjectProperty ScreenSettingWidget.ScreenSettingWidget_C.ScreenComboBox */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetChildOptionTitleWidget(t_structHelper inst, ExternalPtr<struct UChildOptionTitleWidget_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetFovSliderWidget(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x408, value); }
	inline bool SetQualitySliderWidget(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x410, value); }
	inline bool SetResolutionCoboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x418, value); }
	inline bool SetScreenComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x420, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUScreenSettingWidget_C = sizeof(UScreenSettingWidget_C); // 1064
    static_assert(sizeof(UScreenSettingWidget_C) == 0x428, "Size of UScreenSettingWidget_C is not correct.");
	auto constexpr UScreenSettingWidget_C_UberGraphFrame_Offset = offsetof(UScreenSettingWidget_C, UberGraphFrame);
	static_assert(UScreenSettingWidget_C_UberGraphFrame_Offset == 0x3f8, "UScreenSettingWidget_C::UberGraphFrame offset is not 3f8");
	auto constexpr UScreenSettingWidget_C_ChildOptionTitleWidget_Offset = offsetof(UScreenSettingWidget_C, ChildOptionTitleWidget);
	static_assert(UScreenSettingWidget_C_ChildOptionTitleWidget_Offset == 0x400, "UScreenSettingWidget_C::ChildOptionTitleWidget offset is not 400");
	auto constexpr UScreenSettingWidget_C_FovSliderWidget_Offset = offsetof(UScreenSettingWidget_C, FovSliderWidget);
	static_assert(UScreenSettingWidget_C_FovSliderWidget_Offset == 0x408, "UScreenSettingWidget_C::FovSliderWidget offset is not 408");
	auto constexpr UScreenSettingWidget_C_QualitySliderWidget_Offset = offsetof(UScreenSettingWidget_C, QualitySliderWidget);
	static_assert(UScreenSettingWidget_C_QualitySliderWidget_Offset == 0x410, "UScreenSettingWidget_C::QualitySliderWidget offset is not 410");
	auto constexpr UScreenSettingWidget_C_ResolutionCoboBox_Offset = offsetof(UScreenSettingWidget_C, ResolutionCoboBox);
	static_assert(UScreenSettingWidget_C_ResolutionCoboBox_Offset == 0x418, "UScreenSettingWidget_C::ResolutionCoboBox offset is not 418");
	auto constexpr UScreenSettingWidget_C_ScreenComboBox_Offset = offsetof(UScreenSettingWidget_C, ScreenComboBox);
	static_assert(UScreenSettingWidget_C_ScreenComboBox_Offset == 0x420, "UScreenSettingWidget_C::ScreenComboBox offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
