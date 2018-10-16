#pragma once
#include "UWidget.hpp"
#include "FExpandableAreaStyle.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FMargin.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UExpandableArea // Size: 0x378
	: public UWidget // Size: 0x130
{
private:
	typedef UExpandableArea t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(490); // id32("Class UMG.ExpandableArea")
		return ptr;
	}
	uint8_t UnknownData130[0x8];
	FExpandableAreaStyle Style; /* Ofs: 0x138 Size: 0x130 - StructProperty UMG.ExpandableArea.Style */
	FSlateBrush BorderBrush; /* Ofs: 0x268 Size: 0x90 - StructProperty UMG.ExpandableArea.BorderBrush */
	FSlateColor BorderColor; /* Ofs: 0x2F8 Size: 0x28 - StructProperty UMG.ExpandableArea.BorderColor */
	uint8_t boolField320;
	uint8_t UnknownData321[0x3];
	float MaxHeight; /* Ofs: 0x324 Size: 0x4 - FloatProperty UMG.ExpandableArea.MaxHeight */
	FMargin HeaderPadding; /* Ofs: 0x328 Size: 0x10 - StructProperty UMG.ExpandableArea.HeaderPadding */
	FMargin AreaPadding; /* Ofs: 0x338 Size: 0x10 - StructProperty UMG.ExpandableArea.AreaPadding */
	FScriptMulticastDelegate OnExpansionChanged; /* Ofs: 0x348 Size: 0x10 - MulticastDelegateProperty UMG.ExpandableArea.OnExpansionChanged */
	ExternalPtr<struct UWidget> HeaderContent; /* Ofs: 0x358 Size: 0x8 - ObjectProperty UMG.ExpandableArea.HeaderContent */
	ExternalPtr<struct UWidget> BodyContent; /* Ofs: 0x360 Size: 0x8 - ObjectProperty UMG.ExpandableArea.BodyContent */
	uint8_t UnknownData368[0x10];


	inline bool SetStyle(t_structHelper inst, FExpandableAreaStyle value) { inst.WriteOffset(0x138, value); }
	inline bool SetBorderBrush(t_structHelper inst, FSlateBrush value) { inst.WriteOffset(0x268, value); }
	inline bool SetBorderColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x2F8, value); }
	inline bool bIsExpanded()
	{
		return boolField320& 0x1;
	}
	inline bool SetbIsExpanded(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x320, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaxHeight(t_structHelper inst, float value) { inst.WriteOffset(0x324, value); }
	inline bool SetHeaderPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x328, value); }
	inline bool SetAreaPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x338, value); }
	inline bool SetOnExpansionChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x348, value); }
	inline bool SetHeaderContent(t_structHelper inst, ExternalPtr<struct UWidget> value) { inst.WriteOffset(0x358, value); }
	inline bool SetBodyContent(t_structHelper inst, ExternalPtr<struct UWidget> value) { inst.WriteOffset(0x360, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUExpandableArea = sizeof(UExpandableArea); // 888
    static_assert(sizeof(UExpandableArea) == 0x378, "Size of UExpandableArea is not correct.");
	auto constexpr UExpandableArea_Style_Offset = offsetof(UExpandableArea, Style);
	static_assert(UExpandableArea_Style_Offset == 0x138, "UExpandableArea::Style offset is not 138");
	auto constexpr UExpandableArea_BorderBrush_Offset = offsetof(UExpandableArea, BorderBrush);
	static_assert(UExpandableArea_BorderBrush_Offset == 0x268, "UExpandableArea::BorderBrush offset is not 268");
	auto constexpr UExpandableArea_BorderColor_Offset = offsetof(UExpandableArea, BorderColor);
	static_assert(UExpandableArea_BorderColor_Offset == 0x2f8, "UExpandableArea::BorderColor offset is not 2f8");
	auto constexpr UExpandableArea_boolField320_Offset = offsetof(UExpandableArea, boolField320);
	static_assert(UExpandableArea_boolField320_Offset == 0x320, "UExpandableArea::boolField320 offset is not 320");
	auto constexpr UExpandableArea_MaxHeight_Offset = offsetof(UExpandableArea, MaxHeight);
	static_assert(UExpandableArea_MaxHeight_Offset == 0x324, "UExpandableArea::MaxHeight offset is not 324");
	auto constexpr UExpandableArea_HeaderPadding_Offset = offsetof(UExpandableArea, HeaderPadding);
	static_assert(UExpandableArea_HeaderPadding_Offset == 0x328, "UExpandableArea::HeaderPadding offset is not 328");
	auto constexpr UExpandableArea_AreaPadding_Offset = offsetof(UExpandableArea, AreaPadding);
	static_assert(UExpandableArea_AreaPadding_Offset == 0x338, "UExpandableArea::AreaPadding offset is not 338");
	auto constexpr UExpandableArea_OnExpansionChanged_Offset = offsetof(UExpandableArea, OnExpansionChanged);
	static_assert(UExpandableArea_OnExpansionChanged_Offset == 0x348, "UExpandableArea::OnExpansionChanged offset is not 348");
	auto constexpr UExpandableArea_HeaderContent_Offset = offsetof(UExpandableArea, HeaderContent);
	static_assert(UExpandableArea_HeaderContent_Offset == 0x358, "UExpandableArea::HeaderContent offset is not 358");
	auto constexpr UExpandableArea_BodyContent_Offset = offsetof(UExpandableArea, BodyContent);
	static_assert(UExpandableArea_BodyContent_Offset == 0x360, "UExpandableArea::BodyContent offset is not 360");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
