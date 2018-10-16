#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneTransformPropertySectionTemplate // Size: 0x430
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieScenePropertySectionData PropertyData; /* Ofs: 0x18 Size: 0x28 StructProperty MovieSceneTracks.MovieSceneTransformPropertySectionTemplate.PropertyData */
    FRichCurve TranslationCurve[3]; /* Ofs: 0x40 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneTransformPropertySectionTemplate.TranslationCurve */
    FRichCurve RotationCurve[3]; /* Ofs: 0x190 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneTransformPropertySectionTemplate.RotationCurve */
    FRichCurve ScaleCurve[3]; /* Ofs: 0x2E0 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneTransformPropertySectionTemplate.ScaleCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneTransformPropertySectionTemplate = sizeof(FMovieSceneTransformPropertySectionTemplate); // 1072
    static_assert(sizeof(FMovieSceneTransformPropertySectionTemplate) == 0x430, "Size of FMovieSceneTransformPropertySectionTemplate is not correct.");
	auto constexpr FMovieSceneTransformPropertySectionTemplate_PropertyData_Offset = offsetof(FMovieSceneTransformPropertySectionTemplate, PropertyData);
	static_assert(FMovieSceneTransformPropertySectionTemplate_PropertyData_Offset == 0x18, "FMovieSceneTransformPropertySectionTemplate::PropertyData offset is not 18");
	auto constexpr FMovieSceneTransformPropertySectionTemplate_TranslationCurve_Offset = offsetof(FMovieSceneTransformPropertySectionTemplate, TranslationCurve);
	static_assert(FMovieSceneTransformPropertySectionTemplate_TranslationCurve_Offset == 0x40, "FMovieSceneTransformPropertySectionTemplate::TranslationCurve offset is not 40");
	auto constexpr FMovieSceneTransformPropertySectionTemplate_RotationCurve_Offset = offsetof(FMovieSceneTransformPropertySectionTemplate, RotationCurve);
	static_assert(FMovieSceneTransformPropertySectionTemplate_RotationCurve_Offset == 0x190, "FMovieSceneTransformPropertySectionTemplate::RotationCurve offset is not 190");
	auto constexpr FMovieSceneTransformPropertySectionTemplate_ScaleCurve_Offset = offsetof(FMovieSceneTransformPropertySectionTemplate, ScaleCurve);
	static_assert(FMovieSceneTransformPropertySectionTemplate_ScaleCurve_Offset == 0x2e0, "FMovieSceneTransformPropertySectionTemplate::ScaleCurve offset is not 2e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
