#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslStepperCounterWidget // Size: 0x348
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslStepperCounterWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1582); // id32("Class TslGame.TslStepperCounterWidget")
		return ptr;
	}
	float SizePerContent; /* Ofs: 0x300 Size: 0x4 - FloatProperty TslGame.TslStepperCounterWidget.SizePerContent */
	int32_t NumToShrink; /* Ofs: 0x304 Size: 0x4 - IntProperty TslGame.TslStepperCounterWidget.NumToShrink */
	int32_t SelectedIndex; /* Ofs: 0x308 Size: 0x4 - IntProperty TslGame.TslStepperCounterWidget.SelectedIndex */
	uint8_t UnknownData30C[0x4];
	TArray<ExternalPtr<struct UTslStepperCounterContentWidget>> CounterContents; /* Ofs: 0x310 Size: 0x10 - ArrayProperty TslGame.TslStepperCounterWidget.CounterContents */
	ExternalPtr<struct UClass> ContentWidgetClass; /* Ofs: 0x320 Size: 0x8 - ClassProperty TslGame.TslStepperCounterWidget.ContentWidgetClass */
	FUmgWidgetBinder_Gerneral HorizontalBox_Binder; /* Ofs: 0x328 Size: 0x20 - StructProperty TslGame.TslStepperCounterWidget.HorizontalBox_Binder */


	inline bool SetSizePerContent(t_structHelper inst, float value) { inst.WriteOffset(0x300, value); }
	inline bool SetNumToShrink(t_structHelper inst, int32_t value) { inst.WriteOffset(0x304, value); }
	inline bool SetSelectedIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x308, value); }
	inline bool SetCounterContents(t_structHelper inst, TArray<ExternalPtr<struct UTslStepperCounterContentWidget>> value) { inst.WriteOffset(0x310, value); }
	inline bool SetContentWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x320, value); }
	inline bool SetHorizontalBox_Binder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x328, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslStepperCounterWidget = sizeof(UTslStepperCounterWidget); // 840
    static_assert(sizeof(UTslStepperCounterWidget) == 0x348, "Size of UTslStepperCounterWidget is not correct.");
	auto constexpr UTslStepperCounterWidget_SizePerContent_Offset = offsetof(UTslStepperCounterWidget, SizePerContent);
	static_assert(UTslStepperCounterWidget_SizePerContent_Offset == 0x300, "UTslStepperCounterWidget::SizePerContent offset is not 300");
	auto constexpr UTslStepperCounterWidget_NumToShrink_Offset = offsetof(UTslStepperCounterWidget, NumToShrink);
	static_assert(UTslStepperCounterWidget_NumToShrink_Offset == 0x304, "UTslStepperCounterWidget::NumToShrink offset is not 304");
	auto constexpr UTslStepperCounterWidget_SelectedIndex_Offset = offsetof(UTslStepperCounterWidget, SelectedIndex);
	static_assert(UTslStepperCounterWidget_SelectedIndex_Offset == 0x308, "UTslStepperCounterWidget::SelectedIndex offset is not 308");
	auto constexpr UTslStepperCounterWidget_CounterContents_Offset = offsetof(UTslStepperCounterWidget, CounterContents);
	static_assert(UTslStepperCounterWidget_CounterContents_Offset == 0x310, "UTslStepperCounterWidget::CounterContents offset is not 310");
	auto constexpr UTslStepperCounterWidget_ContentWidgetClass_Offset = offsetof(UTslStepperCounterWidget, ContentWidgetClass);
	static_assert(UTslStepperCounterWidget_ContentWidgetClass_Offset == 0x320, "UTslStepperCounterWidget::ContentWidgetClass offset is not 320");
	auto constexpr UTslStepperCounterWidget_HorizontalBox_Binder_Offset = offsetof(UTslStepperCounterWidget, HorizontalBox_Binder);
	static_assert(UTslStepperCounterWidget_HorizontalBox_Binder_Offset == 0x328, "UTslStepperCounterWidget::HorizontalBox_Binder offset is not 328");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
