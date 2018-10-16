#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPoseDriverTransform // Size: 0x18
{
public:
    FVector TargetTranslation; /* Ofs: 0x0 Size: 0xC StructProperty AnimGraphRuntime.PoseDriverTransform.TargetTranslation */
    FRotator TargetRotation; /* Ofs: 0xC Size: 0xC StructProperty AnimGraphRuntime.PoseDriverTransform.TargetRotation */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPoseDriverTransform = sizeof(FPoseDriverTransform); // 24
    static_assert(sizeof(FPoseDriverTransform) == 0x18, "Size of FPoseDriverTransform is not correct.");
	auto constexpr FPoseDriverTransform_TargetTranslation_Offset = offsetof(FPoseDriverTransform, TargetTranslation);
	static_assert(FPoseDriverTransform_TargetTranslation_Offset == 0x0, "FPoseDriverTransform::TargetTranslation offset is not 0");
	auto constexpr FPoseDriverTransform_TargetRotation_Offset = offsetof(FPoseDriverTransform, TargetRotation);
	static_assert(FPoseDriverTransform_TargetRotation_Offset == 0xc, "FPoseDriverTransform::TargetRotation offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
