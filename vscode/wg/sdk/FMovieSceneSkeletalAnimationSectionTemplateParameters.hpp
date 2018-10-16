#pragma once
#include "FMovieSceneSkeletalAnimationParams.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSkeletalAnimationSectionTemplateParameters // Size: 0x98
 : public FMovieSceneSkeletalAnimationParams // Size: 0x90
{
public:
    float SectionStartTime; /* Ofs: 0x90 Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters.SectionStartTime */
    float SectionEndTime; /* Ofs: 0x94 Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters.SectionEndTime */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSkeletalAnimationSectionTemplateParameters = sizeof(FMovieSceneSkeletalAnimationSectionTemplateParameters); // 152
    static_assert(sizeof(FMovieSceneSkeletalAnimationSectionTemplateParameters) == 0x98, "Size of FMovieSceneSkeletalAnimationSectionTemplateParameters is not correct.");
	auto constexpr FMovieSceneSkeletalAnimationSectionTemplateParameters_SectionStartTime_Offset = offsetof(FMovieSceneSkeletalAnimationSectionTemplateParameters, SectionStartTime);
	static_assert(FMovieSceneSkeletalAnimationSectionTemplateParameters_SectionStartTime_Offset == 0x90, "FMovieSceneSkeletalAnimationSectionTemplateParameters::SectionStartTime offset is not 90");
	auto constexpr FMovieSceneSkeletalAnimationSectionTemplateParameters_SectionEndTime_Offset = offsetof(FMovieSceneSkeletalAnimationSectionTemplateParameters, SectionEndTime);
	static_assert(FMovieSceneSkeletalAnimationSectionTemplateParameters_SectionEndTime_Offset == 0x94, "FMovieSceneSkeletalAnimationSectionTemplateParameters::SectionEndTime offset is not 94");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
