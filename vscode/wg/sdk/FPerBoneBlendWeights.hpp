#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPerBoneBlendWeights // Size: 0x10
{
public:
    TArray<struct FPerBoneBlendWeight> BoneBlendWeights; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.PerBoneBlendWeights.BoneBlendWeights */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPerBoneBlendWeights = sizeof(FPerBoneBlendWeights); // 16
    static_assert(sizeof(FPerBoneBlendWeights) == 0x10, "Size of FPerBoneBlendWeights is not correct.");
	auto constexpr FPerBoneBlendWeights_BoneBlendWeights_Offset = offsetof(FPerBoneBlendWeights, BoneBlendWeights);
	static_assert(FPerBoneBlendWeights_BoneBlendWeights_Offset == 0x0, "FPerBoneBlendWeights::BoneBlendWeights offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
