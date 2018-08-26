#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FRichCurve.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneFadeSectionTemplate // Size: 0xA0
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FRichCurve FadeCurve; /* Ofs: 0x18 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneFadeSectionTemplate.FadeCurve */
    FLinearColor FadeColor; /* Ofs: 0x88 Size: 0x10 StructProperty MovieSceneTracks.MovieSceneFadeSectionTemplate.FadeColor */
    bool bFadeAudio; /* Ofs: 0x98 Size: 0x1 BitMask: 01 BoolProperty MovieSceneTracks.MovieSceneFadeSectionTemplate.bFadeAudio */
    uint8_t UnknownData99[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneFadeSectionTemplate = sizeof(FMovieSceneFadeSectionTemplate); // 160
    static_assert(sizeof(FMovieSceneFadeSectionTemplate) == 0xA0, "Size of FMovieSceneFadeSectionTemplate is not correct.");
	auto constexpr FMovieSceneFadeSectionTemplate_FadeCurve_Offset = offsetof(FMovieSceneFadeSectionTemplate, FadeCurve);
	static_assert(FMovieSceneFadeSectionTemplate_FadeCurve_Offset == 0x18, "FMovieSceneFadeSectionTemplate::FadeCurve offset is not 18");
	auto constexpr FMovieSceneFadeSectionTemplate_FadeColor_Offset = offsetof(FMovieSceneFadeSectionTemplate, FadeColor);
	static_assert(FMovieSceneFadeSectionTemplate_FadeColor_Offset == 0x88, "FMovieSceneFadeSectionTemplate::FadeColor offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
