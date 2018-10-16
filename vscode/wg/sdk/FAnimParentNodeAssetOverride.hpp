#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimParentNodeAssetOverride // Size: 0x18
{
public:
    ExternalPtr<struct UAnimationAsset> NewAsset; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.AnimParentNodeAssetOverride.NewAsset */
    FGuid ParentNodeGuid; /* Ofs: 0x8 Size: 0x10 StructProperty Engine.AnimParentNodeAssetOverride.ParentNodeGuid */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimParentNodeAssetOverride = sizeof(FAnimParentNodeAssetOverride); // 24
    static_assert(sizeof(FAnimParentNodeAssetOverride) == 0x18, "Size of FAnimParentNodeAssetOverride is not correct.");
	auto constexpr FAnimParentNodeAssetOverride_NewAsset_Offset = offsetof(FAnimParentNodeAssetOverride, NewAsset);
	static_assert(FAnimParentNodeAssetOverride_NewAsset_Offset == 0x0, "FAnimParentNodeAssetOverride::NewAsset offset is not 0");
	auto constexpr FAnimParentNodeAssetOverride_ParentNodeGuid_Offset = offsetof(FAnimParentNodeAssetOverride, ParentNodeGuid);
	static_assert(FAnimParentNodeAssetOverride_ParentNodeGuid_Offset == 0x8, "FAnimParentNodeAssetOverride::ParentNodeGuid offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
