#pragma once
#include "UTslBaseOptionWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBaseOptionButtonWidget // Size: 0x430
	: public UTslBaseOptionWidget // Size: 0x3D0
{
private:
	typedef UTslBaseOptionButtonWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1551); // id32("Class TslGame.TslBaseOptionButtonWidget")
		return ptr;
	}
	FText TitleText; /* Ofs: 0x3D0 Size: 0x18 - TextProperty TslGame.TslBaseOptionButtonWidget.TitleText */
	FText DescText; /* Ofs: 0x3E8 Size: 0x18 - TextProperty TslGame.TslBaseOptionButtonWidget.DescText */
	FScriptMulticastDelegate OnGamepadUp_Handler; /* Ofs: 0x400 Size: 0x10 - MulticastDelegateProperty TslGame.TslBaseOptionButtonWidget.OnGamepadUp_Handler */
	FScriptMulticastDelegate OnGamepadDown_Handler; /* Ofs: 0x410 Size: 0x10 - MulticastDelegateProperty TslGame.TslBaseOptionButtonWidget.OnGamepadDown_Handler */
	FScriptMulticastDelegate OnFocusReceived_Handler; /* Ofs: 0x420 Size: 0x10 - MulticastDelegateProperty TslGame.TslBaseOptionButtonWidget.OnFocusReceived_Handler */


	inline bool SetTitleText(t_structHelper inst, FText value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetDescText(t_structHelper inst, FText value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetOnGamepadUp_Handler(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x400, value); }
	inline bool SetOnGamepadDown_Handler(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x410, value); }
	inline bool SetOnFocusReceived_Handler(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x420, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBaseOptionButtonWidget = sizeof(UTslBaseOptionButtonWidget); // 1072
    static_assert(sizeof(UTslBaseOptionButtonWidget) == 0x430, "Size of UTslBaseOptionButtonWidget is not correct.");
	auto constexpr UTslBaseOptionButtonWidget_TitleText_Offset = offsetof(UTslBaseOptionButtonWidget, TitleText);
	static_assert(UTslBaseOptionButtonWidget_TitleText_Offset == 0x3d0, "UTslBaseOptionButtonWidget::TitleText offset is not 3d0");
	auto constexpr UTslBaseOptionButtonWidget_DescText_Offset = offsetof(UTslBaseOptionButtonWidget, DescText);
	static_assert(UTslBaseOptionButtonWidget_DescText_Offset == 0x3e8, "UTslBaseOptionButtonWidget::DescText offset is not 3e8");
	auto constexpr UTslBaseOptionButtonWidget_OnGamepadUp_Handler_Offset = offsetof(UTslBaseOptionButtonWidget, OnGamepadUp_Handler);
	static_assert(UTslBaseOptionButtonWidget_OnGamepadUp_Handler_Offset == 0x400, "UTslBaseOptionButtonWidget::OnGamepadUp_Handler offset is not 400");
	auto constexpr UTslBaseOptionButtonWidget_OnGamepadDown_Handler_Offset = offsetof(UTslBaseOptionButtonWidget, OnGamepadDown_Handler);
	static_assert(UTslBaseOptionButtonWidget_OnGamepadDown_Handler_Offset == 0x410, "UTslBaseOptionButtonWidget::OnGamepadDown_Handler offset is not 410");
	auto constexpr UTslBaseOptionButtonWidget_OnFocusReceived_Handler_Offset = offsetof(UTslBaseOptionButtonWidget, OnFocusReceived_Handler);
	static_assert(UTslBaseOptionButtonWidget_OnFocusReceived_Handler_Offset == 0x420, "UTslBaseOptionButtonWidget::OnFocusReceived_Handler offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
