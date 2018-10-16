#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAssetMapping // Size: 0x10
{
public:
    ExternalPtr<struct UAnimationAsset> SourceAsset; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.AssetMapping.SourceAsset */
    ExternalPtr<struct UAnimationAsset> TargetAsset; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.AssetMapping.TargetAsset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAssetMapping = sizeof(FAssetMapping); // 16
    static_assert(sizeof(FAssetMapping) == 0x10, "Size of FAssetMapping is not correct.");
	auto constexpr FAssetMapping_SourceAsset_Offset = offsetof(FAssetMapping, SourceAsset);
	static_assert(FAssetMapping_SourceAsset_Offset == 0x0, "FAssetMapping::SourceAsset offset is not 0");
	auto constexpr FAssetMapping_TargetAsset_Offset = offsetof(FAssetMapping, TargetAsset);
	static_assert(FAssetMapping_TargetAsset_Offset == 0x8, "FAssetMapping::TargetAsset offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
