#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "EAxis.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_Trail // Size: 0x1B0
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FBoneReference TrailBone; /* Ofs: 0x70 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_Trail.TrailBone */
    int32_t ChainLength; /* Ofs: 0x88 Size: 0x4 IntProperty AnimGraphRuntime.AnimNode_Trail.ChainLength */
    TEnumAsByte<enum EAxis> ChainBoneAxis; /* Ofs: 0x8C Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_Trail.ChainBoneAxis */
    bool bInvertChainBoneAxis; /* Ofs: 0x8D Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_Trail.bInvertChainBoneAxis */
    uint8_t UnknownData8E[0x2];
    float TrailRelaxation; /* Ofs: 0x90 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_Trail.TrailRelaxation */
    uint8_t UnknownData94[0x4];
    FRuntimeFloatCurve TrailRelaxationSpeed; /* Ofs: 0x98 Size: 0x78 StructProperty AnimGraphRuntime.AnimNode_Trail.TrailRelaxationSpeed */
    bool bLimitStretch; /* Ofs: 0x110 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_Trail.bLimitStretch */
    uint8_t UnknownData111[0x3];
    float StretchLimit; /* Ofs: 0x114 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_Trail.StretchLimit */
    FVector FakeVelocity; /* Ofs: 0x118 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_Trail.FakeVelocity */
    bool bActorSpaceFakeVel; /* Ofs: 0x124 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_Trail.bActorSpaceFakeVel */
    uint8_t UnknownData125[0x3];
    FBoneReference BaseJoint; /* Ofs: 0x128 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_Trail.BaseJoint */
    uint8_t UnknownData140[0x70];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_Trail = sizeof(FAnimNode_Trail); // 432
    static_assert(sizeof(FAnimNode_Trail) == 0x1B0, "Size of FAnimNode_Trail is not correct.");
	auto constexpr FAnimNode_Trail_TrailBone_Offset = offsetof(FAnimNode_Trail, TrailBone);
	static_assert(FAnimNode_Trail_TrailBone_Offset == 0x70, "FAnimNode_Trail::TrailBone offset is not 70");
	auto constexpr FAnimNode_Trail_ChainLength_Offset = offsetof(FAnimNode_Trail, ChainLength);
	static_assert(FAnimNode_Trail_ChainLength_Offset == 0x88, "FAnimNode_Trail::ChainLength offset is not 88");
	auto constexpr FAnimNode_Trail_ChainBoneAxis_Offset = offsetof(FAnimNode_Trail, ChainBoneAxis);
	static_assert(FAnimNode_Trail_ChainBoneAxis_Offset == 0x8c, "FAnimNode_Trail::ChainBoneAxis offset is not 8c");
	auto constexpr FAnimNode_Trail_TrailRelaxation_Offset = offsetof(FAnimNode_Trail, TrailRelaxation);
	static_assert(FAnimNode_Trail_TrailRelaxation_Offset == 0x90, "FAnimNode_Trail::TrailRelaxation offset is not 90");
	auto constexpr FAnimNode_Trail_TrailRelaxationSpeed_Offset = offsetof(FAnimNode_Trail, TrailRelaxationSpeed);
	static_assert(FAnimNode_Trail_TrailRelaxationSpeed_Offset == 0x98, "FAnimNode_Trail::TrailRelaxationSpeed offset is not 98");
	auto constexpr FAnimNode_Trail_StretchLimit_Offset = offsetof(FAnimNode_Trail, StretchLimit);
	static_assert(FAnimNode_Trail_StretchLimit_Offset == 0x114, "FAnimNode_Trail::StretchLimit offset is not 114");
	auto constexpr FAnimNode_Trail_FakeVelocity_Offset = offsetof(FAnimNode_Trail, FakeVelocity);
	static_assert(FAnimNode_Trail_FakeVelocity_Offset == 0x118, "FAnimNode_Trail::FakeVelocity offset is not 118");
	auto constexpr FAnimNode_Trail_BaseJoint_Offset = offsetof(FAnimNode_Trail, BaseJoint);
	static_assert(FAnimNode_Trail_BaseJoint_Offset == 0x128, "FAnimNode_Trail::BaseJoint offset is not 128");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
