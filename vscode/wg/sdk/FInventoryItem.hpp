#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInventoryItem // Size: 0x10
{
public:
    int32_t Index; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.InventoryItem.Index */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UItem> Item; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.InventoryItem.Item */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInventoryItem = sizeof(FInventoryItem); // 16
    static_assert(sizeof(FInventoryItem) == 0x10, "Size of FInventoryItem is not correct.");
	auto constexpr FInventoryItem_Index_Offset = offsetof(FInventoryItem, Index);
	static_assert(FInventoryItem_Index_Offset == 0x0, "FInventoryItem::Index offset is not 0");
	auto constexpr FInventoryItem_Item_Offset = offsetof(FInventoryItem, Item);
	static_assert(FInventoryItem_Item_Offset == 0x8, "FInventoryItem::Item offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
