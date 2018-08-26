#pragma once
#include "UInventorySlotBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponEquipmentSlotWidget_Gamepad_ver2_C // Size: 0x4B4
	: public UInventorySlotBaseWidget_C // Size: 0x358
{
private:
	typedef UWeaponEquipmentSlotWidget_Gamepad_ver2_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67201); // id32("WidgetBlueprintGeneratedClass WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x358 Size: 0x8 - StructProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.UberGraphFrame */
	ExternalPtr<struct UHorizontalBox> AttachmentSlotHorizontalBox; /* Ofs: 0x360 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.AttachmentSlotHorizontalBox */
	ExternalPtr<struct UBorder> BackgroundSlot; /* Ofs: 0x368 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BackgroundSlot */
	ExternalPtr<struct UWeaponAttachmentSlotWidget_Gamepad_C> LowerRail; /* Ofs: 0x370 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.LowerRail */
	ExternalPtr<struct UWeaponAttachmentSlotWidget_Gamepad_C> Magazine; /* Ofs: 0x378 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Magazine */
	ExternalPtr<struct UWeaponAttachmentSlotWidget_Gamepad_C> Muzzle; /* Ofs: 0x380 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Muzzle */
	ExternalPtr<struct UCanvasPanel> SlotPanel; /* Ofs: 0x388 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SlotPanel */
	ExternalPtr<struct UWeaponAttachmentSlotWidget_Gamepad_C> Stock; /* Ofs: 0x390 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Stock */
	ExternalPtr<struct UWeaponAttachmentSlotWidget_Gamepad_C> UpperRail; /* Ofs: 0x398 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.UpperRail */
	ExternalPtr<struct UVerticalBox> Vertical; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Vertical */
	ExternalPtr<struct UWeaponBodySlotWidget_Gamepad_C> WeaponBody; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.WeaponBody */
	int32_t SlotIndex; /* Ofs: 0x3B0 Size: 0x4 - IntProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SlotIndex */
	uint8_t UnknownData3B4[0x4];
	FScriptMulticastDelegate OnReleased; /* Ofs: 0x3B8 Size: 0x10 - MulticastDelegateProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnReleased */
	float IconSize_1; /* Ofs: 0x3C8 Size: 0x4 - FloatProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IconSize_1 */
	uint8_t UnknownData3CC[0x4];
	ExternalPtr<struct UItemStudio> WeaponStudio; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.WeaponStudio */
	ExternalPtr<struct UTextureRenderTarget2D> RenderTargetTexture; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.RenderTargetTexture */
	ExternalPtr<struct UMaterialInstanceDynamic> WeaponCaptureMaterial; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.WeaponCaptureMaterial */
	FScriptMulticastDelegate OnDragEnterWeaponSlot; /* Ofs: 0x3E8 Size: 0x10 - MulticastDelegateProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragEnterWeaponSlot */
	FScriptMulticastDelegate OnDragLeaveWeaponSlot; /* Ofs: 0x3F8 Size: 0x10 - MulticastDelegateProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragLeaveWeaponSlot */
	ExternalPtr<struct UEquipableItem> EquipableItem; /* Ofs: 0x408 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.EquipableItem */
	ExternalPtr<struct UWeaponItem> WeaponItem; /* Ofs: 0x410 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.WeaponItem */
	ExternalPtr<struct UThrowableItem> ThrowableItem; /* Ofs: 0x418 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ThrowableItem */
	ExternalPtr<struct UTslWeapon_Gun> Weapon_Gun; /* Ofs: 0x420 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Weapon_Gun */
	ExternalPtr<struct UEquipableItem> DragDroppingEquipableItem; /* Ofs: 0x428 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.DragDroppingEquipableItem */
	ExternalPtr<struct UWeaponItem> DragDroppingWeaponItem; /* Ofs: 0x430 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.DragDroppingWeaponItem */
	ExternalPtr<struct UAttachableItem> DragDroppingAttachableItem; /* Ofs: 0x438 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.DragDroppingAttachableItem */
	TArray<ExternalPtr<struct UWeaponAttachmentSlotWidget_Gamepad_C>> AttachmentSlotList; /* Ofs: 0x440 Size: 0x10 - ArrayProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.AttachmentSlotList */
	ExternalPtr<struct UInventory> Inventory; /* Ofs: 0x450 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Inventory */
	ExternalPtr<struct UClass> ItemStudioClass; /* Ofs: 0x458 Size: 0x8 - ClassProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ItemStudioClass */
	uint8_t boolField460;
	uint8_t UnknownData461[0x7];
	ExternalPtr<struct UUserWidget> ChildFocusWidget; /* Ofs: 0x468 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ChildFocusWidget */
	float PressedBTime; /* Ofs: 0x470 Size: 0x4 - FloatProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedBTime */
	uint8_t boolField474;
	uint8_t UnknownData475[0x3];
	FScriptMulticastDelegate OnAttachmentFocused; /* Ofs: 0x478 Size: 0x10 - MulticastDelegateProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused */
	FScriptMulticastDelegate OnWeaponEquipmentFocused; /* Ofs: 0x488 Size: 0x10 - MulticastDelegateProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnWeaponEquipmentFocused */
	uint8_t boolField498;
	uint8_t UnknownData499[0x7];
	ExternalPtr<struct UInventoryWidget_Gamepad_C> SaveInventory_Gamepad; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SaveInventory_Gamepad */
	float DetachHoldStart; /* Ofs: 0x4A8 Size: 0x4 - FloatProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.DetachHoldStart */
	float DropHoldStart; /* Ofs: 0x4AC Size: 0x4 - FloatProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.DropHoldStart */
	float SwapHOldStart; /* Ofs: 0x4B0 Size: 0x4 - FloatProperty WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SwapHOldStart */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x358, value); }
	inline bool SetAttachmentSlotHorizontalBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x360, value); }
	inline bool SetBackgroundSlot(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x368, value); }
	inline bool SetLowerRail(t_structHelper inst, ExternalPtr<struct UWeaponAttachmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x370, value); }
	inline bool SetMagazine(t_structHelper inst, ExternalPtr<struct UWeaponAttachmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x378, value); }
	inline bool SetMuzzle(t_structHelper inst, ExternalPtr<struct UWeaponAttachmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x380, value); }
	inline bool SetSlotPanel(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x388, value); }
	inline bool SetStock(t_structHelper inst, ExternalPtr<struct UWeaponAttachmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x390, value); }
	inline bool SetUpperRail(t_structHelper inst, ExternalPtr<struct UWeaponAttachmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x398, value); }
	inline bool SetVertical(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetWeaponBody(t_structHelper inst, ExternalPtr<struct UWeaponBodySlotWidget_Gamepad_C> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetSlotIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetOnReleased(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetIconSize_1(t_structHelper inst, float value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetWeaponStudio(t_structHelper inst, ExternalPtr<struct UItemStudio> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetRenderTargetTexture(t_structHelper inst, ExternalPtr<struct UTextureRenderTarget2D> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetWeaponCaptureMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetOnDragEnterWeaponSlot(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetOnDragLeaveWeaponSlot(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0x408, value); }
	inline bool SetWeaponItem(t_structHelper inst, ExternalPtr<struct UWeaponItem> value) { inst.WriteOffset(0x410, value); }
	inline bool SetThrowableItem(t_structHelper inst, ExternalPtr<struct UThrowableItem> value) { inst.WriteOffset(0x418, value); }
	inline bool SetWeapon_Gun(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0x420, value); }
	inline bool SetDragDroppingEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0x428, value); }
	inline bool SetDragDroppingWeaponItem(t_structHelper inst, ExternalPtr<struct UWeaponItem> value) { inst.WriteOffset(0x430, value); }
	inline bool SetDragDroppingAttachableItem(t_structHelper inst, ExternalPtr<struct UAttachableItem> value) { inst.WriteOffset(0x438, value); }
	inline bool SetAttachmentSlotList(t_structHelper inst, TArray<ExternalPtr<struct UWeaponAttachmentSlotWidget_Gamepad_C>> value) { inst.WriteOffset(0x440, value); }
	inline bool SetInventory(t_structHelper inst, ExternalPtr<struct UInventory> value) { inst.WriteOffset(0x450, value); }
	inline bool SetItemStudioClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x458, value); }
	inline bool bWantFocus()
	{
		return boolField460& 0x1;
	}
	inline bool SetbWantFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x460, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetChildFocusWidget(t_structHelper inst, ExternalPtr<struct UUserWidget> value) { inst.WriteOffset(0x468, value); }
	inline bool SetPressedBTime(t_structHelper inst, float value) { inst.WriteOffset(0x470, value); }
	inline bool bPressedB()
	{
		return boolField474& 0x1;
	}
	inline bool SetbPressedB(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x474, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnAttachmentFocused(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x478, value); }
	inline bool SetOnWeaponEquipmentFocused(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x488, value); }
	inline bool bSubFocus()
	{
		return boolField498& 0x1;
	}
	inline bool SetbSubFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x498, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSaveInventory_Gamepad(t_structHelper inst, ExternalPtr<struct UInventoryWidget_Gamepad_C> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetDetachHoldStart(t_structHelper inst, float value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetDropHoldStart(t_structHelper inst, float value) { inst.WriteOffset(0x4AC, value); }
	inline bool SetSwapHOldStart(t_structHelper inst, float value) { inst.WriteOffset(0x4B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponEquipmentSlotWidget_Gamepad_ver2_C = sizeof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C); // 1204
    static_assert(sizeof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C) == 0x4B4, "Size of UWeaponEquipmentSlotWidget_Gamepad_ver2_C is not correct.");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_UberGraphFrame_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, UberGraphFrame);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_UberGraphFrame_Offset == 0x358, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::UberGraphFrame offset is not 358");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_AttachmentSlotHorizontalBox_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, AttachmentSlotHorizontalBox);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_AttachmentSlotHorizontalBox_Offset == 0x360, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::AttachmentSlotHorizontalBox offset is not 360");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BackgroundSlot_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, BackgroundSlot);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BackgroundSlot_Offset == 0x368, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::BackgroundSlot offset is not 368");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_LowerRail_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, LowerRail);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_LowerRail_Offset == 0x370, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::LowerRail offset is not 370");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Magazine_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, Magazine);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Magazine_Offset == 0x378, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::Magazine offset is not 378");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Muzzle_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, Muzzle);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Muzzle_Offset == 0x380, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::Muzzle offset is not 380");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SlotPanel_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, SlotPanel);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SlotPanel_Offset == 0x388, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::SlotPanel offset is not 388");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Stock_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, Stock);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Stock_Offset == 0x390, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::Stock offset is not 390");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_UpperRail_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, UpperRail);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_UpperRail_Offset == 0x398, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::UpperRail offset is not 398");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Vertical_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, Vertical);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Vertical_Offset == 0x3a0, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::Vertical offset is not 3a0");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_WeaponBody_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, WeaponBody);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_WeaponBody_Offset == 0x3a8, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::WeaponBody offset is not 3a8");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SlotIndex_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, SlotIndex);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SlotIndex_Offset == 0x3b0, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::SlotIndex offset is not 3b0");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnReleased_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, OnReleased);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnReleased_Offset == 0x3b8, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnReleased offset is not 3b8");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IconSize_1_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, IconSize_1);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IconSize_1_Offset == 0x3c8, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IconSize_1 offset is not 3c8");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_WeaponStudio_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, WeaponStudio);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_WeaponStudio_Offset == 0x3d0, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::WeaponStudio offset is not 3d0");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_RenderTargetTexture_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, RenderTargetTexture);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_RenderTargetTexture_Offset == 0x3d8, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::RenderTargetTexture offset is not 3d8");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_WeaponCaptureMaterial_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, WeaponCaptureMaterial);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_WeaponCaptureMaterial_Offset == 0x3e0, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::WeaponCaptureMaterial offset is not 3e0");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDragEnterWeaponSlot_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, OnDragEnterWeaponSlot);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDragEnterWeaponSlot_Offset == 0x3e8, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnDragEnterWeaponSlot offset is not 3e8");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDragLeaveWeaponSlot_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, OnDragLeaveWeaponSlot);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDragLeaveWeaponSlot_Offset == 0x3f8, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnDragLeaveWeaponSlot offset is not 3f8");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_EquipableItem_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, EquipableItem);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_EquipableItem_Offset == 0x408, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::EquipableItem offset is not 408");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_WeaponItem_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, WeaponItem);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_WeaponItem_Offset == 0x410, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::WeaponItem offset is not 410");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ThrowableItem_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, ThrowableItem);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ThrowableItem_Offset == 0x418, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ThrowableItem offset is not 418");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Weapon_Gun_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, Weapon_Gun);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Weapon_Gun_Offset == 0x420, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::Weapon_Gun offset is not 420");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DragDroppingEquipableItem_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, DragDroppingEquipableItem);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DragDroppingEquipableItem_Offset == 0x428, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::DragDroppingEquipableItem offset is not 428");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DragDroppingWeaponItem_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, DragDroppingWeaponItem);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DragDroppingWeaponItem_Offset == 0x430, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::DragDroppingWeaponItem offset is not 430");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DragDroppingAttachableItem_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, DragDroppingAttachableItem);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DragDroppingAttachableItem_Offset == 0x438, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::DragDroppingAttachableItem offset is not 438");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_AttachmentSlotList_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, AttachmentSlotList);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_AttachmentSlotList_Offset == 0x440, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::AttachmentSlotList offset is not 440");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Inventory_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, Inventory);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Inventory_Offset == 0x450, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::Inventory offset is not 450");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ItemStudioClass_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, ItemStudioClass);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ItemStudioClass_Offset == 0x458, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ItemStudioClass offset is not 458");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_boolField460_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, boolField460);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_boolField460_Offset == 0x460, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::boolField460 offset is not 460");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ChildFocusWidget_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, ChildFocusWidget);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ChildFocusWidget_Offset == 0x468, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ChildFocusWidget offset is not 468");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_PressedBTime_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, PressedBTime);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_PressedBTime_Offset == 0x470, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::PressedBTime offset is not 470");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_boolField474_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, boolField474);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_boolField474_Offset == 0x474, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::boolField474 offset is not 474");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnAttachmentFocused_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, OnAttachmentFocused);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnAttachmentFocused_Offset == 0x478, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnAttachmentFocused offset is not 478");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnWeaponEquipmentFocused_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, OnWeaponEquipmentFocused);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnWeaponEquipmentFocused_Offset == 0x488, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnWeaponEquipmentFocused offset is not 488");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_boolField498_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, boolField498);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_boolField498_Offset == 0x498, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::boolField498 offset is not 498");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SaveInventory_Gamepad_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, SaveInventory_Gamepad);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SaveInventory_Gamepad_Offset == 0x4a0, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::SaveInventory_Gamepad offset is not 4a0");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DetachHoldStart_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, DetachHoldStart);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DetachHoldStart_Offset == 0x4a8, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::DetachHoldStart offset is not 4a8");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DropHoldStart_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, DropHoldStart);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DropHoldStart_Offset == 0x4ac, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::DropHoldStart offset is not 4ac");
	auto constexpr UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SwapHOldStart_Offset = offsetof(UWeaponEquipmentSlotWidget_Gamepad_ver2_C, SwapHOldStart);
	static_assert(UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SwapHOldStart_Offset == 0x4b0, "UWeaponEquipmentSlotWidget_Gamepad_ver2_C::SwapHOldStart offset is not 4b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
