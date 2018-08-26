#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_WidgetSwitcher.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadKeyGuideWidget // Size: 0x320
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslGamepadKeyGuideWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1567); // id32("Class TslGame.TslGamepadKeyGuideWidget")
		return ptr;
	}
	FUmgWidgetBinder_WidgetSwitcher ContentsSwitcher_Binder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.TslGamepadKeyGuideWidget.ContentsSwitcher_Binder */


	inline bool SetContentsSwitcher_Binder(t_structHelper inst, FUmgWidgetBinder_WidgetSwitcher value) { inst.WriteOffset(0x300, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadKeyGuideWidget = sizeof(UTslGamepadKeyGuideWidget); // 800
    static_assert(sizeof(UTslGamepadKeyGuideWidget) == 0x320, "Size of UTslGamepadKeyGuideWidget is not correct.");
	auto constexpr UTslGamepadKeyGuideWidget_ContentsSwitcher_Binder_Offset = offsetof(UTslGamepadKeyGuideWidget, ContentsSwitcher_Binder);
	static_assert(UTslGamepadKeyGuideWidget_ContentsSwitcher_Binder_Offset == 0x300, "UTslGamepadKeyGuideWidget::ContentsSwitcher_Binder offset is not 300");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
