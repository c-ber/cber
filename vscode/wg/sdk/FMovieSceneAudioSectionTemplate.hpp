#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneAudioSectionTemplateData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneAudioSectionTemplate // Size: 0x150
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieSceneAudioSectionTemplateData AudioData; /* Ofs: 0x18 Size: 0x138 StructProperty MovieSceneTracks.MovieSceneAudioSectionTemplate.AudioData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneAudioSectionTemplate = sizeof(FMovieSceneAudioSectionTemplate); // 336
    static_assert(sizeof(FMovieSceneAudioSectionTemplate) == 0x150, "Size of FMovieSceneAudioSectionTemplate is not correct.");
	auto constexpr FMovieSceneAudioSectionTemplate_AudioData_Offset = offsetof(FMovieSceneAudioSectionTemplate, AudioData);
	static_assert(FMovieSceneAudioSectionTemplate_AudioData_Offset == 0x18, "FMovieSceneAudioSectionTemplate::AudioData offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
