#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPoseSnapshot // Size: 0x38
{
public:
    TArray<struct FTransform> LocalTransforms; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.PoseSnapshot.LocalTransforms */
    TArray<struct FName> BoneNames; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.PoseSnapshot.BoneNames */
    FName SkeletalMeshName; /* Ofs: 0x20 Size: 0x8 NameProperty Engine.PoseSnapshot.SkeletalMeshName */
    FName SnapshotName; /* Ofs: 0x28 Size: 0x8 NameProperty Engine.PoseSnapshot.SnapshotName */
    bool bIsValid; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty Engine.PoseSnapshot.bIsValid */
    uint8_t UnknownData31[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPoseSnapshot = sizeof(FPoseSnapshot); // 56
    static_assert(sizeof(FPoseSnapshot) == 0x38, "Size of FPoseSnapshot is not correct.");
	auto constexpr FPoseSnapshot_LocalTransforms_Offset = offsetof(FPoseSnapshot, LocalTransforms);
	static_assert(FPoseSnapshot_LocalTransforms_Offset == 0x0, "FPoseSnapshot::LocalTransforms offset is not 0");
	auto constexpr FPoseSnapshot_BoneNames_Offset = offsetof(FPoseSnapshot, BoneNames);
	static_assert(FPoseSnapshot_BoneNames_Offset == 0x10, "FPoseSnapshot::BoneNames offset is not 10");
	auto constexpr FPoseSnapshot_SkeletalMeshName_Offset = offsetof(FPoseSnapshot, SkeletalMeshName);
	static_assert(FPoseSnapshot_SkeletalMeshName_Offset == 0x20, "FPoseSnapshot::SkeletalMeshName offset is not 20");
	auto constexpr FPoseSnapshot_SnapshotName_Offset = offsetof(FPoseSnapshot, SnapshotName);
	static_assert(FPoseSnapshot_SnapshotName_Offset == 0x28, "FPoseSnapshot::SnapshotName offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
