#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "ESplineBoneAxis.hpp"
#include "FAlphaBlend.hpp"
#include "FSplineCurves.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_SplineIK // Size: 0x210
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FBoneReference StartBone; /* Ofs: 0x70 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_SplineIK.StartBone */
    FBoneReference EndBone; /* Ofs: 0x88 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_SplineIK.EndBone */
    TEnumAsByte<enum ESplineBoneAxis> BoneAxis; /* Ofs: 0xA0 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_SplineIK.BoneAxis */
    bool bAutoCalculateSpline; /* Ofs: 0xA1 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_SplineIK.bAutoCalculateSpline */
    uint8_t UnknownDataA2[0x2];
    int32_t PointCount; /* Ofs: 0xA4 Size: 0x4 IntProperty AnimGraphRuntime.AnimNode_SplineIK.PointCount */
    TArray<struct FTransform> ControlPoints; /* Ofs: 0xA8 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_SplineIK.ControlPoints */
    float Roll; /* Ofs: 0xB8 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SplineIK.Roll */
    float TwistStart; /* Ofs: 0xBC Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SplineIK.TwistStart */
    float TwistEnd; /* Ofs: 0xC0 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SplineIK.TwistEnd */
    uint8_t UnknownDataC4[0x4];
    FAlphaBlend TwistBlend; /* Ofs: 0xC8 Size: 0x38 StructProperty AnimGraphRuntime.AnimNode_SplineIK.TwistBlend */
    float Stretch; /* Ofs: 0x100 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SplineIK.Stretch */
    float Offset; /* Ofs: 0x104 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SplineIK.Offset */
    uint8_t UnknownData108[0x70];
    FSplineCurves BoneSpline; /* Ofs: 0x178 Size: 0x60 StructProperty AnimGraphRuntime.AnimNode_SplineIK.BoneSpline */
    float OriginalSplineLength; /* Ofs: 0x1D8 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SplineIK.OriginalSplineLength */
    uint8_t UnknownData1DC[0x4];
    TArray<struct FSplineIKCachedBoneData> CachedBoneReferences; /* Ofs: 0x1E0 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_SplineIK.CachedBoneReferences */
    TArray<float> CachedBoneLengths; /* Ofs: 0x1F0 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_SplineIK.CachedBoneLengths */
    TArray<struct FQuat> CachedOffsetRotations; /* Ofs: 0x200 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_SplineIK.CachedOffsetRotations */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_SplineIK = sizeof(FAnimNode_SplineIK); // 528
    static_assert(sizeof(FAnimNode_SplineIK) == 0x210, "Size of FAnimNode_SplineIK is not correct.");
	auto constexpr FAnimNode_SplineIK_StartBone_Offset = offsetof(FAnimNode_SplineIK, StartBone);
	static_assert(FAnimNode_SplineIK_StartBone_Offset == 0x70, "FAnimNode_SplineIK::StartBone offset is not 70");
	auto constexpr FAnimNode_SplineIK_EndBone_Offset = offsetof(FAnimNode_SplineIK, EndBone);
	static_assert(FAnimNode_SplineIK_EndBone_Offset == 0x88, "FAnimNode_SplineIK::EndBone offset is not 88");
	auto constexpr FAnimNode_SplineIK_BoneAxis_Offset = offsetof(FAnimNode_SplineIK, BoneAxis);
	static_assert(FAnimNode_SplineIK_BoneAxis_Offset == 0xa0, "FAnimNode_SplineIK::BoneAxis offset is not a0");
	auto constexpr FAnimNode_SplineIK_PointCount_Offset = offsetof(FAnimNode_SplineIK, PointCount);
	static_assert(FAnimNode_SplineIK_PointCount_Offset == 0xa4, "FAnimNode_SplineIK::PointCount offset is not a4");
	auto constexpr FAnimNode_SplineIK_ControlPoints_Offset = offsetof(FAnimNode_SplineIK, ControlPoints);
	static_assert(FAnimNode_SplineIK_ControlPoints_Offset == 0xa8, "FAnimNode_SplineIK::ControlPoints offset is not a8");
	auto constexpr FAnimNode_SplineIK_Roll_Offset = offsetof(FAnimNode_SplineIK, Roll);
	static_assert(FAnimNode_SplineIK_Roll_Offset == 0xb8, "FAnimNode_SplineIK::Roll offset is not b8");
	auto constexpr FAnimNode_SplineIK_TwistStart_Offset = offsetof(FAnimNode_SplineIK, TwistStart);
	static_assert(FAnimNode_SplineIK_TwistStart_Offset == 0xbc, "FAnimNode_SplineIK::TwistStart offset is not bc");
	auto constexpr FAnimNode_SplineIK_TwistEnd_Offset = offsetof(FAnimNode_SplineIK, TwistEnd);
	static_assert(FAnimNode_SplineIK_TwistEnd_Offset == 0xc0, "FAnimNode_SplineIK::TwistEnd offset is not c0");
	auto constexpr FAnimNode_SplineIK_TwistBlend_Offset = offsetof(FAnimNode_SplineIK, TwistBlend);
	static_assert(FAnimNode_SplineIK_TwistBlend_Offset == 0xc8, "FAnimNode_SplineIK::TwistBlend offset is not c8");
	auto constexpr FAnimNode_SplineIK_Stretch_Offset = offsetof(FAnimNode_SplineIK, Stretch);
	static_assert(FAnimNode_SplineIK_Stretch_Offset == 0x100, "FAnimNode_SplineIK::Stretch offset is not 100");
	auto constexpr FAnimNode_SplineIK_Offset_Offset = offsetof(FAnimNode_SplineIK, Offset);
	static_assert(FAnimNode_SplineIK_Offset_Offset == 0x104, "FAnimNode_SplineIK::Offset offset is not 104");
	auto constexpr FAnimNode_SplineIK_BoneSpline_Offset = offsetof(FAnimNode_SplineIK, BoneSpline);
	static_assert(FAnimNode_SplineIK_BoneSpline_Offset == 0x178, "FAnimNode_SplineIK::BoneSpline offset is not 178");
	auto constexpr FAnimNode_SplineIK_OriginalSplineLength_Offset = offsetof(FAnimNode_SplineIK, OriginalSplineLength);
	static_assert(FAnimNode_SplineIK_OriginalSplineLength_Offset == 0x1d8, "FAnimNode_SplineIK::OriginalSplineLength offset is not 1d8");
	auto constexpr FAnimNode_SplineIK_CachedBoneReferences_Offset = offsetof(FAnimNode_SplineIK, CachedBoneReferences);
	static_assert(FAnimNode_SplineIK_CachedBoneReferences_Offset == 0x1e0, "FAnimNode_SplineIK::CachedBoneReferences offset is not 1e0");
	auto constexpr FAnimNode_SplineIK_CachedBoneLengths_Offset = offsetof(FAnimNode_SplineIK, CachedBoneLengths);
	static_assert(FAnimNode_SplineIK_CachedBoneLengths_Offset == 0x1f0, "FAnimNode_SplineIK::CachedBoneLengths offset is not 1f0");
	auto constexpr FAnimNode_SplineIK_CachedOffsetRotations_Offset = offsetof(FAnimNode_SplineIK, CachedOffsetRotations);
	static_assert(FAnimNode_SplineIK_CachedOffsetRotations_Offset == 0x200, "FAnimNode_SplineIK::CachedOffsetRotations offset is not 200");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
