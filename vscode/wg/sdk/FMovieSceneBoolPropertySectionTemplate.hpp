#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneBoolPropertySectionTemplate // Size: 0xB0
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieScenePropertySectionData PropertyData; /* Ofs: 0x18 Size: 0x28 StructProperty MovieSceneTracks.MovieSceneBoolPropertySectionTemplate.PropertyData */
    FIntegralCurve BoolCurve; /* Ofs: 0x40 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneBoolPropertySectionTemplate.BoolCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneBoolPropertySectionTemplate = sizeof(FMovieSceneBoolPropertySectionTemplate); // 176
    static_assert(sizeof(FMovieSceneBoolPropertySectionTemplate) == 0xB0, "Size of FMovieSceneBoolPropertySectionTemplate is not correct.");
	auto constexpr FMovieSceneBoolPropertySectionTemplate_PropertyData_Offset = offsetof(FMovieSceneBoolPropertySectionTemplate, PropertyData);
	static_assert(FMovieSceneBoolPropertySectionTemplate_PropertyData_Offset == 0x18, "FMovieSceneBoolPropertySectionTemplate::PropertyData offset is not 18");
	auto constexpr FMovieSceneBoolPropertySectionTemplate_BoolCurve_Offset = offsetof(FMovieSceneBoolPropertySectionTemplate, BoolCurve);
	static_assert(FMovieSceneBoolPropertySectionTemplate_BoolCurve_Offset == 0x40, "FMovieSceneBoolPropertySectionTemplate::BoolCurve offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
