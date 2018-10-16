#pragma once
#include "ECastableItemType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReplicatedCastableItem // Size: 0x10
{
public:
    ExternalPtr<struct UClass> CastableItemClass; /* Ofs: 0x0 Size: 0x8 ClassProperty TslGame.ReplicatedCastableItem.CastableItemClass */
    TEnumAsByte<enum ECastableItemType> ItemType; /* Ofs: 0x8 Size: 0x1 EnumProperty TslGame.ReplicatedCastableItem.ItemType */
    uint8_t UnknownData9[0x3];
    int32_t ItemCount; /* Ofs: 0xC Size: 0x4 IntProperty TslGame.ReplicatedCastableItem.ItemCount */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReplicatedCastableItem = sizeof(FReplicatedCastableItem); // 16
    static_assert(sizeof(FReplicatedCastableItem) == 0x10, "Size of FReplicatedCastableItem is not correct.");
	auto constexpr FReplicatedCastableItem_CastableItemClass_Offset = offsetof(FReplicatedCastableItem, CastableItemClass);
	static_assert(FReplicatedCastableItem_CastableItemClass_Offset == 0x0, "FReplicatedCastableItem::CastableItemClass offset is not 0");
	auto constexpr FReplicatedCastableItem_ItemType_Offset = offsetof(FReplicatedCastableItem, ItemType);
	static_assert(FReplicatedCastableItem_ItemType_Offset == 0x8, "FReplicatedCastableItem::ItemType offset is not 8");
	auto constexpr FReplicatedCastableItem_ItemCount_Offset = offsetof(FReplicatedCastableItem, ItemCount);
	static_assert(FReplicatedCastableItem_ItemCount_Offset == 0xc, "FReplicatedCastableItem::ItemCount offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
