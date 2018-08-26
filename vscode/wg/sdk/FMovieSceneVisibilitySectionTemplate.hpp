#pragma once
#include "FMovieSceneBoolPropertySectionTemplate.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneVisibilitySectionTemplate // Size: 0xB8
 : public FMovieSceneBoolPropertySectionTemplate // Size: 0xB0
{
public:
    bool bTemporarilyHiddenInGame; /* Ofs: 0xB0 Size: 0x1 BitMask: 01 BoolProperty MovieSceneTracks.MovieSceneVisibilitySectionTemplate.bTemporarilyHiddenInGame */
    uint8_t UnknownDataB1[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneVisibilitySectionTemplate = sizeof(FMovieSceneVisibilitySectionTemplate); // 184
    static_assert(sizeof(FMovieSceneVisibilitySectionTemplate) == 0xB8, "Size of FMovieSceneVisibilitySectionTemplate is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
