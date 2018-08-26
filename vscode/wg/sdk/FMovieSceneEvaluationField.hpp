#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEvaluationField // Size: 0x30
{
public:
    TArray<struct FFloatRange> Ranges; /* Ofs: 0x0 Size: 0x10 ArrayProperty MovieScene.MovieSceneEvaluationField.Ranges */
    TArray<struct FMovieSceneEvaluationGroup> Groups; /* Ofs: 0x10 Size: 0x10 ArrayProperty MovieScene.MovieSceneEvaluationField.Groups */
    TArray<struct FMovieSceneEvaluationMetaData> MetaData; /* Ofs: 0x20 Size: 0x10 ArrayProperty MovieScene.MovieSceneEvaluationField.MetaData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEvaluationField = sizeof(FMovieSceneEvaluationField); // 48
    static_assert(sizeof(FMovieSceneEvaluationField) == 0x30, "Size of FMovieSceneEvaluationField is not correct.");
	auto constexpr FMovieSceneEvaluationField_Ranges_Offset = offsetof(FMovieSceneEvaluationField, Ranges);
	static_assert(FMovieSceneEvaluationField_Ranges_Offset == 0x0, "FMovieSceneEvaluationField::Ranges offset is not 0");
	auto constexpr FMovieSceneEvaluationField_Groups_Offset = offsetof(FMovieSceneEvaluationField, Groups);
	static_assert(FMovieSceneEvaluationField_Groups_Offset == 0x10, "FMovieSceneEvaluationField::Groups offset is not 10");
	auto constexpr FMovieSceneEvaluationField_MetaData_Offset = offsetof(FMovieSceneEvaluationField, MetaData);
	static_assert(FMovieSceneEvaluationField_MetaData_Offset == 0x20, "FMovieSceneEvaluationField::MetaData offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
