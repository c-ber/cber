#pragma once
#include "UInventorySlotBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "EWeaponAttachmentSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponAttachmentSlotWidget_Gamepad_C // Size: 0x3D8
	: public UInventorySlotBaseWidget_C // Size: 0x358
{
private:
	typedef UWeaponAttachmentSlotWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67398); // id32("WidgetBlueprintGeneratedClass WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x358 Size: 0x8 - StructProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UImage> AttachmentIcon; /* Ofs: 0x360 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.AttachmentIcon */
	ExternalPtr<struct UVerticalBox> AttachmentIconBlock; /* Ofs: 0x368 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.AttachmentIconBlock */
	ExternalPtr<struct UBorder> AttachmentSlotBackground; /* Ofs: 0x370 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.AttachmentSlotBackground */
	ExternalPtr<struct UCanvasPanel> CanvasPanel_1; /* Ofs: 0x378 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.CanvasPanel_1 */
	ExternalPtr<struct UVerticalBox> VerticalBox_3; /* Ofs: 0x380 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.VerticalBox_3 */
	float IconSize_1; /* Ofs: 0x388 Size: 0x4 - FloatProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IconSize_1 */
	uint8_t UnknownData38C[0x4];
	ExternalPtr<struct UWeaponItem> WeaponItem; /* Ofs: 0x390 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.WeaponItem */
	TEnumAsByte<enum EWeaponAttachmentSlotID> AttachmentSlotID; /* Ofs: 0x398 Size: 0x1 - EnumProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.AttachmentSlotID */
	uint8_t UnknownData399[0x7];
	ExternalPtr<struct UInventory> Inventory; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.Inventory */
	uint8_t boolField3A8;
	uint8_t UnknownData3A9[0x7];
	FScriptMulticastDelegate OnAttachmentFocused; /* Ofs: 0x3B0 Size: 0x10 - MulticastDelegateProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnAttachmentFocused */
	uint8_t boolField3C0;
	uint8_t UnknownData3C1[0x7];
	ExternalPtr<struct UInventoryWidget_Gamepad_C> SaveInventory_Gamepad; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.SaveInventory_Gamepad */
	ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C> OwnerWeaponEquipmentSlotWidget; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OwnerWeaponEquipmentSlotWidget */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x358, value); }
	inline bool SetAttachmentIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x360, value); }
	inline bool SetAttachmentIconBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x368, value); }
	inline bool SetAttachmentSlotBackground(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x370, value); }
	inline bool SetCanvasPanel_1(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x378, value); }
	inline bool SetVerticalBox_3(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x380, value); }
	inline bool SetIconSize_1(t_structHelper inst, float value) { inst.WriteOffset(0x388, value); }
	inline bool SetWeaponItem(t_structHelper inst, ExternalPtr<struct UWeaponItem> value) { inst.WriteOffset(0x390, value); }
	inline bool SetAttachmentSlotID(t_structHelper inst, TEnumAsByte<enum EWeaponAttachmentSlotID> value) { inst.WriteOffset(0x398, value); }
	inline bool SetInventory(t_structHelper inst, ExternalPtr<struct UInventory> value) { inst.WriteOffset(0x3A0, value); }
	inline bool bWantFocus()
	{
		return boolField3A8& 0x1;
	}
	inline bool SetbWantFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnAttachmentFocused(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3B0, value); }
	inline bool bSubFocus()
	{
		return boolField3C0& 0x1;
	}
	inline bool SetbSubFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3C0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSaveInventory_Gamepad(t_structHelper inst, ExternalPtr<struct UInventoryWidget_Gamepad_C> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetOwnerWeaponEquipmentSlotWidget(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C> value) { inst.WriteOffset(0x3D0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponAttachmentSlotWidget_Gamepad_C = sizeof(UWeaponAttachmentSlotWidget_Gamepad_C); // 984
    static_assert(sizeof(UWeaponAttachmentSlotWidget_Gamepad_C) == 0x3D8, "Size of UWeaponAttachmentSlotWidget_Gamepad_C is not correct.");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, UberGraphFrame);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_UberGraphFrame_Offset == 0x358, "UWeaponAttachmentSlotWidget_Gamepad_C::UberGraphFrame offset is not 358");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_AttachmentIcon_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, AttachmentIcon);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_AttachmentIcon_Offset == 0x360, "UWeaponAttachmentSlotWidget_Gamepad_C::AttachmentIcon offset is not 360");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_AttachmentIconBlock_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, AttachmentIconBlock);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_AttachmentIconBlock_Offset == 0x368, "UWeaponAttachmentSlotWidget_Gamepad_C::AttachmentIconBlock offset is not 368");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_AttachmentSlotBackground_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, AttachmentSlotBackground);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_AttachmentSlotBackground_Offset == 0x370, "UWeaponAttachmentSlotWidget_Gamepad_C::AttachmentSlotBackground offset is not 370");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_CanvasPanel_1_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, CanvasPanel_1);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_CanvasPanel_1_Offset == 0x378, "UWeaponAttachmentSlotWidget_Gamepad_C::CanvasPanel_1 offset is not 378");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_VerticalBox_3_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, VerticalBox_3);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_VerticalBox_3_Offset == 0x380, "UWeaponAttachmentSlotWidget_Gamepad_C::VerticalBox_3 offset is not 380");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_IconSize_1_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, IconSize_1);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_IconSize_1_Offset == 0x388, "UWeaponAttachmentSlotWidget_Gamepad_C::IconSize_1 offset is not 388");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_WeaponItem_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, WeaponItem);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_WeaponItem_Offset == 0x390, "UWeaponAttachmentSlotWidget_Gamepad_C::WeaponItem offset is not 390");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_AttachmentSlotID_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, AttachmentSlotID);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_AttachmentSlotID_Offset == 0x398, "UWeaponAttachmentSlotWidget_Gamepad_C::AttachmentSlotID offset is not 398");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_Inventory_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, Inventory);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_Inventory_Offset == 0x3a0, "UWeaponAttachmentSlotWidget_Gamepad_C::Inventory offset is not 3a0");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_boolField3A8_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, boolField3A8);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_boolField3A8_Offset == 0x3a8, "UWeaponAttachmentSlotWidget_Gamepad_C::boolField3A8 offset is not 3a8");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_OnAttachmentFocused_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, OnAttachmentFocused);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_OnAttachmentFocused_Offset == 0x3b0, "UWeaponAttachmentSlotWidget_Gamepad_C::OnAttachmentFocused offset is not 3b0");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_boolField3C0_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, boolField3C0);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_boolField3C0_Offset == 0x3c0, "UWeaponAttachmentSlotWidget_Gamepad_C::boolField3C0 offset is not 3c0");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_SaveInventory_Gamepad_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, SaveInventory_Gamepad);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_SaveInventory_Gamepad_Offset == 0x3c8, "UWeaponAttachmentSlotWidget_Gamepad_C::SaveInventory_Gamepad offset is not 3c8");
	auto constexpr UWeaponAttachmentSlotWidget_Gamepad_C_OwnerWeaponEquipmentSlotWidget_Offset = offsetof(UWeaponAttachmentSlotWidget_Gamepad_C, OwnerWeaponEquipmentSlotWidget);
	static_assert(UWeaponAttachmentSlotWidget_Gamepad_C_OwnerWeaponEquipmentSlotWidget_Offset == 0x3d0, "UWeaponAttachmentSlotWidget_Gamepad_C::OwnerWeaponEquipmentSlotWidget offset is not 3d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
