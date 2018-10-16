#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneBytePropertySectionTemplate // Size: 0xB0
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieScenePropertySectionData PropertyData; /* Ofs: 0x18 Size: 0x28 StructProperty MovieSceneTracks.MovieSceneBytePropertySectionTemplate.PropertyData */
    FIntegralCurve ByteCurve; /* Ofs: 0x40 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneBytePropertySectionTemplate.ByteCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneBytePropertySectionTemplate = sizeof(FMovieSceneBytePropertySectionTemplate); // 176
    static_assert(sizeof(FMovieSceneBytePropertySectionTemplate) == 0xB0, "Size of FMovieSceneBytePropertySectionTemplate is not correct.");
	auto constexpr FMovieSceneBytePropertySectionTemplate_PropertyData_Offset = offsetof(FMovieSceneBytePropertySectionTemplate, PropertyData);
	static_assert(FMovieSceneBytePropertySectionTemplate_PropertyData_Offset == 0x18, "FMovieSceneBytePropertySectionTemplate::PropertyData offset is not 18");
	auto constexpr FMovieSceneBytePropertySectionTemplate_ByteCurve_Offset = offsetof(FMovieSceneBytePropertySectionTemplate, ByteCurve);
	static_assert(FMovieSceneBytePropertySectionTemplate_ByteCurve_Offset == 0x40, "FMovieSceneBytePropertySectionTemplate::ByteCurve offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
