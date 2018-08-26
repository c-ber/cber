#pragma once
#include "FAnimNode_Base.hpp"
#include "FComponentSpacePoseLink.hpp"
#include "FInputScaleBias.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_SkeletalControlBase // Size: 0x70
 : public FAnimNode_Base // Size: 0x30
{
public:
    FComponentSpacePoseLink ComponentPose; /* Ofs: 0x30 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_SkeletalControlBase.ComponentPose */
    float Alpha; /* Ofs: 0x48 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SkeletalControlBase.Alpha */
    FInputScaleBias AlphaScaleBias; /* Ofs: 0x4C Size: 0x8 StructProperty AnimGraphRuntime.AnimNode_SkeletalControlBase.AlphaScaleBias */
    int32_t LODThreshold; /* Ofs: 0x54 Size: 0x4 IntProperty AnimGraphRuntime.AnimNode_SkeletalControlBase.LODThreshold */
    float ActualAlpha; /* Ofs: 0x58 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SkeletalControlBase.ActualAlpha */
    uint8_t UnknownData5C[0x14];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_SkeletalControlBase = sizeof(FAnimNode_SkeletalControlBase); // 112
    static_assert(sizeof(FAnimNode_SkeletalControlBase) == 0x70, "Size of FAnimNode_SkeletalControlBase is not correct.");
	auto constexpr FAnimNode_SkeletalControlBase_ComponentPose_Offset = offsetof(FAnimNode_SkeletalControlBase, ComponentPose);
	static_assert(FAnimNode_SkeletalControlBase_ComponentPose_Offset == 0x30, "FAnimNode_SkeletalControlBase::ComponentPose offset is not 30");
	auto constexpr FAnimNode_SkeletalControlBase_Alpha_Offset = offsetof(FAnimNode_SkeletalControlBase, Alpha);
	static_assert(FAnimNode_SkeletalControlBase_Alpha_Offset == 0x48, "FAnimNode_SkeletalControlBase::Alpha offset is not 48");
	auto constexpr FAnimNode_SkeletalControlBase_AlphaScaleBias_Offset = offsetof(FAnimNode_SkeletalControlBase, AlphaScaleBias);
	static_assert(FAnimNode_SkeletalControlBase_AlphaScaleBias_Offset == 0x4c, "FAnimNode_SkeletalControlBase::AlphaScaleBias offset is not 4c");
	auto constexpr FAnimNode_SkeletalControlBase_LODThreshold_Offset = offsetof(FAnimNode_SkeletalControlBase, LODThreshold);
	static_assert(FAnimNode_SkeletalControlBase_LODThreshold_Offset == 0x54, "FAnimNode_SkeletalControlBase::LODThreshold offset is not 54");
	auto constexpr FAnimNode_SkeletalControlBase_ActualAlpha_Offset = offsetof(FAnimNode_SkeletalControlBase, ActualAlpha);
	static_assert(FAnimNode_SkeletalControlBase_ActualAlpha_Offset == 0x58, "FAnimNode_SkeletalControlBase::ActualAlpha offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
