#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkinSketalMesh // Size: 0x8
{
public:
    ExternalPtr<struct USkeletalMesh> SkeletalMesh; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.SkinSketalMesh.SkeletalMesh */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkinSketalMesh = sizeof(FSkinSketalMesh); // 8
    static_assert(sizeof(FSkinSketalMesh) == 0x8, "Size of FSkinSketalMesh is not correct.");
	auto constexpr FSkinSketalMesh_SkeletalMesh_Offset = offsetof(FSkinSketalMesh, SkeletalMesh);
	static_assert(FSkinSketalMesh_SkeletalMesh_Offset == 0x0, "FSkinSketalMesh::SkeletalMesh offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
