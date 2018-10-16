#pragma once
#include "FBoneReference.hpp"
#include "EAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimLegIKDefinition // Size: 0x40
{
public:
    FBoneReference IKFootBone; /* Ofs: 0x0 Size: 0x18 StructProperty AnimGraphRuntime.AnimLegIKDefinition.IKFootBone */
    FBoneReference FKFootBone; /* Ofs: 0x18 Size: 0x18 StructProperty AnimGraphRuntime.AnimLegIKDefinition.FKFootBone */
    int32_t NumBonesInLimb; /* Ofs: 0x30 Size: 0x4 IntProperty AnimGraphRuntime.AnimLegIKDefinition.NumBonesInLimb */
    TEnumAsByte<enum EAxis> FootBoneForwardAxis; /* Ofs: 0x34 Size: 0x1 ByteProperty AnimGraphRuntime.AnimLegIKDefinition.FootBoneForwardAxis */
    bool bEnableRotationLimit; /* Ofs: 0x35 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimLegIKDefinition.bEnableRotationLimit */
    uint8_t UnknownData36[0x2];
    float MinRotationAngle; /* Ofs: 0x38 Size: 0x4 FloatProperty AnimGraphRuntime.AnimLegIKDefinition.MinRotationAngle */
    bool bEnableKneeTwistCorrection; /* Ofs: 0x3C Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimLegIKDefinition.bEnableKneeTwistCorrection */
    uint8_t UnknownData3D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimLegIKDefinition = sizeof(FAnimLegIKDefinition); // 64
    static_assert(sizeof(FAnimLegIKDefinition) == 0x40, "Size of FAnimLegIKDefinition is not correct.");
	auto constexpr FAnimLegIKDefinition_IKFootBone_Offset = offsetof(FAnimLegIKDefinition, IKFootBone);
	static_assert(FAnimLegIKDefinition_IKFootBone_Offset == 0x0, "FAnimLegIKDefinition::IKFootBone offset is not 0");
	auto constexpr FAnimLegIKDefinition_FKFootBone_Offset = offsetof(FAnimLegIKDefinition, FKFootBone);
	static_assert(FAnimLegIKDefinition_FKFootBone_Offset == 0x18, "FAnimLegIKDefinition::FKFootBone offset is not 18");
	auto constexpr FAnimLegIKDefinition_NumBonesInLimb_Offset = offsetof(FAnimLegIKDefinition, NumBonesInLimb);
	static_assert(FAnimLegIKDefinition_NumBonesInLimb_Offset == 0x30, "FAnimLegIKDefinition::NumBonesInLimb offset is not 30");
	auto constexpr FAnimLegIKDefinition_FootBoneForwardAxis_Offset = offsetof(FAnimLegIKDefinition, FootBoneForwardAxis);
	static_assert(FAnimLegIKDefinition_FootBoneForwardAxis_Offset == 0x34, "FAnimLegIKDefinition::FootBoneForwardAxis offset is not 34");
	auto constexpr FAnimLegIKDefinition_MinRotationAngle_Offset = offsetof(FAnimLegIKDefinition, MinRotationAngle);
	static_assert(FAnimLegIKDefinition_MinRotationAngle_Offset == 0x38, "FAnimLegIKDefinition::MinRotationAngle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
