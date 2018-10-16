#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneIntegerPropertySectionTemplate // Size: 0xB0
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieScenePropertySectionData PropertyData; /* Ofs: 0x18 Size: 0x28 StructProperty MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate.PropertyData */
    FIntegralCurve IntegerCurve; /* Ofs: 0x40 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate.IntegerCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneIntegerPropertySectionTemplate = sizeof(FMovieSceneIntegerPropertySectionTemplate); // 176
    static_assert(sizeof(FMovieSceneIntegerPropertySectionTemplate) == 0xB0, "Size of FMovieSceneIntegerPropertySectionTemplate is not correct.");
	auto constexpr FMovieSceneIntegerPropertySectionTemplate_PropertyData_Offset = offsetof(FMovieSceneIntegerPropertySectionTemplate, PropertyData);
	static_assert(FMovieSceneIntegerPropertySectionTemplate_PropertyData_Offset == 0x18, "FMovieSceneIntegerPropertySectionTemplate::PropertyData offset is not 18");
	auto constexpr FMovieSceneIntegerPropertySectionTemplate_IntegerCurve_Offset = offsetof(FMovieSceneIntegerPropertySectionTemplate, IntegerCurve);
	static_assert(FMovieSceneIntegerPropertySectionTemplate_IntegerCurve_Offset == 0x40, "FMovieSceneIntegerPropertySectionTemplate::IntegerCurve offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
