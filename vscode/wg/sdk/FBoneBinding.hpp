#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBoneBinding // Size: 0x10
{
public:
    FName ImpactBone; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.BoneBinding.ImpactBone */
    FName ReactionBone; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.BoneBinding.ReactionBone */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBoneBinding = sizeof(FBoneBinding); // 16
    static_assert(sizeof(FBoneBinding) == 0x10, "Size of FBoneBinding is not correct.");
	auto constexpr FBoneBinding_ImpactBone_Offset = offsetof(FBoneBinding, ImpactBone);
	static_assert(FBoneBinding_ImpactBone_Offset == 0x0, "FBoneBinding::ImpactBone offset is not 0");
	auto constexpr FBoneBinding_ReactionBone_Offset = offsetof(FBoneBinding, ReactionBone);
	static_assert(FBoneBinding_ReactionBone_Offset == 0x8, "FBoneBinding::ReactionBone offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
