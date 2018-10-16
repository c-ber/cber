#pragma once
#include "FMovieSceneEvaluationFieldTrackPtr.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEvaluationFieldSegmentPtr // Size: 0xC
 : public FMovieSceneEvaluationFieldTrackPtr // Size: 0x8
{
public:
    int32_t SegmentIndex; /* Ofs: 0x8 Size: 0x4 IntProperty MovieScene.MovieSceneEvaluationFieldSegmentPtr.SegmentIndex */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEvaluationFieldSegmentPtr = sizeof(FMovieSceneEvaluationFieldSegmentPtr); // 12
    static_assert(sizeof(FMovieSceneEvaluationFieldSegmentPtr) == 0xC, "Size of FMovieSceneEvaluationFieldSegmentPtr is not correct.");
	auto constexpr FMovieSceneEvaluationFieldSegmentPtr_SegmentIndex_Offset = offsetof(FMovieSceneEvaluationFieldSegmentPtr, SegmentIndex);
	static_assert(FMovieSceneEvaluationFieldSegmentPtr_SegmentIndex_Offset == 0x8, "FMovieSceneEvaluationFieldSegmentPtr::SegmentIndex offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
