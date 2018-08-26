#pragma once
#include "UItemToolTipWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemToolTipWidget_Bp_C // Size: 0x348
	: public UItemToolTipWidget // Size: 0x248
{
private:
	typedef UItemToolTipWidget_Bp_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(60200); // id32("WidgetBlueprintGeneratedClass ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> FadeInToolTip; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.FadeInToolTip */
	ExternalPtr<struct UToolTipGauageWidget_C> AccuracyGauge; /* Ofs: 0x258 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.AccuracyGauge */
	ExternalPtr<struct UHorizontalBox> AmmoInfoBox; /* Ofs: 0x260 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.AmmoInfoBox */
	ExternalPtr<struct UTextBlock> AmmoNameText; /* Ofs: 0x268 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.AmmoNameText */
	ExternalPtr<struct UTextBlock> AmmoPerClipText; /* Ofs: 0x270 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.AmmoPerClipText */
	ExternalPtr<struct UTextBlock> Capacity; /* Ofs: 0x278 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Capacity */
	ExternalPtr<struct UVerticalBox> CapacityBlock; /* Ofs: 0x280 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.CapacityBlock */
	ExternalPtr<struct UTextBlock> CategoryText; /* Ofs: 0x288 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.CategoryText */
	ExternalPtr<struct UTextBlock> ComparingWeapon; /* Ofs: 0x290 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.ComparingWeapon */
	ExternalPtr<struct UHorizontalBox> ComparisonBlock; /* Ofs: 0x298 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.ComparisonBlock */
	ExternalPtr<struct UBorder> DamageBlock; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.DamageBlock */
	ExternalPtr<struct UToolTipGauageWidget_C> DamageGauge; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.DamageGauge */
	ExternalPtr<struct UTextBlock> DescText; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.DescText */
	ExternalPtr<struct UToolTipGauageWidget_C> EffectRangeGauge; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.EffectRangeGauge */
	ExternalPtr<struct UToolTipGauageWidget_C> FiringRate; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.FiringRate */
	ExternalPtr<struct UImage> Icon; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Icon */
	ExternalPtr<struct USizeBox> IconScaleBoxSizeBlock; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.IconScaleBoxSizeBlock */
	ExternalPtr<struct USizeBox> IconSize; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.IconSize */
	ExternalPtr<struct UVerticalBox> ImageBlock; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.ImageBlock */
	ExternalPtr<struct UTextBlock> ItemName; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.ItemName */
	ExternalPtr<struct UImage> MagazineIcon; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.MagazineIcon */
	ExternalPtr<struct UVerticalBox> WeaponGunBlock; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.WeaponGunBlock */
	ExternalPtr<struct UTextBlock> WeaponSkinName; /* Ofs: 0x300 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.WeaponSkinName */
	ExternalPtr<struct UVerticalBox> WeaponStatBlock; /* Ofs: 0x308 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.WeaponStatBlock */
	ExternalPtr<struct UMaterialInstanceDynamic> ImageDynamicMaterial; /* Ofs: 0x310 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.ImageDynamicMaterial */
	float DamageMax; /* Ofs: 0x318 Size: 0x4 - FloatProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.DamageMax */
	float EffectRangeMax; /* Ofs: 0x31C Size: 0x4 - FloatProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.EffectRangeMax */
	float StabilityMax; /* Ofs: 0x320 Size: 0x4 - FloatProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.StabilityMax */
	float FringRateMax; /* Ofs: 0x324 Size: 0x4 - FloatProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.FringRateMax */
	ExternalPtr<struct UTslWeapon> LocalDefaultWeaponObject; /* Ofs: 0x328 Size: 0x8 - ObjectProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.LocalDefaultWeaponObject */
	float DamageMultiplierForMultipleBullet; /* Ofs: 0x330 Size: 0x4 - FloatProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.DamageMultiplierForMultipleBullet */
	uint8_t UnknownData334[0x4];
	TScriptInterface<ExternalPtr<struct USlotInterface>> SavedSlot; /* Ofs: 0x338 Size: 0x10 - InterfaceProperty ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.SavedSlot */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetFadeInToolTip(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetAccuracyGauge(t_structHelper inst, ExternalPtr<struct UToolTipGauageWidget_C> value) { inst.WriteOffset(0x258, value); }
	inline bool SetAmmoInfoBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x260, value); }
	inline bool SetAmmoNameText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
	inline bool SetAmmoPerClipText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x270, value); }
	inline bool SetCapacity(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x278, value); }
	inline bool SetCapacityBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x280, value); }
	inline bool SetCategoryText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x288, value); }
	inline bool SetComparingWeapon(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x290, value); }
	inline bool SetComparisonBlock(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x298, value); }
	inline bool SetDamageBlock(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetDamageGauge(t_structHelper inst, ExternalPtr<struct UToolTipGauageWidget_C> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetDescText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetEffectRangeGauge(t_structHelper inst, ExternalPtr<struct UToolTipGauageWidget_C> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetFiringRate(t_structHelper inst, ExternalPtr<struct UToolTipGauageWidget_C> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetIconScaleBoxSizeBlock(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetIconSize(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetImageBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetItemName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetMagazineIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetWeaponGunBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetWeaponSkinName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x300, value); }
	inline bool SetWeaponStatBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x308, value); }
	inline bool SetImageDynamicMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x310, value); }
	inline bool SetDamageMax(t_structHelper inst, float value) { inst.WriteOffset(0x318, value); }
	inline bool SetEffectRangeMax(t_structHelper inst, float value) { inst.WriteOffset(0x31C, value); }
	inline bool SetStabilityMax(t_structHelper inst, float value) { inst.WriteOffset(0x320, value); }
	inline bool SetFringRateMax(t_structHelper inst, float value) { inst.WriteOffset(0x324, value); }
	inline bool SetLocalDefaultWeaponObject(t_structHelper inst, ExternalPtr<struct UTslWeapon> value) { inst.WriteOffset(0x328, value); }
	inline bool SetDamageMultiplierForMultipleBullet(t_structHelper inst, float value) { inst.WriteOffset(0x330, value); }
	inline bool SetSavedSlot(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x338, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemToolTipWidget_Bp_C = sizeof(UItemToolTipWidget_Bp_C); // 840
    static_assert(sizeof(UItemToolTipWidget_Bp_C) == 0x348, "Size of UItemToolTipWidget_Bp_C is not correct.");
	auto constexpr UItemToolTipWidget_Bp_C_UberGraphFrame_Offset = offsetof(UItemToolTipWidget_Bp_C, UberGraphFrame);
	static_assert(UItemToolTipWidget_Bp_C_UberGraphFrame_Offset == 0x248, "UItemToolTipWidget_Bp_C::UberGraphFrame offset is not 248");
	auto constexpr UItemToolTipWidget_Bp_C_FadeInToolTip_Offset = offsetof(UItemToolTipWidget_Bp_C, FadeInToolTip);
	static_assert(UItemToolTipWidget_Bp_C_FadeInToolTip_Offset == 0x250, "UItemToolTipWidget_Bp_C::FadeInToolTip offset is not 250");
	auto constexpr UItemToolTipWidget_Bp_C_AccuracyGauge_Offset = offsetof(UItemToolTipWidget_Bp_C, AccuracyGauge);
	static_assert(UItemToolTipWidget_Bp_C_AccuracyGauge_Offset == 0x258, "UItemToolTipWidget_Bp_C::AccuracyGauge offset is not 258");
	auto constexpr UItemToolTipWidget_Bp_C_AmmoInfoBox_Offset = offsetof(UItemToolTipWidget_Bp_C, AmmoInfoBox);
	static_assert(UItemToolTipWidget_Bp_C_AmmoInfoBox_Offset == 0x260, "UItemToolTipWidget_Bp_C::AmmoInfoBox offset is not 260");
	auto constexpr UItemToolTipWidget_Bp_C_AmmoNameText_Offset = offsetof(UItemToolTipWidget_Bp_C, AmmoNameText);
	static_assert(UItemToolTipWidget_Bp_C_AmmoNameText_Offset == 0x268, "UItemToolTipWidget_Bp_C::AmmoNameText offset is not 268");
	auto constexpr UItemToolTipWidget_Bp_C_AmmoPerClipText_Offset = offsetof(UItemToolTipWidget_Bp_C, AmmoPerClipText);
	static_assert(UItemToolTipWidget_Bp_C_AmmoPerClipText_Offset == 0x270, "UItemToolTipWidget_Bp_C::AmmoPerClipText offset is not 270");
	auto constexpr UItemToolTipWidget_Bp_C_Capacity_Offset = offsetof(UItemToolTipWidget_Bp_C, Capacity);
	static_assert(UItemToolTipWidget_Bp_C_Capacity_Offset == 0x278, "UItemToolTipWidget_Bp_C::Capacity offset is not 278");
	auto constexpr UItemToolTipWidget_Bp_C_CapacityBlock_Offset = offsetof(UItemToolTipWidget_Bp_C, CapacityBlock);
	static_assert(UItemToolTipWidget_Bp_C_CapacityBlock_Offset == 0x280, "UItemToolTipWidget_Bp_C::CapacityBlock offset is not 280");
	auto constexpr UItemToolTipWidget_Bp_C_CategoryText_Offset = offsetof(UItemToolTipWidget_Bp_C, CategoryText);
	static_assert(UItemToolTipWidget_Bp_C_CategoryText_Offset == 0x288, "UItemToolTipWidget_Bp_C::CategoryText offset is not 288");
	auto constexpr UItemToolTipWidget_Bp_C_ComparingWeapon_Offset = offsetof(UItemToolTipWidget_Bp_C, ComparingWeapon);
	static_assert(UItemToolTipWidget_Bp_C_ComparingWeapon_Offset == 0x290, "UItemToolTipWidget_Bp_C::ComparingWeapon offset is not 290");
	auto constexpr UItemToolTipWidget_Bp_C_ComparisonBlock_Offset = offsetof(UItemToolTipWidget_Bp_C, ComparisonBlock);
	static_assert(UItemToolTipWidget_Bp_C_ComparisonBlock_Offset == 0x298, "UItemToolTipWidget_Bp_C::ComparisonBlock offset is not 298");
	auto constexpr UItemToolTipWidget_Bp_C_DamageBlock_Offset = offsetof(UItemToolTipWidget_Bp_C, DamageBlock);
	static_assert(UItemToolTipWidget_Bp_C_DamageBlock_Offset == 0x2a0, "UItemToolTipWidget_Bp_C::DamageBlock offset is not 2a0");
	auto constexpr UItemToolTipWidget_Bp_C_DamageGauge_Offset = offsetof(UItemToolTipWidget_Bp_C, DamageGauge);
	static_assert(UItemToolTipWidget_Bp_C_DamageGauge_Offset == 0x2a8, "UItemToolTipWidget_Bp_C::DamageGauge offset is not 2a8");
	auto constexpr UItemToolTipWidget_Bp_C_DescText_Offset = offsetof(UItemToolTipWidget_Bp_C, DescText);
	static_assert(UItemToolTipWidget_Bp_C_DescText_Offset == 0x2b0, "UItemToolTipWidget_Bp_C::DescText offset is not 2b0");
	auto constexpr UItemToolTipWidget_Bp_C_EffectRangeGauge_Offset = offsetof(UItemToolTipWidget_Bp_C, EffectRangeGauge);
	static_assert(UItemToolTipWidget_Bp_C_EffectRangeGauge_Offset == 0x2b8, "UItemToolTipWidget_Bp_C::EffectRangeGauge offset is not 2b8");
	auto constexpr UItemToolTipWidget_Bp_C_FiringRate_Offset = offsetof(UItemToolTipWidget_Bp_C, FiringRate);
	static_assert(UItemToolTipWidget_Bp_C_FiringRate_Offset == 0x2c0, "UItemToolTipWidget_Bp_C::FiringRate offset is not 2c0");
	auto constexpr UItemToolTipWidget_Bp_C_Icon_Offset = offsetof(UItemToolTipWidget_Bp_C, Icon);
	static_assert(UItemToolTipWidget_Bp_C_Icon_Offset == 0x2c8, "UItemToolTipWidget_Bp_C::Icon offset is not 2c8");
	auto constexpr UItemToolTipWidget_Bp_C_IconScaleBoxSizeBlock_Offset = offsetof(UItemToolTipWidget_Bp_C, IconScaleBoxSizeBlock);
	static_assert(UItemToolTipWidget_Bp_C_IconScaleBoxSizeBlock_Offset == 0x2d0, "UItemToolTipWidget_Bp_C::IconScaleBoxSizeBlock offset is not 2d0");
	auto constexpr UItemToolTipWidget_Bp_C_IconSize_Offset = offsetof(UItemToolTipWidget_Bp_C, IconSize);
	static_assert(UItemToolTipWidget_Bp_C_IconSize_Offset == 0x2d8, "UItemToolTipWidget_Bp_C::IconSize offset is not 2d8");
	auto constexpr UItemToolTipWidget_Bp_C_ImageBlock_Offset = offsetof(UItemToolTipWidget_Bp_C, ImageBlock);
	static_assert(UItemToolTipWidget_Bp_C_ImageBlock_Offset == 0x2e0, "UItemToolTipWidget_Bp_C::ImageBlock offset is not 2e0");
	auto constexpr UItemToolTipWidget_Bp_C_ItemName_Offset = offsetof(UItemToolTipWidget_Bp_C, ItemName);
	static_assert(UItemToolTipWidget_Bp_C_ItemName_Offset == 0x2e8, "UItemToolTipWidget_Bp_C::ItemName offset is not 2e8");
	auto constexpr UItemToolTipWidget_Bp_C_MagazineIcon_Offset = offsetof(UItemToolTipWidget_Bp_C, MagazineIcon);
	static_assert(UItemToolTipWidget_Bp_C_MagazineIcon_Offset == 0x2f0, "UItemToolTipWidget_Bp_C::MagazineIcon offset is not 2f0");
	auto constexpr UItemToolTipWidget_Bp_C_WeaponGunBlock_Offset = offsetof(UItemToolTipWidget_Bp_C, WeaponGunBlock);
	static_assert(UItemToolTipWidget_Bp_C_WeaponGunBlock_Offset == 0x2f8, "UItemToolTipWidget_Bp_C::WeaponGunBlock offset is not 2f8");
	auto constexpr UItemToolTipWidget_Bp_C_WeaponSkinName_Offset = offsetof(UItemToolTipWidget_Bp_C, WeaponSkinName);
	static_assert(UItemToolTipWidget_Bp_C_WeaponSkinName_Offset == 0x300, "UItemToolTipWidget_Bp_C::WeaponSkinName offset is not 300");
	auto constexpr UItemToolTipWidget_Bp_C_WeaponStatBlock_Offset = offsetof(UItemToolTipWidget_Bp_C, WeaponStatBlock);
	static_assert(UItemToolTipWidget_Bp_C_WeaponStatBlock_Offset == 0x308, "UItemToolTipWidget_Bp_C::WeaponStatBlock offset is not 308");
	auto constexpr UItemToolTipWidget_Bp_C_ImageDynamicMaterial_Offset = offsetof(UItemToolTipWidget_Bp_C, ImageDynamicMaterial);
	static_assert(UItemToolTipWidget_Bp_C_ImageDynamicMaterial_Offset == 0x310, "UItemToolTipWidget_Bp_C::ImageDynamicMaterial offset is not 310");
	auto constexpr UItemToolTipWidget_Bp_C_DamageMax_Offset = offsetof(UItemToolTipWidget_Bp_C, DamageMax);
	static_assert(UItemToolTipWidget_Bp_C_DamageMax_Offset == 0x318, "UItemToolTipWidget_Bp_C::DamageMax offset is not 318");
	auto constexpr UItemToolTipWidget_Bp_C_EffectRangeMax_Offset = offsetof(UItemToolTipWidget_Bp_C, EffectRangeMax);
	static_assert(UItemToolTipWidget_Bp_C_EffectRangeMax_Offset == 0x31c, "UItemToolTipWidget_Bp_C::EffectRangeMax offset is not 31c");
	auto constexpr UItemToolTipWidget_Bp_C_StabilityMax_Offset = offsetof(UItemToolTipWidget_Bp_C, StabilityMax);
	static_assert(UItemToolTipWidget_Bp_C_StabilityMax_Offset == 0x320, "UItemToolTipWidget_Bp_C::StabilityMax offset is not 320");
	auto constexpr UItemToolTipWidget_Bp_C_FringRateMax_Offset = offsetof(UItemToolTipWidget_Bp_C, FringRateMax);
	static_assert(UItemToolTipWidget_Bp_C_FringRateMax_Offset == 0x324, "UItemToolTipWidget_Bp_C::FringRateMax offset is not 324");
	auto constexpr UItemToolTipWidget_Bp_C_LocalDefaultWeaponObject_Offset = offsetof(UItemToolTipWidget_Bp_C, LocalDefaultWeaponObject);
	static_assert(UItemToolTipWidget_Bp_C_LocalDefaultWeaponObject_Offset == 0x328, "UItemToolTipWidget_Bp_C::LocalDefaultWeaponObject offset is not 328");
	auto constexpr UItemToolTipWidget_Bp_C_DamageMultiplierForMultipleBullet_Offset = offsetof(UItemToolTipWidget_Bp_C, DamageMultiplierForMultipleBullet);
	static_assert(UItemToolTipWidget_Bp_C_DamageMultiplierForMultipleBullet_Offset == 0x330, "UItemToolTipWidget_Bp_C::DamageMultiplierForMultipleBullet offset is not 330");
	auto constexpr UItemToolTipWidget_Bp_C_SavedSlot_Offset = offsetof(UItemToolTipWidget_Bp_C, SavedSlot);
	static_assert(UItemToolTipWidget_Bp_C_SavedSlot_Offset == 0x338, "UItemToolTipWidget_Bp_C::SavedSlot offset is not 338");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
