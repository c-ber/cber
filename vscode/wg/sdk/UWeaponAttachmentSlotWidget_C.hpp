#pragma once
#include "UInventorySlotBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "EWeaponAttachmentSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponAttachmentSlotWidget_C // Size: 0x3BB
	: public UInventorySlotBaseWidget_C // Size: 0x358
{
private:
	typedef UWeaponAttachmentSlotWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(66970); // id32("WidgetBlueprintGeneratedClass WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x358 Size: 0x8 - StructProperty WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.UberGraphFrame */
	ExternalPtr<struct UImage> AttachmentIcon; /* Ofs: 0x360 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.AttachmentIcon */
	ExternalPtr<struct UVerticalBox> AttachmentIconBlock; /* Ofs: 0x368 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.AttachmentIconBlock */
	ExternalPtr<struct UBorder> AttachmentSlotBackground; /* Ofs: 0x370 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.AttachmentSlotBackground */
	ExternalPtr<struct UCanvasPanel> CanvasPanel_1; /* Ofs: 0x378 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.CanvasPanel_1 */
	ExternalPtr<struct UVerticalBox> VerticalBox_3; /* Ofs: 0x380 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.VerticalBox_3 */
	float IconSize_1; /* Ofs: 0x388 Size: 0x4 - FloatProperty WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.IconSize_1 */
	uint8_t UnknownData38C[0x4];
	ExternalPtr<struct UWeaponItem> WeaponItem; /* Ofs: 0x390 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.WeaponItem */
	TEnumAsByte<enum EWeaponAttachmentSlotID> AttachmentSlotID; /* Ofs: 0x398 Size: 0x1 - EnumProperty WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.AttachmentSlotID */
	uint8_t UnknownData399[0x7];
	ExternalPtr<struct UAttachableItem> DragDroppingAttachableItem; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.DragDroppingAttachableItem */
	ExternalPtr<struct UMaterialInstanceDynamic> SlotBackgroundMaterial; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.SlotBackgroundMaterial */
	ExternalPtr<struct UInventory> Inventory; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty WeaponAttachmentSlotWidget.WeaponAttachmentSlotWidget_C.Inventory */
	uint8_t boolField3B8;
	uint8_t boolField3B9;
	uint8_t boolField3BA;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x358, value); }
	inline bool SetAttachmentIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x360, value); }
	inline bool SetAttachmentIconBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x368, value); }
	inline bool SetAttachmentSlotBackground(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x370, value); }
	inline bool SetCanvasPanel_1(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x378, value); }
	inline bool SetVerticalBox_3(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x380, value); }
	inline bool SetIconSize_1(t_structHelper inst, float value) { inst.WriteOffset(0x388, value); }
	inline bool SetWeaponItem(t_structHelper inst, ExternalPtr<struct UWeaponItem> value) { inst.WriteOffset(0x390, value); }
	inline bool SetAttachmentSlotID(t_structHelper inst, TEnumAsByte<enum EWeaponAttachmentSlotID> value) { inst.WriteOffset(0x398, value); }
	inline bool SetDragDroppingAttachableItem(t_structHelper inst, ExternalPtr<struct UAttachableItem> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetSlotBackgroundMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetInventory(t_structHelper inst, ExternalPtr<struct UInventory> value) { inst.WriteOffset(0x3B0, value); }
	inline bool bWantFocus()
	{
		return boolField3B8& 0x1;
	}
	inline bool SetbWantFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3B8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSelfAttachFocus()
	{
		return boolField3B9& 0x1;
	}
	inline bool SetbSelfAttachFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3B9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSelfAttachmentPutFocus()
	{
		return boolField3BA& 0x1;
	}
	inline bool SetbSelfAttachmentPutFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3BA, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponAttachmentSlotWidget_C = sizeof(UWeaponAttachmentSlotWidget_C); // 955
    static_assert(sizeof(UWeaponAttachmentSlotWidget_C) == 0x3BB, "Size of UWeaponAttachmentSlotWidget_C is not correct.");
	auto constexpr UWeaponAttachmentSlotWidget_C_UberGraphFrame_Offset = offsetof(UWeaponAttachmentSlotWidget_C, UberGraphFrame);
	static_assert(UWeaponAttachmentSlotWidget_C_UberGraphFrame_Offset == 0x358, "UWeaponAttachmentSlotWidget_C::UberGraphFrame offset is not 358");
	auto constexpr UWeaponAttachmentSlotWidget_C_AttachmentIcon_Offset = offsetof(UWeaponAttachmentSlotWidget_C, AttachmentIcon);
	static_assert(UWeaponAttachmentSlotWidget_C_AttachmentIcon_Offset == 0x360, "UWeaponAttachmentSlotWidget_C::AttachmentIcon offset is not 360");
	auto constexpr UWeaponAttachmentSlotWidget_C_AttachmentIconBlock_Offset = offsetof(UWeaponAttachmentSlotWidget_C, AttachmentIconBlock);
	static_assert(UWeaponAttachmentSlotWidget_C_AttachmentIconBlock_Offset == 0x368, "UWeaponAttachmentSlotWidget_C::AttachmentIconBlock offset is not 368");
	auto constexpr UWeaponAttachmentSlotWidget_C_AttachmentSlotBackground_Offset = offsetof(UWeaponAttachmentSlotWidget_C, AttachmentSlotBackground);
	static_assert(UWeaponAttachmentSlotWidget_C_AttachmentSlotBackground_Offset == 0x370, "UWeaponAttachmentSlotWidget_C::AttachmentSlotBackground offset is not 370");
	auto constexpr UWeaponAttachmentSlotWidget_C_CanvasPanel_1_Offset = offsetof(UWeaponAttachmentSlotWidget_C, CanvasPanel_1);
	static_assert(UWeaponAttachmentSlotWidget_C_CanvasPanel_1_Offset == 0x378, "UWeaponAttachmentSlotWidget_C::CanvasPanel_1 offset is not 378");
	auto constexpr UWeaponAttachmentSlotWidget_C_VerticalBox_3_Offset = offsetof(UWeaponAttachmentSlotWidget_C, VerticalBox_3);
	static_assert(UWeaponAttachmentSlotWidget_C_VerticalBox_3_Offset == 0x380, "UWeaponAttachmentSlotWidget_C::VerticalBox_3 offset is not 380");
	auto constexpr UWeaponAttachmentSlotWidget_C_IconSize_1_Offset = offsetof(UWeaponAttachmentSlotWidget_C, IconSize_1);
	static_assert(UWeaponAttachmentSlotWidget_C_IconSize_1_Offset == 0x388, "UWeaponAttachmentSlotWidget_C::IconSize_1 offset is not 388");
	auto constexpr UWeaponAttachmentSlotWidget_C_WeaponItem_Offset = offsetof(UWeaponAttachmentSlotWidget_C, WeaponItem);
	static_assert(UWeaponAttachmentSlotWidget_C_WeaponItem_Offset == 0x390, "UWeaponAttachmentSlotWidget_C::WeaponItem offset is not 390");
	auto constexpr UWeaponAttachmentSlotWidget_C_AttachmentSlotID_Offset = offsetof(UWeaponAttachmentSlotWidget_C, AttachmentSlotID);
	static_assert(UWeaponAttachmentSlotWidget_C_AttachmentSlotID_Offset == 0x398, "UWeaponAttachmentSlotWidget_C::AttachmentSlotID offset is not 398");
	auto constexpr UWeaponAttachmentSlotWidget_C_DragDroppingAttachableItem_Offset = offsetof(UWeaponAttachmentSlotWidget_C, DragDroppingAttachableItem);
	static_assert(UWeaponAttachmentSlotWidget_C_DragDroppingAttachableItem_Offset == 0x3a0, "UWeaponAttachmentSlotWidget_C::DragDroppingAttachableItem offset is not 3a0");
	auto constexpr UWeaponAttachmentSlotWidget_C_SlotBackgroundMaterial_Offset = offsetof(UWeaponAttachmentSlotWidget_C, SlotBackgroundMaterial);
	static_assert(UWeaponAttachmentSlotWidget_C_SlotBackgroundMaterial_Offset == 0x3a8, "UWeaponAttachmentSlotWidget_C::SlotBackgroundMaterial offset is not 3a8");
	auto constexpr UWeaponAttachmentSlotWidget_C_Inventory_Offset = offsetof(UWeaponAttachmentSlotWidget_C, Inventory);
	static_assert(UWeaponAttachmentSlotWidget_C_Inventory_Offset == 0x3b0, "UWeaponAttachmentSlotWidget_C::Inventory offset is not 3b0");
	auto constexpr UWeaponAttachmentSlotWidget_C_boolField3B8_Offset = offsetof(UWeaponAttachmentSlotWidget_C, boolField3B8);
	static_assert(UWeaponAttachmentSlotWidget_C_boolField3B8_Offset == 0x3b8, "UWeaponAttachmentSlotWidget_C::boolField3B8 offset is not 3b8");
	auto constexpr UWeaponAttachmentSlotWidget_C_boolField3B9_Offset = offsetof(UWeaponAttachmentSlotWidget_C, boolField3B9);
	static_assert(UWeaponAttachmentSlotWidget_C_boolField3B9_Offset == 0x3b9, "UWeaponAttachmentSlotWidget_C::boolField3B9 offset is not 3b9");
	auto constexpr UWeaponAttachmentSlotWidget_C_boolField3BA_Offset = offsetof(UWeaponAttachmentSlotWidget_C, boolField3BA);
	static_assert(UWeaponAttachmentSlotWidget_C_boolField3BA_Offset == 0x3ba, "UWeaponAttachmentSlotWidget_C::boolField3BA offset is not 3ba");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
