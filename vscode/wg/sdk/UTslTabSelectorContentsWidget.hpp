#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_WidgetSwitcher.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslTabSelectorContentsWidget // Size: 0x378
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslTabSelectorContentsWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1583); // id32("Class TslGame.TslTabSelectorContentsWidget")
		return ptr;
	}
	FText TitleText; /* Ofs: 0x300 Size: 0x18 - TextProperty TslGame.TslTabSelectorContentsWidget.TitleText */
	FUmgWidgetBinder_TextBlock TitleTextNormal_Binder; /* Ofs: 0x318 Size: 0x20 - StructProperty TslGame.TslTabSelectorContentsWidget.TitleTextNormal_Binder */
	FUmgWidgetBinder_TextBlock TitleTextSelected_Binder; /* Ofs: 0x338 Size: 0x20 - StructProperty TslGame.TslTabSelectorContentsWidget.TitleTextSelected_Binder */
	FUmgWidgetBinder_WidgetSwitcher Switcher_Binder; /* Ofs: 0x358 Size: 0x20 - StructProperty TslGame.TslTabSelectorContentsWidget.Switcher_Binder */


	inline bool SetTitleText(t_structHelper inst, FText value) { inst.WriteOffset(0x300, value); }
	inline bool SetTitleTextNormal_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x318, value); }
	inline bool SetTitleTextSelected_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x338, value); }
	inline bool SetSwitcher_Binder(t_structHelper inst, FUmgWidgetBinder_WidgetSwitcher value) { inst.WriteOffset(0x358, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslTabSelectorContentsWidget = sizeof(UTslTabSelectorContentsWidget); // 888
    static_assert(sizeof(UTslTabSelectorContentsWidget) == 0x378, "Size of UTslTabSelectorContentsWidget is not correct.");
	auto constexpr UTslTabSelectorContentsWidget_TitleText_Offset = offsetof(UTslTabSelectorContentsWidget, TitleText);
	static_assert(UTslTabSelectorContentsWidget_TitleText_Offset == 0x300, "UTslTabSelectorContentsWidget::TitleText offset is not 300");
	auto constexpr UTslTabSelectorContentsWidget_TitleTextNormal_Binder_Offset = offsetof(UTslTabSelectorContentsWidget, TitleTextNormal_Binder);
	static_assert(UTslTabSelectorContentsWidget_TitleTextNormal_Binder_Offset == 0x318, "UTslTabSelectorContentsWidget::TitleTextNormal_Binder offset is not 318");
	auto constexpr UTslTabSelectorContentsWidget_TitleTextSelected_Binder_Offset = offsetof(UTslTabSelectorContentsWidget, TitleTextSelected_Binder);
	static_assert(UTslTabSelectorContentsWidget_TitleTextSelected_Binder_Offset == 0x338, "UTslTabSelectorContentsWidget::TitleTextSelected_Binder offset is not 338");
	auto constexpr UTslTabSelectorContentsWidget_Switcher_Binder_Offset = offsetof(UTslTabSelectorContentsWidget, Switcher_Binder);
	static_assert(UTslTabSelectorContentsWidget_Switcher_Binder_Offset == 0x358, "UTslTabSelectorContentsWidget::Switcher_Binder offset is not 358");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
