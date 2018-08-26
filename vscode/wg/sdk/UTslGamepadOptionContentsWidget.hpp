#pragma once
#include "UTslBaseOptionWidget.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadOptionContentsWidget // Size: 0x440
	: public UTslBaseOptionWidget // Size: 0x3D0
{
private:
	typedef UTslGamepadOptionContentsWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1433); // id32("Class TslGame.TslGamepadOptionContentsWidget")
		return ptr;
	}
	TArray<ExternalPtr<struct UTslOptionImpl>> OptionImplObjects; /* Ofs: 0x3D0 Size: 0x10 - ArrayProperty TslGame.TslGamepadOptionContentsWidget.OptionImplObjects */
	FScriptMulticastDelegate OnContentButtonFocused; /* Ofs: 0x3E0 Size: 0x10 - MulticastDelegateProperty TslGame.TslGamepadOptionContentsWidget.OnContentButtonFocused */
	FUmgWidgetBinder_Gerneral ContentsScrollBox_Binder; /* Ofs: 0x3F0 Size: 0x20 - StructProperty TslGame.TslGamepadOptionContentsWidget.ContentsScrollBox_Binder */
	ExternalPtr<struct UClass> StepperWidgetClass; /* Ofs: 0x410 Size: 0x8 - ClassProperty TslGame.TslGamepadOptionContentsWidget.StepperWidgetClass */
	ExternalPtr<struct UClass> SliderWidgetClass; /* Ofs: 0x418 Size: 0x8 - ClassProperty TslGame.TslGamepadOptionContentsWidget.SliderWidgetClass */
	ExternalPtr<struct UClass> SeparatorWidgetClass; /* Ofs: 0x420 Size: 0x8 - ClassProperty TslGame.TslGamepadOptionContentsWidget.SeparatorWidgetClass */
	TArray<struct FOptionContentDesc> OptionList; /* Ofs: 0x428 Size: 0x10 - ArrayProperty TslGame.TslGamepadOptionContentsWidget.OptionList */
	uint8_t UnknownData438[0x8];


	inline bool SetOptionImplObjects(t_structHelper inst, TArray<ExternalPtr<struct UTslOptionImpl>> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetOnContentButtonFocused(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetContentsScrollBox_Binder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetStepperWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x410, value); }
	inline bool SetSliderWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x418, value); }
	inline bool SetSeparatorWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x420, value); }
	inline bool SetOptionList(t_structHelper inst, TArray<struct FOptionContentDesc> value) { inst.WriteOffset(0x428, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadOptionContentsWidget = sizeof(UTslGamepadOptionContentsWidget); // 1088
    static_assert(sizeof(UTslGamepadOptionContentsWidget) == 0x440, "Size of UTslGamepadOptionContentsWidget is not correct.");
	auto constexpr UTslGamepadOptionContentsWidget_OptionImplObjects_Offset = offsetof(UTslGamepadOptionContentsWidget, OptionImplObjects);
	static_assert(UTslGamepadOptionContentsWidget_OptionImplObjects_Offset == 0x3d0, "UTslGamepadOptionContentsWidget::OptionImplObjects offset is not 3d0");
	auto constexpr UTslGamepadOptionContentsWidget_OnContentButtonFocused_Offset = offsetof(UTslGamepadOptionContentsWidget, OnContentButtonFocused);
	static_assert(UTslGamepadOptionContentsWidget_OnContentButtonFocused_Offset == 0x3e0, "UTslGamepadOptionContentsWidget::OnContentButtonFocused offset is not 3e0");
	auto constexpr UTslGamepadOptionContentsWidget_ContentsScrollBox_Binder_Offset = offsetof(UTslGamepadOptionContentsWidget, ContentsScrollBox_Binder);
	static_assert(UTslGamepadOptionContentsWidget_ContentsScrollBox_Binder_Offset == 0x3f0, "UTslGamepadOptionContentsWidget::ContentsScrollBox_Binder offset is not 3f0");
	auto constexpr UTslGamepadOptionContentsWidget_StepperWidgetClass_Offset = offsetof(UTslGamepadOptionContentsWidget, StepperWidgetClass);
	static_assert(UTslGamepadOptionContentsWidget_StepperWidgetClass_Offset == 0x410, "UTslGamepadOptionContentsWidget::StepperWidgetClass offset is not 410");
	auto constexpr UTslGamepadOptionContentsWidget_SliderWidgetClass_Offset = offsetof(UTslGamepadOptionContentsWidget, SliderWidgetClass);
	static_assert(UTslGamepadOptionContentsWidget_SliderWidgetClass_Offset == 0x418, "UTslGamepadOptionContentsWidget::SliderWidgetClass offset is not 418");
	auto constexpr UTslGamepadOptionContentsWidget_SeparatorWidgetClass_Offset = offsetof(UTslGamepadOptionContentsWidget, SeparatorWidgetClass);
	static_assert(UTslGamepadOptionContentsWidget_SeparatorWidgetClass_Offset == 0x420, "UTslGamepadOptionContentsWidget::SeparatorWidgetClass offset is not 420");
	auto constexpr UTslGamepadOptionContentsWidget_OptionList_Offset = offsetof(UTslGamepadOptionContentsWidget, OptionList);
	static_assert(UTslGamepadOptionContentsWidget_OptionList_Offset == 0x428, "UTslGamepadOptionContentsWidget::OptionList offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
