#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULifeGaugeHitEffectBaseWidget // Size: 0x398
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef ULifeGaugeHitEffectBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1533); // id32("Class TslGame.LifeGaugeHitEffectBaseWidget")
		return ptr;
	}
	TArray<struct FGaugeAlphaCurveType> AlphaCurveList; /* Ofs: 0x300 Size: 0x10 - ArrayProperty TslGame.LifeGaugeHitEffectBaseWidget.AlphaCurveList */
	FUmgWidgetBinder_Image HitEffectImage; /* Ofs: 0x310 Size: 0x28 - StructProperty TslGame.LifeGaugeHitEffectBaseWidget.HitEffectImage */
	FName BaseColorParamName; /* Ofs: 0x338 Size: 0x8 - NameProperty TslGame.LifeGaugeHitEffectBaseWidget.BaseColorParamName */
	FName ColorLerpParamName; /* Ofs: 0x340 Size: 0x8 - NameProperty TslGame.LifeGaugeHitEffectBaseWidget.ColorLerpParamName */
	FName BrightAlphaParamName; /* Ofs: 0x348 Size: 0x8 - NameProperty TslGame.LifeGaugeHitEffectBaseWidget.BrightAlphaParamName */
	FName HitEffectAlphaParamName; /* Ofs: 0x350 Size: 0x8 - NameProperty TslGame.LifeGaugeHitEffectBaseWidget.HitEffectAlphaParamName */
	FName HitEffectStartParamName; /* Ofs: 0x358 Size: 0x8 - NameProperty TslGame.LifeGaugeHitEffectBaseWidget.HitEffectStartParamName */
	FName HitEffectEndParamName; /* Ofs: 0x360 Size: 0x8 - NameProperty TslGame.LifeGaugeHitEffectBaseWidget.HitEffectEndParamName */
	uint8_t UnknownData368[0x30];


	inline bool SetAlphaCurveList(t_structHelper inst, TArray<struct FGaugeAlphaCurveType> value) { inst.WriteOffset(0x300, value); }
	inline bool SetHitEffectImage(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x310, value); }
	inline bool SetBaseColorParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x338, value); }
	inline bool SetColorLerpParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x340, value); }
	inline bool SetBrightAlphaParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x348, value); }
	inline bool SetHitEffectAlphaParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x350, value); }
	inline bool SetHitEffectStartParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x358, value); }
	inline bool SetHitEffectEndParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x360, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULifeGaugeHitEffectBaseWidget = sizeof(ULifeGaugeHitEffectBaseWidget); // 920
    static_assert(sizeof(ULifeGaugeHitEffectBaseWidget) == 0x398, "Size of ULifeGaugeHitEffectBaseWidget is not correct.");
	auto constexpr ULifeGaugeHitEffectBaseWidget_AlphaCurveList_Offset = offsetof(ULifeGaugeHitEffectBaseWidget, AlphaCurveList);
	static_assert(ULifeGaugeHitEffectBaseWidget_AlphaCurveList_Offset == 0x300, "ULifeGaugeHitEffectBaseWidget::AlphaCurveList offset is not 300");
	auto constexpr ULifeGaugeHitEffectBaseWidget_HitEffectImage_Offset = offsetof(ULifeGaugeHitEffectBaseWidget, HitEffectImage);
	static_assert(ULifeGaugeHitEffectBaseWidget_HitEffectImage_Offset == 0x310, "ULifeGaugeHitEffectBaseWidget::HitEffectImage offset is not 310");
	auto constexpr ULifeGaugeHitEffectBaseWidget_BaseColorParamName_Offset = offsetof(ULifeGaugeHitEffectBaseWidget, BaseColorParamName);
	static_assert(ULifeGaugeHitEffectBaseWidget_BaseColorParamName_Offset == 0x338, "ULifeGaugeHitEffectBaseWidget::BaseColorParamName offset is not 338");
	auto constexpr ULifeGaugeHitEffectBaseWidget_ColorLerpParamName_Offset = offsetof(ULifeGaugeHitEffectBaseWidget, ColorLerpParamName);
	static_assert(ULifeGaugeHitEffectBaseWidget_ColorLerpParamName_Offset == 0x340, "ULifeGaugeHitEffectBaseWidget::ColorLerpParamName offset is not 340");
	auto constexpr ULifeGaugeHitEffectBaseWidget_BrightAlphaParamName_Offset = offsetof(ULifeGaugeHitEffectBaseWidget, BrightAlphaParamName);
	static_assert(ULifeGaugeHitEffectBaseWidget_BrightAlphaParamName_Offset == 0x348, "ULifeGaugeHitEffectBaseWidget::BrightAlphaParamName offset is not 348");
	auto constexpr ULifeGaugeHitEffectBaseWidget_HitEffectAlphaParamName_Offset = offsetof(ULifeGaugeHitEffectBaseWidget, HitEffectAlphaParamName);
	static_assert(ULifeGaugeHitEffectBaseWidget_HitEffectAlphaParamName_Offset == 0x350, "ULifeGaugeHitEffectBaseWidget::HitEffectAlphaParamName offset is not 350");
	auto constexpr ULifeGaugeHitEffectBaseWidget_HitEffectStartParamName_Offset = offsetof(ULifeGaugeHitEffectBaseWidget, HitEffectStartParamName);
	static_assert(ULifeGaugeHitEffectBaseWidget_HitEffectStartParamName_Offset == 0x358, "ULifeGaugeHitEffectBaseWidget::HitEffectStartParamName offset is not 358");
	auto constexpr ULifeGaugeHitEffectBaseWidget_HitEffectEndParamName_Offset = offsetof(ULifeGaugeHitEffectBaseWidget, HitEffectEndParamName);
	static_assert(ULifeGaugeHitEffectBaseWidget_HitEffectEndParamName_Offset == 0x360, "ULifeGaugeHitEffectBaseWidget::HitEffectEndParamName offset is not 360");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
