#pragma once
#include "UEquipableItem.hpp"
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCustomEquipableItem // Size: 0x3A0
	: public UEquipableItem // Size: 0x2A8
{
private:
	typedef UCustomEquipableItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1911); // id32("Class TslGame.CustomEquipableItem")
		return ptr;
	}
	int32_t ItemLevel; /* Ofs: 0x2A8 Size: 0x4 - IntProperty TslGame.CustomEquipableItem.ItemLevel */
	uint8_t UnknownData2AC[0x4];
	FTransform SlotOffset_Primary; /* Ofs: 0x2B0 Size: 0x30 - StructProperty TslGame.CustomEquipableItem.SlotOffset_Primary */
	FTransform SlotOffset_Secondary; /* Ofs: 0x2E0 Size: 0x30 - StructProperty TslGame.CustomEquipableItem.SlotOffset_Secondary */
	FTransform SlotOffset_SideArm; /* Ofs: 0x310 Size: 0x30 - StructProperty TslGame.CustomEquipableItem.SlotOffset_SideArm */
	FTransform SlotOffset_Melee; /* Ofs: 0x340 Size: 0x30 - StructProperty TslGame.CustomEquipableItem.SlotOffset_Melee */
	FTransform SlotOffset_Thrown; /* Ofs: 0x370 Size: 0x30 - StructProperty TslGame.CustomEquipableItem.SlotOffset_Thrown */


	inline bool SetItemLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetSlotOffset_Primary(t_structHelper inst, FTransform value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetSlotOffset_Secondary(t_structHelper inst, FTransform value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetSlotOffset_SideArm(t_structHelper inst, FTransform value) { inst.WriteOffset(0x310, value); }
	inline bool SetSlotOffset_Melee(t_structHelper inst, FTransform value) { inst.WriteOffset(0x340, value); }
	inline bool SetSlotOffset_Thrown(t_structHelper inst, FTransform value) { inst.WriteOffset(0x370, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCustomEquipableItem = sizeof(UCustomEquipableItem); // 928
    static_assert(sizeof(UCustomEquipableItem) == 0x3A0, "Size of UCustomEquipableItem is not correct.");
	auto constexpr UCustomEquipableItem_ItemLevel_Offset = offsetof(UCustomEquipableItem, ItemLevel);
	static_assert(UCustomEquipableItem_ItemLevel_Offset == 0x2a8, "UCustomEquipableItem::ItemLevel offset is not 2a8");
	auto constexpr UCustomEquipableItem_SlotOffset_Primary_Offset = offsetof(UCustomEquipableItem, SlotOffset_Primary);
	static_assert(UCustomEquipableItem_SlotOffset_Primary_Offset == 0x2b0, "UCustomEquipableItem::SlotOffset_Primary offset is not 2b0");
	auto constexpr UCustomEquipableItem_SlotOffset_Secondary_Offset = offsetof(UCustomEquipableItem, SlotOffset_Secondary);
	static_assert(UCustomEquipableItem_SlotOffset_Secondary_Offset == 0x2e0, "UCustomEquipableItem::SlotOffset_Secondary offset is not 2e0");
	auto constexpr UCustomEquipableItem_SlotOffset_SideArm_Offset = offsetof(UCustomEquipableItem, SlotOffset_SideArm);
	static_assert(UCustomEquipableItem_SlotOffset_SideArm_Offset == 0x310, "UCustomEquipableItem::SlotOffset_SideArm offset is not 310");
	auto constexpr UCustomEquipableItem_SlotOffset_Melee_Offset = offsetof(UCustomEquipableItem, SlotOffset_Melee);
	static_assert(UCustomEquipableItem_SlotOffset_Melee_Offset == 0x340, "UCustomEquipableItem::SlotOffset_Melee offset is not 340");
	auto constexpr UCustomEquipableItem_SlotOffset_Thrown_Offset = offsetof(UCustomEquipableItem, SlotOffset_Thrown);
	static_assert(UCustomEquipableItem_SlotOffset_Thrown_Offset == 0x370, "UCustomEquipableItem::SlotOffset_Thrown offset is not 370");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
