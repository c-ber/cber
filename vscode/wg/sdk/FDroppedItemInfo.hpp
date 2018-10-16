#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDroppedItemInfo // Size: 0x18
{
public:
    ExternalPtr<struct UItem> Item; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.DroppedItemInfo.Item */
    uint8_t UnknownData8[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDroppedItemInfo = sizeof(FDroppedItemInfo); // 24
    static_assert(sizeof(FDroppedItemInfo) == 0x18, "Size of FDroppedItemInfo is not correct.");
	auto constexpr FDroppedItemInfo_Item_Offset = offsetof(FDroppedItemInfo, Item);
	static_assert(FDroppedItemInfo_Item_Offset == 0x0, "FDroppedItemInfo::Item offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
