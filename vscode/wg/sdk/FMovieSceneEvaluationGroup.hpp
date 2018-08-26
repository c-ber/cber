#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEvaluationGroup // Size: 0x20
{
public:
    TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; /* Ofs: 0x0 Size: 0x10 ArrayProperty MovieScene.MovieSceneEvaluationGroup.LUTIndices */
    TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; /* Ofs: 0x10 Size: 0x10 ArrayProperty MovieScene.MovieSceneEvaluationGroup.SegmentPtrLUT */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEvaluationGroup = sizeof(FMovieSceneEvaluationGroup); // 32
    static_assert(sizeof(FMovieSceneEvaluationGroup) == 0x20, "Size of FMovieSceneEvaluationGroup is not correct.");
	auto constexpr FMovieSceneEvaluationGroup_LUTIndices_Offset = offsetof(FMovieSceneEvaluationGroup, LUTIndices);
	static_assert(FMovieSceneEvaluationGroup_LUTIndices_Offset == 0x0, "FMovieSceneEvaluationGroup::LUTIndices offset is not 0");
	auto constexpr FMovieSceneEvaluationGroup_SegmentPtrLUT_Offset = offsetof(FMovieSceneEvaluationGroup, SegmentPtrLUT);
	static_assert(FMovieSceneEvaluationGroup_SegmentPtrLUT_Offset == 0x10, "FMovieSceneEvaluationGroup::SegmentPtrLUT offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
