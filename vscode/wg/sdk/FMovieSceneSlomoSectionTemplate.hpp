#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSlomoSectionTemplate // Size: 0x88
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FRichCurve SlomoCurve; /* Ofs: 0x18 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneSlomoSectionTemplate.SlomoCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSlomoSectionTemplate = sizeof(FMovieSceneSlomoSectionTemplate); // 136
    static_assert(sizeof(FMovieSceneSlomoSectionTemplate) == 0x88, "Size of FMovieSceneSlomoSectionTemplate is not correct.");
	auto constexpr FMovieSceneSlomoSectionTemplate_SlomoCurve_Offset = offsetof(FMovieSceneSlomoSectionTemplate, SlomoCurve);
	static_assert(FMovieSceneSlomoSectionTemplate_SlomoCurve_Offset == 0x18, "FMovieSceneSlomoSectionTemplate::SlomoCurve offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
