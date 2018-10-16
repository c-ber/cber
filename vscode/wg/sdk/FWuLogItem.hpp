#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogItem // Size: 0x48
{
public:
    FString ItemId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuLogItem.ItemId */
    int32_t StackCount; /* Ofs: 0x10 Size: 0x4 IntProperty TslGame.WuLogItem.StackCount */
    uint8_t UnknownData14[0x4];
    FString Category; /* Ofs: 0x18 Size: 0x10 StrProperty TslGame.WuLogItem.Category */
    FString SubCategory; /* Ofs: 0x28 Size: 0x10 StrProperty TslGame.WuLogItem.SubCategory */
    TArray<struct FString> AttachedItems; /* Ofs: 0x38 Size: 0x10 ArrayProperty TslGame.WuLogItem.AttachedItems */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogItem = sizeof(FWuLogItem); // 72
    static_assert(sizeof(FWuLogItem) == 0x48, "Size of FWuLogItem is not correct.");
	auto constexpr FWuLogItem_ItemId_Offset = offsetof(FWuLogItem, ItemId);
	static_assert(FWuLogItem_ItemId_Offset == 0x0, "FWuLogItem::ItemId offset is not 0");
	auto constexpr FWuLogItem_StackCount_Offset = offsetof(FWuLogItem, StackCount);
	static_assert(FWuLogItem_StackCount_Offset == 0x10, "FWuLogItem::StackCount offset is not 10");
	auto constexpr FWuLogItem_Category_Offset = offsetof(FWuLogItem, Category);
	static_assert(FWuLogItem_Category_Offset == 0x18, "FWuLogItem::Category offset is not 18");
	auto constexpr FWuLogItem_SubCategory_Offset = offsetof(FWuLogItem, SubCategory);
	static_assert(FWuLogItem_SubCategory_Offset == 0x28, "FWuLogItem::SubCategory offset is not 28");
	auto constexpr FWuLogItem_AttachedItems_Offset = offsetof(FWuLogItem, AttachedItems);
	static_assert(FWuLogItem_AttachedItems_Offset == 0x38, "FWuLogItem::AttachedItems offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
