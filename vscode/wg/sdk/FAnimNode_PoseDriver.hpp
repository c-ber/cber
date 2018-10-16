#pragma once
#include "FAnimNode_PoseHandler.hpp"
#include "FPoseLink.hpp"
#include "FBoneReference.hpp"
#include "FRBFParams.hpp"
#include "EPoseDriverSource.hpp"
#include "EPoseDriverOutput.hpp"
#include "EBoneAxis.hpp"
#include "EPoseDriverType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_PoseDriver // Size: 0x178
 : public FAnimNode_PoseHandler // Size: 0xA0
{
public:
    FPoseLink SourcePose; /* Ofs: 0xA0 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_PoseDriver.SourcePose */
    TArray<struct FBoneReference> SourceBones; /* Ofs: 0xB8 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_PoseDriver.SourceBones */
    bool bOnlyDriveSelectedBones; /* Ofs: 0xC8 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_PoseDriver.bOnlyDriveSelectedBones */
    uint8_t UnknownDataC9[0x7];
    TArray<struct FBoneReference> OnlyDriveBones; /* Ofs: 0xD0 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_PoseDriver.OnlyDriveBones */
    FBoneReference EvalSpaceBone; /* Ofs: 0xE0 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_PoseDriver.EvalSpaceBone */
    FRBFParams RBFParams; /* Ofs: 0xF8 Size: 0x10 StructProperty AnimGraphRuntime.AnimNode_PoseDriver.RBFParams */
    TEnumAsByte<enum EPoseDriverSource> DriveSource; /* Ofs: 0x108 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_PoseDriver.DriveSource */
    TEnumAsByte<enum EPoseDriverOutput> DriveOutput; /* Ofs: 0x109 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_PoseDriver.DriveOutput */
    uint8_t UnknownData10A[0x6];
    TArray<struct FPoseDriverTarget> PoseTargets; /* Ofs: 0x110 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_PoseDriver.PoseTargets */
    FBoneReference SourceBone; /* Ofs: 0x120 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_PoseDriver.SourceBone */
    TEnumAsByte<enum EBoneAxis> TwistAxis; /* Ofs: 0x138 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_PoseDriver.TwistAxis */
    TEnumAsByte<enum EPoseDriverType> Type; /* Ofs: 0x139 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_PoseDriver.Type */
    uint8_t UnknownData13A[0x2];
    float RadialScaling; /* Ofs: 0x13C Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_PoseDriver.RadialScaling */
    uint8_t UnknownData140[0x38];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_PoseDriver = sizeof(FAnimNode_PoseDriver); // 376
    static_assert(sizeof(FAnimNode_PoseDriver) == 0x178, "Size of FAnimNode_PoseDriver is not correct.");
	auto constexpr FAnimNode_PoseDriver_SourcePose_Offset = offsetof(FAnimNode_PoseDriver, SourcePose);
	static_assert(FAnimNode_PoseDriver_SourcePose_Offset == 0xa0, "FAnimNode_PoseDriver::SourcePose offset is not a0");
	auto constexpr FAnimNode_PoseDriver_SourceBones_Offset = offsetof(FAnimNode_PoseDriver, SourceBones);
	static_assert(FAnimNode_PoseDriver_SourceBones_Offset == 0xb8, "FAnimNode_PoseDriver::SourceBones offset is not b8");
	auto constexpr FAnimNode_PoseDriver_OnlyDriveBones_Offset = offsetof(FAnimNode_PoseDriver, OnlyDriveBones);
	static_assert(FAnimNode_PoseDriver_OnlyDriveBones_Offset == 0xd0, "FAnimNode_PoseDriver::OnlyDriveBones offset is not d0");
	auto constexpr FAnimNode_PoseDriver_EvalSpaceBone_Offset = offsetof(FAnimNode_PoseDriver, EvalSpaceBone);
	static_assert(FAnimNode_PoseDriver_EvalSpaceBone_Offset == 0xe0, "FAnimNode_PoseDriver::EvalSpaceBone offset is not e0");
	auto constexpr FAnimNode_PoseDriver_RBFParams_Offset = offsetof(FAnimNode_PoseDriver, RBFParams);
	static_assert(FAnimNode_PoseDriver_RBFParams_Offset == 0xf8, "FAnimNode_PoseDriver::RBFParams offset is not f8");
	auto constexpr FAnimNode_PoseDriver_DriveSource_Offset = offsetof(FAnimNode_PoseDriver, DriveSource);
	static_assert(FAnimNode_PoseDriver_DriveSource_Offset == 0x108, "FAnimNode_PoseDriver::DriveSource offset is not 108");
	auto constexpr FAnimNode_PoseDriver_DriveOutput_Offset = offsetof(FAnimNode_PoseDriver, DriveOutput);
	static_assert(FAnimNode_PoseDriver_DriveOutput_Offset == 0x109, "FAnimNode_PoseDriver::DriveOutput offset is not 109");
	auto constexpr FAnimNode_PoseDriver_PoseTargets_Offset = offsetof(FAnimNode_PoseDriver, PoseTargets);
	static_assert(FAnimNode_PoseDriver_PoseTargets_Offset == 0x110, "FAnimNode_PoseDriver::PoseTargets offset is not 110");
	auto constexpr FAnimNode_PoseDriver_SourceBone_Offset = offsetof(FAnimNode_PoseDriver, SourceBone);
	static_assert(FAnimNode_PoseDriver_SourceBone_Offset == 0x120, "FAnimNode_PoseDriver::SourceBone offset is not 120");
	auto constexpr FAnimNode_PoseDriver_TwistAxis_Offset = offsetof(FAnimNode_PoseDriver, TwistAxis);
	static_assert(FAnimNode_PoseDriver_TwistAxis_Offset == 0x138, "FAnimNode_PoseDriver::TwistAxis offset is not 138");
	auto constexpr FAnimNode_PoseDriver_Type_Offset = offsetof(FAnimNode_PoseDriver, Type);
	static_assert(FAnimNode_PoseDriver_Type_Offset == 0x139, "FAnimNode_PoseDriver::Type offset is not 139");
	auto constexpr FAnimNode_PoseDriver_RadialScaling_Offset = offsetof(FAnimNode_PoseDriver, RadialScaling);
	static_assert(FAnimNode_PoseDriver_RadialScaling_Offset == 0x13c, "FAnimNode_PoseDriver::RadialScaling offset is not 13c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
