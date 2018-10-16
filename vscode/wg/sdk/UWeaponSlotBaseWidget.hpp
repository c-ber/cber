#pragma once
#include "UUmgBaseWidget.hpp"
#include "ENoReloadGuideType.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_SizeBox.hpp"
#include "FLinearColor.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FColorBlindColorSet.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_Border.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponSlotBaseWidget // Size: 0x618
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UWeaponSlotBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1600); // id32("Class TslGame.WeaponSlotBaseWidget")
		return ptr;
	}
	uint8_t boolField300;
	uint8_t UnknownData301[0x3];
	int32_t WeaponIndex; /* Ofs: 0x304 Size: 0x4 - IntProperty TslGame.WeaponSlotBaseWidget.WeaponIndex */
	TEnumAsByte<enum ENoReloadGuideType> ListSlotNoReloadGuideType; /* Ofs: 0x308 Size: 0x1 - EnumProperty TslGame.WeaponSlotBaseWidget.ListSlotNoReloadGuideType */
	uint8_t boolField309;
	uint8_t UnknownData30A[0x6];
	FUmgWidgetBinder_Image WeaponIconImageBinder; /* Ofs: 0x310 Size: 0x28 - StructProperty TslGame.WeaponSlotBaseWidget.WeaponIconImageBinder */
	FUmgWidgetBinder_SizeBox WeaponIconImageSizeBoxBinder; /* Ofs: 0x338 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.WeaponIconImageSizeBoxBinder */
	float WeaponIconImageSizeBoxHeight; /* Ofs: 0x358 Size: 0x4 - FloatProperty TslGame.WeaponSlotBaseWidget.WeaponIconImageSizeBoxHeight */
	uint8_t UnknownData35C[0x4];
	FName WeaponIconTextureParmName; /* Ofs: 0x360 Size: 0x8 - NameProperty TslGame.WeaponSlotBaseWidget.WeaponIconTextureParmName */
	FName WeaponIconColorParmName; /* Ofs: 0x368 Size: 0x8 - NameProperty TslGame.WeaponSlotBaseWidget.WeaponIconColorParmName */
	FLinearColor WeaponColor_Armed; /* Ofs: 0x370 Size: 0x10 - StructProperty TslGame.WeaponSlotBaseWidget.WeaponColor_Armed */
	FLinearColor WeaponColor_Normal; /* Ofs: 0x380 Size: 0x10 - StructProperty TslGame.WeaponSlotBaseWidget.WeaponColor_Normal */
	FLinearColor WeaponColor_Unarmed; /* Ofs: 0x390 Size: 0x10 - StructProperty TslGame.WeaponSlotBaseWidget.WeaponColor_Unarmed */
	FUmgWidgetBinder_Animation ScaleUpAnimBinder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.ScaleUpAnimBinder */
	FUmgWidgetBinder_Animation ScaleDownAnimBinder; /* Ofs: 0x3C0 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.ScaleDownAnimBinder */
	FColorBlindColorSet WeaponColorSet_NoReload; /* Ofs: 0x3E0 Size: 0x10 - StructProperty TslGame.WeaponSlotBaseWidget.WeaponColorSet_NoReload */
	uint8_t boolField3F0;
	uint8_t UnknownData3F1[0x7];
	FUmgWidgetBinder_TextBlock WeaponHandsOnLoadedAmmoCountTextBinder; /* Ofs: 0x3F8 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.WeaponHandsOnLoadedAmmoCountTextBinder */
	FUmgWidgetBinder_TextBlock WeaponListLoadedAmmoCountTextBinder; /* Ofs: 0x418 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.WeaponListLoadedAmmoCountTextBinder */
	FUmgWidgetBinder_Animation AmmoIncreasingAnimBinder; /* Ofs: 0x438 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.AmmoIncreasingAnimBinder */
	FUmgWidgetBinder_Animation AmmoDecreasingAnimBinder; /* Ofs: 0x458 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.AmmoDecreasingAnimBinder */
	FUmgWidgetBinder_TextBlock WeaponHandsOnUnloadedAmmoCountTextBinder; /* Ofs: 0x478 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.WeaponHandsOnUnloadedAmmoCountTextBinder */
	FUmgWidgetBinder_Animation UnloadedAmmoIncreasingAnimBinder; /* Ofs: 0x498 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.UnloadedAmmoIncreasingAnimBinder */
	FUmgWidgetBinder_Animation UnloadedAmmoDecreasingAnimBinder; /* Ofs: 0x4B8 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.UnloadedAmmoDecreasingAnimBinder */
	FUmgWidgetBinder_Image WeaponHandsOnAmmoIconBinder; /* Ofs: 0x4D8 Size: 0x28 - StructProperty TslGame.WeaponSlotBaseWidget.WeaponHandsOnAmmoIconBinder */
	FName AmmoTexParamName; /* Ofs: 0x500 Size: 0x8 - NameProperty TslGame.WeaponSlotBaseWidget.AmmoTexParamName */
	uint8_t boolField508;
	uint8_t UnknownData509[0x7];
	FUmgWidgetBinder_TextBlock WeaponFiringModeTextBinder; /* Ofs: 0x510 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.WeaponFiringModeTextBinder */
	FUmgWidgetBinder_Border WeaponIconBackground; /* Ofs: 0x530 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.WeaponIconBackground */
	FUmgWidgetBinder_Border AmmoAndFringModeBackground; /* Ofs: 0x550 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.AmmoAndFringModeBackground */
	float SlotBackgroundAlpha_Armed; /* Ofs: 0x570 Size: 0x4 - FloatProperty TslGame.WeaponSlotBaseWidget.SlotBackgroundAlpha_Armed */
	float SlotBackgroundAlpha_Unarmed; /* Ofs: 0x574 Size: 0x4 - FloatProperty TslGame.WeaponSlotBaseWidget.SlotBackgroundAlpha_Unarmed */
	float SlotBackgroundAlpha_Normal; /* Ofs: 0x578 Size: 0x4 - FloatProperty TslGame.WeaponSlotBaseWidget.SlotBackgroundAlpha_Normal */
	uint8_t UnknownData57C[0x4];
	FUmgWidgetBinder_Animation FadeInWeaponSlotAnimBinder; /* Ofs: 0x580 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.FadeInWeaponSlotAnimBinder */
	FUmgWidgetBinder_Animation FadeOutWeaponSlotAnimBinder; /* Ofs: 0x5A0 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.FadeOutWeaponSlotAnimBinder */
	FUmgWidgetBinder_Animation FadeInUnarmedWeaponSlotAminBinder; /* Ofs: 0x5C0 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.FadeInUnarmedWeaponSlotAminBinder */
	FUmgWidgetBinder_Animation FadeOutUnarmedWeaponSlotAminBinder; /* Ofs: 0x5E0 Size: 0x20 - StructProperty TslGame.WeaponSlotBaseWidget.FadeOutUnarmedWeaponSlotAminBinder */
	uint8_t UnknownData600[0x18];


	inline bool bListInSlot()
	{
		return boolField300& 0x1;
	}
	inline bool SetbListInSlot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x300, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeaponIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x304, value); }
	inline bool SetListSlotNoReloadGuideType(t_structHelper inst, TEnumAsByte<enum ENoReloadGuideType> value) { inst.WriteOffset(0x308, value); }
	inline bool bUseWeaponIcon()
	{
		return boolField309& 0x1;
	}
	inline bool SetbUseWeaponIcon(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x309, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeaponIconImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x310, value); }
	inline bool SetWeaponIconImageSizeBoxBinder(t_structHelper inst, FUmgWidgetBinder_SizeBox value) { inst.WriteOffset(0x338, value); }
	inline bool SetWeaponIconImageSizeBoxHeight(t_structHelper inst, float value) { inst.WriteOffset(0x358, value); }
	inline bool SetWeaponIconTextureParmName(t_structHelper inst, FName value) { inst.WriteOffset(0x360, value); }
	inline bool SetWeaponIconColorParmName(t_structHelper inst, FName value) { inst.WriteOffset(0x368, value); }
	inline bool SetWeaponColor_Armed(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x370, value); }
	inline bool SetWeaponColor_Normal(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x380, value); }
	inline bool SetWeaponColor_Unarmed(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x390, value); }
	inline bool SetScaleUpAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetScaleDownAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetWeaponColorSet_NoReload(t_structHelper inst, FColorBlindColorSet value) { inst.WriteOffset(0x3E0, value); }
	inline bool bUseAmmoTextAndIcon()
	{
		return boolField3F0& 0x1;
	}
	inline bool SetbUseAmmoTextAndIcon(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeaponHandsOnLoadedAmmoCountTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetWeaponListLoadedAmmoCountTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x418, value); }
	inline bool SetAmmoIncreasingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x438, value); }
	inline bool SetAmmoDecreasingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x458, value); }
	inline bool SetWeaponHandsOnUnloadedAmmoCountTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x478, value); }
	inline bool SetUnloadedAmmoIncreasingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x498, value); }
	inline bool SetUnloadedAmmoDecreasingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetWeaponHandsOnAmmoIconBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetAmmoTexParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x500, value); }
	inline bool bUseWeaponFiringModeTextBinder()
	{
		return boolField508& 0x1;
	}
	inline bool SetbUseWeaponFiringModeTextBinder(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x508, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeaponFiringModeTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x510, value); }
	inline bool SetWeaponIconBackground(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x530, value); }
	inline bool SetAmmoAndFringModeBackground(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x550, value); }
	inline bool SetSlotBackgroundAlpha_Armed(t_structHelper inst, float value) { inst.WriteOffset(0x570, value); }
	inline bool SetSlotBackgroundAlpha_Unarmed(t_structHelper inst, float value) { inst.WriteOffset(0x574, value); }
	inline bool SetSlotBackgroundAlpha_Normal(t_structHelper inst, float value) { inst.WriteOffset(0x578, value); }
	inline bool SetFadeInWeaponSlotAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x580, value); }
	inline bool SetFadeOutWeaponSlotAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetFadeInUnarmedWeaponSlotAminBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetFadeOutUnarmedWeaponSlotAminBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x5E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponSlotBaseWidget = sizeof(UWeaponSlotBaseWidget); // 1560
    static_assert(sizeof(UWeaponSlotBaseWidget) == 0x618, "Size of UWeaponSlotBaseWidget is not correct.");
	auto constexpr UWeaponSlotBaseWidget_boolField300_Offset = offsetof(UWeaponSlotBaseWidget, boolField300);
	static_assert(UWeaponSlotBaseWidget_boolField300_Offset == 0x300, "UWeaponSlotBaseWidget::boolField300 offset is not 300");
	auto constexpr UWeaponSlotBaseWidget_WeaponIndex_Offset = offsetof(UWeaponSlotBaseWidget, WeaponIndex);
	static_assert(UWeaponSlotBaseWidget_WeaponIndex_Offset == 0x304, "UWeaponSlotBaseWidget::WeaponIndex offset is not 304");
	auto constexpr UWeaponSlotBaseWidget_ListSlotNoReloadGuideType_Offset = offsetof(UWeaponSlotBaseWidget, ListSlotNoReloadGuideType);
	static_assert(UWeaponSlotBaseWidget_ListSlotNoReloadGuideType_Offset == 0x308, "UWeaponSlotBaseWidget::ListSlotNoReloadGuideType offset is not 308");
	auto constexpr UWeaponSlotBaseWidget_boolField309_Offset = offsetof(UWeaponSlotBaseWidget, boolField309);
	static_assert(UWeaponSlotBaseWidget_boolField309_Offset == 0x309, "UWeaponSlotBaseWidget::boolField309 offset is not 309");
	auto constexpr UWeaponSlotBaseWidget_WeaponIconImageBinder_Offset = offsetof(UWeaponSlotBaseWidget, WeaponIconImageBinder);
	static_assert(UWeaponSlotBaseWidget_WeaponIconImageBinder_Offset == 0x310, "UWeaponSlotBaseWidget::WeaponIconImageBinder offset is not 310");
	auto constexpr UWeaponSlotBaseWidget_WeaponIconImageSizeBoxBinder_Offset = offsetof(UWeaponSlotBaseWidget, WeaponIconImageSizeBoxBinder);
	static_assert(UWeaponSlotBaseWidget_WeaponIconImageSizeBoxBinder_Offset == 0x338, "UWeaponSlotBaseWidget::WeaponIconImageSizeBoxBinder offset is not 338");
	auto constexpr UWeaponSlotBaseWidget_WeaponIconImageSizeBoxHeight_Offset = offsetof(UWeaponSlotBaseWidget, WeaponIconImageSizeBoxHeight);
	static_assert(UWeaponSlotBaseWidget_WeaponIconImageSizeBoxHeight_Offset == 0x358, "UWeaponSlotBaseWidget::WeaponIconImageSizeBoxHeight offset is not 358");
	auto constexpr UWeaponSlotBaseWidget_WeaponIconTextureParmName_Offset = offsetof(UWeaponSlotBaseWidget, WeaponIconTextureParmName);
	static_assert(UWeaponSlotBaseWidget_WeaponIconTextureParmName_Offset == 0x360, "UWeaponSlotBaseWidget::WeaponIconTextureParmName offset is not 360");
	auto constexpr UWeaponSlotBaseWidget_WeaponIconColorParmName_Offset = offsetof(UWeaponSlotBaseWidget, WeaponIconColorParmName);
	static_assert(UWeaponSlotBaseWidget_WeaponIconColorParmName_Offset == 0x368, "UWeaponSlotBaseWidget::WeaponIconColorParmName offset is not 368");
	auto constexpr UWeaponSlotBaseWidget_WeaponColor_Armed_Offset = offsetof(UWeaponSlotBaseWidget, WeaponColor_Armed);
	static_assert(UWeaponSlotBaseWidget_WeaponColor_Armed_Offset == 0x370, "UWeaponSlotBaseWidget::WeaponColor_Armed offset is not 370");
	auto constexpr UWeaponSlotBaseWidget_WeaponColor_Normal_Offset = offsetof(UWeaponSlotBaseWidget, WeaponColor_Normal);
	static_assert(UWeaponSlotBaseWidget_WeaponColor_Normal_Offset == 0x380, "UWeaponSlotBaseWidget::WeaponColor_Normal offset is not 380");
	auto constexpr UWeaponSlotBaseWidget_WeaponColor_Unarmed_Offset = offsetof(UWeaponSlotBaseWidget, WeaponColor_Unarmed);
	static_assert(UWeaponSlotBaseWidget_WeaponColor_Unarmed_Offset == 0x390, "UWeaponSlotBaseWidget::WeaponColor_Unarmed offset is not 390");
	auto constexpr UWeaponSlotBaseWidget_ScaleUpAnimBinder_Offset = offsetof(UWeaponSlotBaseWidget, ScaleUpAnimBinder);
	static_assert(UWeaponSlotBaseWidget_ScaleUpAnimBinder_Offset == 0x3a0, "UWeaponSlotBaseWidget::ScaleUpAnimBinder offset is not 3a0");
	auto constexpr UWeaponSlotBaseWidget_ScaleDownAnimBinder_Offset = offsetof(UWeaponSlotBaseWidget, ScaleDownAnimBinder);
	static_assert(UWeaponSlotBaseWidget_ScaleDownAnimBinder_Offset == 0x3c0, "UWeaponSlotBaseWidget::ScaleDownAnimBinder offset is not 3c0");
	auto constexpr UWeaponSlotBaseWidget_WeaponColorSet_NoReload_Offset = offsetof(UWeaponSlotBaseWidget, WeaponColorSet_NoReload);
	static_assert(UWeaponSlotBaseWidget_WeaponColorSet_NoReload_Offset == 0x3e0, "UWeaponSlotBaseWidget::WeaponColorSet_NoReload offset is not 3e0");
	auto constexpr UWeaponSlotBaseWidget_boolField3F0_Offset = offsetof(UWeaponSlotBaseWidget, boolField3F0);
	static_assert(UWeaponSlotBaseWidget_boolField3F0_Offset == 0x3f0, "UWeaponSlotBaseWidget::boolField3F0 offset is not 3f0");
	auto constexpr UWeaponSlotBaseWidget_WeaponHandsOnLoadedAmmoCountTextBinder_Offset = offsetof(UWeaponSlotBaseWidget, WeaponHandsOnLoadedAmmoCountTextBinder);
	static_assert(UWeaponSlotBaseWidget_WeaponHandsOnLoadedAmmoCountTextBinder_Offset == 0x3f8, "UWeaponSlotBaseWidget::WeaponHandsOnLoadedAmmoCountTextBinder offset is not 3f8");
	auto constexpr UWeaponSlotBaseWidget_WeaponListLoadedAmmoCountTextBinder_Offset = offsetof(UWeaponSlotBaseWidget, WeaponListLoadedAmmoCountTextBinder);
	static_assert(UWeaponSlotBaseWidget_WeaponListLoadedAmmoCountTextBinder_Offset == 0x418, "UWeaponSlotBaseWidget::WeaponListLoadedAmmoCountTextBinder offset is not 418");
	auto constexpr UWeaponSlotBaseWidget_AmmoIncreasingAnimBinder_Offset = offsetof(UWeaponSlotBaseWidget, AmmoIncreasingAnimBinder);
	static_assert(UWeaponSlotBaseWidget_AmmoIncreasingAnimBinder_Offset == 0x438, "UWeaponSlotBaseWidget::AmmoIncreasingAnimBinder offset is not 438");
	auto constexpr UWeaponSlotBaseWidget_AmmoDecreasingAnimBinder_Offset = offsetof(UWeaponSlotBaseWidget, AmmoDecreasingAnimBinder);
	static_assert(UWeaponSlotBaseWidget_AmmoDecreasingAnimBinder_Offset == 0x458, "UWeaponSlotBaseWidget::AmmoDecreasingAnimBinder offset is not 458");
	auto constexpr UWeaponSlotBaseWidget_WeaponHandsOnUnloadedAmmoCountTextBinder_Offset = offsetof(UWeaponSlotBaseWidget, WeaponHandsOnUnloadedAmmoCountTextBinder);
	static_assert(UWeaponSlotBaseWidget_WeaponHandsOnUnloadedAmmoCountTextBinder_Offset == 0x478, "UWeaponSlotBaseWidget::WeaponHandsOnUnloadedAmmoCountTextBinder offset is not 478");
	auto constexpr UWeaponSlotBaseWidget_UnloadedAmmoIncreasingAnimBinder_Offset = offsetof(UWeaponSlotBaseWidget, UnloadedAmmoIncreasingAnimBinder);
	static_assert(UWeaponSlotBaseWidget_UnloadedAmmoIncreasingAnimBinder_Offset == 0x498, "UWeaponSlotBaseWidget::UnloadedAmmoIncreasingAnimBinder offset is not 498");
	auto constexpr UWeaponSlotBaseWidget_UnloadedAmmoDecreasingAnimBinder_Offset = offsetof(UWeaponSlotBaseWidget, UnloadedAmmoDecreasingAnimBinder);
	static_assert(UWeaponSlotBaseWidget_UnloadedAmmoDecreasingAnimBinder_Offset == 0x4b8, "UWeaponSlotBaseWidget::UnloadedAmmoDecreasingAnimBinder offset is not 4b8");
	auto constexpr UWeaponSlotBaseWidget_WeaponHandsOnAmmoIconBinder_Offset = offsetof(UWeaponSlotBaseWidget, WeaponHandsOnAmmoIconBinder);
	static_assert(UWeaponSlotBaseWidget_WeaponHandsOnAmmoIconBinder_Offset == 0x4d8, "UWeaponSlotBaseWidget::WeaponHandsOnAmmoIconBinder offset is not 4d8");
	auto constexpr UWeaponSlotBaseWidget_AmmoTexParamName_Offset = offsetof(UWeaponSlotBaseWidget, AmmoTexParamName);
	static_assert(UWeaponSlotBaseWidget_AmmoTexParamName_Offset == 0x500, "UWeaponSlotBaseWidget::AmmoTexParamName offset is not 500");
	auto constexpr UWeaponSlotBaseWidget_boolField508_Offset = offsetof(UWeaponSlotBaseWidget, boolField508);
	static_assert(UWeaponSlotBaseWidget_boolField508_Offset == 0x508, "UWeaponSlotBaseWidget::boolField508 offset is not 508");
	auto constexpr UWeaponSlotBaseWidget_WeaponFiringModeTextBinder_Offset = offsetof(UWeaponSlotBaseWidget, WeaponFiringModeTextBinder);
	static_assert(UWeaponSlotBaseWidget_WeaponFiringModeTextBinder_Offset == 0x510, "UWeaponSlotBaseWidget::WeaponFiringModeTextBinder offset is not 510");
	auto constexpr UWeaponSlotBaseWidget_WeaponIconBackground_Offset = offsetof(UWeaponSlotBaseWidget, WeaponIconBackground);
	static_assert(UWeaponSlotBaseWidget_WeaponIconBackground_Offset == 0x530, "UWeaponSlotBaseWidget::WeaponIconBackground offset is not 530");
	auto constexpr UWeaponSlotBaseWidget_AmmoAndFringModeBackground_Offset = offsetof(UWeaponSlotBaseWidget, AmmoAndFringModeBackground);
	static_assert(UWeaponSlotBaseWidget_AmmoAndFringModeBackground_Offset == 0x550, "UWeaponSlotBaseWidget::AmmoAndFringModeBackground offset is not 550");
	auto constexpr UWeaponSlotBaseWidget_SlotBackgroundAlpha_Armed_Offset = offsetof(UWeaponSlotBaseWidget, SlotBackgroundAlpha_Armed);
	static_assert(UWeaponSlotBaseWidget_SlotBackgroundAlpha_Armed_Offset == 0x570, "UWeaponSlotBaseWidget::SlotBackgroundAlpha_Armed offset is not 570");
	auto constexpr UWeaponSlotBaseWidget_SlotBackgroundAlpha_Unarmed_Offset = offsetof(UWeaponSlotBaseWidget, SlotBackgroundAlpha_Unarmed);
	static_assert(UWeaponSlotBaseWidget_SlotBackgroundAlpha_Unarmed_Offset == 0x574, "UWeaponSlotBaseWidget::SlotBackgroundAlpha_Unarmed offset is not 574");
	auto constexpr UWeaponSlotBaseWidget_SlotBackgroundAlpha_Normal_Offset = offsetof(UWeaponSlotBaseWidget, SlotBackgroundAlpha_Normal);
	static_assert(UWeaponSlotBaseWidget_SlotBackgroundAlpha_Normal_Offset == 0x578, "UWeaponSlotBaseWidget::SlotBackgroundAlpha_Normal offset is not 578");
	auto constexpr UWeaponSlotBaseWidget_FadeInWeaponSlotAnimBinder_Offset = offsetof(UWeaponSlotBaseWidget, FadeInWeaponSlotAnimBinder);
	static_assert(UWeaponSlotBaseWidget_FadeInWeaponSlotAnimBinder_Offset == 0x580, "UWeaponSlotBaseWidget::FadeInWeaponSlotAnimBinder offset is not 580");
	auto constexpr UWeaponSlotBaseWidget_FadeOutWeaponSlotAnimBinder_Offset = offsetof(UWeaponSlotBaseWidget, FadeOutWeaponSlotAnimBinder);
	static_assert(UWeaponSlotBaseWidget_FadeOutWeaponSlotAnimBinder_Offset == 0x5a0, "UWeaponSlotBaseWidget::FadeOutWeaponSlotAnimBinder offset is not 5a0");
	auto constexpr UWeaponSlotBaseWidget_FadeInUnarmedWeaponSlotAminBinder_Offset = offsetof(UWeaponSlotBaseWidget, FadeInUnarmedWeaponSlotAminBinder);
	static_assert(UWeaponSlotBaseWidget_FadeInUnarmedWeaponSlotAminBinder_Offset == 0x5c0, "UWeaponSlotBaseWidget::FadeInUnarmedWeaponSlotAminBinder offset is not 5c0");
	auto constexpr UWeaponSlotBaseWidget_FadeOutUnarmedWeaponSlotAminBinder_Offset = offsetof(UWeaponSlotBaseWidget, FadeOutUnarmedWeaponSlotAminBinder);
	static_assert(UWeaponSlotBaseWidget_FadeOutUnarmedWeaponSlotAminBinder_Offset == 0x5e0, "UWeaponSlotBaseWidget::FadeOutUnarmedWeaponSlotAminBinder offset is not 5e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
