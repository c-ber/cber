#pragma once
#include "FMovieSceneParameterSectionTemplate.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneParticleParameterSectionTemplate // Size: 0x48
 : public FMovieSceneParameterSectionTemplate // Size: 0x48
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneParticleParameterSectionTemplate = sizeof(FMovieSceneParticleParameterSectionTemplate); // 72
    static_assert(sizeof(FMovieSceneParticleParameterSectionTemplate) == 0x48, "Size of FMovieSceneParticleParameterSectionTemplate is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
