#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "EBoneControlSpace.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_CopyBone // Size: 0xA8
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FBoneReference SourceBone; /* Ofs: 0x70 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_CopyBone.SourceBone */
    FBoneReference TargetBone; /* Ofs: 0x88 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_CopyBone.TargetBone */
    bool bCopyTranslation; /* Ofs: 0xA0 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_CopyBone.bCopyTranslation */
    bool bCopyRotation; /* Ofs: 0xA1 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_CopyBone.bCopyRotation */
    bool bCopyScale; /* Ofs: 0xA2 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_CopyBone.bCopyScale */
    TEnumAsByte<enum EBoneControlSpace> ControlSpace; /* Ofs: 0xA3 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_CopyBone.ControlSpace */
    uint8_t UnknownDataA4[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_CopyBone = sizeof(FAnimNode_CopyBone); // 168
    static_assert(sizeof(FAnimNode_CopyBone) == 0xA8, "Size of FAnimNode_CopyBone is not correct.");
	auto constexpr FAnimNode_CopyBone_SourceBone_Offset = offsetof(FAnimNode_CopyBone, SourceBone);
	static_assert(FAnimNode_CopyBone_SourceBone_Offset == 0x70, "FAnimNode_CopyBone::SourceBone offset is not 70");
	auto constexpr FAnimNode_CopyBone_TargetBone_Offset = offsetof(FAnimNode_CopyBone, TargetBone);
	static_assert(FAnimNode_CopyBone_TargetBone_Offset == 0x88, "FAnimNode_CopyBone::TargetBone offset is not 88");
	auto constexpr FAnimNode_CopyBone_ControlSpace_Offset = offsetof(FAnimNode_CopyBone, ControlSpace);
	static_assert(FAnimNode_CopyBone_ControlSpace_Offset == 0xa3, "FAnimNode_CopyBone::ControlSpace offset is not a3");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
