#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMutableParamUIMetadata // Size: 0xE8
{
public:
    FString ObjectFriendlyName; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.MutableParamUIMetadata.ObjectFriendlyName */
    FString UISectionName; /* Ofs: 0x10 Size: 0x10 StrProperty CustomizableObject.MutableParamUIMetadata.UISectionName */
    int32_t UIOrder; /* Ofs: 0x20 Size: 0x4 IntProperty CustomizableObject.MutableParamUIMetadata.UIOrder */
    uint8_t UnknownData24[0x4];
    TAssetPtr<ExternalPtr<struct UTexture2D>> UIThumbnail; /* Ofs: 0x28 Size: 0x1C AssetObjectProperty CustomizableObject.MutableParamUIMetadata.UIThumbnail */
    uint8_t UnknownData44[0x4];
    TMap<struct FString, struct FString> ExtraInformation; /* Ofs: 0x48 Size: 0x50 MapProperty CustomizableObject.MutableParamUIMetadata.ExtraInformation */
    TMap<struct FString, struct UObject> ExtraAssets; /* Ofs: 0x98 Size: 0x50 MapProperty CustomizableObject.MutableParamUIMetadata.ExtraAssets */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMutableParamUIMetadata = sizeof(FMutableParamUIMetadata); // 232
    static_assert(sizeof(FMutableParamUIMetadata) == 0xE8, "Size of FMutableParamUIMetadata is not correct.");
	auto constexpr FMutableParamUIMetadata_ObjectFriendlyName_Offset = offsetof(FMutableParamUIMetadata, ObjectFriendlyName);
	static_assert(FMutableParamUIMetadata_ObjectFriendlyName_Offset == 0x0, "FMutableParamUIMetadata::ObjectFriendlyName offset is not 0");
	auto constexpr FMutableParamUIMetadata_UISectionName_Offset = offsetof(FMutableParamUIMetadata, UISectionName);
	static_assert(FMutableParamUIMetadata_UISectionName_Offset == 0x10, "FMutableParamUIMetadata::UISectionName offset is not 10");
	auto constexpr FMutableParamUIMetadata_UIOrder_Offset = offsetof(FMutableParamUIMetadata, UIOrder);
	static_assert(FMutableParamUIMetadata_UIOrder_Offset == 0x20, "FMutableParamUIMetadata::UIOrder offset is not 20");
	auto constexpr FMutableParamUIMetadata_UIThumbnail_Offset = offsetof(FMutableParamUIMetadata, UIThumbnail);
	static_assert(FMutableParamUIMetadata_UIThumbnail_Offset == 0x28, "FMutableParamUIMetadata::UIThumbnail offset is not 28");
	auto constexpr FMutableParamUIMetadata_ExtraInformation_Offset = offsetof(FMutableParamUIMetadata, ExtraInformation);
	static_assert(FMutableParamUIMetadata_ExtraInformation_Offset == 0x48, "FMutableParamUIMetadata::ExtraInformation offset is not 48");
	auto constexpr FMutableParamUIMetadata_ExtraAssets_Offset = offsetof(FMutableParamUIMetadata, ExtraAssets);
	static_assert(FMutableParamUIMetadata_ExtraAssets_Offset == 0x98, "FMutableParamUIMetadata::ExtraAssets offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
