#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimTrack // Size: 0x10
{
public:
    TArray<struct FAnimSegment> AnimSegments; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.AnimTrack.AnimSegments */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimTrack = sizeof(FAnimTrack); // 16
    static_assert(sizeof(FAnimTrack) == 0x10, "Size of FAnimTrack is not correct.");
	auto constexpr FAnimTrack_AnimSegments_Offset = offsetof(FAnimTrack, AnimSegments);
	static_assert(FAnimTrack_AnimSegments_Offset == 0x0, "FAnimTrack::AnimSegments offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
