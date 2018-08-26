#pragma once
#include "FAnimNode_BlendSpacePlayer.hpp"
#include "FPoseLink.hpp"
#include "FVector.hpp"
#include "FBoneReference.hpp"
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_AimOffsetLookAt // Size: 0x210
 : public FAnimNode_BlendSpacePlayer // Size: 0x128
{
public:
    FPoseLink BasePose; /* Ofs: 0x128 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_AimOffsetLookAt.BasePose */
    int32_t LODThreshold; /* Ofs: 0x140 Size: 0x4 IntProperty AnimGraphRuntime.AnimNode_AimOffsetLookAt.LODThreshold */
    bool bIsLODEnabled; /* Ofs: 0x144 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AimOffsetLookAt.bIsLODEnabled */
    uint8_t UnknownData145[0x3];
    FVector LookAtLocation; /* Ofs: 0x148 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_AimOffsetLookAt.LookAtLocation */
    uint8_t UnknownData154[0x4];
    FName SourceSocketName; /* Ofs: 0x158 Size: 0x8 NameProperty AnimGraphRuntime.AnimNode_AimOffsetLookAt.SourceSocketName */
    FName PivotSocketName; /* Ofs: 0x160 Size: 0x8 NameProperty AnimGraphRuntime.AnimNode_AimOffsetLookAt.PivotSocketName */
    float Alpha; /* Ofs: 0x168 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_AimOffsetLookAt.Alpha */
    uint8_t UnknownData16C[0x4];
    FBoneReference SocketBoneReference; /* Ofs: 0x170 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_AimOffsetLookAt.SocketBoneReference */
    uint8_t UnknownData188[0x8];
    FTransform SocketLocalTransform; /* Ofs: 0x190 Size: 0x30 StructProperty AnimGraphRuntime.AnimNode_AimOffsetLookAt.SocketLocalTransform */
    FBoneReference PivotSocketBoneReference; /* Ofs: 0x1C0 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_AimOffsetLookAt.PivotSocketBoneReference */
    uint8_t UnknownData1D8[0x8];
    FTransform PivotSocketLocalTransform; /* Ofs: 0x1E0 Size: 0x30 StructProperty AnimGraphRuntime.AnimNode_AimOffsetLookAt.PivotSocketLocalTransform */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_AimOffsetLookAt = sizeof(FAnimNode_AimOffsetLookAt); // 528
    static_assert(sizeof(FAnimNode_AimOffsetLookAt) == 0x210, "Size of FAnimNode_AimOffsetLookAt is not correct.");
	auto constexpr FAnimNode_AimOffsetLookAt_BasePose_Offset = offsetof(FAnimNode_AimOffsetLookAt, BasePose);
	static_assert(FAnimNode_AimOffsetLookAt_BasePose_Offset == 0x128, "FAnimNode_AimOffsetLookAt::BasePose offset is not 128");
	auto constexpr FAnimNode_AimOffsetLookAt_LODThreshold_Offset = offsetof(FAnimNode_AimOffsetLookAt, LODThreshold);
	static_assert(FAnimNode_AimOffsetLookAt_LODThreshold_Offset == 0x140, "FAnimNode_AimOffsetLookAt::LODThreshold offset is not 140");
	auto constexpr FAnimNode_AimOffsetLookAt_LookAtLocation_Offset = offsetof(FAnimNode_AimOffsetLookAt, LookAtLocation);
	static_assert(FAnimNode_AimOffsetLookAt_LookAtLocation_Offset == 0x148, "FAnimNode_AimOffsetLookAt::LookAtLocation offset is not 148");
	auto constexpr FAnimNode_AimOffsetLookAt_SourceSocketName_Offset = offsetof(FAnimNode_AimOffsetLookAt, SourceSocketName);
	static_assert(FAnimNode_AimOffsetLookAt_SourceSocketName_Offset == 0x158, "FAnimNode_AimOffsetLookAt::SourceSocketName offset is not 158");
	auto constexpr FAnimNode_AimOffsetLookAt_PivotSocketName_Offset = offsetof(FAnimNode_AimOffsetLookAt, PivotSocketName);
	static_assert(FAnimNode_AimOffsetLookAt_PivotSocketName_Offset == 0x160, "FAnimNode_AimOffsetLookAt::PivotSocketName offset is not 160");
	auto constexpr FAnimNode_AimOffsetLookAt_Alpha_Offset = offsetof(FAnimNode_AimOffsetLookAt, Alpha);
	static_assert(FAnimNode_AimOffsetLookAt_Alpha_Offset == 0x168, "FAnimNode_AimOffsetLookAt::Alpha offset is not 168");
	auto constexpr FAnimNode_AimOffsetLookAt_SocketBoneReference_Offset = offsetof(FAnimNode_AimOffsetLookAt, SocketBoneReference);
	static_assert(FAnimNode_AimOffsetLookAt_SocketBoneReference_Offset == 0x170, "FAnimNode_AimOffsetLookAt::SocketBoneReference offset is not 170");
	auto constexpr FAnimNode_AimOffsetLookAt_SocketLocalTransform_Offset = offsetof(FAnimNode_AimOffsetLookAt, SocketLocalTransform);
	static_assert(FAnimNode_AimOffsetLookAt_SocketLocalTransform_Offset == 0x190, "FAnimNode_AimOffsetLookAt::SocketLocalTransform offset is not 190");
	auto constexpr FAnimNode_AimOffsetLookAt_PivotSocketBoneReference_Offset = offsetof(FAnimNode_AimOffsetLookAt, PivotSocketBoneReference);
	static_assert(FAnimNode_AimOffsetLookAt_PivotSocketBoneReference_Offset == 0x1c0, "FAnimNode_AimOffsetLookAt::PivotSocketBoneReference offset is not 1c0");
	auto constexpr FAnimNode_AimOffsetLookAt_PivotSocketLocalTransform_Offset = offsetof(FAnimNode_AimOffsetLookAt, PivotSocketLocalTransform);
	static_assert(FAnimNode_AimOffsetLookAt_PivotSocketLocalTransform_Offset == 0x1e0, "FAnimNode_AimOffsetLookAt::PivotSocketLocalTransform offset is not 1e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
