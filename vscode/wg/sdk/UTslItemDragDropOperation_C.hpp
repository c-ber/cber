#pragma once
#include "UDragDropOperation.hpp"
#include "EWeaponAttachmentSlotID.hpp"
#include "EEquipSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslItemDragDropOperation_C // Size: 0x110
	: public UDragDropOperation // Size: 0x90
{
private:
	typedef UTslItemDragDropOperation_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(61685); // id32("BlueprintGeneratedClass TslItemDragDropOperation.TslItemDragDropOperation_C")
		return ptr;
	}
	ExternalPtr<struct UItem> DragDroppingItem; /* Ofs: 0x90 Size: 0x8 - ObjectProperty TslItemDragDropOperation.TslItemDragDropOperation_C.DragDroppingItem */
	int32_t MouseOverWeaponSlotIndex; /* Ofs: 0x98 Size: 0x4 - IntProperty TslItemDragDropOperation.TslItemDragDropOperation_C.MouseOverWeaponSlotIndex */
	uint8_t UnknownData9C[0x4];
	ExternalPtr<struct UEquipableItem> DragDroppingEquipableItem; /* Ofs: 0xA0 Size: 0x8 - ObjectProperty TslItemDragDropOperation.TslItemDragDropOperation_C.DragDroppingEquipableItem */
	ExternalPtr<struct UWeaponItem> DragDroppingWeaponItem; /* Ofs: 0xA8 Size: 0x8 - ObjectProperty TslItemDragDropOperation.TslItemDragDropOperation_C.DragDroppingWeaponItem */
	ExternalPtr<struct UThrowableItem> DragDroppingThrowableItem; /* Ofs: 0xB0 Size: 0x8 - ObjectProperty TslItemDragDropOperation.TslItemDragDropOperation_C.DragDroppingThrowableItem */
	int32_t MouseOverAttachmentWeaponSlotIndex; /* Ofs: 0xB8 Size: 0x4 - IntProperty TslItemDragDropOperation.TslItemDragDropOperation_C.MouseOverAttachmentWeaponSlotIndex */
	TEnumAsByte<enum EWeaponAttachmentSlotID> MouseOverAttachmentSlotId; /* Ofs: 0xBC Size: 0x1 - EnumProperty TslItemDragDropOperation.TslItemDragDropOperation_C.MouseOverAttachmentSlotId */
	uint8_t UnknownDataBD[0x3];
	ExternalPtr<struct UAttachableItem> DragDroppingAttachableItem; /* Ofs: 0xC0 Size: 0x8 - ObjectProperty TslItemDragDropOperation.TslItemDragDropOperation_C.DragDroppingAttachableItem */
	uint8_t boolFieldC8;
	uint8_t boolFieldC9;
	uint8_t boolFieldCA;
	uint8_t boolFieldCB;
	uint8_t boolFieldCC;
	uint8_t UnknownDataCD[0x3];
	TScriptInterface<ExternalPtr<struct USlotContainerInterface>> Container; /* Ofs: 0xD0 Size: 0x10 - InterfaceProperty TslItemDragDropOperation.TslItemDragDropOperation_C.Container */
	TScriptInterface<ExternalPtr<struct USlotInterface>> Slot; /* Ofs: 0xE0 Size: 0x10 - InterfaceProperty TslItemDragDropOperation.TslItemDragDropOperation_C.Slot */
	int32_t DragDroppingWeaponIndex; /* Ofs: 0xF0 Size: 0x4 - IntProperty TslItemDragDropOperation.TslItemDragDropOperation_C.DragDroppingWeaponIndex */
	TEnumAsByte<enum EEquipSlotID> MouseOverSlotId; /* Ofs: 0xF4 Size: 0x1 - EnumProperty TslItemDragDropOperation.TslItemDragDropOperation_C.MouseOverSlotId */
	uint8_t UnknownDataF5[0x3];
	TArray<ExternalPtr<struct USlotContainerInterface>> OtherContainerStack; /* Ofs: 0xF8 Size: 0x10 - ArrayProperty TslItemDragDropOperation.TslItemDragDropOperation_C.OtherContainerStack */
	FName ActionName; /* Ofs: 0x108 Size: 0x8 - NameProperty TslItemDragDropOperation.TslItemDragDropOperation_C.ActionName */


	inline bool SetDragDroppingItem(t_structHelper inst, ExternalPtr<struct UItem> value) { inst.WriteOffset(0x90, value); }
	inline bool SetMouseOverWeaponSlotIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x98, value); }
	inline bool SetDragDroppingEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetDragDroppingWeaponItem(t_structHelper inst, ExternalPtr<struct UWeaponItem> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetDragDroppingThrowableItem(t_structHelper inst, ExternalPtr<struct UThrowableItem> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetMouseOverAttachmentWeaponSlotIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xB8, value); }
	inline bool SetMouseOverAttachmentSlotId(t_structHelper inst, TEnumAsByte<enum EWeaponAttachmentSlotID> value) { inst.WriteOffset(0xBC, value); }
	inline bool SetDragDroppingAttachableItem(t_structHelper inst, ExternalPtr<struct UAttachableItem> value) { inst.WriteOffset(0xC0, value); }
	inline bool bIsMouseOverVicinity()
	{
		return boolFieldC8& 0x1;
	}
	inline bool SetbIsMouseOverVicinity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsMouseOverInventory()
	{
		return boolFieldC9& 0x1;
	}
	inline bool SetbIsMouseOverInventory(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsMouseOverEquipment()
	{
		return boolFieldCA& 0x1;
	}
	inline bool SetbIsMouseOverEquipment(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xCA, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsMouseOverWeaponEquipment()
	{
		return boolFieldCB& 0x1;
	}
	inline bool SetbIsMouseOverWeaponEquipment(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xCB, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsMouseOverAttachmentSlot()
	{
		return boolFieldCC& 0x1;
	}
	inline bool SetbIsMouseOverAttachmentSlot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xCC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetContainer(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotContainerInterface>> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetSlot(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0xE0, value); }
	inline bool SetDragDroppingWeaponIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xF0, value); }
	inline bool SetMouseOverSlotId(t_structHelper inst, TEnumAsByte<enum EEquipSlotID> value) { inst.WriteOffset(0xF4, value); }
	inline bool SetOtherContainerStack(t_structHelper inst, TArray<ExternalPtr<struct USlotContainerInterface>> value) { inst.WriteOffset(0xF8, value); }
	inline bool SetActionName(t_structHelper inst, FName value) { inst.WriteOffset(0x108, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslItemDragDropOperation_C = sizeof(UTslItemDragDropOperation_C); // 272
    static_assert(sizeof(UTslItemDragDropOperation_C) == 0x110, "Size of UTslItemDragDropOperation_C is not correct.");
	auto constexpr UTslItemDragDropOperation_C_DragDroppingItem_Offset = offsetof(UTslItemDragDropOperation_C, DragDroppingItem);
	static_assert(UTslItemDragDropOperation_C_DragDroppingItem_Offset == 0x90, "UTslItemDragDropOperation_C::DragDroppingItem offset is not 90");
	auto constexpr UTslItemDragDropOperation_C_MouseOverWeaponSlotIndex_Offset = offsetof(UTslItemDragDropOperation_C, MouseOverWeaponSlotIndex);
	static_assert(UTslItemDragDropOperation_C_MouseOverWeaponSlotIndex_Offset == 0x98, "UTslItemDragDropOperation_C::MouseOverWeaponSlotIndex offset is not 98");
	auto constexpr UTslItemDragDropOperation_C_DragDroppingEquipableItem_Offset = offsetof(UTslItemDragDropOperation_C, DragDroppingEquipableItem);
	static_assert(UTslItemDragDropOperation_C_DragDroppingEquipableItem_Offset == 0xa0, "UTslItemDragDropOperation_C::DragDroppingEquipableItem offset is not a0");
	auto constexpr UTslItemDragDropOperation_C_DragDroppingWeaponItem_Offset = offsetof(UTslItemDragDropOperation_C, DragDroppingWeaponItem);
	static_assert(UTslItemDragDropOperation_C_DragDroppingWeaponItem_Offset == 0xa8, "UTslItemDragDropOperation_C::DragDroppingWeaponItem offset is not a8");
	auto constexpr UTslItemDragDropOperation_C_DragDroppingThrowableItem_Offset = offsetof(UTslItemDragDropOperation_C, DragDroppingThrowableItem);
	static_assert(UTslItemDragDropOperation_C_DragDroppingThrowableItem_Offset == 0xb0, "UTslItemDragDropOperation_C::DragDroppingThrowableItem offset is not b0");
	auto constexpr UTslItemDragDropOperation_C_MouseOverAttachmentWeaponSlotIndex_Offset = offsetof(UTslItemDragDropOperation_C, MouseOverAttachmentWeaponSlotIndex);
	static_assert(UTslItemDragDropOperation_C_MouseOverAttachmentWeaponSlotIndex_Offset == 0xb8, "UTslItemDragDropOperation_C::MouseOverAttachmentWeaponSlotIndex offset is not b8");
	auto constexpr UTslItemDragDropOperation_C_MouseOverAttachmentSlotId_Offset = offsetof(UTslItemDragDropOperation_C, MouseOverAttachmentSlotId);
	static_assert(UTslItemDragDropOperation_C_MouseOverAttachmentSlotId_Offset == 0xbc, "UTslItemDragDropOperation_C::MouseOverAttachmentSlotId offset is not bc");
	auto constexpr UTslItemDragDropOperation_C_DragDroppingAttachableItem_Offset = offsetof(UTslItemDragDropOperation_C, DragDroppingAttachableItem);
	static_assert(UTslItemDragDropOperation_C_DragDroppingAttachableItem_Offset == 0xc0, "UTslItemDragDropOperation_C::DragDroppingAttachableItem offset is not c0");
	auto constexpr UTslItemDragDropOperation_C_boolFieldC8_Offset = offsetof(UTslItemDragDropOperation_C, boolFieldC8);
	static_assert(UTslItemDragDropOperation_C_boolFieldC8_Offset == 0xc8, "UTslItemDragDropOperation_C::boolFieldC8 offset is not c8");
	auto constexpr UTslItemDragDropOperation_C_boolFieldC9_Offset = offsetof(UTslItemDragDropOperation_C, boolFieldC9);
	static_assert(UTslItemDragDropOperation_C_boolFieldC9_Offset == 0xc9, "UTslItemDragDropOperation_C::boolFieldC9 offset is not c9");
	auto constexpr UTslItemDragDropOperation_C_boolFieldCA_Offset = offsetof(UTslItemDragDropOperation_C, boolFieldCA);
	static_assert(UTslItemDragDropOperation_C_boolFieldCA_Offset == 0xca, "UTslItemDragDropOperation_C::boolFieldCA offset is not ca");
	auto constexpr UTslItemDragDropOperation_C_boolFieldCB_Offset = offsetof(UTslItemDragDropOperation_C, boolFieldCB);
	static_assert(UTslItemDragDropOperation_C_boolFieldCB_Offset == 0xcb, "UTslItemDragDropOperation_C::boolFieldCB offset is not cb");
	auto constexpr UTslItemDragDropOperation_C_boolFieldCC_Offset = offsetof(UTslItemDragDropOperation_C, boolFieldCC);
	static_assert(UTslItemDragDropOperation_C_boolFieldCC_Offset == 0xcc, "UTslItemDragDropOperation_C::boolFieldCC offset is not cc");
	auto constexpr UTslItemDragDropOperation_C_Container_Offset = offsetof(UTslItemDragDropOperation_C, Container);
	static_assert(UTslItemDragDropOperation_C_Container_Offset == 0xd0, "UTslItemDragDropOperation_C::Container offset is not d0");
	auto constexpr UTslItemDragDropOperation_C_Slot_Offset = offsetof(UTslItemDragDropOperation_C, Slot);
	static_assert(UTslItemDragDropOperation_C_Slot_Offset == 0xe0, "UTslItemDragDropOperation_C::Slot offset is not e0");
	auto constexpr UTslItemDragDropOperation_C_DragDroppingWeaponIndex_Offset = offsetof(UTslItemDragDropOperation_C, DragDroppingWeaponIndex);
	static_assert(UTslItemDragDropOperation_C_DragDroppingWeaponIndex_Offset == 0xf0, "UTslItemDragDropOperation_C::DragDroppingWeaponIndex offset is not f0");
	auto constexpr UTslItemDragDropOperation_C_MouseOverSlotId_Offset = offsetof(UTslItemDragDropOperation_C, MouseOverSlotId);
	static_assert(UTslItemDragDropOperation_C_MouseOverSlotId_Offset == 0xf4, "UTslItemDragDropOperation_C::MouseOverSlotId offset is not f4");
	auto constexpr UTslItemDragDropOperation_C_OtherContainerStack_Offset = offsetof(UTslItemDragDropOperation_C, OtherContainerStack);
	static_assert(UTslItemDragDropOperation_C_OtherContainerStack_Offset == 0xf8, "UTslItemDragDropOperation_C::OtherContainerStack offset is not f8");
	auto constexpr UTslItemDragDropOperation_C_ActionName_Offset = offsetof(UTslItemDragDropOperation_C, ActionName);
	static_assert(UTslItemDragDropOperation_C_ActionName_Offset == 0x108, "UTslItemDragDropOperation_C::ActionName offset is not 108");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
