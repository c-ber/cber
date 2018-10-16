#pragma once
#include "UPanelWidget.hpp"
#include "FScrollBoxStyle.hpp"
#include "FScrollBarStyle.hpp"
#include "EOrientation.hpp"
#include "ESlateVisibility.hpp"
#include "EConsumeMouseWheel.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UScrollBox // Size: 0x8E0
	: public UPanelWidget // Size: 0x148
{
private:
	typedef UScrollBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(510); // id32("Class UMG.ScrollBox")
		return ptr;
	}
	FScrollBoxStyle WidgetStyle; /* Ofs: 0x148 Size: 0x248 - StructProperty UMG.ScrollBox.WidgetStyle */
	FScrollBarStyle WidgetBarStyle; /* Ofs: 0x390 Size: 0x518 - StructProperty UMG.ScrollBox.WidgetBarStyle */
	ExternalPtr<struct USlateWidgetStyleAsset> Style; /* Ofs: 0x8A8 Size: 0x8 - ObjectProperty UMG.ScrollBox.Style */
	ExternalPtr<struct USlateWidgetStyleAsset> BarStyle; /* Ofs: 0x8B0 Size: 0x8 - ObjectProperty UMG.ScrollBox.BarStyle */
	TEnumAsByte<enum EOrientation> Orientation; /* Ofs: 0x8B8 Size: 0x1 - ByteProperty UMG.ScrollBox.Orientation */
	TEnumAsByte<enum ESlateVisibility> ScrollBarVisibility; /* Ofs: 0x8B9 Size: 0x1 - EnumProperty UMG.ScrollBox.ScrollBarVisibility */
	TEnumAsByte<enum EConsumeMouseWheel> ConsumeMouseWheel; /* Ofs: 0x8BA Size: 0x1 - EnumProperty UMG.ScrollBox.ConsumeMouseWheel */
	uint8_t UnknownData8BB[0x1];
	FVector2D ScrollbarThickness; /* Ofs: 0x8BC Size: 0x8 - StructProperty UMG.ScrollBox.ScrollbarThickness */
	uint8_t boolField8C4;
	uint8_t UnknownData8C5[0x1B];


	inline bool SetWidgetStyle(t_structHelper inst, FScrollBoxStyle value) { inst.WriteOffset(0x148, value); }
	inline bool SetWidgetBarStyle(t_structHelper inst, FScrollBarStyle value) { inst.WriteOffset(0x390, value); }
	inline bool SetStyle(t_structHelper inst, ExternalPtr<struct USlateWidgetStyleAsset> value) { inst.WriteOffset(0x8A8, value); }
	inline bool SetBarStyle(t_structHelper inst, ExternalPtr<struct USlateWidgetStyleAsset> value) { inst.WriteOffset(0x8B0, value); }
	inline bool SetOrientation(t_structHelper inst, TEnumAsByte<enum EOrientation> value) { inst.WriteOffset(0x8B8, value); }
	inline bool SetScrollBarVisibility(t_structHelper inst, TEnumAsByte<enum ESlateVisibility> value) { inst.WriteOffset(0x8B9, value); }
	inline bool SetConsumeMouseWheel(t_structHelper inst, TEnumAsByte<enum EConsumeMouseWheel> value) { inst.WriteOffset(0x8BA, value); }
	inline bool SetScrollbarThickness(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x8BC, value); }
	inline bool AlwaysShowScrollbar()
	{
		return boolField8C4& 0x1;
	}
	inline bool SetAlwaysShowScrollbar(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8C4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUScrollBox = sizeof(UScrollBox); // 2272
    static_assert(sizeof(UScrollBox) == 0x8E0, "Size of UScrollBox is not correct.");
	auto constexpr UScrollBox_WidgetStyle_Offset = offsetof(UScrollBox, WidgetStyle);
	static_assert(UScrollBox_WidgetStyle_Offset == 0x148, "UScrollBox::WidgetStyle offset is not 148");
	auto constexpr UScrollBox_WidgetBarStyle_Offset = offsetof(UScrollBox, WidgetBarStyle);
	static_assert(UScrollBox_WidgetBarStyle_Offset == 0x390, "UScrollBox::WidgetBarStyle offset is not 390");
	auto constexpr UScrollBox_Style_Offset = offsetof(UScrollBox, Style);
	static_assert(UScrollBox_Style_Offset == 0x8a8, "UScrollBox::Style offset is not 8a8");
	auto constexpr UScrollBox_BarStyle_Offset = offsetof(UScrollBox, BarStyle);
	static_assert(UScrollBox_BarStyle_Offset == 0x8b0, "UScrollBox::BarStyle offset is not 8b0");
	auto constexpr UScrollBox_Orientation_Offset = offsetof(UScrollBox, Orientation);
	static_assert(UScrollBox_Orientation_Offset == 0x8b8, "UScrollBox::Orientation offset is not 8b8");
	auto constexpr UScrollBox_ScrollBarVisibility_Offset = offsetof(UScrollBox, ScrollBarVisibility);
	static_assert(UScrollBox_ScrollBarVisibility_Offset == 0x8b9, "UScrollBox::ScrollBarVisibility offset is not 8b9");
	auto constexpr UScrollBox_ConsumeMouseWheel_Offset = offsetof(UScrollBox, ConsumeMouseWheel);
	static_assert(UScrollBox_ConsumeMouseWheel_Offset == 0x8ba, "UScrollBox::ConsumeMouseWheel offset is not 8ba");
	auto constexpr UScrollBox_ScrollbarThickness_Offset = offsetof(UScrollBox, ScrollbarThickness);
	static_assert(UScrollBox_ScrollbarThickness_Offset == 0x8bc, "UScrollBox::ScrollbarThickness offset is not 8bc");
	auto constexpr UScrollBox_boolField8C4_Offset = offsetof(UScrollBox, boolField8C4);
	static_assert(UScrollBox_boolField8C4_Offset == 0x8c4, "UScrollBox::boolField8C4 offset is not 8c4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
