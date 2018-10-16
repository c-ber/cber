#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTrackToSkeletonMap // Size: 0x4
{
public:
    int32_t BoneTreeIndex; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.TrackToSkeletonMap.BoneTreeIndex */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTrackToSkeletonMap = sizeof(FTrackToSkeletonMap); // 4
    static_assert(sizeof(FTrackToSkeletonMap) == 0x4, "Size of FTrackToSkeletonMap is not correct.");
	auto constexpr FTrackToSkeletonMap_BoneTreeIndex_Offset = offsetof(FTrackToSkeletonMap, BoneTreeIndex);
	static_assert(FTrackToSkeletonMap_BoneTreeIndex_Offset == 0x0, "FTrackToSkeletonMap::BoneTreeIndex offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
