#pragma once
#include "UWidget.hpp"
#include "FShapedTextOptions.hpp"
#include "ETextJustify.hpp"
#include "ETextWrappingPolicy.hpp"
#include "FMargin.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTextLayoutWidget // Size: 0x158
	: public UWidget // Size: 0x130
{
private:
	typedef UTextLayoutWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(487); // id32("Class UMG.TextLayoutWidget")
		return ptr;
	}
	FShapedTextOptions ShapedTextOptions; /* Ofs: 0x130 Size: 0x8 - StructProperty UMG.TextLayoutWidget.ShapedTextOptions */
	TEnumAsByte<enum ETextJustify> Justification; /* Ofs: 0x138 Size: 0x1 - ByteProperty UMG.TextLayoutWidget.Justification */
	uint8_t boolField139;
	uint8_t UnknownData13A[0x2];
	float WrapTextAt; /* Ofs: 0x13C Size: 0x4 - FloatProperty UMG.TextLayoutWidget.WrapTextAt */
	TEnumAsByte<enum ETextWrappingPolicy> WrappingPolicy; /* Ofs: 0x140 Size: 0x1 - EnumProperty UMG.TextLayoutWidget.WrappingPolicy */
	uint8_t UnknownData141[0x3];
	FMargin Margin; /* Ofs: 0x144 Size: 0x10 - StructProperty UMG.TextLayoutWidget.Margin */
	float LineHeightPercentage; /* Ofs: 0x154 Size: 0x4 - FloatProperty UMG.TextLayoutWidget.LineHeightPercentage */


	inline bool SetShapedTextOptions(t_structHelper inst, FShapedTextOptions value) { inst.WriteOffset(0x130, value); }
	inline bool SetJustification(t_structHelper inst, TEnumAsByte<enum ETextJustify> value) { inst.WriteOffset(0x138, value); }
	inline bool AutoWrapText()
	{
		return boolField139& 0x1;
	}
	inline bool SetAutoWrapText(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x139, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWrapTextAt(t_structHelper inst, float value) { inst.WriteOffset(0x13C, value); }
	inline bool SetWrappingPolicy(t_structHelper inst, TEnumAsByte<enum ETextWrappingPolicy> value) { inst.WriteOffset(0x140, value); }
	inline bool SetMargin(t_structHelper inst, FMargin value) { inst.WriteOffset(0x144, value); }
	inline bool SetLineHeightPercentage(t_structHelper inst, float value) { inst.WriteOffset(0x154, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTextLayoutWidget = sizeof(UTextLayoutWidget); // 344
    static_assert(sizeof(UTextLayoutWidget) == 0x158, "Size of UTextLayoutWidget is not correct.");
	auto constexpr UTextLayoutWidget_ShapedTextOptions_Offset = offsetof(UTextLayoutWidget, ShapedTextOptions);
	static_assert(UTextLayoutWidget_ShapedTextOptions_Offset == 0x130, "UTextLayoutWidget::ShapedTextOptions offset is not 130");
	auto constexpr UTextLayoutWidget_Justification_Offset = offsetof(UTextLayoutWidget, Justification);
	static_assert(UTextLayoutWidget_Justification_Offset == 0x138, "UTextLayoutWidget::Justification offset is not 138");
	auto constexpr UTextLayoutWidget_boolField139_Offset = offsetof(UTextLayoutWidget, boolField139);
	static_assert(UTextLayoutWidget_boolField139_Offset == 0x139, "UTextLayoutWidget::boolField139 offset is not 139");
	auto constexpr UTextLayoutWidget_WrapTextAt_Offset = offsetof(UTextLayoutWidget, WrapTextAt);
	static_assert(UTextLayoutWidget_WrapTextAt_Offset == 0x13c, "UTextLayoutWidget::WrapTextAt offset is not 13c");
	auto constexpr UTextLayoutWidget_WrappingPolicy_Offset = offsetof(UTextLayoutWidget, WrappingPolicy);
	static_assert(UTextLayoutWidget_WrappingPolicy_Offset == 0x140, "UTextLayoutWidget::WrappingPolicy offset is not 140");
	auto constexpr UTextLayoutWidget_Margin_Offset = offsetof(UTextLayoutWidget, Margin);
	static_assert(UTextLayoutWidget_Margin_Offset == 0x144, "UTextLayoutWidget::Margin offset is not 144");
	auto constexpr UTextLayoutWidget_LineHeightPercentage_Offset = offsetof(UTextLayoutWidget, LineHeightPercentage);
	static_assert(UTextLayoutWidget_LineHeightPercentage_Offset == 0x154, "UTextLayoutWidget::LineHeightPercentage offset is not 154");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
