#pragma once
#include "UTslBaseOptionButtonWidget.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadSliderWidget // Size: 0x4A0
	: public UTslBaseOptionButtonWidget // Size: 0x430
{
private:
	typedef UTslGamepadSliderWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1552); // id32("Class TslGame.TslGamepadSliderWidget")
		return ptr;
	}
	float MinValue; /* Ofs: 0x430 Size: 0x4 - FloatProperty TslGame.TslGamepadSliderWidget.MinValue */
	float MaxValue; /* Ofs: 0x434 Size: 0x4 - FloatProperty TslGame.TslGamepadSliderWidget.MaxValue */
	float DefaultValue; /* Ofs: 0x438 Size: 0x4 - FloatProperty TslGame.TslGamepadSliderWidget.DefaultValue */
	uint8_t UnknownData43C[0x4];
	FUmgWidgetBinder_TextBlock TitleText_Binder; /* Ofs: 0x440 Size: 0x20 - StructProperty TslGame.TslGamepadSliderWidget.TitleText_Binder */
	FUmgWidgetBinder_TextBlock ValueText_Binder; /* Ofs: 0x460 Size: 0x20 - StructProperty TslGame.TslGamepadSliderWidget.ValueText_Binder */
	FUmgWidgetBinder_Gerneral Slider_Binder; /* Ofs: 0x480 Size: 0x20 - StructProperty TslGame.TslGamepadSliderWidget.Slider_Binder */


	inline bool SetMinValue(t_structHelper inst, float value) { inst.WriteOffset(0x430, value); }
	inline bool SetMaxValue(t_structHelper inst, float value) { inst.WriteOffset(0x434, value); }
	inline bool SetDefaultValue(t_structHelper inst, float value) { inst.WriteOffset(0x438, value); }
	inline bool SetTitleText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x440, value); }
	inline bool SetValueText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x460, value); }
	inline bool SetSlider_Binder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x480, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadSliderWidget = sizeof(UTslGamepadSliderWidget); // 1184
    static_assert(sizeof(UTslGamepadSliderWidget) == 0x4A0, "Size of UTslGamepadSliderWidget is not correct.");
	auto constexpr UTslGamepadSliderWidget_MinValue_Offset = offsetof(UTslGamepadSliderWidget, MinValue);
	static_assert(UTslGamepadSliderWidget_MinValue_Offset == 0x430, "UTslGamepadSliderWidget::MinValue offset is not 430");
	auto constexpr UTslGamepadSliderWidget_MaxValue_Offset = offsetof(UTslGamepadSliderWidget, MaxValue);
	static_assert(UTslGamepadSliderWidget_MaxValue_Offset == 0x434, "UTslGamepadSliderWidget::MaxValue offset is not 434");
	auto constexpr UTslGamepadSliderWidget_DefaultValue_Offset = offsetof(UTslGamepadSliderWidget, DefaultValue);
	static_assert(UTslGamepadSliderWidget_DefaultValue_Offset == 0x438, "UTslGamepadSliderWidget::DefaultValue offset is not 438");
	auto constexpr UTslGamepadSliderWidget_TitleText_Binder_Offset = offsetof(UTslGamepadSliderWidget, TitleText_Binder);
	static_assert(UTslGamepadSliderWidget_TitleText_Binder_Offset == 0x440, "UTslGamepadSliderWidget::TitleText_Binder offset is not 440");
	auto constexpr UTslGamepadSliderWidget_ValueText_Binder_Offset = offsetof(UTslGamepadSliderWidget, ValueText_Binder);
	static_assert(UTslGamepadSliderWidget_ValueText_Binder_Offset == 0x460, "UTslGamepadSliderWidget::ValueText_Binder offset is not 460");
	auto constexpr UTslGamepadSliderWidget_Slider_Binder_Offset = offsetof(UTslGamepadSliderWidget, Slider_Binder);
	static_assert(UTslGamepadSliderWidget_Slider_Binder_Offset == 0x480, "UTslGamepadSliderWidget::Slider_Binder offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
