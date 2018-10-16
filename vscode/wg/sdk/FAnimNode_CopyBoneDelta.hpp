#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "CopyBoneDeltaMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_CopyBoneDelta // Size: 0xB0
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FBoneReference SourceBone; /* Ofs: 0x70 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_CopyBoneDelta.SourceBone */
    FBoneReference TargetBone; /* Ofs: 0x88 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_CopyBoneDelta.TargetBone */
    bool bCopyTranslation; /* Ofs: 0xA0 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_CopyBoneDelta.bCopyTranslation */
    bool bCopyRotation; /* Ofs: 0xA1 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_CopyBoneDelta.bCopyRotation */
    bool bCopyScale; /* Ofs: 0xA2 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_CopyBoneDelta.bCopyScale */
    TEnumAsByte<enum CopyBoneDeltaMode> CopyMode; /* Ofs: 0xA3 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_CopyBoneDelta.CopyMode */
    float TranslationMultiplier; /* Ofs: 0xA4 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_CopyBoneDelta.TranslationMultiplier */
    float RotationMultiplier; /* Ofs: 0xA8 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_CopyBoneDelta.RotationMultiplier */
    float ScaleMultiplier; /* Ofs: 0xAC Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_CopyBoneDelta.ScaleMultiplier */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_CopyBoneDelta = sizeof(FAnimNode_CopyBoneDelta); // 176
    static_assert(sizeof(FAnimNode_CopyBoneDelta) == 0xB0, "Size of FAnimNode_CopyBoneDelta is not correct.");
	auto constexpr FAnimNode_CopyBoneDelta_SourceBone_Offset = offsetof(FAnimNode_CopyBoneDelta, SourceBone);
	static_assert(FAnimNode_CopyBoneDelta_SourceBone_Offset == 0x70, "FAnimNode_CopyBoneDelta::SourceBone offset is not 70");
	auto constexpr FAnimNode_CopyBoneDelta_TargetBone_Offset = offsetof(FAnimNode_CopyBoneDelta, TargetBone);
	static_assert(FAnimNode_CopyBoneDelta_TargetBone_Offset == 0x88, "FAnimNode_CopyBoneDelta::TargetBone offset is not 88");
	auto constexpr FAnimNode_CopyBoneDelta_CopyMode_Offset = offsetof(FAnimNode_CopyBoneDelta, CopyMode);
	static_assert(FAnimNode_CopyBoneDelta_CopyMode_Offset == 0xa3, "FAnimNode_CopyBoneDelta::CopyMode offset is not a3");
	auto constexpr FAnimNode_CopyBoneDelta_TranslationMultiplier_Offset = offsetof(FAnimNode_CopyBoneDelta, TranslationMultiplier);
	static_assert(FAnimNode_CopyBoneDelta_TranslationMultiplier_Offset == 0xa4, "FAnimNode_CopyBoneDelta::TranslationMultiplier offset is not a4");
	auto constexpr FAnimNode_CopyBoneDelta_RotationMultiplier_Offset = offsetof(FAnimNode_CopyBoneDelta, RotationMultiplier);
	static_assert(FAnimNode_CopyBoneDelta_RotationMultiplier_Offset == 0xa8, "FAnimNode_CopyBoneDelta::RotationMultiplier offset is not a8");
	auto constexpr FAnimNode_CopyBoneDelta_ScaleMultiplier_Offset = offsetof(FAnimNode_CopyBoneDelta, ScaleMultiplier);
	static_assert(FAnimNode_CopyBoneDelta_ScaleMultiplier_Offset == 0xac, "FAnimNode_CopyBoneDelta::ScaleMultiplier offset is not ac");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
