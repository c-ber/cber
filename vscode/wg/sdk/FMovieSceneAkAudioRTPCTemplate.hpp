#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneAkAudioRTPCTemplate // Size: 0x20
{
public:
    uint8_t UnknownData0[0x18];
    ExternalPtr<struct UMovieSceneAkAudioRTPCSection> Section; /* Ofs: 0x18 Size: 0x8 ObjectProperty AkAudio.MovieSceneAkAudioRTPCTemplate.Section */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneAkAudioRTPCTemplate = sizeof(FMovieSceneAkAudioRTPCTemplate); // 32
    static_assert(sizeof(FMovieSceneAkAudioRTPCTemplate) == 0x20, "Size of FMovieSceneAkAudioRTPCTemplate is not correct.");
	auto constexpr FMovieSceneAkAudioRTPCTemplate_Section_Offset = offsetof(FMovieSceneAkAudioRTPCTemplate, Section);
	static_assert(FMovieSceneAkAudioRTPCTemplate_Section_Offset == 0x18, "FMovieSceneAkAudioRTPCTemplate::Section offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
