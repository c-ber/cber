#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FScaleTrack // Size: 0x20
{
public:
    TArray<struct FVector> ScaleKeys; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.ScaleTrack.ScaleKeys */
    TArray<float> Times; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.ScaleTrack.Times */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFScaleTrack = sizeof(FScaleTrack); // 32
    static_assert(sizeof(FScaleTrack) == 0x20, "Size of FScaleTrack is not correct.");
	auto constexpr FScaleTrack_ScaleKeys_Offset = offsetof(FScaleTrack, ScaleKeys);
	static_assert(FScaleTrack_ScaleKeys_Offset == 0x0, "FScaleTrack::ScaleKeys offset is not 0");
	auto constexpr FScaleTrack_Times_Offset = offsetof(FScaleTrack, Times);
	static_assert(FScaleTrack_Times_Offset == 0x10, "FScaleTrack::Times offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
