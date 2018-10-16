#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPreviewAssetAttachContainer // Size: 0x10
{
public:
    TArray<struct FPreviewAttachedObjectPair> AttachedObjects; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.PreviewAssetAttachContainer.AttachedObjects */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPreviewAssetAttachContainer = sizeof(FPreviewAssetAttachContainer); // 16
    static_assert(sizeof(FPreviewAssetAttachContainer) == 0x10, "Size of FPreviewAssetAttachContainer is not correct.");
	auto constexpr FPreviewAssetAttachContainer_AttachedObjects_Offset = offsetof(FPreviewAssetAttachContainer, AttachedObjects);
	static_assert(FPreviewAssetAttachContainer_AttachedObjects_Offset == 0x0, "FPreviewAssetAttachContainer::AttachedObjects offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
