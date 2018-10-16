#pragma once
#include "UInventorySlotBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponBodySlotWidget_Gamepad_C // Size: 0x420
	: public UInventorySlotBaseWidget_C // Size: 0x358
{
private:
	typedef UWeaponBodySlotWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67290); // id32("WidgetBlueprintGeneratedClass WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x358 Size: 0x8 - StructProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UImage> AmmoIcon; /* Ofs: 0x360 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.AmmoIcon */
	ExternalPtr<struct UTextBlock> AmmoName; /* Ofs: 0x368 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.AmmoName */
	ExternalPtr<struct UHorizontalBox> AmmoTextHorizontalBox; /* Ofs: 0x370 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.AmmoTextHorizontalBox */
	ExternalPtr<struct UBorder> BackgroundBorder; /* Ofs: 0x378 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.BackgroundBorder */
	ExternalPtr<struct UCanvasPanel> CanvasPanel_3; /* Ofs: 0x380 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.CanvasPanel_3 */
	ExternalPtr<struct UImage> WeaponCaptureImage; /* Ofs: 0x388 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.WeaponCaptureImage */
	ExternalPtr<struct USizeBox> WeaponCaptureSizeBox; /* Ofs: 0x390 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.WeaponCaptureSizeBox */
	ExternalPtr<struct UTextBlock> WeaponHandsOnLoadedAmmoCount; /* Ofs: 0x398 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.WeaponHandsOnLoadedAmmoCount */
	ExternalPtr<struct UTextBlock> WeaponHandsOnUnloadedAmmoCount; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.WeaponHandsOnUnloadedAmmoCount */
	ExternalPtr<struct UTextBlock> WeaponName; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.WeaponName */
	ExternalPtr<struct UClass> ItemStudioClass; /* Ofs: 0x3B0 Size: 0x8 - ClassProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.ItemStudioClass */
	ExternalPtr<struct UItemStudio> WeaponStudio; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.WeaponStudio */
	ExternalPtr<struct UTextureRenderTarget2D> RenderTargetTexture; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.RenderTargetTexture */
	ExternalPtr<struct UEquipableItem> EquipableItem; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.EquipableItem */
	ExternalPtr<struct UWeaponItem> WeaponItem; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.WeaponItem */
	ExternalPtr<struct UThrowableItem> ThrowableItem; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.ThrowableItem */
	ExternalPtr<struct UTslWeapon_Gun> Weapon_Gun; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.Weapon_Gun */
	ExternalPtr<struct UMaterialInstanceDynamic> WeaponCaptureMaterial; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.WeaponCaptureMaterial */
	ExternalPtr<struct UMaterialInstanceDynamic> BgMID; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.BgMID */
	uint8_t boolField3F8;
	uint8_t UnknownData3F9[0x7];
	ExternalPtr<struct UInventoryWidget_Gamepad_C> SaveInventory_Gamepad; /* Ofs: 0x400 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.SaveInventory_Gamepad */
	uint8_t boolField408;
	uint8_t UnknownData409[0x7];
	ExternalPtr<struct UUserWidget> ChildFocusWidget; /* Ofs: 0x410 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.ChildFocusWidget */
	ExternalPtr<struct UInventory> InventoryCached; /* Ofs: 0x418 Size: 0x8 - ObjectProperty WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.InventoryCached */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x358, value); }
	inline bool SetAmmoIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x360, value); }
	inline bool SetAmmoName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x368, value); }
	inline bool SetAmmoTextHorizontalBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x370, value); }
	inline bool SetBackgroundBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x378, value); }
	inline bool SetCanvasPanel_3(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x380, value); }
	inline bool SetWeaponCaptureImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x388, value); }
	inline bool SetWeaponCaptureSizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x390, value); }
	inline bool SetWeaponHandsOnLoadedAmmoCount(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x398, value); }
	inline bool SetWeaponHandsOnUnloadedAmmoCount(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetWeaponName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetItemStudioClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetWeaponStudio(t_structHelper inst, ExternalPtr<struct UItemStudio> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetRenderTargetTexture(t_structHelper inst, ExternalPtr<struct UTextureRenderTarget2D> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetWeaponItem(t_structHelper inst, ExternalPtr<struct UWeaponItem> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetThrowableItem(t_structHelper inst, ExternalPtr<struct UThrowableItem> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetWeapon_Gun(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetWeaponCaptureMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetBgMID(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x3F0, value); }
	inline bool bSubFocus()
	{
		return boolField3F8& 0x1;
	}
	inline bool SetbSubFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSaveInventory_Gamepad(t_structHelper inst, ExternalPtr<struct UInventoryWidget_Gamepad_C> value) { inst.WriteOffset(0x400, value); }
	inline bool bWantFocus()
	{
		return boolField408& 0x1;
	}
	inline bool SetbWantFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x408, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetChildFocusWidget(t_structHelper inst, ExternalPtr<struct UUserWidget> value) { inst.WriteOffset(0x410, value); }
	inline bool SetInventoryCached(t_structHelper inst, ExternalPtr<struct UInventory> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponBodySlotWidget_Gamepad_C = sizeof(UWeaponBodySlotWidget_Gamepad_C); // 1056
    static_assert(sizeof(UWeaponBodySlotWidget_Gamepad_C) == 0x420, "Size of UWeaponBodySlotWidget_Gamepad_C is not correct.");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, UberGraphFrame);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_UberGraphFrame_Offset == 0x358, "UWeaponBodySlotWidget_Gamepad_C::UberGraphFrame offset is not 358");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_AmmoIcon_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, AmmoIcon);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_AmmoIcon_Offset == 0x360, "UWeaponBodySlotWidget_Gamepad_C::AmmoIcon offset is not 360");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_AmmoName_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, AmmoName);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_AmmoName_Offset == 0x368, "UWeaponBodySlotWidget_Gamepad_C::AmmoName offset is not 368");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_AmmoTextHorizontalBox_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, AmmoTextHorizontalBox);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_AmmoTextHorizontalBox_Offset == 0x370, "UWeaponBodySlotWidget_Gamepad_C::AmmoTextHorizontalBox offset is not 370");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_BackgroundBorder_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, BackgroundBorder);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_BackgroundBorder_Offset == 0x378, "UWeaponBodySlotWidget_Gamepad_C::BackgroundBorder offset is not 378");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_CanvasPanel_3_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, CanvasPanel_3);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_CanvasPanel_3_Offset == 0x380, "UWeaponBodySlotWidget_Gamepad_C::CanvasPanel_3 offset is not 380");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_WeaponCaptureImage_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, WeaponCaptureImage);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_WeaponCaptureImage_Offset == 0x388, "UWeaponBodySlotWidget_Gamepad_C::WeaponCaptureImage offset is not 388");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_WeaponCaptureSizeBox_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, WeaponCaptureSizeBox);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_WeaponCaptureSizeBox_Offset == 0x390, "UWeaponBodySlotWidget_Gamepad_C::WeaponCaptureSizeBox offset is not 390");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_WeaponHandsOnLoadedAmmoCount_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, WeaponHandsOnLoadedAmmoCount);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_WeaponHandsOnLoadedAmmoCount_Offset == 0x398, "UWeaponBodySlotWidget_Gamepad_C::WeaponHandsOnLoadedAmmoCount offset is not 398");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_WeaponHandsOnUnloadedAmmoCount_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, WeaponHandsOnUnloadedAmmoCount);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_WeaponHandsOnUnloadedAmmoCount_Offset == 0x3a0, "UWeaponBodySlotWidget_Gamepad_C::WeaponHandsOnUnloadedAmmoCount offset is not 3a0");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_WeaponName_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, WeaponName);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_WeaponName_Offset == 0x3a8, "UWeaponBodySlotWidget_Gamepad_C::WeaponName offset is not 3a8");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_ItemStudioClass_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, ItemStudioClass);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_ItemStudioClass_Offset == 0x3b0, "UWeaponBodySlotWidget_Gamepad_C::ItemStudioClass offset is not 3b0");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_WeaponStudio_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, WeaponStudio);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_WeaponStudio_Offset == 0x3b8, "UWeaponBodySlotWidget_Gamepad_C::WeaponStudio offset is not 3b8");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_RenderTargetTexture_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, RenderTargetTexture);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_RenderTargetTexture_Offset == 0x3c0, "UWeaponBodySlotWidget_Gamepad_C::RenderTargetTexture offset is not 3c0");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_EquipableItem_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, EquipableItem);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_EquipableItem_Offset == 0x3c8, "UWeaponBodySlotWidget_Gamepad_C::EquipableItem offset is not 3c8");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_WeaponItem_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, WeaponItem);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_WeaponItem_Offset == 0x3d0, "UWeaponBodySlotWidget_Gamepad_C::WeaponItem offset is not 3d0");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_ThrowableItem_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, ThrowableItem);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_ThrowableItem_Offset == 0x3d8, "UWeaponBodySlotWidget_Gamepad_C::ThrowableItem offset is not 3d8");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_Weapon_Gun_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, Weapon_Gun);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_Weapon_Gun_Offset == 0x3e0, "UWeaponBodySlotWidget_Gamepad_C::Weapon_Gun offset is not 3e0");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_WeaponCaptureMaterial_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, WeaponCaptureMaterial);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_WeaponCaptureMaterial_Offset == 0x3e8, "UWeaponBodySlotWidget_Gamepad_C::WeaponCaptureMaterial offset is not 3e8");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_BgMID_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, BgMID);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_BgMID_Offset == 0x3f0, "UWeaponBodySlotWidget_Gamepad_C::BgMID offset is not 3f0");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_boolField3F8_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, boolField3F8);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_boolField3F8_Offset == 0x3f8, "UWeaponBodySlotWidget_Gamepad_C::boolField3F8 offset is not 3f8");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_SaveInventory_Gamepad_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, SaveInventory_Gamepad);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_SaveInventory_Gamepad_Offset == 0x400, "UWeaponBodySlotWidget_Gamepad_C::SaveInventory_Gamepad offset is not 400");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_boolField408_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, boolField408);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_boolField408_Offset == 0x408, "UWeaponBodySlotWidget_Gamepad_C::boolField408 offset is not 408");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_ChildFocusWidget_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, ChildFocusWidget);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_ChildFocusWidget_Offset == 0x410, "UWeaponBodySlotWidget_Gamepad_C::ChildFocusWidget offset is not 410");
	auto constexpr UWeaponBodySlotWidget_Gamepad_C_InventoryCached_Offset = offsetof(UWeaponBodySlotWidget_Gamepad_C, InventoryCached);
	static_assert(UWeaponBodySlotWidget_Gamepad_C_InventoryCached_Offset == 0x418, "UWeaponBodySlotWidget_Gamepad_C::InventoryCached offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
