#pragma once
#include "FMovieSceneEvalTemplate.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneParameterSectionTemplate // Size: 0x48
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    TArray<struct FScalarParameterNameAndCurve> Scalars; /* Ofs: 0x18 Size: 0x10 ArrayProperty MovieSceneTracks.MovieSceneParameterSectionTemplate.Scalars */
    TArray<struct FVectorParameterNameAndCurves> Vectors; /* Ofs: 0x28 Size: 0x10 ArrayProperty MovieSceneTracks.MovieSceneParameterSectionTemplate.Vectors */
    TArray<struct FColorParameterNameAndCurves> Colors; /* Ofs: 0x38 Size: 0x10 ArrayProperty MovieSceneTracks.MovieSceneParameterSectionTemplate.Colors */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneParameterSectionTemplate = sizeof(FMovieSceneParameterSectionTemplate); // 72
    static_assert(sizeof(FMovieSceneParameterSectionTemplate) == 0x48, "Size of FMovieSceneParameterSectionTemplate is not correct.");
	auto constexpr FMovieSceneParameterSectionTemplate_Scalars_Offset = offsetof(FMovieSceneParameterSectionTemplate, Scalars);
	static_assert(FMovieSceneParameterSectionTemplate_Scalars_Offset == 0x18, "FMovieSceneParameterSectionTemplate::Scalars offset is not 18");
	auto constexpr FMovieSceneParameterSectionTemplate_Vectors_Offset = offsetof(FMovieSceneParameterSectionTemplate, Vectors);
	static_assert(FMovieSceneParameterSectionTemplate_Vectors_Offset == 0x28, "FMovieSceneParameterSectionTemplate::Vectors offset is not 28");
	auto constexpr FMovieSceneParameterSectionTemplate_Colors_Offset = offsetof(FMovieSceneParameterSectionTemplate, Colors);
	static_assert(FMovieSceneParameterSectionTemplate_Colors_Offset == 0x38, "FMovieSceneParameterSectionTemplate::Colors offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
