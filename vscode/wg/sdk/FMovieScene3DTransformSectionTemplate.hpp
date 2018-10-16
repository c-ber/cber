#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieScene3DTransformSectionTemplate // Size: 0x408
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FRichCurve TranslationCurve[3]; /* Ofs: 0x18 Size: 0x70 StructProperty MovieSceneTracks.MovieScene3DTransformSectionTemplate.TranslationCurve */
    FRichCurve RotationCurve[3]; /* Ofs: 0x168 Size: 0x70 StructProperty MovieSceneTracks.MovieScene3DTransformSectionTemplate.RotationCurve */
    FRichCurve ScaleCurve[3]; /* Ofs: 0x2B8 Size: 0x70 StructProperty MovieSceneTracks.MovieScene3DTransformSectionTemplate.ScaleCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieScene3DTransformSectionTemplate = sizeof(FMovieScene3DTransformSectionTemplate); // 1032
    static_assert(sizeof(FMovieScene3DTransformSectionTemplate) == 0x408, "Size of FMovieScene3DTransformSectionTemplate is not correct.");
	auto constexpr FMovieScene3DTransformSectionTemplate_TranslationCurve_Offset = offsetof(FMovieScene3DTransformSectionTemplate, TranslationCurve);
	static_assert(FMovieScene3DTransformSectionTemplate_TranslationCurve_Offset == 0x18, "FMovieScene3DTransformSectionTemplate::TranslationCurve offset is not 18");
	auto constexpr FMovieScene3DTransformSectionTemplate_RotationCurve_Offset = offsetof(FMovieScene3DTransformSectionTemplate, RotationCurve);
	static_assert(FMovieScene3DTransformSectionTemplate_RotationCurve_Offset == 0x168, "FMovieScene3DTransformSectionTemplate::RotationCurve offset is not 168");
	auto constexpr FMovieScene3DTransformSectionTemplate_ScaleCurve_Offset = offsetof(FMovieScene3DTransformSectionTemplate, ScaleCurve);
	static_assert(FMovieScene3DTransformSectionTemplate_ScaleCurve_Offset == 0x2b8, "FMovieScene3DTransformSectionTemplate::ScaleCurve offset is not 2b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
