#pragma once
#include "UVisual.hpp"
#include "ESlateVisibility.hpp"
#include "EMouseCursor.hpp"
#include "FWidgetTransform.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWidget // Size: 0x130
	: public UVisual // Size: 0x30
{
private:
	typedef UWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(478); // id32("Class UMG.Widget")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t boolField31;
	uint8_t UnknownData32[0x6];
	ExternalPtr<struct UPanelSlot> Slot; /* Ofs: 0x38 Size: 0x8 - ObjectProperty UMG.Widget.Slot */
	uint8_t boolField40;
	uint8_t UnknownData41[0x7];
	FScriptDelegate bIsEnabledDelegate; /* Ofs: 0x48 Size: 0x10 - DelegateProperty UMG.Widget.bIsEnabledDelegate */
	FScriptDelegate OnPrepass; /* Ofs: 0x58 Size: 0x10 - DelegateProperty UMG.Widget.OnPrepass */
	FText ToolTipText; /* Ofs: 0x68 Size: 0x18 - TextProperty UMG.Widget.ToolTipText */
	FScriptDelegate ToolTipTextDelegate; /* Ofs: 0x80 Size: 0x10 - DelegateProperty UMG.Widget.ToolTipTextDelegate */
	ExternalPtr<struct UWidget> ToolTipWidget; /* Ofs: 0x90 Size: 0x8 - ObjectProperty UMG.Widget.ToolTipWidget */
	FScriptDelegate ToolTipWidgetDelegate; /* Ofs: 0x98 Size: 0x10 - DelegateProperty UMG.Widget.ToolTipWidgetDelegate */
	TEnumAsByte<enum ESlateVisibility> Visiblity; /* Ofs: 0xA8 Size: 0x1 - EnumProperty UMG.Widget.Visiblity */
	TEnumAsByte<enum ESlateVisibility> Visibility; /* Ofs: 0xA9 Size: 0x1 - EnumProperty UMG.Widget.Visibility */
	uint8_t UnknownDataAA[0x6];
	FScriptDelegate VisibilityDelegate; /* Ofs: 0xB0 Size: 0x10 - DelegateProperty UMG.Widget.VisibilityDelegate */
	uint8_t boolFieldC0;
	uint8_t UnknownDataC1[0x3];
	TEnumAsByte<enum EMouseCursor> Cursor; /* Ofs: 0xC4 Size: 0x1 - ByteProperty UMG.Widget.Cursor */
	uint8_t boolFieldC5;
	uint8_t UnknownDataC6[0x2];
	FWidgetTransform RenderTransform; /* Ofs: 0xC8 Size: 0x1C - StructProperty UMG.Widget.RenderTransform */
	FVector2D RenderTransformPivot; /* Ofs: 0xE4 Size: 0x8 - StructProperty UMG.Widget.RenderTransformPivot */
	uint8_t UnknownDataEC[0x4];
	ExternalPtr<struct UWidgetNavigation> Navigation; /* Ofs: 0xF0 Size: 0x8 - ObjectProperty UMG.Widget.Navigation */
	uint8_t UnknownDataF8[0x28];
	TArray<ExternalPtr<struct UPropertyBinding>> NativeBindings; /* Ofs: 0x120 Size: 0x10 - ArrayProperty UMG.Widget.NativeBindings */


	inline bool bIsVariable()
	{
		return boolField30& 0x1;
	}
	inline bool SetbIsVariable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCreatedByConstructionScript()
	{
		return boolField31& 0x1;
	}
	inline bool SetbCreatedByConstructionScript(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x31, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSlot(t_structHelper inst, ExternalPtr<struct UPanelSlot> value) { inst.WriteOffset(0x38, value); }
	inline bool bIsEnabled()
	{
		return boolField40& 0x1;
	}
	inline bool SetbIsEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetbIsEnabledDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x48, value); }
	inline bool SetOnPrepass(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x58, value); }
	inline bool SetToolTipText(t_structHelper inst, FText value) { inst.WriteOffset(0x68, value); }
	inline bool SetToolTipTextDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x80, value); }
	inline bool SetToolTipWidget(t_structHelper inst, ExternalPtr<struct UWidget> value) { inst.WriteOffset(0x90, value); }
	inline bool SetToolTipWidgetDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x98, value); }
	inline bool SetVisiblity(t_structHelper inst, TEnumAsByte<enum ESlateVisibility> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetVisibility(t_structHelper inst, TEnumAsByte<enum ESlateVisibility> value) { inst.WriteOffset(0xA9, value); }
	inline bool SetVisibilityDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0xB0, value); }
	inline bool bOverride_Cursor()
	{
		return boolFieldC0& 0x1;
	}
	inline bool SetbOverride_Cursor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCursor(t_structHelper inst, TEnumAsByte<enum EMouseCursor> value) { inst.WriteOffset(0xC4, value); }
	inline bool bIsVolatile()
	{
		return boolFieldC5& 0x1;
	}
	inline bool SetbIsVolatile(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRenderTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0xC8, value); }
	inline bool SetRenderTransformPivot(t_structHelper inst, FVector2D value) { inst.WriteOffset(0xE4, value); }
	inline bool SetNavigation(t_structHelper inst, ExternalPtr<struct UWidgetNavigation> value) { inst.WriteOffset(0xF0, value); }
	inline bool SetNativeBindings(t_structHelper inst, TArray<ExternalPtr<struct UPropertyBinding>> value) { inst.WriteOffset(0x120, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWidget = sizeof(UWidget); // 304
    static_assert(sizeof(UWidget) == 0x130, "Size of UWidget is not correct.");
	auto constexpr UWidget_boolField30_Offset = offsetof(UWidget, boolField30);
	static_assert(UWidget_boolField30_Offset == 0x30, "UWidget::boolField30 offset is not 30");
	auto constexpr UWidget_boolField31_Offset = offsetof(UWidget, boolField31);
	static_assert(UWidget_boolField31_Offset == 0x31, "UWidget::boolField31 offset is not 31");
	auto constexpr UWidget_Slot_Offset = offsetof(UWidget, Slot);
	static_assert(UWidget_Slot_Offset == 0x38, "UWidget::Slot offset is not 38");
	auto constexpr UWidget_boolField40_Offset = offsetof(UWidget, boolField40);
	static_assert(UWidget_boolField40_Offset == 0x40, "UWidget::boolField40 offset is not 40");
	auto constexpr UWidget_bIsEnabledDelegate_Offset = offsetof(UWidget, bIsEnabledDelegate);
	static_assert(UWidget_bIsEnabledDelegate_Offset == 0x48, "UWidget::bIsEnabledDelegate offset is not 48");
	auto constexpr UWidget_OnPrepass_Offset = offsetof(UWidget, OnPrepass);
	static_assert(UWidget_OnPrepass_Offset == 0x58, "UWidget::OnPrepass offset is not 58");
	auto constexpr UWidget_ToolTipText_Offset = offsetof(UWidget, ToolTipText);
	static_assert(UWidget_ToolTipText_Offset == 0x68, "UWidget::ToolTipText offset is not 68");
	auto constexpr UWidget_ToolTipTextDelegate_Offset = offsetof(UWidget, ToolTipTextDelegate);
	static_assert(UWidget_ToolTipTextDelegate_Offset == 0x80, "UWidget::ToolTipTextDelegate offset is not 80");
	auto constexpr UWidget_ToolTipWidget_Offset = offsetof(UWidget, ToolTipWidget);
	static_assert(UWidget_ToolTipWidget_Offset == 0x90, "UWidget::ToolTipWidget offset is not 90");
	auto constexpr UWidget_ToolTipWidgetDelegate_Offset = offsetof(UWidget, ToolTipWidgetDelegate);
	static_assert(UWidget_ToolTipWidgetDelegate_Offset == 0x98, "UWidget::ToolTipWidgetDelegate offset is not 98");
	auto constexpr UWidget_Visiblity_Offset = offsetof(UWidget, Visiblity);
	static_assert(UWidget_Visiblity_Offset == 0xa8, "UWidget::Visiblity offset is not a8");
	auto constexpr UWidget_Visibility_Offset = offsetof(UWidget, Visibility);
	static_assert(UWidget_Visibility_Offset == 0xa9, "UWidget::Visibility offset is not a9");
	auto constexpr UWidget_VisibilityDelegate_Offset = offsetof(UWidget, VisibilityDelegate);
	static_assert(UWidget_VisibilityDelegate_Offset == 0xb0, "UWidget::VisibilityDelegate offset is not b0");
	auto constexpr UWidget_boolFieldC0_Offset = offsetof(UWidget, boolFieldC0);
	static_assert(UWidget_boolFieldC0_Offset == 0xc0, "UWidget::boolFieldC0 offset is not c0");
	auto constexpr UWidget_Cursor_Offset = offsetof(UWidget, Cursor);
	static_assert(UWidget_Cursor_Offset == 0xc4, "UWidget::Cursor offset is not c4");
	auto constexpr UWidget_boolFieldC5_Offset = offsetof(UWidget, boolFieldC5);
	static_assert(UWidget_boolFieldC5_Offset == 0xc5, "UWidget::boolFieldC5 offset is not c5");
	auto constexpr UWidget_RenderTransform_Offset = offsetof(UWidget, RenderTransform);
	static_assert(UWidget_RenderTransform_Offset == 0xc8, "UWidget::RenderTransform offset is not c8");
	auto constexpr UWidget_RenderTransformPivot_Offset = offsetof(UWidget, RenderTransformPivot);
	static_assert(UWidget_RenderTransformPivot_Offset == 0xe4, "UWidget::RenderTransformPivot offset is not e4");
	auto constexpr UWidget_Navigation_Offset = offsetof(UWidget, Navigation);
	static_assert(UWidget_Navigation_Offset == 0xf0, "UWidget::Navigation offset is not f0");
	auto constexpr UWidget_NativeBindings_Offset = offsetof(UWidget, NativeBindings);
	static_assert(UWidget_NativeBindings_Offset == 0x120, "UWidget::NativeBindings offset is not 120");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
