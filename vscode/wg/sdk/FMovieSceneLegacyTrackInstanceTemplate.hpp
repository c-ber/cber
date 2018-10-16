#pragma once
#include "FMovieSceneEvalTemplate.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneLegacyTrackInstanceTemplate // Size: 0x20
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    ExternalPtr<struct UMovieSceneTrack> Track; /* Ofs: 0x18 Size: 0x8 ObjectProperty MovieScene.MovieSceneLegacyTrackInstanceTemplate.Track */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneLegacyTrackInstanceTemplate = sizeof(FMovieSceneLegacyTrackInstanceTemplate); // 32
    static_assert(sizeof(FMovieSceneLegacyTrackInstanceTemplate) == 0x20, "Size of FMovieSceneLegacyTrackInstanceTemplate is not correct.");
	auto constexpr FMovieSceneLegacyTrackInstanceTemplate_Track_Offset = offsetof(FMovieSceneLegacyTrackInstanceTemplate, Track);
	static_assert(FMovieSceneLegacyTrackInstanceTemplate_Track_Offset == 0x18, "FMovieSceneLegacyTrackInstanceTemplate::Track offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
