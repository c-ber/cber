#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkeletonToMeshLinkup // Size: 0x20
{
public:
    TArray<int32_t> SkeletonToMeshTable; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.SkeletonToMeshLinkup.SkeletonToMeshTable */
    TArray<int32_t> MeshToSkeletonTable; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.SkeletonToMeshLinkup.MeshToSkeletonTable */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkeletonToMeshLinkup = sizeof(FSkeletonToMeshLinkup); // 32
    static_assert(sizeof(FSkeletonToMeshLinkup) == 0x20, "Size of FSkeletonToMeshLinkup is not correct.");
	auto constexpr FSkeletonToMeshLinkup_SkeletonToMeshTable_Offset = offsetof(FSkeletonToMeshLinkup, SkeletonToMeshTable);
	static_assert(FSkeletonToMeshLinkup_SkeletonToMeshTable_Offset == 0x0, "FSkeletonToMeshLinkup::SkeletonToMeshTable offset is not 0");
	auto constexpr FSkeletonToMeshLinkup_MeshToSkeletonTable_Offset = offsetof(FSkeletonToMeshLinkup, MeshToSkeletonTable);
	static_assert(FSkeletonToMeshLinkup_MeshToSkeletonTable_Offset == 0x10, "FSkeletonToMeshLinkup::MeshToSkeletonTable offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
