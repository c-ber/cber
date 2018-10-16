#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWarModeRespawnKitItemInfo // Size: 0x20
{
public:
    ExternalPtr<struct UClass> ItemClass; /* Ofs: 0x0 Size: 0x8 ClassProperty TslGame.WarModeRespawnKitItemInfo.ItemClass */
    int32_t ItemCount; /* Ofs: 0x8 Size: 0x4 IntProperty TslGame.WarModeRespawnKitItemInfo.ItemCount */
    uint8_t UnknownDataC[0x4];
    TArray<ExternalPtr<struct UClass>> AttachmentInfos; /* Ofs: 0x10 Size: 0x10 ArrayProperty TslGame.WarModeRespawnKitItemInfo.AttachmentInfos */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWarModeRespawnKitItemInfo = sizeof(FWarModeRespawnKitItemInfo); // 32
    static_assert(sizeof(FWarModeRespawnKitItemInfo) == 0x20, "Size of FWarModeRespawnKitItemInfo is not correct.");
	auto constexpr FWarModeRespawnKitItemInfo_ItemClass_Offset = offsetof(FWarModeRespawnKitItemInfo, ItemClass);
	static_assert(FWarModeRespawnKitItemInfo_ItemClass_Offset == 0x0, "FWarModeRespawnKitItemInfo::ItemClass offset is not 0");
	auto constexpr FWarModeRespawnKitItemInfo_ItemCount_Offset = offsetof(FWarModeRespawnKitItemInfo, ItemCount);
	static_assert(FWarModeRespawnKitItemInfo_ItemCount_Offset == 0x8, "FWarModeRespawnKitItemInfo::ItemCount offset is not 8");
	auto constexpr FWarModeRespawnKitItemInfo_AttachmentInfos_Offset = offsetof(FWarModeRespawnKitItemInfo, AttachmentInfos);
	static_assert(FWarModeRespawnKitItemInfo_AttachmentInfos_Offset == 0x10, "FWarModeRespawnKitItemInfo::AttachmentInfos offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
