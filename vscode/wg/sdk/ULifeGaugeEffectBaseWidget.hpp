#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULifeGaugeEffectBaseWidget // Size: 0x3B8
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef ULifeGaugeEffectBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1532); // id32("Class TslGame.LifeGaugeEffectBaseWidget")
		return ptr;
	}
	uint8_t UnknownData300[0x10];
	FName OldLifeRatioParamName; /* Ofs: 0x310 Size: 0x8 - NameProperty TslGame.LifeGaugeEffectBaseWidget.OldLifeRatioParamName */
	FName CurrentLifeRatioParamName; /* Ofs: 0x318 Size: 0x8 - NameProperty TslGame.LifeGaugeEffectBaseWidget.CurrentLifeRatioParamName */
	FUmgWidgetBinder_Image LifeEffectBinder; /* Ofs: 0x320 Size: 0x28 - StructProperty TslGame.LifeGaugeEffectBaseWidget.LifeEffectBinder */
	TArray<struct FUiEffectAnimation_FloatCurve> LifeEffectAnimationFloatCurveList; /* Ofs: 0x348 Size: 0x10 - ArrayProperty TslGame.LifeGaugeEffectBaseWidget.LifeEffectAnimationFloatCurveList */
	TArray<struct FUiEffectAnimation_VectorCurve> LifeEffectAnimationVectorCurveList; /* Ofs: 0x358 Size: 0x10 - ArrayProperty TslGame.LifeGaugeEffectBaseWidget.LifeEffectAnimationVectorCurveList */
	FUmgWidgetBinder_Image LifeEffectBackgroundBinder; /* Ofs: 0x368 Size: 0x28 - StructProperty TslGame.LifeGaugeEffectBaseWidget.LifeEffectBackgroundBinder */
	TArray<struct FUiEffectAnimation_FloatCurve> LifeEffectBgAnimationFloatCurveList; /* Ofs: 0x390 Size: 0x10 - ArrayProperty TslGame.LifeGaugeEffectBaseWidget.LifeEffectBgAnimationFloatCurveList */
	TArray<struct FUiEffectAnimation_VectorCurve> LifeEffectBgAnimationVectorCurveList; /* Ofs: 0x3A0 Size: 0x10 - ArrayProperty TslGame.LifeGaugeEffectBaseWidget.LifeEffectBgAnimationVectorCurveList */
	uint8_t boolField3B0;
	uint8_t UnknownData3B1[0x7];


	inline bool SetOldLifeRatioParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x310, value); }
	inline bool SetCurrentLifeRatioParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x318, value); }
	inline bool SetLifeEffectBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x320, value); }
	inline bool SetLifeEffectAnimationFloatCurveList(t_structHelper inst, TArray<struct FUiEffectAnimation_FloatCurve> value) { inst.WriteOffset(0x348, value); }
	inline bool SetLifeEffectAnimationVectorCurveList(t_structHelper inst, TArray<struct FUiEffectAnimation_VectorCurve> value) { inst.WriteOffset(0x358, value); }
	inline bool SetLifeEffectBackgroundBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x368, value); }
	inline bool SetLifeEffectBgAnimationFloatCurveList(t_structHelper inst, TArray<struct FUiEffectAnimation_FloatCurve> value) { inst.WriteOffset(0x390, value); }
	inline bool SetLifeEffectBgAnimationVectorCurveList(t_structHelper inst, TArray<struct FUiEffectAnimation_VectorCurve> value) { inst.WriteOffset(0x3A0, value); }
	inline bool bAutoDestroyOnEffectPlayFinish()
	{
		return boolField3B0& 0x1;
	}
	inline bool SetbAutoDestroyOnEffectPlayFinish(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULifeGaugeEffectBaseWidget = sizeof(ULifeGaugeEffectBaseWidget); // 952
    static_assert(sizeof(ULifeGaugeEffectBaseWidget) == 0x3B8, "Size of ULifeGaugeEffectBaseWidget is not correct.");
	auto constexpr ULifeGaugeEffectBaseWidget_OldLifeRatioParamName_Offset = offsetof(ULifeGaugeEffectBaseWidget, OldLifeRatioParamName);
	static_assert(ULifeGaugeEffectBaseWidget_OldLifeRatioParamName_Offset == 0x310, "ULifeGaugeEffectBaseWidget::OldLifeRatioParamName offset is not 310");
	auto constexpr ULifeGaugeEffectBaseWidget_CurrentLifeRatioParamName_Offset = offsetof(ULifeGaugeEffectBaseWidget, CurrentLifeRatioParamName);
	static_assert(ULifeGaugeEffectBaseWidget_CurrentLifeRatioParamName_Offset == 0x318, "ULifeGaugeEffectBaseWidget::CurrentLifeRatioParamName offset is not 318");
	auto constexpr ULifeGaugeEffectBaseWidget_LifeEffectBinder_Offset = offsetof(ULifeGaugeEffectBaseWidget, LifeEffectBinder);
	static_assert(ULifeGaugeEffectBaseWidget_LifeEffectBinder_Offset == 0x320, "ULifeGaugeEffectBaseWidget::LifeEffectBinder offset is not 320");
	auto constexpr ULifeGaugeEffectBaseWidget_LifeEffectAnimationFloatCurveList_Offset = offsetof(ULifeGaugeEffectBaseWidget, LifeEffectAnimationFloatCurveList);
	static_assert(ULifeGaugeEffectBaseWidget_LifeEffectAnimationFloatCurveList_Offset == 0x348, "ULifeGaugeEffectBaseWidget::LifeEffectAnimationFloatCurveList offset is not 348");
	auto constexpr ULifeGaugeEffectBaseWidget_LifeEffectAnimationVectorCurveList_Offset = offsetof(ULifeGaugeEffectBaseWidget, LifeEffectAnimationVectorCurveList);
	static_assert(ULifeGaugeEffectBaseWidget_LifeEffectAnimationVectorCurveList_Offset == 0x358, "ULifeGaugeEffectBaseWidget::LifeEffectAnimationVectorCurveList offset is not 358");
	auto constexpr ULifeGaugeEffectBaseWidget_LifeEffectBackgroundBinder_Offset = offsetof(ULifeGaugeEffectBaseWidget, LifeEffectBackgroundBinder);
	static_assert(ULifeGaugeEffectBaseWidget_LifeEffectBackgroundBinder_Offset == 0x368, "ULifeGaugeEffectBaseWidget::LifeEffectBackgroundBinder offset is not 368");
	auto constexpr ULifeGaugeEffectBaseWidget_LifeEffectBgAnimationFloatCurveList_Offset = offsetof(ULifeGaugeEffectBaseWidget, LifeEffectBgAnimationFloatCurveList);
	static_assert(ULifeGaugeEffectBaseWidget_LifeEffectBgAnimationFloatCurveList_Offset == 0x390, "ULifeGaugeEffectBaseWidget::LifeEffectBgAnimationFloatCurveList offset is not 390");
	auto constexpr ULifeGaugeEffectBaseWidget_LifeEffectBgAnimationVectorCurveList_Offset = offsetof(ULifeGaugeEffectBaseWidget, LifeEffectBgAnimationVectorCurveList);
	static_assert(ULifeGaugeEffectBaseWidget_LifeEffectBgAnimationVectorCurveList_Offset == 0x3a0, "ULifeGaugeEffectBaseWidget::LifeEffectBgAnimationVectorCurveList offset is not 3a0");
	auto constexpr ULifeGaugeEffectBaseWidget_boolField3B0_Offset = offsetof(ULifeGaugeEffectBaseWidget, boolField3B0);
	static_assert(ULifeGaugeEffectBaseWidget_boolField3B0_Offset == 0x3b0, "ULifeGaugeEffectBaseWidget::boolField3B0 offset is not 3b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
