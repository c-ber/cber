#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_WidgetSwitcher.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslStepperCounterContentWidget // Size: 0x320
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslStepperCounterContentWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1581); // id32("Class TslGame.TslStepperCounterContentWidget")
		return ptr;
	}
	FUmgWidgetBinder_WidgetSwitcher Switcher_Binder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.TslStepperCounterContentWidget.Switcher_Binder */


	inline bool SetSwitcher_Binder(t_structHelper inst, FUmgWidgetBinder_WidgetSwitcher value) { inst.WriteOffset(0x300, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslStepperCounterContentWidget = sizeof(UTslStepperCounterContentWidget); // 800
    static_assert(sizeof(UTslStepperCounterContentWidget) == 0x320, "Size of UTslStepperCounterContentWidget is not correct.");
	auto constexpr UTslStepperCounterContentWidget_Switcher_Binder_Offset = offsetof(UTslStepperCounterContentWidget, Switcher_Binder);
	static_assert(UTslStepperCounterContentWidget_Switcher_Binder_Offset == 0x300, "UTslStepperCounterContentWidget::Switcher_Binder offset is not 300");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
