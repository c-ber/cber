#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneParticleSectionTemplate // Size: 0x88
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FIntegralCurve ParticleKeys; /* Ofs: 0x18 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneParticleSectionTemplate.ParticleKeys */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneParticleSectionTemplate = sizeof(FMovieSceneParticleSectionTemplate); // 136
    static_assert(sizeof(FMovieSceneParticleSectionTemplate) == 0x88, "Size of FMovieSceneParticleSectionTemplate is not correct.");
	auto constexpr FMovieSceneParticleSectionTemplate_ParticleKeys_Offset = offsetof(FMovieSceneParticleSectionTemplate, ParticleKeys);
	static_assert(FMovieSceneParticleSectionTemplate_ParticleKeys_Offset == 0x18, "FMovieSceneParticleSectionTemplate::ParticleKeys offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
