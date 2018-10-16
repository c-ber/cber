#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPreviewMeshCollectionEntry // Size: 0x20
{
public:
    TAssetPtr<ExternalPtr<struct USkeletalMesh>> SkeletalMesh; /* Ofs: 0x0 Size: 0x1C AssetObjectProperty Engine.PreviewMeshCollectionEntry.SkeletalMesh */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPreviewMeshCollectionEntry = sizeof(FPreviewMeshCollectionEntry); // 32
    static_assert(sizeof(FPreviewMeshCollectionEntry) == 0x20, "Size of FPreviewMeshCollectionEntry is not correct.");
	auto constexpr FPreviewMeshCollectionEntry_SkeletalMesh_Offset = offsetof(FPreviewMeshCollectionEntry, SkeletalMesh);
	static_assert(FPreviewMeshCollectionEntry_SkeletalMesh_Offset == 0x0, "FPreviewMeshCollectionEntry::SkeletalMesh offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
