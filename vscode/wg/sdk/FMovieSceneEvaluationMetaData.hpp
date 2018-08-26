#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEvaluationMetaData // Size: 0x10
{
public:
    TArray<struct FMovieSceneSequenceID> ActiveSequences; /* Ofs: 0x0 Size: 0x10 ArrayProperty MovieScene.MovieSceneEvaluationMetaData.ActiveSequences */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEvaluationMetaData = sizeof(FMovieSceneEvaluationMetaData); // 16
    static_assert(sizeof(FMovieSceneEvaluationMetaData) == 0x10, "Size of FMovieSceneEvaluationMetaData is not correct.");
	auto constexpr FMovieSceneEvaluationMetaData_ActiveSequences_Offset = offsetof(FMovieSceneEvaluationMetaData, ActiveSequences);
	static_assert(FMovieSceneEvaluationMetaData_ActiveSequences_Offset == 0x0, "FMovieSceneEvaluationMetaData::ActiveSequences offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
