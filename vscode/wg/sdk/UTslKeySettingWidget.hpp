#pragma once
#include "UTslBaseOptionWidget.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeySettingWidget // Size: 0x440
	: public UTslBaseOptionWidget // Size: 0x3D0
{
private:
	typedef UTslKeySettingWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1556); // id32("Class TslGame.TslKeySettingWidget")
		return ptr;
	}
	FScriptMulticastDelegate OnKeyChanged; /* Ofs: 0x3D0 Size: 0x10 - MulticastDelegateProperty TslGame.TslKeySettingWidget.OnKeyChanged */
	ExternalPtr<struct UClass> KeyDisplayWidgetClass; /* Ofs: 0x3E0 Size: 0x8 - ClassProperty TslGame.TslKeySettingWidget.KeyDisplayWidgetClass */
	FUmgWidgetBinder_Gerneral KeyScrollBoxBinder; /* Ofs: 0x3E8 Size: 0x20 - StructProperty TslGame.TslKeySettingWidget.KeyScrollBoxBinder */
	TArray<ExternalPtr<struct UTslKeyDisplayWidget>> KeyDisplayWidgets; /* Ofs: 0x408 Size: 0x10 - ArrayProperty TslGame.TslKeySettingWidget.KeyDisplayWidgets */
	FText DisplayText; /* Ofs: 0x418 Size: 0x18 - TextProperty TslGame.TslKeySettingWidget.DisplayText */
	FName CategoryName; /* Ofs: 0x430 Size: 0x8 - NameProperty TslGame.TslKeySettingWidget.CategoryName */
	uint8_t UnknownData438[0x8];


	inline bool SetOnKeyChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetKeyDisplayWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetKeyScrollBoxBinder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetKeyDisplayWidgets(t_structHelper inst, TArray<ExternalPtr<struct UTslKeyDisplayWidget>> value) { inst.WriteOffset(0x408, value); }
	inline bool SetDisplayText(t_structHelper inst, FText value) { inst.WriteOffset(0x418, value); }
	inline bool SetCategoryName(t_structHelper inst, FName value) { inst.WriteOffset(0x430, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeySettingWidget = sizeof(UTslKeySettingWidget); // 1088
    static_assert(sizeof(UTslKeySettingWidget) == 0x440, "Size of UTslKeySettingWidget is not correct.");
	auto constexpr UTslKeySettingWidget_OnKeyChanged_Offset = offsetof(UTslKeySettingWidget, OnKeyChanged);
	static_assert(UTslKeySettingWidget_OnKeyChanged_Offset == 0x3d0, "UTslKeySettingWidget::OnKeyChanged offset is not 3d0");
	auto constexpr UTslKeySettingWidget_KeyDisplayWidgetClass_Offset = offsetof(UTslKeySettingWidget, KeyDisplayWidgetClass);
	static_assert(UTslKeySettingWidget_KeyDisplayWidgetClass_Offset == 0x3e0, "UTslKeySettingWidget::KeyDisplayWidgetClass offset is not 3e0");
	auto constexpr UTslKeySettingWidget_KeyScrollBoxBinder_Offset = offsetof(UTslKeySettingWidget, KeyScrollBoxBinder);
	static_assert(UTslKeySettingWidget_KeyScrollBoxBinder_Offset == 0x3e8, "UTslKeySettingWidget::KeyScrollBoxBinder offset is not 3e8");
	auto constexpr UTslKeySettingWidget_KeyDisplayWidgets_Offset = offsetof(UTslKeySettingWidget, KeyDisplayWidgets);
	static_assert(UTslKeySettingWidget_KeyDisplayWidgets_Offset == 0x408, "UTslKeySettingWidget::KeyDisplayWidgets offset is not 408");
	auto constexpr UTslKeySettingWidget_DisplayText_Offset = offsetof(UTslKeySettingWidget, DisplayText);
	static_assert(UTslKeySettingWidget_DisplayText_Offset == 0x418, "UTslKeySettingWidget::DisplayText offset is not 418");
	auto constexpr UTslKeySettingWidget_CategoryName_Offset = offsetof(UTslKeySettingWidget, CategoryName);
	static_assert(UTslKeySettingWidget_CategoryName_Offset == 0x430, "UTslKeySettingWidget::CategoryName offset is not 430");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
