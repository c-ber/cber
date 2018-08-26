#pragma once
#include "UTslBaseOptionButtonWidget.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadStepperWidget // Size: 0x4E0
	: public UTslBaseOptionButtonWidget // Size: 0x430
{
private:
	typedef UTslGamepadStepperWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1553); // id32("Class TslGame.TslGamepadStepperWidget")
		return ptr;
	}
	FScriptMulticastDelegate OnRotateLeft; /* Ofs: 0x430 Size: 0x10 - MulticastDelegateProperty TslGame.TslGamepadStepperWidget.OnRotateLeft */
	FScriptMulticastDelegate OnRotateRight; /* Ofs: 0x440 Size: 0x10 - MulticastDelegateProperty TslGame.TslGamepadStepperWidget.OnRotateRight */
	TArray<struct FText> StepperOptions; /* Ofs: 0x450 Size: 0x10 - ArrayProperty TslGame.TslGamepadStepperWidget.StepperOptions */
	TArray<struct FString> StepperStrings; /* Ofs: 0x460 Size: 0x10 - ArrayProperty TslGame.TslGamepadStepperWidget.StepperStrings */
	int32_t DefaultStepperIndex; /* Ofs: 0x470 Size: 0x4 - IntProperty TslGame.TslGamepadStepperWidget.DefaultStepperIndex */
	int32_t SelectedIndex; /* Ofs: 0x474 Size: 0x4 - IntProperty TslGame.TslGamepadStepperWidget.SelectedIndex */
	FUmgWidgetBinder_TextBlock TitleText_Binder; /* Ofs: 0x478 Size: 0x20 - StructProperty TslGame.TslGamepadStepperWidget.TitleText_Binder */
	FUmgWidgetBinder_TextBlock StepperText_Binder; /* Ofs: 0x498 Size: 0x20 - StructProperty TslGame.TslGamepadStepperWidget.StepperText_Binder */
	FUmgWidgetBinder_UserWidget StepperCounter_Binder; /* Ofs: 0x4B8 Size: 0x20 - StructProperty TslGame.TslGamepadStepperWidget.StepperCounter_Binder */
	uint8_t UnknownData4D8[0x8];


	inline bool SetOnRotateLeft(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x430, value); }
	inline bool SetOnRotateRight(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x440, value); }
	inline bool SetStepperOptions(t_structHelper inst, TArray<struct FText> value) { inst.WriteOffset(0x450, value); }
	inline bool SetStepperStrings(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x460, value); }
	inline bool SetDefaultStepperIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x470, value); }
	inline bool SetSelectedIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x474, value); }
	inline bool SetTitleText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x478, value); }
	inline bool SetStepperText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x498, value); }
	inline bool SetStepperCounter_Binder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x4B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadStepperWidget = sizeof(UTslGamepadStepperWidget); // 1248
    static_assert(sizeof(UTslGamepadStepperWidget) == 0x4E0, "Size of UTslGamepadStepperWidget is not correct.");
	auto constexpr UTslGamepadStepperWidget_OnRotateLeft_Offset = offsetof(UTslGamepadStepperWidget, OnRotateLeft);
	static_assert(UTslGamepadStepperWidget_OnRotateLeft_Offset == 0x430, "UTslGamepadStepperWidget::OnRotateLeft offset is not 430");
	auto constexpr UTslGamepadStepperWidget_OnRotateRight_Offset = offsetof(UTslGamepadStepperWidget, OnRotateRight);
	static_assert(UTslGamepadStepperWidget_OnRotateRight_Offset == 0x440, "UTslGamepadStepperWidget::OnRotateRight offset is not 440");
	auto constexpr UTslGamepadStepperWidget_StepperOptions_Offset = offsetof(UTslGamepadStepperWidget, StepperOptions);
	static_assert(UTslGamepadStepperWidget_StepperOptions_Offset == 0x450, "UTslGamepadStepperWidget::StepperOptions offset is not 450");
	auto constexpr UTslGamepadStepperWidget_StepperStrings_Offset = offsetof(UTslGamepadStepperWidget, StepperStrings);
	static_assert(UTslGamepadStepperWidget_StepperStrings_Offset == 0x460, "UTslGamepadStepperWidget::StepperStrings offset is not 460");
	auto constexpr UTslGamepadStepperWidget_DefaultStepperIndex_Offset = offsetof(UTslGamepadStepperWidget, DefaultStepperIndex);
	static_assert(UTslGamepadStepperWidget_DefaultStepperIndex_Offset == 0x470, "UTslGamepadStepperWidget::DefaultStepperIndex offset is not 470");
	auto constexpr UTslGamepadStepperWidget_SelectedIndex_Offset = offsetof(UTslGamepadStepperWidget, SelectedIndex);
	static_assert(UTslGamepadStepperWidget_SelectedIndex_Offset == 0x474, "UTslGamepadStepperWidget::SelectedIndex offset is not 474");
	auto constexpr UTslGamepadStepperWidget_TitleText_Binder_Offset = offsetof(UTslGamepadStepperWidget, TitleText_Binder);
	static_assert(UTslGamepadStepperWidget_TitleText_Binder_Offset == 0x478, "UTslGamepadStepperWidget::TitleText_Binder offset is not 478");
	auto constexpr UTslGamepadStepperWidget_StepperText_Binder_Offset = offsetof(UTslGamepadStepperWidget, StepperText_Binder);
	static_assert(UTslGamepadStepperWidget_StepperText_Binder_Offset == 0x498, "UTslGamepadStepperWidget::StepperText_Binder offset is not 498");
	auto constexpr UTslGamepadStepperWidget_StepperCounter_Binder_Offset = offsetof(UTslGamepadStepperWidget, StepperCounter_Binder);
	static_assert(UTslGamepadStepperWidget_StepperCounter_Binder_Offset == 0x4b8, "UTslGamepadStepperWidget::StepperCounter_Binder offset is not 4b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
