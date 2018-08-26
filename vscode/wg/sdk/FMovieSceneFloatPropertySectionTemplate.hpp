#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneFloatPropertySectionTemplate // Size: 0xB0
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieScenePropertySectionData PropertyData; /* Ofs: 0x18 Size: 0x28 StructProperty MovieSceneTracks.MovieSceneFloatPropertySectionTemplate.PropertyData */
    FRichCurve FloatCurve; /* Ofs: 0x40 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneFloatPropertySectionTemplate.FloatCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneFloatPropertySectionTemplate = sizeof(FMovieSceneFloatPropertySectionTemplate); // 176
    static_assert(sizeof(FMovieSceneFloatPropertySectionTemplate) == 0xB0, "Size of FMovieSceneFloatPropertySectionTemplate is not correct.");
	auto constexpr FMovieSceneFloatPropertySectionTemplate_PropertyData_Offset = offsetof(FMovieSceneFloatPropertySectionTemplate, PropertyData);
	static_assert(FMovieSceneFloatPropertySectionTemplate_PropertyData_Offset == 0x18, "FMovieSceneFloatPropertySectionTemplate::PropertyData offset is not 18");
	auto constexpr FMovieSceneFloatPropertySectionTemplate_FloatCurve_Offset = offsetof(FMovieSceneFloatPropertySectionTemplate, FloatCurve);
	static_assert(FMovieSceneFloatPropertySectionTemplate_FloatCurve_Offset == 0x40, "FMovieSceneFloatPropertySectionTemplate::FloatCurve offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
