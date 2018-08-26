#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEvaluationGroupLUTIndex // Size: 0x10
{
public:
    bool bRequiresImmediateFlush; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty MovieScene.MovieSceneEvaluationGroupLUTIndex.bRequiresImmediateFlush */
    uint8_t UnknownData1[0x3];
    int32_t LUTOffset; /* Ofs: 0x4 Size: 0x4 IntProperty MovieScene.MovieSceneEvaluationGroupLUTIndex.LUTOffset */
    int32_t NumInitPtrs; /* Ofs: 0x8 Size: 0x4 IntProperty MovieScene.MovieSceneEvaluationGroupLUTIndex.NumInitPtrs */
    int32_t NumEvalPtrs; /* Ofs: 0xC Size: 0x4 IntProperty MovieScene.MovieSceneEvaluationGroupLUTIndex.NumEvalPtrs */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEvaluationGroupLUTIndex = sizeof(FMovieSceneEvaluationGroupLUTIndex); // 16
    static_assert(sizeof(FMovieSceneEvaluationGroupLUTIndex) == 0x10, "Size of FMovieSceneEvaluationGroupLUTIndex is not correct.");
	auto constexpr FMovieSceneEvaluationGroupLUTIndex_LUTOffset_Offset = offsetof(FMovieSceneEvaluationGroupLUTIndex, LUTOffset);
	static_assert(FMovieSceneEvaluationGroupLUTIndex_LUTOffset_Offset == 0x4, "FMovieSceneEvaluationGroupLUTIndex::LUTOffset offset is not 4");
	auto constexpr FMovieSceneEvaluationGroupLUTIndex_NumInitPtrs_Offset = offsetof(FMovieSceneEvaluationGroupLUTIndex, NumInitPtrs);
	static_assert(FMovieSceneEvaluationGroupLUTIndex_NumInitPtrs_Offset == 0x8, "FMovieSceneEvaluationGroupLUTIndex::NumInitPtrs offset is not 8");
	auto constexpr FMovieSceneEvaluationGroupLUTIndex_NumEvalPtrs_Offset = offsetof(FMovieSceneEvaluationGroupLUTIndex, NumEvalPtrs);
	static_assert(FMovieSceneEvaluationGroupLUTIndex_NumEvalPtrs_Offset == 0xc, "FMovieSceneEvaluationGroupLUTIndex::NumEvalPtrs offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
