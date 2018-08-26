#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#include "ECurveBlendOption.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_LayeredBoneBlend // Size: 0xE0
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink BasePose; /* Ofs: 0x30 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_LayeredBoneBlend.BasePose */
    TArray<struct FPoseLink> BlendPoses; /* Ofs: 0x48 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_LayeredBoneBlend.BlendPoses */
    TArray<struct FInputBlendPose> LayerSetup; /* Ofs: 0x58 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_LayeredBoneBlend.LayerSetup */
    TArray<float> BlendWeights; /* Ofs: 0x68 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_LayeredBoneBlend.BlendWeights */
    bool bMeshSpaceRotationBlend; /* Ofs: 0x78 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_LayeredBoneBlend.bMeshSpaceRotationBlend */
    TEnumAsByte<enum ECurveBlendOption> CurveBlendOption; /* Ofs: 0x79 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_LayeredBoneBlend.CurveBlendOption */
    bool bBlendRootMotionBasedOnRootBone; /* Ofs: 0x7A Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_LayeredBoneBlend.bBlendRootMotionBasedOnRootBone */
    bool bHasRelevantPoses; /* Ofs: 0x7B Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_LayeredBoneBlend.bHasRelevantPoses */
    uint8_t UnknownData7C[0x4];
    TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; /* Ofs: 0x80 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_LayeredBoneBlend.PerBoneBlendWeights */
    FGuid SkeletonGuid; /* Ofs: 0x90 Size: 0x10 StructProperty AnimGraphRuntime.AnimNode_LayeredBoneBlend.SkeletonGuid */
    FGuid VirtualBoneGuid; /* Ofs: 0xA0 Size: 0x10 StructProperty AnimGraphRuntime.AnimNode_LayeredBoneBlend.VirtualBoneGuid */
    uint8_t UnknownDataB0[0x30];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_LayeredBoneBlend = sizeof(FAnimNode_LayeredBoneBlend); // 224
    static_assert(sizeof(FAnimNode_LayeredBoneBlend) == 0xE0, "Size of FAnimNode_LayeredBoneBlend is not correct.");
	auto constexpr FAnimNode_LayeredBoneBlend_BasePose_Offset = offsetof(FAnimNode_LayeredBoneBlend, BasePose);
	static_assert(FAnimNode_LayeredBoneBlend_BasePose_Offset == 0x30, "FAnimNode_LayeredBoneBlend::BasePose offset is not 30");
	auto constexpr FAnimNode_LayeredBoneBlend_BlendPoses_Offset = offsetof(FAnimNode_LayeredBoneBlend, BlendPoses);
	static_assert(FAnimNode_LayeredBoneBlend_BlendPoses_Offset == 0x48, "FAnimNode_LayeredBoneBlend::BlendPoses offset is not 48");
	auto constexpr FAnimNode_LayeredBoneBlend_LayerSetup_Offset = offsetof(FAnimNode_LayeredBoneBlend, LayerSetup);
	static_assert(FAnimNode_LayeredBoneBlend_LayerSetup_Offset == 0x58, "FAnimNode_LayeredBoneBlend::LayerSetup offset is not 58");
	auto constexpr FAnimNode_LayeredBoneBlend_BlendWeights_Offset = offsetof(FAnimNode_LayeredBoneBlend, BlendWeights);
	static_assert(FAnimNode_LayeredBoneBlend_BlendWeights_Offset == 0x68, "FAnimNode_LayeredBoneBlend::BlendWeights offset is not 68");
	auto constexpr FAnimNode_LayeredBoneBlend_CurveBlendOption_Offset = offsetof(FAnimNode_LayeredBoneBlend, CurveBlendOption);
	static_assert(FAnimNode_LayeredBoneBlend_CurveBlendOption_Offset == 0x79, "FAnimNode_LayeredBoneBlend::CurveBlendOption offset is not 79");
	auto constexpr FAnimNode_LayeredBoneBlend_PerBoneBlendWeights_Offset = offsetof(FAnimNode_LayeredBoneBlend, PerBoneBlendWeights);
	static_assert(FAnimNode_LayeredBoneBlend_PerBoneBlendWeights_Offset == 0x80, "FAnimNode_LayeredBoneBlend::PerBoneBlendWeights offset is not 80");
	auto constexpr FAnimNode_LayeredBoneBlend_SkeletonGuid_Offset = offsetof(FAnimNode_LayeredBoneBlend, SkeletonGuid);
	static_assert(FAnimNode_LayeredBoneBlend_SkeletonGuid_Offset == 0x90, "FAnimNode_LayeredBoneBlend::SkeletonGuid offset is not 90");
	auto constexpr FAnimNode_LayeredBoneBlend_VirtualBoneGuid_Offset = offsetof(FAnimNode_LayeredBoneBlend, VirtualBoneGuid);
	static_assert(FAnimNode_LayeredBoneBlend_VirtualBoneGuid_Offset == 0xa0, "FAnimNode_LayeredBoneBlend::VirtualBoneGuid offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
