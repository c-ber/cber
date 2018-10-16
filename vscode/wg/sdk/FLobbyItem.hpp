#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLobbyItem // Size: 0x20
{
public:
    uint8_t UnknownData0[0x8];
    FString ItemId; /* Ofs: 0x8 Size: 0x10 StrProperty TslGame.LobbyItem.ItemId */
    ExternalPtr<struct UItem> Item; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.LobbyItem.Item */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLobbyItem = sizeof(FLobbyItem); // 32
    static_assert(sizeof(FLobbyItem) == 0x20, "Size of FLobbyItem is not correct.");
	auto constexpr FLobbyItem_ItemId_Offset = offsetof(FLobbyItem, ItemId);
	static_assert(FLobbyItem_ItemId_Offset == 0x8, "FLobbyItem::ItemId offset is not 8");
	auto constexpr FLobbyItem_Item_Offset = offsetof(FLobbyItem, Item);
	static_assert(FLobbyItem_Item_Offset == 0x18, "FLobbyItem::Item offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
