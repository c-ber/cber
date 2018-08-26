#pragma once
#include "UWidget.hpp"
#include "FProgressBarStyle.hpp"
#include "EProgressBarFillType.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProgressBar // Size: 0x350
	: public UWidget // Size: 0x130
{
private:
	typedef UProgressBar t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(515); // id32("Class UMG.ProgressBar")
		return ptr;
	}
	FProgressBarStyle WidgetStyle; /* Ofs: 0x130 Size: 0x1B8 - StructProperty UMG.ProgressBar.WidgetStyle */
	ExternalPtr<struct USlateWidgetStyleAsset> Style; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty UMG.ProgressBar.Style */
	ExternalPtr<struct USlateBrushAsset> BackgroundImage; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty UMG.ProgressBar.BackgroundImage */
	ExternalPtr<struct USlateBrushAsset> FillImage; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty UMG.ProgressBar.FillImage */
	ExternalPtr<struct USlateBrushAsset> MarqueeImage; /* Ofs: 0x300 Size: 0x8 - ObjectProperty UMG.ProgressBar.MarqueeImage */
	float Percent; /* Ofs: 0x308 Size: 0x4 - FloatProperty UMG.ProgressBar.Percent */
	TEnumAsByte<enum EProgressBarFillType> BarFillType; /* Ofs: 0x30C Size: 0x1 - ByteProperty UMG.ProgressBar.BarFillType */
	uint8_t boolField30D;
	uint8_t UnknownData30E[0x2];
	FScriptDelegate PercentDelegate; /* Ofs: 0x310 Size: 0x10 - DelegateProperty UMG.ProgressBar.PercentDelegate */
	FLinearColor FillColorAndOpacity; /* Ofs: 0x320 Size: 0x10 - StructProperty UMG.ProgressBar.FillColorAndOpacity */
	FScriptDelegate FillColorAndOpacityDelegate; /* Ofs: 0x330 Size: 0x10 - DelegateProperty UMG.ProgressBar.FillColorAndOpacityDelegate */
	uint8_t UnknownData340[0x10];


	inline bool SetWidgetStyle(t_structHelper inst, FProgressBarStyle value) { inst.WriteOffset(0x130, value); }
	inline bool SetStyle(t_structHelper inst, ExternalPtr<struct USlateWidgetStyleAsset> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetBackgroundImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetFillImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetMarqueeImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x300, value); }
	inline bool SetPercent(t_structHelper inst, float value) { inst.WriteOffset(0x308, value); }
	inline bool SetBarFillType(t_structHelper inst, TEnumAsByte<enum EProgressBarFillType> value) { inst.WriteOffset(0x30C, value); }
	inline bool bIsMarquee()
	{
		return boolField30D& 0x1;
	}
	inline bool SetbIsMarquee(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPercentDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x310, value); }
	inline bool SetFillColorAndOpacity(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x320, value); }
	inline bool SetFillColorAndOpacityDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x330, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProgressBar = sizeof(UProgressBar); // 848
    static_assert(sizeof(UProgressBar) == 0x350, "Size of UProgressBar is not correct.");
	auto constexpr UProgressBar_WidgetStyle_Offset = offsetof(UProgressBar, WidgetStyle);
	static_assert(UProgressBar_WidgetStyle_Offset == 0x130, "UProgressBar::WidgetStyle offset is not 130");
	auto constexpr UProgressBar_Style_Offset = offsetof(UProgressBar, Style);
	static_assert(UProgressBar_Style_Offset == 0x2e8, "UProgressBar::Style offset is not 2e8");
	auto constexpr UProgressBar_BackgroundImage_Offset = offsetof(UProgressBar, BackgroundImage);
	static_assert(UProgressBar_BackgroundImage_Offset == 0x2f0, "UProgressBar::BackgroundImage offset is not 2f0");
	auto constexpr UProgressBar_FillImage_Offset = offsetof(UProgressBar, FillImage);
	static_assert(UProgressBar_FillImage_Offset == 0x2f8, "UProgressBar::FillImage offset is not 2f8");
	auto constexpr UProgressBar_MarqueeImage_Offset = offsetof(UProgressBar, MarqueeImage);
	static_assert(UProgressBar_MarqueeImage_Offset == 0x300, "UProgressBar::MarqueeImage offset is not 300");
	auto constexpr UProgressBar_Percent_Offset = offsetof(UProgressBar, Percent);
	static_assert(UProgressBar_Percent_Offset == 0x308, "UProgressBar::Percent offset is not 308");
	auto constexpr UProgressBar_BarFillType_Offset = offsetof(UProgressBar, BarFillType);
	static_assert(UProgressBar_BarFillType_Offset == 0x30c, "UProgressBar::BarFillType offset is not 30c");
	auto constexpr UProgressBar_boolField30D_Offset = offsetof(UProgressBar, boolField30D);
	static_assert(UProgressBar_boolField30D_Offset == 0x30d, "UProgressBar::boolField30D offset is not 30d");
	auto constexpr UProgressBar_PercentDelegate_Offset = offsetof(UProgressBar, PercentDelegate);
	static_assert(UProgressBar_PercentDelegate_Offset == 0x310, "UProgressBar::PercentDelegate offset is not 310");
	auto constexpr UProgressBar_FillColorAndOpacity_Offset = offsetof(UProgressBar, FillColorAndOpacity);
	static_assert(UProgressBar_FillColorAndOpacity_Offset == 0x320, "UProgressBar::FillColorAndOpacity offset is not 320");
	auto constexpr UProgressBar_FillColorAndOpacityDelegate_Offset = offsetof(UProgressBar, FillColorAndOpacityDelegate);
	static_assert(UProgressBar_FillColorAndOpacityDelegate_Offset == 0x330, "UProgressBar::FillColorAndOpacityDelegate offset is not 330");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
