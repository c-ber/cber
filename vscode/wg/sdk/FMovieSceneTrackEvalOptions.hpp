#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneTrackEvalOptions // Size: 0x4
{
public:
    bool bCanEvaluateNearestSection : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty MovieScene.MovieSceneTrackEvalOptions.bCanEvaluateNearestSection */
    bool bEvaluateNearestSection : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty MovieScene.MovieSceneTrackEvalOptions.bEvaluateNearestSection */
    bool bEvaluateInPreroll : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty MovieScene.MovieSceneTrackEvalOptions.bEvaluateInPreroll */
    bool bEvaluateInPostroll : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 08 BoolProperty MovieScene.MovieSceneTrackEvalOptions.bEvaluateInPostroll */
    uint8_t UnknownData1[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneTrackEvalOptions = sizeof(FMovieSceneTrackEvalOptions); // 4
    static_assert(sizeof(FMovieSceneTrackEvalOptions) == 0x4, "Size of FMovieSceneTrackEvalOptions is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
