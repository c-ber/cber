#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FUmgWidgetBinder_Overlay.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULifeGaugeTemplateBaseWidget // Size: 0x430
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef ULifeGaugeTemplateBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1534); // id32("Class TslGame.LifeGaugeTemplateBaseWidget")
		return ptr;
	}
	ExternalPtr<struct UTslHealthGaugeData> LifeGaugeColorData; /* Ofs: 0x300 Size: 0x8 - ObjectProperty TslGame.LifeGaugeTemplateBaseWidget.LifeGaugeColorData */
	FUmgWidgetBinder_Image LifeGaugeImageBinder; /* Ofs: 0x308 Size: 0x28 - StructProperty TslGame.LifeGaugeTemplateBaseWidget.LifeGaugeImageBinder */
	FName LifeGaugeRatioValueParamName; /* Ofs: 0x330 Size: 0x8 - NameProperty TslGame.LifeGaugeTemplateBaseWidget.LifeGaugeRatioValueParamName */
	FName LifeGaugeColorParamName; /* Ofs: 0x338 Size: 0x8 - NameProperty TslGame.LifeGaugeTemplateBaseWidget.LifeGaugeColorParamName */
	FUmgWidgetBinder_Animation WarningAnimationBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.LifeGaugeTemplateBaseWidget.WarningAnimationBinder */
	FUmgWidgetBinder_Image BackgroundImageBinder; /* Ofs: 0x360 Size: 0x28 - StructProperty TslGame.LifeGaugeTemplateBaseWidget.BackgroundImageBinder */
	uint8_t boolField388;
	uint8_t UnknownData389[0x7];
	ExternalPtr<struct UMaterialInterface> OverrideLifeGaugeMaterial; /* Ofs: 0x390 Size: 0x8 - ObjectProperty TslGame.LifeGaugeTemplateBaseWidget.OverrideLifeGaugeMaterial */
	uint8_t boolField398;
	uint8_t UnknownData399[0x7];
	ExternalPtr<struct UMaterialInterface> OverrideBackgroundMaterial; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty TslGame.LifeGaugeTemplateBaseWidget.OverrideBackgroundMaterial */
	uint8_t boolField3A8;
	uint8_t UnknownData3A9[0x7];
	ExternalPtr<struct UClass> DamageEffectClass; /* Ofs: 0x3B0 Size: 0x8 - ClassProperty TslGame.LifeGaugeTemplateBaseWidget.DamageEffectClass */
	ExternalPtr<struct UClass> HealEffectClass; /* Ofs: 0x3B8 Size: 0x8 - ClassProperty TslGame.LifeGaugeTemplateBaseWidget.HealEffectClass */
	ExternalPtr<struct UClass> HealAmountEffectClass; /* Ofs: 0x3C0 Size: 0x8 - ClassProperty TslGame.LifeGaugeTemplateBaseWidget.HealAmountEffectClass */
	FUmgWidgetBinder_Overlay EffectLayerBinder; /* Ofs: 0x3C8 Size: 0x20 - StructProperty TslGame.LifeGaugeTemplateBaseWidget.EffectLayerBinder */
	int32_t DamageEffectMax; /* Ofs: 0x3E8 Size: 0x4 - IntProperty TslGame.LifeGaugeTemplateBaseWidget.DamageEffectMax */
	int32_t HealEffectMax; /* Ofs: 0x3EC Size: 0x4 - IntProperty TslGame.LifeGaugeTemplateBaseWidget.HealEffectMax */
	uint8_t UnknownData3F0[0x18];
	TArray<ExternalPtr<struct ULifeGaugeEffectBaseWidget>> DamageEffects; /* Ofs: 0x408 Size: 0x10 - ArrayProperty TslGame.LifeGaugeTemplateBaseWidget.DamageEffects */
	TArray<ExternalPtr<struct ULifeGaugeEffectBaseWidget>> HealEffects; /* Ofs: 0x418 Size: 0x10 - ArrayProperty TslGame.LifeGaugeTemplateBaseWidget.HealEffects */
	ExternalPtr<struct ULifeGaugeEffectBaseWidget> HealAmountEffect; /* Ofs: 0x428 Size: 0x8 - ObjectProperty TslGame.LifeGaugeTemplateBaseWidget.HealAmountEffect */


	inline bool SetLifeGaugeColorData(t_structHelper inst, ExternalPtr<struct UTslHealthGaugeData> value) { inst.WriteOffset(0x300, value); }
	inline bool SetLifeGaugeImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x308, value); }
	inline bool SetLifeGaugeRatioValueParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x330, value); }
	inline bool SetLifeGaugeColorParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x338, value); }
	inline bool SetWarningAnimationBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x340, value); }
	inline bool SetBackgroundImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x360, value); }
	inline bool bOverrideLifeGaugeMaterial()
	{
		return boolField388& 0x1;
	}
	inline bool SetbOverrideLifeGaugeMaterial(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x388, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOverrideLifeGaugeMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x390, value); }
	inline bool bOverrideBackgroundMaterial()
	{
		return boolField398& 0x1;
	}
	inline bool SetbOverrideBackgroundMaterial(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x398, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOverrideBackgroundMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x3A0, value); }
	inline bool bUseEffect()
	{
		return boolField3A8& 0x1;
	}
	inline bool SetbUseEffect(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDamageEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetHealEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetHealAmountEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetEffectLayerBinder(t_structHelper inst, FUmgWidgetBinder_Overlay value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetDamageEffectMax(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetHealEffectMax(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3EC, value); }
	inline bool SetDamageEffects(t_structHelper inst, TArray<ExternalPtr<struct ULifeGaugeEffectBaseWidget>> value) { inst.WriteOffset(0x408, value); }
	inline bool SetHealEffects(t_structHelper inst, TArray<ExternalPtr<struct ULifeGaugeEffectBaseWidget>> value) { inst.WriteOffset(0x418, value); }
	inline bool SetHealAmountEffect(t_structHelper inst, ExternalPtr<struct ULifeGaugeEffectBaseWidget> value) { inst.WriteOffset(0x428, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULifeGaugeTemplateBaseWidget = sizeof(ULifeGaugeTemplateBaseWidget); // 1072
    static_assert(sizeof(ULifeGaugeTemplateBaseWidget) == 0x430, "Size of ULifeGaugeTemplateBaseWidget is not correct.");
	auto constexpr ULifeGaugeTemplateBaseWidget_LifeGaugeColorData_Offset = offsetof(ULifeGaugeTemplateBaseWidget, LifeGaugeColorData);
	static_assert(ULifeGaugeTemplateBaseWidget_LifeGaugeColorData_Offset == 0x300, "ULifeGaugeTemplateBaseWidget::LifeGaugeColorData offset is not 300");
	auto constexpr ULifeGaugeTemplateBaseWidget_LifeGaugeImageBinder_Offset = offsetof(ULifeGaugeTemplateBaseWidget, LifeGaugeImageBinder);
	static_assert(ULifeGaugeTemplateBaseWidget_LifeGaugeImageBinder_Offset == 0x308, "ULifeGaugeTemplateBaseWidget::LifeGaugeImageBinder offset is not 308");
	auto constexpr ULifeGaugeTemplateBaseWidget_LifeGaugeRatioValueParamName_Offset = offsetof(ULifeGaugeTemplateBaseWidget, LifeGaugeRatioValueParamName);
	static_assert(ULifeGaugeTemplateBaseWidget_LifeGaugeRatioValueParamName_Offset == 0x330, "ULifeGaugeTemplateBaseWidget::LifeGaugeRatioValueParamName offset is not 330");
	auto constexpr ULifeGaugeTemplateBaseWidget_LifeGaugeColorParamName_Offset = offsetof(ULifeGaugeTemplateBaseWidget, LifeGaugeColorParamName);
	static_assert(ULifeGaugeTemplateBaseWidget_LifeGaugeColorParamName_Offset == 0x338, "ULifeGaugeTemplateBaseWidget::LifeGaugeColorParamName offset is not 338");
	auto constexpr ULifeGaugeTemplateBaseWidget_WarningAnimationBinder_Offset = offsetof(ULifeGaugeTemplateBaseWidget, WarningAnimationBinder);
	static_assert(ULifeGaugeTemplateBaseWidget_WarningAnimationBinder_Offset == 0x340, "ULifeGaugeTemplateBaseWidget::WarningAnimationBinder offset is not 340");
	auto constexpr ULifeGaugeTemplateBaseWidget_BackgroundImageBinder_Offset = offsetof(ULifeGaugeTemplateBaseWidget, BackgroundImageBinder);
	static_assert(ULifeGaugeTemplateBaseWidget_BackgroundImageBinder_Offset == 0x360, "ULifeGaugeTemplateBaseWidget::BackgroundImageBinder offset is not 360");
	auto constexpr ULifeGaugeTemplateBaseWidget_boolField388_Offset = offsetof(ULifeGaugeTemplateBaseWidget, boolField388);
	static_assert(ULifeGaugeTemplateBaseWidget_boolField388_Offset == 0x388, "ULifeGaugeTemplateBaseWidget::boolField388 offset is not 388");
	auto constexpr ULifeGaugeTemplateBaseWidget_OverrideLifeGaugeMaterial_Offset = offsetof(ULifeGaugeTemplateBaseWidget, OverrideLifeGaugeMaterial);
	static_assert(ULifeGaugeTemplateBaseWidget_OverrideLifeGaugeMaterial_Offset == 0x390, "ULifeGaugeTemplateBaseWidget::OverrideLifeGaugeMaterial offset is not 390");
	auto constexpr ULifeGaugeTemplateBaseWidget_boolField398_Offset = offsetof(ULifeGaugeTemplateBaseWidget, boolField398);
	static_assert(ULifeGaugeTemplateBaseWidget_boolField398_Offset == 0x398, "ULifeGaugeTemplateBaseWidget::boolField398 offset is not 398");
	auto constexpr ULifeGaugeTemplateBaseWidget_OverrideBackgroundMaterial_Offset = offsetof(ULifeGaugeTemplateBaseWidget, OverrideBackgroundMaterial);
	static_assert(ULifeGaugeTemplateBaseWidget_OverrideBackgroundMaterial_Offset == 0x3a0, "ULifeGaugeTemplateBaseWidget::OverrideBackgroundMaterial offset is not 3a0");
	auto constexpr ULifeGaugeTemplateBaseWidget_boolField3A8_Offset = offsetof(ULifeGaugeTemplateBaseWidget, boolField3A8);
	static_assert(ULifeGaugeTemplateBaseWidget_boolField3A8_Offset == 0x3a8, "ULifeGaugeTemplateBaseWidget::boolField3A8 offset is not 3a8");
	auto constexpr ULifeGaugeTemplateBaseWidget_DamageEffectClass_Offset = offsetof(ULifeGaugeTemplateBaseWidget, DamageEffectClass);
	static_assert(ULifeGaugeTemplateBaseWidget_DamageEffectClass_Offset == 0x3b0, "ULifeGaugeTemplateBaseWidget::DamageEffectClass offset is not 3b0");
	auto constexpr ULifeGaugeTemplateBaseWidget_HealEffectClass_Offset = offsetof(ULifeGaugeTemplateBaseWidget, HealEffectClass);
	static_assert(ULifeGaugeTemplateBaseWidget_HealEffectClass_Offset == 0x3b8, "ULifeGaugeTemplateBaseWidget::HealEffectClass offset is not 3b8");
	auto constexpr ULifeGaugeTemplateBaseWidget_HealAmountEffectClass_Offset = offsetof(ULifeGaugeTemplateBaseWidget, HealAmountEffectClass);
	static_assert(ULifeGaugeTemplateBaseWidget_HealAmountEffectClass_Offset == 0x3c0, "ULifeGaugeTemplateBaseWidget::HealAmountEffectClass offset is not 3c0");
	auto constexpr ULifeGaugeTemplateBaseWidget_EffectLayerBinder_Offset = offsetof(ULifeGaugeTemplateBaseWidget, EffectLayerBinder);
	static_assert(ULifeGaugeTemplateBaseWidget_EffectLayerBinder_Offset == 0x3c8, "ULifeGaugeTemplateBaseWidget::EffectLayerBinder offset is not 3c8");
	auto constexpr ULifeGaugeTemplateBaseWidget_DamageEffectMax_Offset = offsetof(ULifeGaugeTemplateBaseWidget, DamageEffectMax);
	static_assert(ULifeGaugeTemplateBaseWidget_DamageEffectMax_Offset == 0x3e8, "ULifeGaugeTemplateBaseWidget::DamageEffectMax offset is not 3e8");
	auto constexpr ULifeGaugeTemplateBaseWidget_HealEffectMax_Offset = offsetof(ULifeGaugeTemplateBaseWidget, HealEffectMax);
	static_assert(ULifeGaugeTemplateBaseWidget_HealEffectMax_Offset == 0x3ec, "ULifeGaugeTemplateBaseWidget::HealEffectMax offset is not 3ec");
	auto constexpr ULifeGaugeTemplateBaseWidget_DamageEffects_Offset = offsetof(ULifeGaugeTemplateBaseWidget, DamageEffects);
	static_assert(ULifeGaugeTemplateBaseWidget_DamageEffects_Offset == 0x408, "ULifeGaugeTemplateBaseWidget::DamageEffects offset is not 408");
	auto constexpr ULifeGaugeTemplateBaseWidget_HealEffects_Offset = offsetof(ULifeGaugeTemplateBaseWidget, HealEffects);
	static_assert(ULifeGaugeTemplateBaseWidget_HealEffects_Offset == 0x418, "ULifeGaugeTemplateBaseWidget::HealEffects offset is not 418");
	auto constexpr ULifeGaugeTemplateBaseWidget_HealAmountEffect_Offset = offsetof(ULifeGaugeTemplateBaseWidget, HealAmountEffect);
	static_assert(ULifeGaugeTemplateBaseWidget_HealAmountEffect_Offset == 0x428, "ULifeGaugeTemplateBaseWidget::HealAmountEffect offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
