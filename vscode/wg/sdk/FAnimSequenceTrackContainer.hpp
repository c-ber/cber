#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimSequenceTrackContainer // Size: 0x20
{
public:
    TArray<struct FRawAnimSequenceTrack> AnimationTracks; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.AnimSequenceTrackContainer.AnimationTracks */
    TArray<struct FName> TrackNames; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.AnimSequenceTrackContainer.TrackNames */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimSequenceTrackContainer = sizeof(FAnimSequenceTrackContainer); // 32
    static_assert(sizeof(FAnimSequenceTrackContainer) == 0x20, "Size of FAnimSequenceTrackContainer is not correct.");
	auto constexpr FAnimSequenceTrackContainer_AnimationTracks_Offset = offsetof(FAnimSequenceTrackContainer, AnimationTracks);
	static_assert(FAnimSequenceTrackContainer_AnimationTracks_Offset == 0x0, "FAnimSequenceTrackContainer::AnimationTracks offset is not 0");
	auto constexpr FAnimSequenceTrackContainer_TrackNames_Offset = offsetof(FAnimSequenceTrackContainer, TrackNames);
	static_assert(FAnimSequenceTrackContainer_TrackNames_Offset == 0x10, "FAnimSequenceTrackContainer::TrackNames offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
