#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#include "FBoneReference.hpp"
#include "FVector.hpp"
#include "FInputScaleBias.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_ScaleChainLength // Size: 0xB0
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink InputPose; /* Ofs: 0x30 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_ScaleChainLength.InputPose */
    float DefaultChainLength; /* Ofs: 0x48 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_ScaleChainLength.DefaultChainLength */
    uint8_t UnknownData4C[0x4];
    FBoneReference ChainStartBone; /* Ofs: 0x50 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_ScaleChainLength.ChainStartBone */
    FBoneReference ChainEndBone; /* Ofs: 0x68 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_ScaleChainLength.ChainEndBone */
    FVector TargetLocation; /* Ofs: 0x80 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_ScaleChainLength.TargetLocation */
    float Alpha; /* Ofs: 0x8C Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_ScaleChainLength.Alpha */
    FInputScaleBias AlphaScaleBias; /* Ofs: 0x90 Size: 0x8 StructProperty AnimGraphRuntime.AnimNode_ScaleChainLength.AlphaScaleBias */
    bool bBoneIndicesCached; /* Ofs: 0x98 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_ScaleChainLength.bBoneIndicesCached */
    uint8_t UnknownData99[0x17];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_ScaleChainLength = sizeof(FAnimNode_ScaleChainLength); // 176
    static_assert(sizeof(FAnimNode_ScaleChainLength) == 0xB0, "Size of FAnimNode_ScaleChainLength is not correct.");
	auto constexpr FAnimNode_ScaleChainLength_InputPose_Offset = offsetof(FAnimNode_ScaleChainLength, InputPose);
	static_assert(FAnimNode_ScaleChainLength_InputPose_Offset == 0x30, "FAnimNode_ScaleChainLength::InputPose offset is not 30");
	auto constexpr FAnimNode_ScaleChainLength_DefaultChainLength_Offset = offsetof(FAnimNode_ScaleChainLength, DefaultChainLength);
	static_assert(FAnimNode_ScaleChainLength_DefaultChainLength_Offset == 0x48, "FAnimNode_ScaleChainLength::DefaultChainLength offset is not 48");
	auto constexpr FAnimNode_ScaleChainLength_ChainStartBone_Offset = offsetof(FAnimNode_ScaleChainLength, ChainStartBone);
	static_assert(FAnimNode_ScaleChainLength_ChainStartBone_Offset == 0x50, "FAnimNode_ScaleChainLength::ChainStartBone offset is not 50");
	auto constexpr FAnimNode_ScaleChainLength_ChainEndBone_Offset = offsetof(FAnimNode_ScaleChainLength, ChainEndBone);
	static_assert(FAnimNode_ScaleChainLength_ChainEndBone_Offset == 0x68, "FAnimNode_ScaleChainLength::ChainEndBone offset is not 68");
	auto constexpr FAnimNode_ScaleChainLength_TargetLocation_Offset = offsetof(FAnimNode_ScaleChainLength, TargetLocation);
	static_assert(FAnimNode_ScaleChainLength_TargetLocation_Offset == 0x80, "FAnimNode_ScaleChainLength::TargetLocation offset is not 80");
	auto constexpr FAnimNode_ScaleChainLength_Alpha_Offset = offsetof(FAnimNode_ScaleChainLength, Alpha);
	static_assert(FAnimNode_ScaleChainLength_Alpha_Offset == 0x8c, "FAnimNode_ScaleChainLength::Alpha offset is not 8c");
	auto constexpr FAnimNode_ScaleChainLength_AlphaScaleBias_Offset = offsetof(FAnimNode_ScaleChainLength, AlphaScaleBias);
	static_assert(FAnimNode_ScaleChainLength_AlphaScaleBias_Offset == 0x90, "FAnimNode_ScaleChainLength::AlphaScaleBias offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
