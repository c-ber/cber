#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslTabSelectorWidget // Size: 0x348
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslTabSelectorWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1584); // id32("Class TslGame.TslTabSelectorWidget")
		return ptr;
	}
	int32_t SelectedIndex; /* Ofs: 0x300 Size: 0x4 - IntProperty TslGame.TslTabSelectorWidget.SelectedIndex */
	uint8_t UnknownData304[0x4];
	TArray<ExternalPtr<struct UTslTabSelectorContentsWidget>> TabWidgets; /* Ofs: 0x308 Size: 0x10 - ArrayProperty TslGame.TslTabSelectorWidget.TabWidgets */
	FUmgWidgetBinder_Gerneral TabHorizontalBox_Binder; /* Ofs: 0x318 Size: 0x20 - StructProperty TslGame.TslTabSelectorWidget.TabHorizontalBox_Binder */
	FScriptMulticastDelegate OnTabRotated; /* Ofs: 0x338 Size: 0x10 - MulticastDelegateProperty TslGame.TslTabSelectorWidget.OnTabRotated */


	inline bool SetSelectedIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x300, value); }
	inline bool SetTabWidgets(t_structHelper inst, TArray<ExternalPtr<struct UTslTabSelectorContentsWidget>> value) { inst.WriteOffset(0x308, value); }
	inline bool SetTabHorizontalBox_Binder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x318, value); }
	inline bool SetOnTabRotated(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x338, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslTabSelectorWidget = sizeof(UTslTabSelectorWidget); // 840
    static_assert(sizeof(UTslTabSelectorWidget) == 0x348, "Size of UTslTabSelectorWidget is not correct.");
	auto constexpr UTslTabSelectorWidget_SelectedIndex_Offset = offsetof(UTslTabSelectorWidget, SelectedIndex);
	static_assert(UTslTabSelectorWidget_SelectedIndex_Offset == 0x300, "UTslTabSelectorWidget::SelectedIndex offset is not 300");
	auto constexpr UTslTabSelectorWidget_TabWidgets_Offset = offsetof(UTslTabSelectorWidget, TabWidgets);
	static_assert(UTslTabSelectorWidget_TabWidgets_Offset == 0x308, "UTslTabSelectorWidget::TabWidgets offset is not 308");
	auto constexpr UTslTabSelectorWidget_TabHorizontalBox_Binder_Offset = offsetof(UTslTabSelectorWidget, TabHorizontalBox_Binder);
	static_assert(UTslTabSelectorWidget_TabHorizontalBox_Binder_Offset == 0x318, "UTslTabSelectorWidget::TabHorizontalBox_Binder offset is not 318");
	auto constexpr UTslTabSelectorWidget_OnTabRotated_Offset = offsetof(UTslTabSelectorWidget, OnTabRotated);
	static_assert(UTslTabSelectorWidget_OnTabRotated_Offset == 0x338, "UTslTabSelectorWidget::OnTabRotated offset is not 338");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
