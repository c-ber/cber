#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#include "FStringCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneStringPropertySectionTemplate // Size: 0xB8
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieScenePropertySectionData PropertyData; /* Ofs: 0x18 Size: 0x28 StructProperty MovieSceneTracks.MovieSceneStringPropertySectionTemplate.PropertyData */
    FStringCurve StringCurve; /* Ofs: 0x40 Size: 0x78 StructProperty MovieSceneTracks.MovieSceneStringPropertySectionTemplate.StringCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneStringPropertySectionTemplate = sizeof(FMovieSceneStringPropertySectionTemplate); // 184
    static_assert(sizeof(FMovieSceneStringPropertySectionTemplate) == 0xB8, "Size of FMovieSceneStringPropertySectionTemplate is not correct.");
	auto constexpr FMovieSceneStringPropertySectionTemplate_PropertyData_Offset = offsetof(FMovieSceneStringPropertySectionTemplate, PropertyData);
	static_assert(FMovieSceneStringPropertySectionTemplate_PropertyData_Offset == 0x18, "FMovieSceneStringPropertySectionTemplate::PropertyData offset is not 18");
	auto constexpr FMovieSceneStringPropertySectionTemplate_StringCurve_Offset = offsetof(FMovieSceneStringPropertySectionTemplate, StringCurve);
	static_assert(FMovieSceneStringPropertySectionTemplate_StringCurve_Offset == 0x40, "FMovieSceneStringPropertySectionTemplate::StringCurve offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
