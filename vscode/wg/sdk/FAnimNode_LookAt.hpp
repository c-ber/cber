#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "FVector.hpp"
#include "EAxisOption.hpp"
#include "FAxis.hpp"
#include "EInterpolationBlend.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_LookAt // Size: 0x180
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FBoneReference BoneToModify; /* Ofs: 0x70 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_LookAt.BoneToModify */
    FBoneReference LookAtBone; /* Ofs: 0x88 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_LookAt.LookAtBone */
    FName LookAtSocket; /* Ofs: 0xA0 Size: 0x8 NameProperty AnimGraphRuntime.AnimNode_LookAt.LookAtSocket */
    FVector LookAtLocation; /* Ofs: 0xA8 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_LookAt.LookAtLocation */
    TEnumAsByte<enum EAxisOption> LookAtAxis; /* Ofs: 0xB4 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_LookAt.LookAtAxis */
    uint8_t UnknownDataB5[0x3];
    FVector CustomLookAtAxis; /* Ofs: 0xB8 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_LookAt.CustomLookAtAxis */
    FAxis LookAt_Axis; /* Ofs: 0xC4 Size: 0x10 StructProperty AnimGraphRuntime.AnimNode_LookAt.LookAt_Axis */
    bool bUseLookUpAxis; /* Ofs: 0xD4 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_LookAt.bUseLookUpAxis */
    TEnumAsByte<enum EAxisOption> LookUpAxis; /* Ofs: 0xD5 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_LookAt.LookUpAxis */
    uint8_t UnknownDataD6[0x2];
    FVector CustomLookUpAxis; /* Ofs: 0xD8 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_LookAt.CustomLookUpAxis */
    FAxis LookUp_Axis; /* Ofs: 0xE4 Size: 0x10 StructProperty AnimGraphRuntime.AnimNode_LookAt.LookUp_Axis */
    float LookAtClamp; /* Ofs: 0xF4 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_LookAt.LookAtClamp */
    TEnumAsByte<enum EInterpolationBlend> InterpolationType; /* Ofs: 0xF8 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_LookAt.InterpolationType */
    uint8_t UnknownDataF9[0x3];
    float InterpolationTime; /* Ofs: 0xFC Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_LookAt.InterpolationTime */
    float InterpolationTriggerThreashold; /* Ofs: 0x100 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_LookAt.InterpolationTriggerThreashold */
    uint8_t UnknownData104[0x7C];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_LookAt = sizeof(FAnimNode_LookAt); // 384
    static_assert(sizeof(FAnimNode_LookAt) == 0x180, "Size of FAnimNode_LookAt is not correct.");
	auto constexpr FAnimNode_LookAt_BoneToModify_Offset = offsetof(FAnimNode_LookAt, BoneToModify);
	static_assert(FAnimNode_LookAt_BoneToModify_Offset == 0x70, "FAnimNode_LookAt::BoneToModify offset is not 70");
	auto constexpr FAnimNode_LookAt_LookAtBone_Offset = offsetof(FAnimNode_LookAt, LookAtBone);
	static_assert(FAnimNode_LookAt_LookAtBone_Offset == 0x88, "FAnimNode_LookAt::LookAtBone offset is not 88");
	auto constexpr FAnimNode_LookAt_LookAtSocket_Offset = offsetof(FAnimNode_LookAt, LookAtSocket);
	static_assert(FAnimNode_LookAt_LookAtSocket_Offset == 0xa0, "FAnimNode_LookAt::LookAtSocket offset is not a0");
	auto constexpr FAnimNode_LookAt_LookAtLocation_Offset = offsetof(FAnimNode_LookAt, LookAtLocation);
	static_assert(FAnimNode_LookAt_LookAtLocation_Offset == 0xa8, "FAnimNode_LookAt::LookAtLocation offset is not a8");
	auto constexpr FAnimNode_LookAt_LookAtAxis_Offset = offsetof(FAnimNode_LookAt, LookAtAxis);
	static_assert(FAnimNode_LookAt_LookAtAxis_Offset == 0xb4, "FAnimNode_LookAt::LookAtAxis offset is not b4");
	auto constexpr FAnimNode_LookAt_CustomLookAtAxis_Offset = offsetof(FAnimNode_LookAt, CustomLookAtAxis);
	static_assert(FAnimNode_LookAt_CustomLookAtAxis_Offset == 0xb8, "FAnimNode_LookAt::CustomLookAtAxis offset is not b8");
	auto constexpr FAnimNode_LookAt_LookAt_Axis_Offset = offsetof(FAnimNode_LookAt, LookAt_Axis);
	static_assert(FAnimNode_LookAt_LookAt_Axis_Offset == 0xc4, "FAnimNode_LookAt::LookAt_Axis offset is not c4");
	auto constexpr FAnimNode_LookAt_LookUpAxis_Offset = offsetof(FAnimNode_LookAt, LookUpAxis);
	static_assert(FAnimNode_LookAt_LookUpAxis_Offset == 0xd5, "FAnimNode_LookAt::LookUpAxis offset is not d5");
	auto constexpr FAnimNode_LookAt_CustomLookUpAxis_Offset = offsetof(FAnimNode_LookAt, CustomLookUpAxis);
	static_assert(FAnimNode_LookAt_CustomLookUpAxis_Offset == 0xd8, "FAnimNode_LookAt::CustomLookUpAxis offset is not d8");
	auto constexpr FAnimNode_LookAt_LookUp_Axis_Offset = offsetof(FAnimNode_LookAt, LookUp_Axis);
	static_assert(FAnimNode_LookAt_LookUp_Axis_Offset == 0xe4, "FAnimNode_LookAt::LookUp_Axis offset is not e4");
	auto constexpr FAnimNode_LookAt_LookAtClamp_Offset = offsetof(FAnimNode_LookAt, LookAtClamp);
	static_assert(FAnimNode_LookAt_LookAtClamp_Offset == 0xf4, "FAnimNode_LookAt::LookAtClamp offset is not f4");
	auto constexpr FAnimNode_LookAt_InterpolationType_Offset = offsetof(FAnimNode_LookAt, InterpolationType);
	static_assert(FAnimNode_LookAt_InterpolationType_Offset == 0xf8, "FAnimNode_LookAt::InterpolationType offset is not f8");
	auto constexpr FAnimNode_LookAt_InterpolationTime_Offset = offsetof(FAnimNode_LookAt, InterpolationTime);
	static_assert(FAnimNode_LookAt_InterpolationTime_Offset == 0xfc, "FAnimNode_LookAt::InterpolationTime offset is not fc");
	auto constexpr FAnimNode_LookAt_InterpolationTriggerThreashold_Offset = offsetof(FAnimNode_LookAt, InterpolationTriggerThreashold);
	static_assert(FAnimNode_LookAt_InterpolationTriggerThreashold_Offset == 0x100, "FAnimNode_LookAt::InterpolationTriggerThreashold offset is not 100");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
