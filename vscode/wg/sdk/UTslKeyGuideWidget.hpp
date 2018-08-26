#pragma once
#include "UUmgBaseWidget.hpp"
#include "FTimerHandle.hpp"
#include "FUmgWidgetBinder_WidgetSwitcher.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyGuideWidget // Size: 0x388
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslKeyGuideWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1575); // id32("Class TslGame.TslKeyGuideWidget")
		return ptr;
	}
	FTimerHandle TimerHandle_HideWidget; /* Ofs: 0x300 Size: 0x8 - StructProperty TslGame.TslKeyGuideWidget.TimerHandle_HideWidget */
	int32_t XButtonImageIndex; /* Ofs: 0x308 Size: 0x4 - IntProperty TslGame.TslKeyGuideWidget.XButtonImageIndex */
	int32_t BButtonImageIndex; /* Ofs: 0x30C Size: 0x4 - IntProperty TslGame.TslKeyGuideWidget.BButtonImageIndex */
	FUmgWidgetBinder_WidgetSwitcher ButtonImageSwitcher_Binder; /* Ofs: 0x310 Size: 0x20 - StructProperty TslGame.TslKeyGuideWidget.ButtonImageSwitcher_Binder */
	FUmgWidgetBinder_Image ProgressBarImage_Binder; /* Ofs: 0x330 Size: 0x28 - StructProperty TslGame.TslKeyGuideWidget.ProgressBarImage_Binder */
	FUmgWidgetBinder_TextBlock KeyGuideText_Binder; /* Ofs: 0x358 Size: 0x20 - StructProperty TslGame.TslKeyGuideWidget.KeyGuideText_Binder */
	float ResponseTime; /* Ofs: 0x378 Size: 0x4 - FloatProperty TslGame.TslKeyGuideWidget.ResponseTime */
	uint8_t UnknownData37C[0x4];
	FName ActionName; /* Ofs: 0x380 Size: 0x8 - NameProperty TslGame.TslKeyGuideWidget.ActionName */


	inline bool SetTimerHandle_HideWidget(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x300, value); }
	inline bool SetXButtonImageIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x308, value); }
	inline bool SetBButtonImageIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30C, value); }
	inline bool SetButtonImageSwitcher_Binder(t_structHelper inst, FUmgWidgetBinder_WidgetSwitcher value) { inst.WriteOffset(0x310, value); }
	inline bool SetProgressBarImage_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x330, value); }
	inline bool SetKeyGuideText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x358, value); }
	inline bool SetResponseTime(t_structHelper inst, float value) { inst.WriteOffset(0x378, value); }
	inline bool SetActionName(t_structHelper inst, FName value) { inst.WriteOffset(0x380, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyGuideWidget = sizeof(UTslKeyGuideWidget); // 904
    static_assert(sizeof(UTslKeyGuideWidget) == 0x388, "Size of UTslKeyGuideWidget is not correct.");
	auto constexpr UTslKeyGuideWidget_TimerHandle_HideWidget_Offset = offsetof(UTslKeyGuideWidget, TimerHandle_HideWidget);
	static_assert(UTslKeyGuideWidget_TimerHandle_HideWidget_Offset == 0x300, "UTslKeyGuideWidget::TimerHandle_HideWidget offset is not 300");
	auto constexpr UTslKeyGuideWidget_XButtonImageIndex_Offset = offsetof(UTslKeyGuideWidget, XButtonImageIndex);
	static_assert(UTslKeyGuideWidget_XButtonImageIndex_Offset == 0x308, "UTslKeyGuideWidget::XButtonImageIndex offset is not 308");
	auto constexpr UTslKeyGuideWidget_BButtonImageIndex_Offset = offsetof(UTslKeyGuideWidget, BButtonImageIndex);
	static_assert(UTslKeyGuideWidget_BButtonImageIndex_Offset == 0x30c, "UTslKeyGuideWidget::BButtonImageIndex offset is not 30c");
	auto constexpr UTslKeyGuideWidget_ButtonImageSwitcher_Binder_Offset = offsetof(UTslKeyGuideWidget, ButtonImageSwitcher_Binder);
	static_assert(UTslKeyGuideWidget_ButtonImageSwitcher_Binder_Offset == 0x310, "UTslKeyGuideWidget::ButtonImageSwitcher_Binder offset is not 310");
	auto constexpr UTslKeyGuideWidget_ProgressBarImage_Binder_Offset = offsetof(UTslKeyGuideWidget, ProgressBarImage_Binder);
	static_assert(UTslKeyGuideWidget_ProgressBarImage_Binder_Offset == 0x330, "UTslKeyGuideWidget::ProgressBarImage_Binder offset is not 330");
	auto constexpr UTslKeyGuideWidget_KeyGuideText_Binder_Offset = offsetof(UTslKeyGuideWidget, KeyGuideText_Binder);
	static_assert(UTslKeyGuideWidget_KeyGuideText_Binder_Offset == 0x358, "UTslKeyGuideWidget::KeyGuideText_Binder offset is not 358");
	auto constexpr UTslKeyGuideWidget_ResponseTime_Offset = offsetof(UTslKeyGuideWidget, ResponseTime);
	static_assert(UTslKeyGuideWidget_ResponseTime_Offset == 0x378, "UTslKeyGuideWidget::ResponseTime offset is not 378");
	auto constexpr UTslKeyGuideWidget_ActionName_Offset = offsetof(UTslKeyGuideWidget, ActionName);
	static_assert(UTslKeyGuideWidget_ActionName_Offset == 0x380, "UTslKeyGuideWidget::ActionName offset is not 380");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
