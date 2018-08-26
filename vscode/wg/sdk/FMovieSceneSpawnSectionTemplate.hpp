#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSpawnSectionTemplate // Size: 0x88
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FIntegralCurve Curve; /* Ofs: 0x18 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneSpawnSectionTemplate.Curve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSpawnSectionTemplate = sizeof(FMovieSceneSpawnSectionTemplate); // 136
    static_assert(sizeof(FMovieSceneSpawnSectionTemplate) == 0x88, "Size of FMovieSceneSpawnSectionTemplate is not correct.");
	auto constexpr FMovieSceneSpawnSectionTemplate_Curve_Offset = offsetof(FMovieSceneSpawnSectionTemplate, Curve);
	static_assert(FMovieSceneSpawnSectionTemplate_Curve_Offset == 0x18, "FMovieSceneSpawnSectionTemplate::Curve offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
