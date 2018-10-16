#pragma once
#include "UItemToolTipWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemToolTipWidgetv3_C // Size: 0x360
	: public UItemToolTipWidget // Size: 0x248
{
private:
	typedef UItemToolTipWidgetv3_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(62281); // id32("WidgetBlueprintGeneratedClass ItemToolTipWidgetv3.ItemToolTipWidgetv3_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> FadeInToolTip; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.FadeInToolTip */
	ExternalPtr<struct UToolTipGaugeWidget_C> AccuracyGauge; /* Ofs: 0x258 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.AccuracyGauge */
	ExternalPtr<struct UHorizontalBox> AmmoInfoBoxHorizontalBox; /* Ofs: 0x260 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.AmmoInfoBoxHorizontalBox */
	ExternalPtr<struct UTextBlock> AmmoNameText; /* Ofs: 0x268 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.AmmoNameText */
	ExternalPtr<struct UTextBlock> AmmoPerClipText; /* Ofs: 0x270 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.AmmoPerClipText */
	ExternalPtr<struct UTextBlock> AmmunitionInfoText; /* Ofs: 0x278 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.AmmunitionInfoText */
	ExternalPtr<struct UTextBlock> Capacity; /* Ofs: 0x280 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.Capacity */
	ExternalPtr<struct UVerticalBox> CapacityBlock; /* Ofs: 0x288 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.CapacityBlock */
	ExternalPtr<struct UTextBlock> CategoryText; /* Ofs: 0x290 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.CategoryText */
	ExternalPtr<struct UTextBlock> ComparingWeapon; /* Ofs: 0x298 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.ComparingWeapon */
	ExternalPtr<struct UHorizontalBox> ComparisonHorizontalBox; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.ComparisonHorizontalBox */
	ExternalPtr<struct UBorder> DamageBlock; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.DamageBlock */
	ExternalPtr<struct UToolTipGaugeWidget_C> DamageGauge; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.DamageGauge */
	ExternalPtr<struct UTextBlock> DescText; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.DescText */
	ExternalPtr<struct UToolTipGaugeWidget_C> EffectRangeGauge; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.EffectRangeGauge */
	ExternalPtr<struct UToolTipGaugeWidget_C> FiringRate; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.FiringRate */
	ExternalPtr<struct UImage> Icon; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.Icon */
	ExternalPtr<struct USizeBox> IconScaleBoxSizeBlock; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.IconScaleBoxSizeBlock */
	ExternalPtr<struct USizeBox> IconSize; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.IconSize */
	ExternalPtr<struct UVerticalBox> ImageVerticalBox; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.ImageVerticalBox */
	ExternalPtr<struct UTextBlock> ItemName; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.ItemName */
	ExternalPtr<struct UImage> MagazineIcon; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.MagazineIcon */
	ExternalPtr<struct UVerticalBox> WeaponGunBlock; /* Ofs: 0x300 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.WeaponGunBlock */
	ExternalPtr<struct UVerticalBox> WeaponStatVerticalBox; /* Ofs: 0x308 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.WeaponStatVerticalBox */
	ExternalPtr<struct UMaterialInstanceDynamic> ImageDynamicMaterial; /* Ofs: 0x310 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.ImageDynamicMaterial */
	float DamageMax; /* Ofs: 0x318 Size: 0x4 - FloatProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.DamageMax */
	float EffectRangeMax; /* Ofs: 0x31C Size: 0x4 - FloatProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.EffectRangeMax */
	float StabilityMax; /* Ofs: 0x320 Size: 0x4 - FloatProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.StabilityMax */
	float FringRateMax; /* Ofs: 0x324 Size: 0x4 - FloatProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.FringRateMax */
	ExternalPtr<struct UTslWeapon> LocalDefaultWeaponObject; /* Ofs: 0x328 Size: 0x8 - ObjectProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.LocalDefaultWeaponObject */
	float DamageMultiplierForMultipleBullet; /* Ofs: 0x330 Size: 0x4 - FloatProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.DamageMultiplierForMultipleBullet */
	float DefaultDelayTime; /* Ofs: 0x334 Size: 0x4 - FloatProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.DefaultDelayTime */
	TScriptInterface<ExternalPtr<struct USlotInterface>> NewVar_1; /* Ofs: 0x338 Size: 0x10 - InterfaceProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.NewVar_1 */
	TScriptInterface<ExternalPtr<struct USlotInterface>> NewVar_2; /* Ofs: 0x348 Size: 0x10 - InterfaceProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.NewVar_2 */
	FTimerHandle AnimTimer; /* Ofs: 0x358 Size: 0x8 - StructProperty ItemToolTipWidgetv3.ItemToolTipWidgetv3_C.AnimTimer */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetFadeInToolTip(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetAccuracyGauge(t_structHelper inst, ExternalPtr<struct UToolTipGaugeWidget_C> value) { inst.WriteOffset(0x258, value); }
	inline bool SetAmmoInfoBoxHorizontalBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x260, value); }
	inline bool SetAmmoNameText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
	inline bool SetAmmoPerClipText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x270, value); }
	inline bool SetAmmunitionInfoText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x278, value); }
	inline bool SetCapacity(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x280, value); }
	inline bool SetCapacityBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x288, value); }
	inline bool SetCategoryText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x290, value); }
	inline bool SetComparingWeapon(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x298, value); }
	inline bool SetComparisonHorizontalBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetDamageBlock(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetDamageGauge(t_structHelper inst, ExternalPtr<struct UToolTipGaugeWidget_C> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetDescText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetEffectRangeGauge(t_structHelper inst, ExternalPtr<struct UToolTipGaugeWidget_C> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetFiringRate(t_structHelper inst, ExternalPtr<struct UToolTipGaugeWidget_C> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetIconScaleBoxSizeBlock(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetIconSize(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetImageVerticalBox(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetItemName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetMagazineIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetWeaponGunBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x300, value); }
	inline bool SetWeaponStatVerticalBox(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x308, value); }
	inline bool SetImageDynamicMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x310, value); }
	inline bool SetDamageMax(t_structHelper inst, float value) { inst.WriteOffset(0x318, value); }
	inline bool SetEffectRangeMax(t_structHelper inst, float value) { inst.WriteOffset(0x31C, value); }
	inline bool SetStabilityMax(t_structHelper inst, float value) { inst.WriteOffset(0x320, value); }
	inline bool SetFringRateMax(t_structHelper inst, float value) { inst.WriteOffset(0x324, value); }
	inline bool SetLocalDefaultWeaponObject(t_structHelper inst, ExternalPtr<struct UTslWeapon> value) { inst.WriteOffset(0x328, value); }
	inline bool SetDamageMultiplierForMultipleBullet(t_structHelper inst, float value) { inst.WriteOffset(0x330, value); }
	inline bool SetDefaultDelayTime(t_structHelper inst, float value) { inst.WriteOffset(0x334, value); }
	inline bool SetNewVar_1(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x338, value); }
	inline bool SetNewVar_2(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x348, value); }
	inline bool SetAnimTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x358, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemToolTipWidgetv3_C = sizeof(UItemToolTipWidgetv3_C); // 864
    static_assert(sizeof(UItemToolTipWidgetv3_C) == 0x360, "Size of UItemToolTipWidgetv3_C is not correct.");
	auto constexpr UItemToolTipWidgetv3_C_UberGraphFrame_Offset = offsetof(UItemToolTipWidgetv3_C, UberGraphFrame);
	static_assert(UItemToolTipWidgetv3_C_UberGraphFrame_Offset == 0x248, "UItemToolTipWidgetv3_C::UberGraphFrame offset is not 248");
	auto constexpr UItemToolTipWidgetv3_C_FadeInToolTip_Offset = offsetof(UItemToolTipWidgetv3_C, FadeInToolTip);
	static_assert(UItemToolTipWidgetv3_C_FadeInToolTip_Offset == 0x250, "UItemToolTipWidgetv3_C::FadeInToolTip offset is not 250");
	auto constexpr UItemToolTipWidgetv3_C_AccuracyGauge_Offset = offsetof(UItemToolTipWidgetv3_C, AccuracyGauge);
	static_assert(UItemToolTipWidgetv3_C_AccuracyGauge_Offset == 0x258, "UItemToolTipWidgetv3_C::AccuracyGauge offset is not 258");
	auto constexpr UItemToolTipWidgetv3_C_AmmoInfoBoxHorizontalBox_Offset = offsetof(UItemToolTipWidgetv3_C, AmmoInfoBoxHorizontalBox);
	static_assert(UItemToolTipWidgetv3_C_AmmoInfoBoxHorizontalBox_Offset == 0x260, "UItemToolTipWidgetv3_C::AmmoInfoBoxHorizontalBox offset is not 260");
	auto constexpr UItemToolTipWidgetv3_C_AmmoNameText_Offset = offsetof(UItemToolTipWidgetv3_C, AmmoNameText);
	static_assert(UItemToolTipWidgetv3_C_AmmoNameText_Offset == 0x268, "UItemToolTipWidgetv3_C::AmmoNameText offset is not 268");
	auto constexpr UItemToolTipWidgetv3_C_AmmoPerClipText_Offset = offsetof(UItemToolTipWidgetv3_C, AmmoPerClipText);
	static_assert(UItemToolTipWidgetv3_C_AmmoPerClipText_Offset == 0x270, "UItemToolTipWidgetv3_C::AmmoPerClipText offset is not 270");
	auto constexpr UItemToolTipWidgetv3_C_AmmunitionInfoText_Offset = offsetof(UItemToolTipWidgetv3_C, AmmunitionInfoText);
	static_assert(UItemToolTipWidgetv3_C_AmmunitionInfoText_Offset == 0x278, "UItemToolTipWidgetv3_C::AmmunitionInfoText offset is not 278");
	auto constexpr UItemToolTipWidgetv3_C_Capacity_Offset = offsetof(UItemToolTipWidgetv3_C, Capacity);
	static_assert(UItemToolTipWidgetv3_C_Capacity_Offset == 0x280, "UItemToolTipWidgetv3_C::Capacity offset is not 280");
	auto constexpr UItemToolTipWidgetv3_C_CapacityBlock_Offset = offsetof(UItemToolTipWidgetv3_C, CapacityBlock);
	static_assert(UItemToolTipWidgetv3_C_CapacityBlock_Offset == 0x288, "UItemToolTipWidgetv3_C::CapacityBlock offset is not 288");
	auto constexpr UItemToolTipWidgetv3_C_CategoryText_Offset = offsetof(UItemToolTipWidgetv3_C, CategoryText);
	static_assert(UItemToolTipWidgetv3_C_CategoryText_Offset == 0x290, "UItemToolTipWidgetv3_C::CategoryText offset is not 290");
	auto constexpr UItemToolTipWidgetv3_C_ComparingWeapon_Offset = offsetof(UItemToolTipWidgetv3_C, ComparingWeapon);
	static_assert(UItemToolTipWidgetv3_C_ComparingWeapon_Offset == 0x298, "UItemToolTipWidgetv3_C::ComparingWeapon offset is not 298");
	auto constexpr UItemToolTipWidgetv3_C_ComparisonHorizontalBox_Offset = offsetof(UItemToolTipWidgetv3_C, ComparisonHorizontalBox);
	static_assert(UItemToolTipWidgetv3_C_ComparisonHorizontalBox_Offset == 0x2a0, "UItemToolTipWidgetv3_C::ComparisonHorizontalBox offset is not 2a0");
	auto constexpr UItemToolTipWidgetv3_C_DamageBlock_Offset = offsetof(UItemToolTipWidgetv3_C, DamageBlock);
	static_assert(UItemToolTipWidgetv3_C_DamageBlock_Offset == 0x2a8, "UItemToolTipWidgetv3_C::DamageBlock offset is not 2a8");
	auto constexpr UItemToolTipWidgetv3_C_DamageGauge_Offset = offsetof(UItemToolTipWidgetv3_C, DamageGauge);
	static_assert(UItemToolTipWidgetv3_C_DamageGauge_Offset == 0x2b0, "UItemToolTipWidgetv3_C::DamageGauge offset is not 2b0");
	auto constexpr UItemToolTipWidgetv3_C_DescText_Offset = offsetof(UItemToolTipWidgetv3_C, DescText);
	static_assert(UItemToolTipWidgetv3_C_DescText_Offset == 0x2b8, "UItemToolTipWidgetv3_C::DescText offset is not 2b8");
	auto constexpr UItemToolTipWidgetv3_C_EffectRangeGauge_Offset = offsetof(UItemToolTipWidgetv3_C, EffectRangeGauge);
	static_assert(UItemToolTipWidgetv3_C_EffectRangeGauge_Offset == 0x2c0, "UItemToolTipWidgetv3_C::EffectRangeGauge offset is not 2c0");
	auto constexpr UItemToolTipWidgetv3_C_FiringRate_Offset = offsetof(UItemToolTipWidgetv3_C, FiringRate);
	static_assert(UItemToolTipWidgetv3_C_FiringRate_Offset == 0x2c8, "UItemToolTipWidgetv3_C::FiringRate offset is not 2c8");
	auto constexpr UItemToolTipWidgetv3_C_Icon_Offset = offsetof(UItemToolTipWidgetv3_C, Icon);
	static_assert(UItemToolTipWidgetv3_C_Icon_Offset == 0x2d0, "UItemToolTipWidgetv3_C::Icon offset is not 2d0");
	auto constexpr UItemToolTipWidgetv3_C_IconScaleBoxSizeBlock_Offset = offsetof(UItemToolTipWidgetv3_C, IconScaleBoxSizeBlock);
	static_assert(UItemToolTipWidgetv3_C_IconScaleBoxSizeBlock_Offset == 0x2d8, "UItemToolTipWidgetv3_C::IconScaleBoxSizeBlock offset is not 2d8");
	auto constexpr UItemToolTipWidgetv3_C_IconSize_Offset = offsetof(UItemToolTipWidgetv3_C, IconSize);
	static_assert(UItemToolTipWidgetv3_C_IconSize_Offset == 0x2e0, "UItemToolTipWidgetv3_C::IconSize offset is not 2e0");
	auto constexpr UItemToolTipWidgetv3_C_ImageVerticalBox_Offset = offsetof(UItemToolTipWidgetv3_C, ImageVerticalBox);
	static_assert(UItemToolTipWidgetv3_C_ImageVerticalBox_Offset == 0x2e8, "UItemToolTipWidgetv3_C::ImageVerticalBox offset is not 2e8");
	auto constexpr UItemToolTipWidgetv3_C_ItemName_Offset = offsetof(UItemToolTipWidgetv3_C, ItemName);
	static_assert(UItemToolTipWidgetv3_C_ItemName_Offset == 0x2f0, "UItemToolTipWidgetv3_C::ItemName offset is not 2f0");
	auto constexpr UItemToolTipWidgetv3_C_MagazineIcon_Offset = offsetof(UItemToolTipWidgetv3_C, MagazineIcon);
	static_assert(UItemToolTipWidgetv3_C_MagazineIcon_Offset == 0x2f8, "UItemToolTipWidgetv3_C::MagazineIcon offset is not 2f8");
	auto constexpr UItemToolTipWidgetv3_C_WeaponGunBlock_Offset = offsetof(UItemToolTipWidgetv3_C, WeaponGunBlock);
	static_assert(UItemToolTipWidgetv3_C_WeaponGunBlock_Offset == 0x300, "UItemToolTipWidgetv3_C::WeaponGunBlock offset is not 300");
	auto constexpr UItemToolTipWidgetv3_C_WeaponStatVerticalBox_Offset = offsetof(UItemToolTipWidgetv3_C, WeaponStatVerticalBox);
	static_assert(UItemToolTipWidgetv3_C_WeaponStatVerticalBox_Offset == 0x308, "UItemToolTipWidgetv3_C::WeaponStatVerticalBox offset is not 308");
	auto constexpr UItemToolTipWidgetv3_C_ImageDynamicMaterial_Offset = offsetof(UItemToolTipWidgetv3_C, ImageDynamicMaterial);
	static_assert(UItemToolTipWidgetv3_C_ImageDynamicMaterial_Offset == 0x310, "UItemToolTipWidgetv3_C::ImageDynamicMaterial offset is not 310");
	auto constexpr UItemToolTipWidgetv3_C_DamageMax_Offset = offsetof(UItemToolTipWidgetv3_C, DamageMax);
	static_assert(UItemToolTipWidgetv3_C_DamageMax_Offset == 0x318, "UItemToolTipWidgetv3_C::DamageMax offset is not 318");
	auto constexpr UItemToolTipWidgetv3_C_EffectRangeMax_Offset = offsetof(UItemToolTipWidgetv3_C, EffectRangeMax);
	static_assert(UItemToolTipWidgetv3_C_EffectRangeMax_Offset == 0x31c, "UItemToolTipWidgetv3_C::EffectRangeMax offset is not 31c");
	auto constexpr UItemToolTipWidgetv3_C_StabilityMax_Offset = offsetof(UItemToolTipWidgetv3_C, StabilityMax);
	static_assert(UItemToolTipWidgetv3_C_StabilityMax_Offset == 0x320, "UItemToolTipWidgetv3_C::StabilityMax offset is not 320");
	auto constexpr UItemToolTipWidgetv3_C_FringRateMax_Offset = offsetof(UItemToolTipWidgetv3_C, FringRateMax);
	static_assert(UItemToolTipWidgetv3_C_FringRateMax_Offset == 0x324, "UItemToolTipWidgetv3_C::FringRateMax offset is not 324");
	auto constexpr UItemToolTipWidgetv3_C_LocalDefaultWeaponObject_Offset = offsetof(UItemToolTipWidgetv3_C, LocalDefaultWeaponObject);
	static_assert(UItemToolTipWidgetv3_C_LocalDefaultWeaponObject_Offset == 0x328, "UItemToolTipWidgetv3_C::LocalDefaultWeaponObject offset is not 328");
	auto constexpr UItemToolTipWidgetv3_C_DamageMultiplierForMultipleBullet_Offset = offsetof(UItemToolTipWidgetv3_C, DamageMultiplierForMultipleBullet);
	static_assert(UItemToolTipWidgetv3_C_DamageMultiplierForMultipleBullet_Offset == 0x330, "UItemToolTipWidgetv3_C::DamageMultiplierForMultipleBullet offset is not 330");
	auto constexpr UItemToolTipWidgetv3_C_DefaultDelayTime_Offset = offsetof(UItemToolTipWidgetv3_C, DefaultDelayTime);
	static_assert(UItemToolTipWidgetv3_C_DefaultDelayTime_Offset == 0x334, "UItemToolTipWidgetv3_C::DefaultDelayTime offset is not 334");
	auto constexpr UItemToolTipWidgetv3_C_NewVar_1_Offset = offsetof(UItemToolTipWidgetv3_C, NewVar_1);
	static_assert(UItemToolTipWidgetv3_C_NewVar_1_Offset == 0x338, "UItemToolTipWidgetv3_C::NewVar_1 offset is not 338");
	auto constexpr UItemToolTipWidgetv3_C_NewVar_2_Offset = offsetof(UItemToolTipWidgetv3_C, NewVar_2);
	static_assert(UItemToolTipWidgetv3_C_NewVar_2_Offset == 0x348, "UItemToolTipWidgetv3_C::NewVar_2 offset is not 348");
	auto constexpr UItemToolTipWidgetv3_C_AnimTimer_Offset = offsetof(UItemToolTipWidgetv3_C, AnimTimer);
	static_assert(UItemToolTipWidgetv3_C_AnimTimer_Offset == 0x358, "UItemToolTipWidgetv3_C::AnimTimer offset is not 358");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
