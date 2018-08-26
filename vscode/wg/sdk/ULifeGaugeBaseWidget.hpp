#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_Overlay.hpp"
#include "FUmgWidgetBinder_Animation.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULifeGaugeBaseWidget // Size: 0x420
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef ULifeGaugeBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1531); // id32("Class TslGame.LifeGaugeBaseWidget")
		return ptr;
	}
	ExternalPtr<struct UTslHealthGaugeData> LifeGaugeColorData; /* Ofs: 0x300 Size: 0x8 - ObjectProperty TslGame.LifeGaugeBaseWidget.LifeGaugeColorData */
	FUmgWidgetBinder_Image LifeGaugeImageBinder; /* Ofs: 0x308 Size: 0x28 - StructProperty TslGame.LifeGaugeBaseWidget.LifeGaugeImageBinder */
	FName LifeGaugeRatioValueParamName; /* Ofs: 0x330 Size: 0x8 - NameProperty TslGame.LifeGaugeBaseWidget.LifeGaugeRatioValueParamName */
	FName LifeGaugeColorParamName; /* Ofs: 0x338 Size: 0x8 - NameProperty TslGame.LifeGaugeBaseWidget.LifeGaugeColorParamName */
	FUmgWidgetBinder_Image HealAmountImageBinder; /* Ofs: 0x340 Size: 0x28 - StructProperty TslGame.LifeGaugeBaseWidget.HealAmountImageBinder */
	FUmgWidgetBinder_Overlay HitEffectLayer; /* Ofs: 0x368 Size: 0x20 - StructProperty TslGame.LifeGaugeBaseWidget.HitEffectLayer */
	FName HealAmountRatioValueParamName; /* Ofs: 0x388 Size: 0x8 - NameProperty TslGame.LifeGaugeBaseWidget.HealAmountRatioValueParamName */
	FName HealAmountRatioSartParamName; /* Ofs: 0x390 Size: 0x8 - NameProperty TslGame.LifeGaugeBaseWidget.HealAmountRatioSartParamName */
	FName HealAmountRatioEndParamName; /* Ofs: 0x398 Size: 0x8 - NameProperty TslGame.LifeGaugeBaseWidget.HealAmountRatioEndParamName */
	FName HealAmountColorParamName; /* Ofs: 0x3A0 Size: 0x8 - NameProperty TslGame.LifeGaugeBaseWidget.HealAmountColorParamName */
	ExternalPtr<struct UCurveFloat> HealEffectTimeCurve; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty TslGame.LifeGaugeBaseWidget.HealEffectTimeCurve */
	ExternalPtr<struct UClass> HitEffectClass; /* Ofs: 0x3B0 Size: 0x8 - ClassProperty TslGame.LifeGaugeBaseWidget.HitEffectClass */
	ExternalPtr<struct UClass> Item_Heal_FirstAid; /* Ofs: 0x3B8 Size: 0x8 - ClassProperty TslGame.LifeGaugeBaseWidget.Item_Heal_FirstAid */
	ExternalPtr<struct UClass> Item_Heal_MedKit; /* Ofs: 0x3C0 Size: 0x8 - ClassProperty TslGame.LifeGaugeBaseWidget.Item_Heal_MedKit */
	FUmgWidgetBinder_Animation WarningAnimationBinder; /* Ofs: 0x3C8 Size: 0x20 - StructProperty TslGame.LifeGaugeBaseWidget.WarningAnimationBinder */
	FUmgWidgetBinder_Animation GroggyAnimationBinder; /* Ofs: 0x3E8 Size: 0x20 - StructProperty TslGame.LifeGaugeBaseWidget.GroggyAnimationBinder */
	uint8_t UnknownData408[0x18];


	inline bool SetLifeGaugeColorData(t_structHelper inst, ExternalPtr<struct UTslHealthGaugeData> value) { inst.WriteOffset(0x300, value); }
	inline bool SetLifeGaugeImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x308, value); }
	inline bool SetLifeGaugeRatioValueParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x330, value); }
	inline bool SetLifeGaugeColorParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x338, value); }
	inline bool SetHealAmountImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x340, value); }
	inline bool SetHitEffectLayer(t_structHelper inst, FUmgWidgetBinder_Overlay value) { inst.WriteOffset(0x368, value); }
	inline bool SetHealAmountRatioValueParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x388, value); }
	inline bool SetHealAmountRatioSartParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x390, value); }
	inline bool SetHealAmountRatioEndParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x398, value); }
	inline bool SetHealAmountColorParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetHealEffectTimeCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetHitEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetItem_Heal_FirstAid(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetItem_Heal_MedKit(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetWarningAnimationBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetGroggyAnimationBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x3E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULifeGaugeBaseWidget = sizeof(ULifeGaugeBaseWidget); // 1056
    static_assert(sizeof(ULifeGaugeBaseWidget) == 0x420, "Size of ULifeGaugeBaseWidget is not correct.");
	auto constexpr ULifeGaugeBaseWidget_LifeGaugeColorData_Offset = offsetof(ULifeGaugeBaseWidget, LifeGaugeColorData);
	static_assert(ULifeGaugeBaseWidget_LifeGaugeColorData_Offset == 0x300, "ULifeGaugeBaseWidget::LifeGaugeColorData offset is not 300");
	auto constexpr ULifeGaugeBaseWidget_LifeGaugeImageBinder_Offset = offsetof(ULifeGaugeBaseWidget, LifeGaugeImageBinder);
	static_assert(ULifeGaugeBaseWidget_LifeGaugeImageBinder_Offset == 0x308, "ULifeGaugeBaseWidget::LifeGaugeImageBinder offset is not 308");
	auto constexpr ULifeGaugeBaseWidget_LifeGaugeRatioValueParamName_Offset = offsetof(ULifeGaugeBaseWidget, LifeGaugeRatioValueParamName);
	static_assert(ULifeGaugeBaseWidget_LifeGaugeRatioValueParamName_Offset == 0x330, "ULifeGaugeBaseWidget::LifeGaugeRatioValueParamName offset is not 330");
	auto constexpr ULifeGaugeBaseWidget_LifeGaugeColorParamName_Offset = offsetof(ULifeGaugeBaseWidget, LifeGaugeColorParamName);
	static_assert(ULifeGaugeBaseWidget_LifeGaugeColorParamName_Offset == 0x338, "ULifeGaugeBaseWidget::LifeGaugeColorParamName offset is not 338");
	auto constexpr ULifeGaugeBaseWidget_HealAmountImageBinder_Offset = offsetof(ULifeGaugeBaseWidget, HealAmountImageBinder);
	static_assert(ULifeGaugeBaseWidget_HealAmountImageBinder_Offset == 0x340, "ULifeGaugeBaseWidget::HealAmountImageBinder offset is not 340");
	auto constexpr ULifeGaugeBaseWidget_HitEffectLayer_Offset = offsetof(ULifeGaugeBaseWidget, HitEffectLayer);
	static_assert(ULifeGaugeBaseWidget_HitEffectLayer_Offset == 0x368, "ULifeGaugeBaseWidget::HitEffectLayer offset is not 368");
	auto constexpr ULifeGaugeBaseWidget_HealAmountRatioValueParamName_Offset = offsetof(ULifeGaugeBaseWidget, HealAmountRatioValueParamName);
	static_assert(ULifeGaugeBaseWidget_HealAmountRatioValueParamName_Offset == 0x388, "ULifeGaugeBaseWidget::HealAmountRatioValueParamName offset is not 388");
	auto constexpr ULifeGaugeBaseWidget_HealAmountRatioSartParamName_Offset = offsetof(ULifeGaugeBaseWidget, HealAmountRatioSartParamName);
	static_assert(ULifeGaugeBaseWidget_HealAmountRatioSartParamName_Offset == 0x390, "ULifeGaugeBaseWidget::HealAmountRatioSartParamName offset is not 390");
	auto constexpr ULifeGaugeBaseWidget_HealAmountRatioEndParamName_Offset = offsetof(ULifeGaugeBaseWidget, HealAmountRatioEndParamName);
	static_assert(ULifeGaugeBaseWidget_HealAmountRatioEndParamName_Offset == 0x398, "ULifeGaugeBaseWidget::HealAmountRatioEndParamName offset is not 398");
	auto constexpr ULifeGaugeBaseWidget_HealAmountColorParamName_Offset = offsetof(ULifeGaugeBaseWidget, HealAmountColorParamName);
	static_assert(ULifeGaugeBaseWidget_HealAmountColorParamName_Offset == 0x3a0, "ULifeGaugeBaseWidget::HealAmountColorParamName offset is not 3a0");
	auto constexpr ULifeGaugeBaseWidget_HealEffectTimeCurve_Offset = offsetof(ULifeGaugeBaseWidget, HealEffectTimeCurve);
	static_assert(ULifeGaugeBaseWidget_HealEffectTimeCurve_Offset == 0x3a8, "ULifeGaugeBaseWidget::HealEffectTimeCurve offset is not 3a8");
	auto constexpr ULifeGaugeBaseWidget_HitEffectClass_Offset = offsetof(ULifeGaugeBaseWidget, HitEffectClass);
	static_assert(ULifeGaugeBaseWidget_HitEffectClass_Offset == 0x3b0, "ULifeGaugeBaseWidget::HitEffectClass offset is not 3b0");
	auto constexpr ULifeGaugeBaseWidget_Item_Heal_FirstAid_Offset = offsetof(ULifeGaugeBaseWidget, Item_Heal_FirstAid);
	static_assert(ULifeGaugeBaseWidget_Item_Heal_FirstAid_Offset == 0x3b8, "ULifeGaugeBaseWidget::Item_Heal_FirstAid offset is not 3b8");
	auto constexpr ULifeGaugeBaseWidget_Item_Heal_MedKit_Offset = offsetof(ULifeGaugeBaseWidget, Item_Heal_MedKit);
	static_assert(ULifeGaugeBaseWidget_Item_Heal_MedKit_Offset == 0x3c0, "ULifeGaugeBaseWidget::Item_Heal_MedKit offset is not 3c0");
	auto constexpr ULifeGaugeBaseWidget_WarningAnimationBinder_Offset = offsetof(ULifeGaugeBaseWidget, WarningAnimationBinder);
	static_assert(ULifeGaugeBaseWidget_WarningAnimationBinder_Offset == 0x3c8, "ULifeGaugeBaseWidget::WarningAnimationBinder offset is not 3c8");
	auto constexpr ULifeGaugeBaseWidget_GroggyAnimationBinder_Offset = offsetof(ULifeGaugeBaseWidget, GroggyAnimationBinder);
	static_assert(ULifeGaugeBaseWidget_GroggyAnimationBinder_Offset == 0x3e8, "ULifeGaugeBaseWidget::GroggyAnimationBinder offset is not 3e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
