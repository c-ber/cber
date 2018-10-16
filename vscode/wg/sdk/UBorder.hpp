#pragma once
#include "UContentWidget.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FSlateBrush.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBorder // Size: 0x2A8
	: public UContentWidget // Size: 0x148
{
private:
	typedef UBorder t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(496); // id32("Class UMG.Border")
		return ptr;
	}
	FLinearColor ContentColorAndOpacity; /* Ofs: 0x148 Size: 0x10 - StructProperty UMG.Border.ContentColorAndOpacity */
	FScriptDelegate ContentColorAndOpacityDelegate; /* Ofs: 0x158 Size: 0x10 - DelegateProperty UMG.Border.ContentColorAndOpacityDelegate */
	FMargin Padding; /* Ofs: 0x168 Size: 0x10 - StructProperty UMG.Border.Padding */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x178 Size: 0x1 - ByteProperty UMG.Border.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x179 Size: 0x1 - ByteProperty UMG.Border.VerticalAlignment */
	uint8_t UnknownData17A[0x6];
	FSlateBrush Background; /* Ofs: 0x180 Size: 0x90 - StructProperty UMG.Border.Background */
	FScriptDelegate BackgroundDelegate; /* Ofs: 0x210 Size: 0x10 - DelegateProperty UMG.Border.BackgroundDelegate */
	FLinearColor BrushColor; /* Ofs: 0x220 Size: 0x10 - StructProperty UMG.Border.BrushColor */
	FScriptDelegate BrushColorDelegate; /* Ofs: 0x230 Size: 0x10 - DelegateProperty UMG.Border.BrushColorDelegate */
	FVector2D DesiredSizeScale; /* Ofs: 0x240 Size: 0x8 - StructProperty UMG.Border.DesiredSizeScale */
	uint8_t boolField248;
	uint8_t UnknownData249[0x7];
	FScriptDelegate OnMouseButtonDownEvent; /* Ofs: 0x250 Size: 0x10 - DelegateProperty UMG.Border.OnMouseButtonDownEvent */
	FScriptDelegate OnMouseButtonUpEvent; /* Ofs: 0x260 Size: 0x10 - DelegateProperty UMG.Border.OnMouseButtonUpEvent */
	FScriptDelegate OnMouseMoveEvent; /* Ofs: 0x270 Size: 0x10 - DelegateProperty UMG.Border.OnMouseMoveEvent */
	FScriptDelegate OnMouseDoubleClickEvent; /* Ofs: 0x280 Size: 0x10 - DelegateProperty UMG.Border.OnMouseDoubleClickEvent */
	uint8_t UnknownData290[0x10];
	ExternalPtr<struct USlateBrushAsset> Brush; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty UMG.Border.Brush */


	inline bool SetContentColorAndOpacity(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x148, value); }
	inline bool SetContentColorAndOpacityDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x158, value); }
	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x168, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x178, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x179, value); }
	inline bool SetBackground(t_structHelper inst, FSlateBrush value) { inst.WriteOffset(0x180, value); }
	inline bool SetBackgroundDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x210, value); }
	inline bool SetBrushColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x220, value); }
	inline bool SetBrushColorDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x230, value); }
	inline bool SetDesiredSizeScale(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x240, value); }
	inline bool bShowEffectWhenDisabled()
	{
		return boolField248& 0x1;
	}
	inline bool SetbShowEffectWhenDisabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x248, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnMouseButtonDownEvent(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x250, value); }
	inline bool SetOnMouseButtonUpEvent(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x260, value); }
	inline bool SetOnMouseMoveEvent(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x270, value); }
	inline bool SetOnMouseDoubleClickEvent(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x280, value); }
	inline bool SetBrush(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x2A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBorder = sizeof(UBorder); // 680
    static_assert(sizeof(UBorder) == 0x2A8, "Size of UBorder is not correct.");
	auto constexpr UBorder_ContentColorAndOpacity_Offset = offsetof(UBorder, ContentColorAndOpacity);
	static_assert(UBorder_ContentColorAndOpacity_Offset == 0x148, "UBorder::ContentColorAndOpacity offset is not 148");
	auto constexpr UBorder_ContentColorAndOpacityDelegate_Offset = offsetof(UBorder, ContentColorAndOpacityDelegate);
	static_assert(UBorder_ContentColorAndOpacityDelegate_Offset == 0x158, "UBorder::ContentColorAndOpacityDelegate offset is not 158");
	auto constexpr UBorder_Padding_Offset = offsetof(UBorder, Padding);
	static_assert(UBorder_Padding_Offset == 0x168, "UBorder::Padding offset is not 168");
	auto constexpr UBorder_HorizontalAlignment_Offset = offsetof(UBorder, HorizontalAlignment);
	static_assert(UBorder_HorizontalAlignment_Offset == 0x178, "UBorder::HorizontalAlignment offset is not 178");
	auto constexpr UBorder_VerticalAlignment_Offset = offsetof(UBorder, VerticalAlignment);
	static_assert(UBorder_VerticalAlignment_Offset == 0x179, "UBorder::VerticalAlignment offset is not 179");
	auto constexpr UBorder_Background_Offset = offsetof(UBorder, Background);
	static_assert(UBorder_Background_Offset == 0x180, "UBorder::Background offset is not 180");
	auto constexpr UBorder_BackgroundDelegate_Offset = offsetof(UBorder, BackgroundDelegate);
	static_assert(UBorder_BackgroundDelegate_Offset == 0x210, "UBorder::BackgroundDelegate offset is not 210");
	auto constexpr UBorder_BrushColor_Offset = offsetof(UBorder, BrushColor);
	static_assert(UBorder_BrushColor_Offset == 0x220, "UBorder::BrushColor offset is not 220");
	auto constexpr UBorder_BrushColorDelegate_Offset = offsetof(UBorder, BrushColorDelegate);
	static_assert(UBorder_BrushColorDelegate_Offset == 0x230, "UBorder::BrushColorDelegate offset is not 230");
	auto constexpr UBorder_DesiredSizeScale_Offset = offsetof(UBorder, DesiredSizeScale);
	static_assert(UBorder_DesiredSizeScale_Offset == 0x240, "UBorder::DesiredSizeScale offset is not 240");
	auto constexpr UBorder_boolField248_Offset = offsetof(UBorder, boolField248);
	static_assert(UBorder_boolField248_Offset == 0x248, "UBorder::boolField248 offset is not 248");
	auto constexpr UBorder_OnMouseButtonDownEvent_Offset = offsetof(UBorder, OnMouseButtonDownEvent);
	static_assert(UBorder_OnMouseButtonDownEvent_Offset == 0x250, "UBorder::OnMouseButtonDownEvent offset is not 250");
	auto constexpr UBorder_OnMouseButtonUpEvent_Offset = offsetof(UBorder, OnMouseButtonUpEvent);
	static_assert(UBorder_OnMouseButtonUpEvent_Offset == 0x260, "UBorder::OnMouseButtonUpEvent offset is not 260");
	auto constexpr UBorder_OnMouseMoveEvent_Offset = offsetof(UBorder, OnMouseMoveEvent);
	static_assert(UBorder_OnMouseMoveEvent_Offset == 0x270, "UBorder::OnMouseMoveEvent offset is not 270");
	auto constexpr UBorder_OnMouseDoubleClickEvent_Offset = offsetof(UBorder, OnMouseDoubleClickEvent);
	static_assert(UBorder_OnMouseDoubleClickEvent_Offset == 0x280, "UBorder::OnMouseDoubleClickEvent offset is not 280");
	auto constexpr UBorder_Brush_Offset = offsetof(UBorder, Brush);
	static_assert(UBorder_Brush_Offset == 0x2a0, "UBorder::Brush offset is not 2a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
