#pragma once
#include "FRotator.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPoseDriverTarget // Size: 0xA8
{
public:
    TArray<struct FPoseDriverTransform> BoneTransforms; /* Ofs: 0x0 Size: 0x10 ArrayProperty AnimGraphRuntime.PoseDriverTarget.BoneTransforms */
    FRotator TargetRotation; /* Ofs: 0x10 Size: 0xC StructProperty AnimGraphRuntime.PoseDriverTarget.TargetRotation */
    float TargetScale; /* Ofs: 0x1C Size: 0x4 FloatProperty AnimGraphRuntime.PoseDriverTarget.TargetScale */
    bool bApplyCustomCurve; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.PoseDriverTarget.bApplyCustomCurve */
    uint8_t UnknownData21[0x7];
    FRichCurve CustomCurve; /* Ofs: 0x28 Size: 0x70 StructProperty AnimGraphRuntime.PoseDriverTarget.CustomCurve */
    FName DrivenName; /* Ofs: 0x98 Size: 0x8 NameProperty AnimGraphRuntime.PoseDriverTarget.DrivenName */
    uint8_t UnknownDataA0[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPoseDriverTarget = sizeof(FPoseDriverTarget); // 168
    static_assert(sizeof(FPoseDriverTarget) == 0xA8, "Size of FPoseDriverTarget is not correct.");
	auto constexpr FPoseDriverTarget_BoneTransforms_Offset = offsetof(FPoseDriverTarget, BoneTransforms);
	static_assert(FPoseDriverTarget_BoneTransforms_Offset == 0x0, "FPoseDriverTarget::BoneTransforms offset is not 0");
	auto constexpr FPoseDriverTarget_TargetRotation_Offset = offsetof(FPoseDriverTarget, TargetRotation);
	static_assert(FPoseDriverTarget_TargetRotation_Offset == 0x10, "FPoseDriverTarget::TargetRotation offset is not 10");
	auto constexpr FPoseDriverTarget_TargetScale_Offset = offsetof(FPoseDriverTarget, TargetScale);
	static_assert(FPoseDriverTarget_TargetScale_Offset == 0x1c, "FPoseDriverTarget::TargetScale offset is not 1c");
	auto constexpr FPoseDriverTarget_CustomCurve_Offset = offsetof(FPoseDriverTarget, CustomCurve);
	static_assert(FPoseDriverTarget_CustomCurve_Offset == 0x28, "FPoseDriverTarget::CustomCurve offset is not 28");
	auto constexpr FPoseDriverTarget_DrivenName_Offset = offsetof(FPoseDriverTarget, DrivenName);
	static_assert(FPoseDriverTarget_DrivenName_Offset == 0x98, "FPoseDriverTarget::DrivenName offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
