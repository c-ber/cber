#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPackagedItemInfo // Size: 0x10
{
public:
    ExternalPtr<struct UClass> ItemType; /* Ofs: 0x0 Size: 0x8 ClassProperty TslGame.PackagedItemInfo.ItemType */
    int32_t Count; /* Ofs: 0x8 Size: 0x4 IntProperty TslGame.PackagedItemInfo.Count */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPackagedItemInfo = sizeof(FPackagedItemInfo); // 16
    static_assert(sizeof(FPackagedItemInfo) == 0x10, "Size of FPackagedItemInfo is not correct.");
	auto constexpr FPackagedItemInfo_ItemType_Offset = offsetof(FPackagedItemInfo, ItemType);
	static_assert(FPackagedItemInfo_ItemType_Offset == 0x0, "FPackagedItemInfo::ItemType offset is not 0");
	auto constexpr FPackagedItemInfo_Count_Offset = offsetof(FPackagedItemInfo, Count);
	static_assert(FPackagedItemInfo_Count_Offset == 0x8, "FPackagedItemInfo::Count offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
