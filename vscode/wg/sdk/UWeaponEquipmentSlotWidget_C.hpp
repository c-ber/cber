#pragma once
#include "UInventorySlotBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponEquipmentSlotWidget_C // Size: 0x4E5
	: public UInventorySlotBaseWidget_C // Size: 0x358
{
private:
	typedef UWeaponEquipmentSlotWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(66673); // id32("WidgetBlueprintGeneratedClass WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x358 Size: 0x8 - StructProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.UberGraphFrame */
	ExternalPtr<struct UImage> AmmoIcon; /* Ofs: 0x360 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.AmmoIcon */
	ExternalPtr<struct UTextBlock> AmmoName; /* Ofs: 0x368 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.AmmoName */
	ExternalPtr<struct UBorder> BackgroundSlot; /* Ofs: 0x370 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BackgroundSlot */
	ExternalPtr<struct UBorder> FocusColorBG; /* Ofs: 0x378 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.FocusColorBG */
	ExternalPtr<struct UHorizontalBox> HorizontalBox_1; /* Ofs: 0x380 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.HorizontalBox_1 */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x388 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Image_1 */
	ExternalPtr<struct UTextBlock> KeyName; /* Ofs: 0x390 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.KeyName */
	ExternalPtr<struct UWeaponAttachmentSlotWidget_C> LowerRail; /* Ofs: 0x398 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.LowerRail */
	ExternalPtr<struct UWeaponAttachmentSlotWidget_C> Magazine; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Magazine */
	ExternalPtr<struct UWeaponAttachmentSlotWidget_C> Muzzle; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Muzzle */
	ExternalPtr<struct UCanvasPanel> SlotPanel; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.SlotPanel */
	ExternalPtr<struct UWeaponAttachmentSlotWidget_C> Stock; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Stock */
	ExternalPtr<struct UWeaponAttachmentSlotWidget_C> UpperRail; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.UpperRail */
	ExternalPtr<struct UVerticalBox> Vertical; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Vertical */
	ExternalPtr<struct UImage> WeaponCaptureImage; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.WeaponCaptureImage */
	ExternalPtr<struct UTextBlock> WeaponHandsOnLoadedAmmoCount; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.WeaponHandsOnLoadedAmmoCount */
	ExternalPtr<struct UTextBlock> WeaponHandsOnUnloadedAmmoCount; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.WeaponHandsOnUnloadedAmmoCount */
	ExternalPtr<struct UImage> WeaponIconImage; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.WeaponIconImage */
	ExternalPtr<struct UTextBlock> WeaponName; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.WeaponName */
	ExternalPtr<struct UWidgetSwitcher> WidgetSwitcher_1; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.WidgetSwitcher_1 */
	int32_t SlotIndex; /* Ofs: 0x400 Size: 0x4 - IntProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.SlotIndex */
	uint8_t UnknownData404[0x4];
	FScriptMulticastDelegate OnReleased; /* Ofs: 0x408 Size: 0x10 - MulticastDelegateProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnReleased */
	float IconSize_1; /* Ofs: 0x418 Size: 0x4 - FloatProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IconSize_1 */
	uint8_t UnknownData41C[0x4];
	ExternalPtr<struct UItemStudio> WeaponStudio; /* Ofs: 0x420 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.WeaponStudio */
	ExternalPtr<struct UTextureRenderTarget2D> RenderTargetTexture; /* Ofs: 0x428 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.RenderTargetTexture */
	ExternalPtr<struct UMaterialInstanceDynamic> WeaponCaptureMaterial; /* Ofs: 0x430 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.WeaponCaptureMaterial */
	FScriptMulticastDelegate OnDragEnterWeaponSlot; /* Ofs: 0x438 Size: 0x10 - MulticastDelegateProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragEnterWeaponSlot */
	FScriptMulticastDelegate OnDragLeaveWeaponSlot; /* Ofs: 0x448 Size: 0x10 - MulticastDelegateProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragLeaveWeaponSlot */
	ExternalPtr<struct UEquipment> Equipment_1; /* Ofs: 0x458 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Equipment_1 */
	ExternalPtr<struct UEquipableItem> EquipableItem; /* Ofs: 0x460 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.EquipableItem */
	ExternalPtr<struct UWeaponItem> WeaponItem; /* Ofs: 0x468 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.WeaponItem */
	ExternalPtr<struct UThrowableItem> ThrowableItem; /* Ofs: 0x470 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.ThrowableItem */
	ExternalPtr<struct UTslWeapon> ShooterWeapon; /* Ofs: 0x478 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.ShooterWeapon */
	ExternalPtr<struct UTslWeapon_Gun> Weapon_Gun; /* Ofs: 0x480 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Weapon_Gun */
	ExternalPtr<struct UTslWeapon> Weapon_Melee; /* Ofs: 0x488 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Weapon_Melee */
	ExternalPtr<struct UTslWeapon> Weapon_Throwable; /* Ofs: 0x490 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Weapon_Throwable */
	ExternalPtr<struct UEquipableItem> DragDroppingEquipableItem; /* Ofs: 0x498 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.DragDroppingEquipableItem */
	ExternalPtr<struct UWeaponItem> DragDroppingWeaponItem; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.DragDroppingWeaponItem */
	ExternalPtr<struct UAttachableItem> DragDroppingAttachableItem; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.DragDroppingAttachableItem */
	TArray<ExternalPtr<struct UWeaponAttachmentSlotWidget_C>> AttachmentSlotList; /* Ofs: 0x4B0 Size: 0x10 - ArrayProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.AttachmentSlotList */
	ExternalPtr<struct UInventory> Inventory; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Inventory */
	ExternalPtr<struct UClass> ItemStudioClass; /* Ofs: 0x4C8 Size: 0x8 - ClassProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.ItemStudioClass */
	uint8_t boolField4D0;
	uint8_t UnknownData4D1[0x7];
	ExternalPtr<struct UUserWidget> ChildFocusWidget; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.ChildFocusWidget */
	float PressedBTime; /* Ofs: 0x4E0 Size: 0x4 - FloatProperty WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.PressedBTime */
	uint8_t boolField4E4;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x358, value); }
	inline bool SetAmmoIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x360, value); }
	inline bool SetAmmoName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x368, value); }
	inline bool SetBackgroundSlot(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x370, value); }
	inline bool SetFocusColorBG(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x378, value); }
	inline bool SetHorizontalBox_1(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x380, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x388, value); }
	inline bool SetKeyName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x390, value); }
	inline bool SetLowerRail(t_structHelper inst, ExternalPtr<struct UWeaponAttachmentSlotWidget_C> value) { inst.WriteOffset(0x398, value); }
	inline bool SetMagazine(t_structHelper inst, ExternalPtr<struct UWeaponAttachmentSlotWidget_C> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetMuzzle(t_structHelper inst, ExternalPtr<struct UWeaponAttachmentSlotWidget_C> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetSlotPanel(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetStock(t_structHelper inst, ExternalPtr<struct UWeaponAttachmentSlotWidget_C> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetUpperRail(t_structHelper inst, ExternalPtr<struct UWeaponAttachmentSlotWidget_C> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetVertical(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetWeaponCaptureImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetWeaponHandsOnLoadedAmmoCount(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetWeaponHandsOnUnloadedAmmoCount(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetWeaponIconImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetWeaponName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetWidgetSwitcher_1(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetSlotIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x400, value); }
	inline bool SetOnReleased(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x408, value); }
	inline bool SetIconSize_1(t_structHelper inst, float value) { inst.WriteOffset(0x418, value); }
	inline bool SetWeaponStudio(t_structHelper inst, ExternalPtr<struct UItemStudio> value) { inst.WriteOffset(0x420, value); }
	inline bool SetRenderTargetTexture(t_structHelper inst, ExternalPtr<struct UTextureRenderTarget2D> value) { inst.WriteOffset(0x428, value); }
	inline bool SetWeaponCaptureMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x430, value); }
	inline bool SetOnDragEnterWeaponSlot(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x438, value); }
	inline bool SetOnDragLeaveWeaponSlot(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x448, value); }
	inline bool SetEquipment_1(t_structHelper inst, ExternalPtr<struct UEquipment> value) { inst.WriteOffset(0x458, value); }
	inline bool SetEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0x460, value); }
	inline bool SetWeaponItem(t_structHelper inst, ExternalPtr<struct UWeaponItem> value) { inst.WriteOffset(0x468, value); }
	inline bool SetThrowableItem(t_structHelper inst, ExternalPtr<struct UThrowableItem> value) { inst.WriteOffset(0x470, value); }
	inline bool SetShooterWeapon(t_structHelper inst, ExternalPtr<struct UTslWeapon> value) { inst.WriteOffset(0x478, value); }
	inline bool SetWeapon_Gun(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0x480, value); }
	inline bool SetWeapon_Melee(t_structHelper inst, ExternalPtr<struct UTslWeapon> value) { inst.WriteOffset(0x488, value); }
	inline bool SetWeapon_Throwable(t_structHelper inst, ExternalPtr<struct UTslWeapon> value) { inst.WriteOffset(0x490, value); }
	inline bool SetDragDroppingEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0x498, value); }
	inline bool SetDragDroppingWeaponItem(t_structHelper inst, ExternalPtr<struct UWeaponItem> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetDragDroppingAttachableItem(t_structHelper inst, ExternalPtr<struct UAttachableItem> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAttachmentSlotList(t_structHelper inst, TArray<ExternalPtr<struct UWeaponAttachmentSlotWidget_C>> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetInventory(t_structHelper inst, ExternalPtr<struct UInventory> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetItemStudioClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4C8, value); }
	inline bool bWantFocus()
	{
		return boolField4D0& 0x1;
	}
	inline bool SetbWantFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetChildFocusWidget(t_structHelper inst, ExternalPtr<struct UUserWidget> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetPressedBTime(t_structHelper inst, float value) { inst.WriteOffset(0x4E0, value); }
	inline bool bPressedB()
	{
		return boolField4E4& 0x1;
	}
	inline bool SetbPressedB(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4E4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponEquipmentSlotWidget_C = sizeof(UWeaponEquipmentSlotWidget_C); // 1253
    static_assert(sizeof(UWeaponEquipmentSlotWidget_C) == 0x4E5, "Size of UWeaponEquipmentSlotWidget_C is not correct.");
	auto constexpr UWeaponEquipmentSlotWidget_C_UberGraphFrame_Offset = offsetof(UWeaponEquipmentSlotWidget_C, UberGraphFrame);
	static_assert(UWeaponEquipmentSlotWidget_C_UberGraphFrame_Offset == 0x358, "UWeaponEquipmentSlotWidget_C::UberGraphFrame offset is not 358");
	auto constexpr UWeaponEquipmentSlotWidget_C_AmmoIcon_Offset = offsetof(UWeaponEquipmentSlotWidget_C, AmmoIcon);
	static_assert(UWeaponEquipmentSlotWidget_C_AmmoIcon_Offset == 0x360, "UWeaponEquipmentSlotWidget_C::AmmoIcon offset is not 360");
	auto constexpr UWeaponEquipmentSlotWidget_C_AmmoName_Offset = offsetof(UWeaponEquipmentSlotWidget_C, AmmoName);
	static_assert(UWeaponEquipmentSlotWidget_C_AmmoName_Offset == 0x368, "UWeaponEquipmentSlotWidget_C::AmmoName offset is not 368");
	auto constexpr UWeaponEquipmentSlotWidget_C_BackgroundSlot_Offset = offsetof(UWeaponEquipmentSlotWidget_C, BackgroundSlot);
	static_assert(UWeaponEquipmentSlotWidget_C_BackgroundSlot_Offset == 0x370, "UWeaponEquipmentSlotWidget_C::BackgroundSlot offset is not 370");
	auto constexpr UWeaponEquipmentSlotWidget_C_FocusColorBG_Offset = offsetof(UWeaponEquipmentSlotWidget_C, FocusColorBG);
	static_assert(UWeaponEquipmentSlotWidget_C_FocusColorBG_Offset == 0x378, "UWeaponEquipmentSlotWidget_C::FocusColorBG offset is not 378");
	auto constexpr UWeaponEquipmentSlotWidget_C_HorizontalBox_1_Offset = offsetof(UWeaponEquipmentSlotWidget_C, HorizontalBox_1);
	static_assert(UWeaponEquipmentSlotWidget_C_HorizontalBox_1_Offset == 0x380, "UWeaponEquipmentSlotWidget_C::HorizontalBox_1 offset is not 380");
	auto constexpr UWeaponEquipmentSlotWidget_C_Image_1_Offset = offsetof(UWeaponEquipmentSlotWidget_C, Image_1);
	static_assert(UWeaponEquipmentSlotWidget_C_Image_1_Offset == 0x388, "UWeaponEquipmentSlotWidget_C::Image_1 offset is not 388");
	auto constexpr UWeaponEquipmentSlotWidget_C_KeyName_Offset = offsetof(UWeaponEquipmentSlotWidget_C, KeyName);
	static_assert(UWeaponEquipmentSlotWidget_C_KeyName_Offset == 0x390, "UWeaponEquipmentSlotWidget_C::KeyName offset is not 390");
	auto constexpr UWeaponEquipmentSlotWidget_C_LowerRail_Offset = offsetof(UWeaponEquipmentSlotWidget_C, LowerRail);
	static_assert(UWeaponEquipmentSlotWidget_C_LowerRail_Offset == 0x398, "UWeaponEquipmentSlotWidget_C::LowerRail offset is not 398");
	auto constexpr UWeaponEquipmentSlotWidget_C_Magazine_Offset = offsetof(UWeaponEquipmentSlotWidget_C, Magazine);
	static_assert(UWeaponEquipmentSlotWidget_C_Magazine_Offset == 0x3a0, "UWeaponEquipmentSlotWidget_C::Magazine offset is not 3a0");
	auto constexpr UWeaponEquipmentSlotWidget_C_Muzzle_Offset = offsetof(UWeaponEquipmentSlotWidget_C, Muzzle);
	static_assert(UWeaponEquipmentSlotWidget_C_Muzzle_Offset == 0x3a8, "UWeaponEquipmentSlotWidget_C::Muzzle offset is not 3a8");
	auto constexpr UWeaponEquipmentSlotWidget_C_SlotPanel_Offset = offsetof(UWeaponEquipmentSlotWidget_C, SlotPanel);
	static_assert(UWeaponEquipmentSlotWidget_C_SlotPanel_Offset == 0x3b0, "UWeaponEquipmentSlotWidget_C::SlotPanel offset is not 3b0");
	auto constexpr UWeaponEquipmentSlotWidget_C_Stock_Offset = offsetof(UWeaponEquipmentSlotWidget_C, Stock);
	static_assert(UWeaponEquipmentSlotWidget_C_Stock_Offset == 0x3b8, "UWeaponEquipmentSlotWidget_C::Stock offset is not 3b8");
	auto constexpr UWeaponEquipmentSlotWidget_C_UpperRail_Offset = offsetof(UWeaponEquipmentSlotWidget_C, UpperRail);
	static_assert(UWeaponEquipmentSlotWidget_C_UpperRail_Offset == 0x3c0, "UWeaponEquipmentSlotWidget_C::UpperRail offset is not 3c0");
	auto constexpr UWeaponEquipmentSlotWidget_C_Vertical_Offset = offsetof(UWeaponEquipmentSlotWidget_C, Vertical);
	static_assert(UWeaponEquipmentSlotWidget_C_Vertical_Offset == 0x3c8, "UWeaponEquipmentSlotWidget_C::Vertical offset is not 3c8");
	auto constexpr UWeaponEquipmentSlotWidget_C_WeaponCaptureImage_Offset = offsetof(UWeaponEquipmentSlotWidget_C, WeaponCaptureImage);
	static_assert(UWeaponEquipmentSlotWidget_C_WeaponCaptureImage_Offset == 0x3d0, "UWeaponEquipmentSlotWidget_C::WeaponCaptureImage offset is not 3d0");
	auto constexpr UWeaponEquipmentSlotWidget_C_WeaponHandsOnLoadedAmmoCount_Offset = offsetof(UWeaponEquipmentSlotWidget_C, WeaponHandsOnLoadedAmmoCount);
	static_assert(UWeaponEquipmentSlotWidget_C_WeaponHandsOnLoadedAmmoCount_Offset == 0x3d8, "UWeaponEquipmentSlotWidget_C::WeaponHandsOnLoadedAmmoCount offset is not 3d8");
	auto constexpr UWeaponEquipmentSlotWidget_C_WeaponHandsOnUnloadedAmmoCount_Offset = offsetof(UWeaponEquipmentSlotWidget_C, WeaponHandsOnUnloadedAmmoCount);
	static_assert(UWeaponEquipmentSlotWidget_C_WeaponHandsOnUnloadedAmmoCount_Offset == 0x3e0, "UWeaponEquipmentSlotWidget_C::WeaponHandsOnUnloadedAmmoCount offset is not 3e0");
	auto constexpr UWeaponEquipmentSlotWidget_C_WeaponIconImage_Offset = offsetof(UWeaponEquipmentSlotWidget_C, WeaponIconImage);
	static_assert(UWeaponEquipmentSlotWidget_C_WeaponIconImage_Offset == 0x3e8, "UWeaponEquipmentSlotWidget_C::WeaponIconImage offset is not 3e8");
	auto constexpr UWeaponEquipmentSlotWidget_C_WeaponName_Offset = offsetof(UWeaponEquipmentSlotWidget_C, WeaponName);
	static_assert(UWeaponEquipmentSlotWidget_C_WeaponName_Offset == 0x3f0, "UWeaponEquipmentSlotWidget_C::WeaponName offset is not 3f0");
	auto constexpr UWeaponEquipmentSlotWidget_C_WidgetSwitcher_1_Offset = offsetof(UWeaponEquipmentSlotWidget_C, WidgetSwitcher_1);
	static_assert(UWeaponEquipmentSlotWidget_C_WidgetSwitcher_1_Offset == 0x3f8, "UWeaponEquipmentSlotWidget_C::WidgetSwitcher_1 offset is not 3f8");
	auto constexpr UWeaponEquipmentSlotWidget_C_SlotIndex_Offset = offsetof(UWeaponEquipmentSlotWidget_C, SlotIndex);
	static_assert(UWeaponEquipmentSlotWidget_C_SlotIndex_Offset == 0x400, "UWeaponEquipmentSlotWidget_C::SlotIndex offset is not 400");
	auto constexpr UWeaponEquipmentSlotWidget_C_OnReleased_Offset = offsetof(UWeaponEquipmentSlotWidget_C, OnReleased);
	static_assert(UWeaponEquipmentSlotWidget_C_OnReleased_Offset == 0x408, "UWeaponEquipmentSlotWidget_C::OnReleased offset is not 408");
	auto constexpr UWeaponEquipmentSlotWidget_C_IconSize_1_Offset = offsetof(UWeaponEquipmentSlotWidget_C, IconSize_1);
	static_assert(UWeaponEquipmentSlotWidget_C_IconSize_1_Offset == 0x418, "UWeaponEquipmentSlotWidget_C::IconSize_1 offset is not 418");
	auto constexpr UWeaponEquipmentSlotWidget_C_WeaponStudio_Offset = offsetof(UWeaponEquipmentSlotWidget_C, WeaponStudio);
	static_assert(UWeaponEquipmentSlotWidget_C_WeaponStudio_Offset == 0x420, "UWeaponEquipmentSlotWidget_C::WeaponStudio offset is not 420");
	auto constexpr UWeaponEquipmentSlotWidget_C_RenderTargetTexture_Offset = offsetof(UWeaponEquipmentSlotWidget_C, RenderTargetTexture);
	static_assert(UWeaponEquipmentSlotWidget_C_RenderTargetTexture_Offset == 0x428, "UWeaponEquipmentSlotWidget_C::RenderTargetTexture offset is not 428");
	auto constexpr UWeaponEquipmentSlotWidget_C_WeaponCaptureMaterial_Offset = offsetof(UWeaponEquipmentSlotWidget_C, WeaponCaptureMaterial);
	static_assert(UWeaponEquipmentSlotWidget_C_WeaponCaptureMaterial_Offset == 0x430, "UWeaponEquipmentSlotWidget_C::WeaponCaptureMaterial offset is not 430");
	auto constexpr UWeaponEquipmentSlotWidget_C_OnDragEnterWeaponSlot_Offset = offsetof(UWeaponEquipmentSlotWidget_C, OnDragEnterWeaponSlot);
	static_assert(UWeaponEquipmentSlotWidget_C_OnDragEnterWeaponSlot_Offset == 0x438, "UWeaponEquipmentSlotWidget_C::OnDragEnterWeaponSlot offset is not 438");
	auto constexpr UWeaponEquipmentSlotWidget_C_OnDragLeaveWeaponSlot_Offset = offsetof(UWeaponEquipmentSlotWidget_C, OnDragLeaveWeaponSlot);
	static_assert(UWeaponEquipmentSlotWidget_C_OnDragLeaveWeaponSlot_Offset == 0x448, "UWeaponEquipmentSlotWidget_C::OnDragLeaveWeaponSlot offset is not 448");
	auto constexpr UWeaponEquipmentSlotWidget_C_Equipment_1_Offset = offsetof(UWeaponEquipmentSlotWidget_C, Equipment_1);
	static_assert(UWeaponEquipmentSlotWidget_C_Equipment_1_Offset == 0x458, "UWeaponEquipmentSlotWidget_C::Equipment_1 offset is not 458");
	auto constexpr UWeaponEquipmentSlotWidget_C_EquipableItem_Offset = offsetof(UWeaponEquipmentSlotWidget_C, EquipableItem);
	static_assert(UWeaponEquipmentSlotWidget_C_EquipableItem_Offset == 0x460, "UWeaponEquipmentSlotWidget_C::EquipableItem offset is not 460");
	auto constexpr UWeaponEquipmentSlotWidget_C_WeaponItem_Offset = offsetof(UWeaponEquipmentSlotWidget_C, WeaponItem);
	static_assert(UWeaponEquipmentSlotWidget_C_WeaponItem_Offset == 0x468, "UWeaponEquipmentSlotWidget_C::WeaponItem offset is not 468");
	auto constexpr UWeaponEquipmentSlotWidget_C_ThrowableItem_Offset = offsetof(UWeaponEquipmentSlotWidget_C, ThrowableItem);
	static_assert(UWeaponEquipmentSlotWidget_C_ThrowableItem_Offset == 0x470, "UWeaponEquipmentSlotWidget_C::ThrowableItem offset is not 470");
	auto constexpr UWeaponEquipmentSlotWidget_C_ShooterWeapon_Offset = offsetof(UWeaponEquipmentSlotWidget_C, ShooterWeapon);
	static_assert(UWeaponEquipmentSlotWidget_C_ShooterWeapon_Offset == 0x478, "UWeaponEquipmentSlotWidget_C::ShooterWeapon offset is not 478");
	auto constexpr UWeaponEquipmentSlotWidget_C_Weapon_Gun_Offset = offsetof(UWeaponEquipmentSlotWidget_C, Weapon_Gun);
	static_assert(UWeaponEquipmentSlotWidget_C_Weapon_Gun_Offset == 0x480, "UWeaponEquipmentSlotWidget_C::Weapon_Gun offset is not 480");
	auto constexpr UWeaponEquipmentSlotWidget_C_Weapon_Melee_Offset = offsetof(UWeaponEquipmentSlotWidget_C, Weapon_Melee);
	static_assert(UWeaponEquipmentSlotWidget_C_Weapon_Melee_Offset == 0x488, "UWeaponEquipmentSlotWidget_C::Weapon_Melee offset is not 488");
	auto constexpr UWeaponEquipmentSlotWidget_C_Weapon_Throwable_Offset = offsetof(UWeaponEquipmentSlotWidget_C, Weapon_Throwable);
	static_assert(UWeaponEquipmentSlotWidget_C_Weapon_Throwable_Offset == 0x490, "UWeaponEquipmentSlotWidget_C::Weapon_Throwable offset is not 490");
	auto constexpr UWeaponEquipmentSlotWidget_C_DragDroppingEquipableItem_Offset = offsetof(UWeaponEquipmentSlotWidget_C, DragDroppingEquipableItem);
	static_assert(UWeaponEquipmentSlotWidget_C_DragDroppingEquipableItem_Offset == 0x498, "UWeaponEquipmentSlotWidget_C::DragDroppingEquipableItem offset is not 498");
	auto constexpr UWeaponEquipmentSlotWidget_C_DragDroppingWeaponItem_Offset = offsetof(UWeaponEquipmentSlotWidget_C, DragDroppingWeaponItem);
	static_assert(UWeaponEquipmentSlotWidget_C_DragDroppingWeaponItem_Offset == 0x4a0, "UWeaponEquipmentSlotWidget_C::DragDroppingWeaponItem offset is not 4a0");
	auto constexpr UWeaponEquipmentSlotWidget_C_DragDroppingAttachableItem_Offset = offsetof(UWeaponEquipmentSlotWidget_C, DragDroppingAttachableItem);
	static_assert(UWeaponEquipmentSlotWidget_C_DragDroppingAttachableItem_Offset == 0x4a8, "UWeaponEquipmentSlotWidget_C::DragDroppingAttachableItem offset is not 4a8");
	auto constexpr UWeaponEquipmentSlotWidget_C_AttachmentSlotList_Offset = offsetof(UWeaponEquipmentSlotWidget_C, AttachmentSlotList);
	static_assert(UWeaponEquipmentSlotWidget_C_AttachmentSlotList_Offset == 0x4b0, "UWeaponEquipmentSlotWidget_C::AttachmentSlotList offset is not 4b0");
	auto constexpr UWeaponEquipmentSlotWidget_C_Inventory_Offset = offsetof(UWeaponEquipmentSlotWidget_C, Inventory);
	static_assert(UWeaponEquipmentSlotWidget_C_Inventory_Offset == 0x4c0, "UWeaponEquipmentSlotWidget_C::Inventory offset is not 4c0");
	auto constexpr UWeaponEquipmentSlotWidget_C_ItemStudioClass_Offset = offsetof(UWeaponEquipmentSlotWidget_C, ItemStudioClass);
	static_assert(UWeaponEquipmentSlotWidget_C_ItemStudioClass_Offset == 0x4c8, "UWeaponEquipmentSlotWidget_C::ItemStudioClass offset is not 4c8");
	auto constexpr UWeaponEquipmentSlotWidget_C_boolField4D0_Offset = offsetof(UWeaponEquipmentSlotWidget_C, boolField4D0);
	static_assert(UWeaponEquipmentSlotWidget_C_boolField4D0_Offset == 0x4d0, "UWeaponEquipmentSlotWidget_C::boolField4D0 offset is not 4d0");
	auto constexpr UWeaponEquipmentSlotWidget_C_ChildFocusWidget_Offset = offsetof(UWeaponEquipmentSlotWidget_C, ChildFocusWidget);
	static_assert(UWeaponEquipmentSlotWidget_C_ChildFocusWidget_Offset == 0x4d8, "UWeaponEquipmentSlotWidget_C::ChildFocusWidget offset is not 4d8");
	auto constexpr UWeaponEquipmentSlotWidget_C_PressedBTime_Offset = offsetof(UWeaponEquipmentSlotWidget_C, PressedBTime);
	static_assert(UWeaponEquipmentSlotWidget_C_PressedBTime_Offset == 0x4e0, "UWeaponEquipmentSlotWidget_C::PressedBTime offset is not 4e0");
	auto constexpr UWeaponEquipmentSlotWidget_C_boolField4E4_Offset = offsetof(UWeaponEquipmentSlotWidget_C, boolField4E4);
	static_assert(UWeaponEquipmentSlotWidget_C_boolField4E4_Offset == 0x4e4, "UWeaponEquipmentSlotWidget_C::boolField4E4 offset is not 4e4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
