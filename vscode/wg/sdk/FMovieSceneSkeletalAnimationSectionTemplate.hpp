#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneSkeletalAnimationSectionTemplateParameters.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSkeletalAnimationSectionTemplate // Size: 0xB0
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params; /* Ofs: 0x18 Size: 0x98 StructProperty MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate.Params */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSkeletalAnimationSectionTemplate = sizeof(FMovieSceneSkeletalAnimationSectionTemplate); // 176
    static_assert(sizeof(FMovieSceneSkeletalAnimationSectionTemplate) == 0xB0, "Size of FMovieSceneSkeletalAnimationSectionTemplate is not correct.");
	auto constexpr FMovieSceneSkeletalAnimationSectionTemplate_Params_Offset = offsetof(FMovieSceneSkeletalAnimationSectionTemplate, Params);
	static_assert(FMovieSceneSkeletalAnimationSectionTemplate_Params_Offset == 0x18, "FMovieSceneSkeletalAnimationSectionTemplate::Params offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
