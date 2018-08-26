#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEnumPropertySectionTemplate // Size: 0xB0
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieScenePropertySectionData PropertyData; /* Ofs: 0x18 Size: 0x28 StructProperty MovieSceneTracks.MovieSceneEnumPropertySectionTemplate.PropertyData */
    FIntegralCurve EnumCurve; /* Ofs: 0x40 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneEnumPropertySectionTemplate.EnumCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEnumPropertySectionTemplate = sizeof(FMovieSceneEnumPropertySectionTemplate); // 176
    static_assert(sizeof(FMovieSceneEnumPropertySectionTemplate) == 0xB0, "Size of FMovieSceneEnumPropertySectionTemplate is not correct.");
	auto constexpr FMovieSceneEnumPropertySectionTemplate_PropertyData_Offset = offsetof(FMovieSceneEnumPropertySectionTemplate, PropertyData);
	static_assert(FMovieSceneEnumPropertySectionTemplate_PropertyData_Offset == 0x18, "FMovieSceneEnumPropertySectionTemplate::PropertyData offset is not 18");
	auto constexpr FMovieSceneEnumPropertySectionTemplate_EnumCurve_Offset = offsetof(FMovieSceneEnumPropertySectionTemplate, EnumCurve);
	static_assert(FMovieSceneEnumPropertySectionTemplate_EnumCurve_Offset == 0x40, "FMovieSceneEnumPropertySectionTemplate::EnumCurve offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
