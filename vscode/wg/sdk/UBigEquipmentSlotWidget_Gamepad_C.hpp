#pragma once
#include "UInventorySlotBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBigEquipmentSlotWidget_Gamepad_C // Size: 0x3F0
	: public UInventorySlotBaseWidget_C // Size: 0x358
{
private:
	typedef UBigEquipmentSlotWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67521); // id32("WidgetBlueprintGeneratedClass BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x358 Size: 0x8 - StructProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UBorder> Background; /* Ofs: 0x360 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.Background */
	ExternalPtr<struct UCanvasPanel> CanvasPanel_7; /* Ofs: 0x368 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.CanvasPanel_7 */
	ExternalPtr<struct UImage> DurabilityGauge; /* Ofs: 0x370 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.DurabilityGauge */
	ExternalPtr<struct UVerticalBox> DurabilityGaugeBlock; /* Ofs: 0x378 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.DurabilityGaugeBlock */
	ExternalPtr<struct UImage> DurabilityIcon; /* Ofs: 0x380 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.DurabilityIcon */
	ExternalPtr<struct UOverlay> DurabilityIconBlock; /* Ofs: 0x388 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.DurabilityIconBlock */
	ExternalPtr<struct UTextBlock> DurationNumber; /* Ofs: 0x390 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.DurationNumber */
	ExternalPtr<struct UImage> Icon; /* Ofs: 0x398 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.Icon */
	ExternalPtr<struct UVerticalBox> IconBlock; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.IconBlock */
	ExternalPtr<struct UCanvasPanel> ItemIconLayer; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.ItemIconLayer */
	ExternalPtr<struct UEquipableItem> EquipableItem; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.EquipableItem */
	ExternalPtr<struct UMaterialInstanceDynamic> SlotBackgroundMaterial; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.SlotBackgroundMaterial */
	ExternalPtr<struct UItem> DragDroppingItem; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.DragDroppingItem */
	ExternalPtr<struct UEquipableItem> DragDroppingEquipableItem; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.DragDroppingEquipableItem */
	ExternalPtr<struct UMaterialInstanceDynamic> DurabilityMaterial; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.DurabilityMaterial */
	uint8_t boolField3D8;
	uint8_t boolField3D9;
	uint8_t UnknownData3DA[0x6];
	FScriptMulticastDelegate OnChildSlotFocus; /* Ofs: 0x3E0 Size: 0x10 - MulticastDelegateProperty BigEquipmentSlotWidget_Gamepad.BigEquipmentSlotWidget_Gamepad_C.OnChildSlotFocus */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x358, value); }
	inline bool SetBackground(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x360, value); }
	inline bool SetCanvasPanel_7(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x368, value); }
	inline bool SetDurabilityGauge(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x370, value); }
	inline bool SetDurabilityGaugeBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x378, value); }
	inline bool SetDurabilityIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x380, value); }
	inline bool SetDurabilityIconBlock(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x388, value); }
	inline bool SetDurationNumber(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x390, value); }
	inline bool SetIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x398, value); }
	inline bool SetIconBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetItemIconLayer(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetSlotBackgroundMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetDragDroppingItem(t_structHelper inst, ExternalPtr<struct UItem> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetDragDroppingEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetDurabilityMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x3D0, value); }
	inline bool bSmallSlot()
	{
		return boolField3D8& 0x1;
	}
	inline bool SetbSmallSlot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3D8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bWnatFocus()
	{
		return boolField3D9& 0x1;
	}
	inline bool SetbWnatFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3D9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnChildSlotFocus(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBigEquipmentSlotWidget_Gamepad_C = sizeof(UBigEquipmentSlotWidget_Gamepad_C); // 1008
    static_assert(sizeof(UBigEquipmentSlotWidget_Gamepad_C) == 0x3F0, "Size of UBigEquipmentSlotWidget_Gamepad_C is not correct.");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, UberGraphFrame);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_UberGraphFrame_Offset == 0x358, "UBigEquipmentSlotWidget_Gamepad_C::UberGraphFrame offset is not 358");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_Background_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, Background);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_Background_Offset == 0x360, "UBigEquipmentSlotWidget_Gamepad_C::Background offset is not 360");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_CanvasPanel_7_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, CanvasPanel_7);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_CanvasPanel_7_Offset == 0x368, "UBigEquipmentSlotWidget_Gamepad_C::CanvasPanel_7 offset is not 368");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_DurabilityGauge_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, DurabilityGauge);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_DurabilityGauge_Offset == 0x370, "UBigEquipmentSlotWidget_Gamepad_C::DurabilityGauge offset is not 370");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_DurabilityGaugeBlock_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, DurabilityGaugeBlock);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_DurabilityGaugeBlock_Offset == 0x378, "UBigEquipmentSlotWidget_Gamepad_C::DurabilityGaugeBlock offset is not 378");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_DurabilityIcon_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, DurabilityIcon);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_DurabilityIcon_Offset == 0x380, "UBigEquipmentSlotWidget_Gamepad_C::DurabilityIcon offset is not 380");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_DurabilityIconBlock_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, DurabilityIconBlock);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_DurabilityIconBlock_Offset == 0x388, "UBigEquipmentSlotWidget_Gamepad_C::DurabilityIconBlock offset is not 388");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_DurationNumber_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, DurationNumber);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_DurationNumber_Offset == 0x390, "UBigEquipmentSlotWidget_Gamepad_C::DurationNumber offset is not 390");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_Icon_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, Icon);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_Icon_Offset == 0x398, "UBigEquipmentSlotWidget_Gamepad_C::Icon offset is not 398");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_IconBlock_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, IconBlock);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_IconBlock_Offset == 0x3a0, "UBigEquipmentSlotWidget_Gamepad_C::IconBlock offset is not 3a0");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_ItemIconLayer_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, ItemIconLayer);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_ItemIconLayer_Offset == 0x3a8, "UBigEquipmentSlotWidget_Gamepad_C::ItemIconLayer offset is not 3a8");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_EquipableItem_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, EquipableItem);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_EquipableItem_Offset == 0x3b0, "UBigEquipmentSlotWidget_Gamepad_C::EquipableItem offset is not 3b0");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_SlotBackgroundMaterial_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, SlotBackgroundMaterial);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_SlotBackgroundMaterial_Offset == 0x3b8, "UBigEquipmentSlotWidget_Gamepad_C::SlotBackgroundMaterial offset is not 3b8");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_DragDroppingItem_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, DragDroppingItem);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_DragDroppingItem_Offset == 0x3c0, "UBigEquipmentSlotWidget_Gamepad_C::DragDroppingItem offset is not 3c0");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_DragDroppingEquipableItem_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, DragDroppingEquipableItem);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_DragDroppingEquipableItem_Offset == 0x3c8, "UBigEquipmentSlotWidget_Gamepad_C::DragDroppingEquipableItem offset is not 3c8");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_DurabilityMaterial_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, DurabilityMaterial);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_DurabilityMaterial_Offset == 0x3d0, "UBigEquipmentSlotWidget_Gamepad_C::DurabilityMaterial offset is not 3d0");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_boolField3D8_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, boolField3D8);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_boolField3D8_Offset == 0x3d8, "UBigEquipmentSlotWidget_Gamepad_C::boolField3D8 offset is not 3d8");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_boolField3D9_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, boolField3D9);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_boolField3D9_Offset == 0x3d9, "UBigEquipmentSlotWidget_Gamepad_C::boolField3D9 offset is not 3d9");
	auto constexpr UBigEquipmentSlotWidget_Gamepad_C_OnChildSlotFocus_Offset = offsetof(UBigEquipmentSlotWidget_Gamepad_C, OnChildSlotFocus);
	static_assert(UBigEquipmentSlotWidget_Gamepad_C_OnChildSlotFocus_Offset == 0x3e0, "UBigEquipmentSlotWidget_Gamepad_C::OnChildSlotFocus offset is not 3e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
