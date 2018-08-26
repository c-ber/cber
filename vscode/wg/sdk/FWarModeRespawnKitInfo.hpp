#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWarModeRespawnKitInfo // Size: 0x10
{
public:
    TArray<struct FWarModeRespawnKitItemInfo> ItemInfos; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.WarModeRespawnKitInfo.ItemInfos */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWarModeRespawnKitInfo = sizeof(FWarModeRespawnKitInfo); // 16
    static_assert(sizeof(FWarModeRespawnKitInfo) == 0x10, "Size of FWarModeRespawnKitInfo is not correct.");
	auto constexpr FWarModeRespawnKitInfo_ItemInfos_Offset = offsetof(FWarModeRespawnKitInfo, ItemInfos);
	static_assert(FWarModeRespawnKitInfo_ItemInfos_Offset == 0x0, "FWarModeRespawnKitInfo::ItemInfos offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
