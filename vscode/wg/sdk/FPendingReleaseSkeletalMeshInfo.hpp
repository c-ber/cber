#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPendingReleaseSkeletalMeshInfo // Size: 0x10
{
public:
    ExternalPtr<struct USkeletalMesh> SkeletalMesh; /* Ofs: 0x0 Size: 0x8 ObjectProperty CustomizableObject.PendingReleaseSkeletalMeshInfo.SkeletalMesh */
    double Timestamp; /* Ofs: 0x8 Size: 0x8 DoubleProperty CustomizableObject.PendingReleaseSkeletalMeshInfo.Timestamp */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPendingReleaseSkeletalMeshInfo = sizeof(FPendingReleaseSkeletalMeshInfo); // 16
    static_assert(sizeof(FPendingReleaseSkeletalMeshInfo) == 0x10, "Size of FPendingReleaseSkeletalMeshInfo is not correct.");
	auto constexpr FPendingReleaseSkeletalMeshInfo_SkeletalMesh_Offset = offsetof(FPendingReleaseSkeletalMeshInfo, SkeletalMesh);
	static_assert(FPendingReleaseSkeletalMeshInfo_SkeletalMesh_Offset == 0x0, "FPendingReleaseSkeletalMeshInfo::SkeletalMesh offset is not 0");
	auto constexpr FPendingReleaseSkeletalMeshInfo_Timestamp_Offset = offsetof(FPendingReleaseSkeletalMeshInfo, Timestamp);
	static_assert(FPendingReleaseSkeletalMeshInfo_Timestamp_Offset == 0x8, "FPendingReleaseSkeletalMeshInfo::Timestamp offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
