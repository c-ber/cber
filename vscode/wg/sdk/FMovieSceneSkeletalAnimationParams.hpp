#pragma once
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSkeletalAnimationParams // Size: 0x90
{
public:
    ExternalPtr<struct UAnimSequenceBase> Animation; /* Ofs: 0x0 Size: 0x8 ObjectProperty MovieSceneTracks.MovieSceneSkeletalAnimationParams.Animation */
    float StartOffset; /* Ofs: 0x8 Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneSkeletalAnimationParams.StartOffset */
    float EndOffset; /* Ofs: 0xC Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneSkeletalAnimationParams.EndOffset */
    float PlayRate; /* Ofs: 0x10 Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneSkeletalAnimationParams.PlayRate */
    bool bReverse; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty MovieSceneTracks.MovieSceneSkeletalAnimationParams.bReverse */
    uint8_t UnknownData15[0x3];
    FName SlotName; /* Ofs: 0x18 Size: 0x8 NameProperty MovieSceneTracks.MovieSceneSkeletalAnimationParams.SlotName */
    FRichCurve Weight; /* Ofs: 0x20 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneSkeletalAnimationParams.Weight */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSkeletalAnimationParams = sizeof(FMovieSceneSkeletalAnimationParams); // 144
    static_assert(sizeof(FMovieSceneSkeletalAnimationParams) == 0x90, "Size of FMovieSceneSkeletalAnimationParams is not correct.");
	auto constexpr FMovieSceneSkeletalAnimationParams_Animation_Offset = offsetof(FMovieSceneSkeletalAnimationParams, Animation);
	static_assert(FMovieSceneSkeletalAnimationParams_Animation_Offset == 0x0, "FMovieSceneSkeletalAnimationParams::Animation offset is not 0");
	auto constexpr FMovieSceneSkeletalAnimationParams_StartOffset_Offset = offsetof(FMovieSceneSkeletalAnimationParams, StartOffset);
	static_assert(FMovieSceneSkeletalAnimationParams_StartOffset_Offset == 0x8, "FMovieSceneSkeletalAnimationParams::StartOffset offset is not 8");
	auto constexpr FMovieSceneSkeletalAnimationParams_EndOffset_Offset = offsetof(FMovieSceneSkeletalAnimationParams, EndOffset);
	static_assert(FMovieSceneSkeletalAnimationParams_EndOffset_Offset == 0xc, "FMovieSceneSkeletalAnimationParams::EndOffset offset is not c");
	auto constexpr FMovieSceneSkeletalAnimationParams_PlayRate_Offset = offsetof(FMovieSceneSkeletalAnimationParams, PlayRate);
	static_assert(FMovieSceneSkeletalAnimationParams_PlayRate_Offset == 0x10, "FMovieSceneSkeletalAnimationParams::PlayRate offset is not 10");
	auto constexpr FMovieSceneSkeletalAnimationParams_SlotName_Offset = offsetof(FMovieSceneSkeletalAnimationParams, SlotName);
	static_assert(FMovieSceneSkeletalAnimationParams_SlotName_Offset == 0x18, "FMovieSceneSkeletalAnimationParams::SlotName offset is not 18");
	auto constexpr FMovieSceneSkeletalAnimationParams_Weight_Offset = offsetof(FMovieSceneSkeletalAnimationParams, Weight);
	static_assert(FMovieSceneSkeletalAnimationParams_Weight_Offset == 0x20, "FMovieSceneSkeletalAnimationParams::Weight offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
