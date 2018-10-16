#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "EBoneControlSpace.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_ObserveBone // Size: 0xB0
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FBoneReference BoneToObserve; /* Ofs: 0x70 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_ObserveBone.BoneToObserve */
    TEnumAsByte<enum EBoneControlSpace> DisplaySpace; /* Ofs: 0x88 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_ObserveBone.DisplaySpace */
    bool bRelativeToRefPose; /* Ofs: 0x89 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_ObserveBone.bRelativeToRefPose */
    uint8_t UnknownData8A[0x2];
    FVector Translation; /* Ofs: 0x8C Size: 0xC StructProperty AnimGraphRuntime.AnimNode_ObserveBone.Translation */
    FRotator Rotation; /* Ofs: 0x98 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_ObserveBone.Rotation */
    FVector Scale; /* Ofs: 0xA4 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_ObserveBone.Scale */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_ObserveBone = sizeof(FAnimNode_ObserveBone); // 176
    static_assert(sizeof(FAnimNode_ObserveBone) == 0xB0, "Size of FAnimNode_ObserveBone is not correct.");
	auto constexpr FAnimNode_ObserveBone_BoneToObserve_Offset = offsetof(FAnimNode_ObserveBone, BoneToObserve);
	static_assert(FAnimNode_ObserveBone_BoneToObserve_Offset == 0x70, "FAnimNode_ObserveBone::BoneToObserve offset is not 70");
	auto constexpr FAnimNode_ObserveBone_DisplaySpace_Offset = offsetof(FAnimNode_ObserveBone, DisplaySpace);
	static_assert(FAnimNode_ObserveBone_DisplaySpace_Offset == 0x88, "FAnimNode_ObserveBone::DisplaySpace offset is not 88");
	auto constexpr FAnimNode_ObserveBone_Translation_Offset = offsetof(FAnimNode_ObserveBone, Translation);
	static_assert(FAnimNode_ObserveBone_Translation_Offset == 0x8c, "FAnimNode_ObserveBone::Translation offset is not 8c");
	auto constexpr FAnimNode_ObserveBone_Rotation_Offset = offsetof(FAnimNode_ObserveBone, Rotation);
	static_assert(FAnimNode_ObserveBone_Rotation_Offset == 0x98, "FAnimNode_ObserveBone::Rotation offset is not 98");
	auto constexpr FAnimNode_ObserveBone_Scale_Offset = offsetof(FAnimNode_ObserveBone, Scale);
	static_assert(FAnimNode_ObserveBone_Scale_Offset == 0xa4, "FAnimNode_ObserveBone::Scale offset is not a4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
