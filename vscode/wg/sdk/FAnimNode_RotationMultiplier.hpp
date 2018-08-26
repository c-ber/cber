#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "EBoneAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_RotationMultiplier // Size: 0xA8
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FBoneReference TargetBone; /* Ofs: 0x70 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_RotationMultiplier.TargetBone */
    FBoneReference SourceBone; /* Ofs: 0x88 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_RotationMultiplier.SourceBone */
    float Multiplier; /* Ofs: 0xA0 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_RotationMultiplier.Multiplier */
    TEnumAsByte<enum EBoneAxis> RotationAxisToRefer; /* Ofs: 0xA4 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_RotationMultiplier.RotationAxisToRefer */
    bool bIsAdditive; /* Ofs: 0xA5 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_RotationMultiplier.bIsAdditive */
    uint8_t UnknownDataA6[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_RotationMultiplier = sizeof(FAnimNode_RotationMultiplier); // 168
    static_assert(sizeof(FAnimNode_RotationMultiplier) == 0xA8, "Size of FAnimNode_RotationMultiplier is not correct.");
	auto constexpr FAnimNode_RotationMultiplier_TargetBone_Offset = offsetof(FAnimNode_RotationMultiplier, TargetBone);
	static_assert(FAnimNode_RotationMultiplier_TargetBone_Offset == 0x70, "FAnimNode_RotationMultiplier::TargetBone offset is not 70");
	auto constexpr FAnimNode_RotationMultiplier_SourceBone_Offset = offsetof(FAnimNode_RotationMultiplier, SourceBone);
	static_assert(FAnimNode_RotationMultiplier_SourceBone_Offset == 0x88, "FAnimNode_RotationMultiplier::SourceBone offset is not 88");
	auto constexpr FAnimNode_RotationMultiplier_Multiplier_Offset = offsetof(FAnimNode_RotationMultiplier, Multiplier);
	static_assert(FAnimNode_RotationMultiplier_Multiplier_Offset == 0xa0, "FAnimNode_RotationMultiplier::Multiplier offset is not a0");
	auto constexpr FAnimNode_RotationMultiplier_RotationAxisToRefer_Offset = offsetof(FAnimNode_RotationMultiplier, RotationAxisToRefer);
	static_assert(FAnimNode_RotationMultiplier_RotationAxisToRefer_Offset == 0xa4, "FAnimNode_RotationMultiplier::RotationAxisToRefer offset is not a4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
