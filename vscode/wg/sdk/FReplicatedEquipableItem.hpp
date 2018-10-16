#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReplicatedEquipableItem // Size: 0x10
{
public:
    ExternalPtr<struct UClass> EquipableItemClass; /* Ofs: 0x0 Size: 0x8 ClassProperty TslGame.ReplicatedEquipableItem.EquipableItemClass */
    float Durability; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.ReplicatedEquipableItem.Durability */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReplicatedEquipableItem = sizeof(FReplicatedEquipableItem); // 16
    static_assert(sizeof(FReplicatedEquipableItem) == 0x10, "Size of FReplicatedEquipableItem is not correct.");
	auto constexpr FReplicatedEquipableItem_EquipableItemClass_Offset = offsetof(FReplicatedEquipableItem, EquipableItemClass);
	static_assert(FReplicatedEquipableItem_EquipableItemClass_Offset == 0x0, "FReplicatedEquipableItem::EquipableItemClass offset is not 0");
	auto constexpr FReplicatedEquipableItem_Durability_Offset = offsetof(FReplicatedEquipableItem, Durability);
	static_assert(FReplicatedEquipableItem_Durability_Offset == 0x8, "FReplicatedEquipableItem::Durability offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
