#pragma once
#include "FMovieSceneSequenceID.hpp"
#include "FMovieSceneTrackIdentifier.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEvaluationFieldTrackPtr // Size: 0x8
{
public:
    FMovieSceneSequenceID SequenceID; /* Ofs: 0x0 Size: 0x4 StructProperty MovieScene.MovieSceneEvaluationFieldTrackPtr.SequenceID */
    FMovieSceneTrackIdentifier TrackIdentifier; /* Ofs: 0x4 Size: 0x4 StructProperty MovieScene.MovieSceneEvaluationFieldTrackPtr.TrackIdentifier */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEvaluationFieldTrackPtr = sizeof(FMovieSceneEvaluationFieldTrackPtr); // 8
    static_assert(sizeof(FMovieSceneEvaluationFieldTrackPtr) == 0x8, "Size of FMovieSceneEvaluationFieldTrackPtr is not correct.");
	auto constexpr FMovieSceneEvaluationFieldTrackPtr_SequenceID_Offset = offsetof(FMovieSceneEvaluationFieldTrackPtr, SequenceID);
	static_assert(FMovieSceneEvaluationFieldTrackPtr_SequenceID_Offset == 0x0, "FMovieSceneEvaluationFieldTrackPtr::SequenceID offset is not 0");
	auto constexpr FMovieSceneEvaluationFieldTrackPtr_TrackIdentifier_Offset = offsetof(FMovieSceneEvaluationFieldTrackPtr, TrackIdentifier);
	static_assert(FMovieSceneEvaluationFieldTrackPtr_TrackIdentifier_Offset == 0x4, "FMovieSceneEvaluationFieldTrackPtr::TrackIdentifier offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
