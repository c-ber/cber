#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneColorSectionTemplate // Size: 0x1F0
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FName PropertyName; /* Ofs: 0x18 Size: 0x8 NameProperty MovieSceneTracks.MovieSceneColorSectionTemplate.PropertyName */
    FString PropertyPath; /* Ofs: 0x20 Size: 0x10 StrProperty MovieSceneTracks.MovieSceneColorSectionTemplate.PropertyPath */
    FRichCurve Curves[4]; /* Ofs: 0x30 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneColorSectionTemplate.Curves */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneColorSectionTemplate = sizeof(FMovieSceneColorSectionTemplate); // 496
    static_assert(sizeof(FMovieSceneColorSectionTemplate) == 0x1F0, "Size of FMovieSceneColorSectionTemplate is not correct.");
	auto constexpr FMovieSceneColorSectionTemplate_PropertyName_Offset = offsetof(FMovieSceneColorSectionTemplate, PropertyName);
	static_assert(FMovieSceneColorSectionTemplate_PropertyName_Offset == 0x18, "FMovieSceneColorSectionTemplate::PropertyName offset is not 18");
	auto constexpr FMovieSceneColorSectionTemplate_PropertyPath_Offset = offsetof(FMovieSceneColorSectionTemplate, PropertyPath);
	static_assert(FMovieSceneColorSectionTemplate_PropertyPath_Offset == 0x20, "FMovieSceneColorSectionTemplate::PropertyPath offset is not 20");
	auto constexpr FMovieSceneColorSectionTemplate_Curves_Offset = offsetof(FMovieSceneColorSectionTemplate, Curves);
	static_assert(FMovieSceneColorSectionTemplate_Curves_Offset == 0x30, "FMovieSceneColorSectionTemplate::Curves offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
