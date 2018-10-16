#pragma once
#include "FAnimNode_BlendSpacePlayer.hpp"
#include "FPoseLink.hpp"
#include "FInputScaleBias.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_RotationOffsetBlendSpace // Size: 0x158
 : public FAnimNode_BlendSpacePlayer // Size: 0x128
{
public:
    FPoseLink BasePose; /* Ofs: 0x128 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace.BasePose */
    int32_t LODThreshold; /* Ofs: 0x140 Size: 0x4 IntProperty AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace.LODThreshold */
    bool bIsLODEnabled; /* Ofs: 0x144 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace.bIsLODEnabled */
    uint8_t UnknownData145[0x3];
    float Alpha; /* Ofs: 0x148 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace.Alpha */
    FInputScaleBias AlphaScaleBias; /* Ofs: 0x14C Size: 0x8 StructProperty AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace.AlphaScaleBias */
    float ActualAlpha; /* Ofs: 0x154 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace.ActualAlpha */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_RotationOffsetBlendSpace = sizeof(FAnimNode_RotationOffsetBlendSpace); // 344
    static_assert(sizeof(FAnimNode_RotationOffsetBlendSpace) == 0x158, "Size of FAnimNode_RotationOffsetBlendSpace is not correct.");
	auto constexpr FAnimNode_RotationOffsetBlendSpace_BasePose_Offset = offsetof(FAnimNode_RotationOffsetBlendSpace, BasePose);
	static_assert(FAnimNode_RotationOffsetBlendSpace_BasePose_Offset == 0x128, "FAnimNode_RotationOffsetBlendSpace::BasePose offset is not 128");
	auto constexpr FAnimNode_RotationOffsetBlendSpace_LODThreshold_Offset = offsetof(FAnimNode_RotationOffsetBlendSpace, LODThreshold);
	static_assert(FAnimNode_RotationOffsetBlendSpace_LODThreshold_Offset == 0x140, "FAnimNode_RotationOffsetBlendSpace::LODThreshold offset is not 140");
	auto constexpr FAnimNode_RotationOffsetBlendSpace_Alpha_Offset = offsetof(FAnimNode_RotationOffsetBlendSpace, Alpha);
	static_assert(FAnimNode_RotationOffsetBlendSpace_Alpha_Offset == 0x148, "FAnimNode_RotationOffsetBlendSpace::Alpha offset is not 148");
	auto constexpr FAnimNode_RotationOffsetBlendSpace_AlphaScaleBias_Offset = offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBias);
	static_assert(FAnimNode_RotationOffsetBlendSpace_AlphaScaleBias_Offset == 0x14c, "FAnimNode_RotationOffsetBlendSpace::AlphaScaleBias offset is not 14c");
	auto constexpr FAnimNode_RotationOffsetBlendSpace_ActualAlpha_Offset = offsetof(FAnimNode_RotationOffsetBlendSpace, ActualAlpha);
	static_assert(FAnimNode_RotationOffsetBlendSpace_ActualAlpha_Offset == 0x154, "FAnimNode_RotationOffsetBlendSpace::ActualAlpha offset is not 154");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
