#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneAkAudioEventTemplate // Size: 0x20
{
public:
    uint8_t UnknownData0[0x18];
    ExternalPtr<struct UMovieSceneAkAudioEventSection> Section; /* Ofs: 0x18 Size: 0x8 ObjectProperty AkAudio.MovieSceneAkAudioEventTemplate.Section */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneAkAudioEventTemplate = sizeof(FMovieSceneAkAudioEventTemplate); // 32
    static_assert(sizeof(FMovieSceneAkAudioEventTemplate) == 0x20, "Size of FMovieSceneAkAudioEventTemplate is not correct.");
	auto constexpr FMovieSceneAkAudioEventTemplate_Section_Offset = offsetof(FMovieSceneAkAudioEventTemplate, Section);
	static_assert(FMovieSceneAkAudioEventTemplate_Section_Offset == 0x18, "FMovieSceneAkAudioEventTemplate::Section offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
