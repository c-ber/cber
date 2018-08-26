#pragma once
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneAkAudioRTPCSectionData // Size: 0x80
{
public:
    FString RTPCName; /* Ofs: 0x0 Size: 0x10 StrProperty AkAudio.MovieSceneAkAudioRTPCSectionData.RTPCName */
    FRichCurve RTPCCurve; /* Ofs: 0x10 Size: 0x70 StructProperty AkAudio.MovieSceneAkAudioRTPCSectionData.RTPCCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneAkAudioRTPCSectionData = sizeof(FMovieSceneAkAudioRTPCSectionData); // 128
    static_assert(sizeof(FMovieSceneAkAudioRTPCSectionData) == 0x80, "Size of FMovieSceneAkAudioRTPCSectionData is not correct.");
	auto constexpr FMovieSceneAkAudioRTPCSectionData_RTPCName_Offset = offsetof(FMovieSceneAkAudioRTPCSectionData, RTPCName);
	static_assert(FMovieSceneAkAudioRTPCSectionData_RTPCName_Offset == 0x0, "FMovieSceneAkAudioRTPCSectionData::RTPCName offset is not 0");
	auto constexpr FMovieSceneAkAudioRTPCSectionData_RTPCCurve_Offset = offsetof(FMovieSceneAkAudioRTPCSectionData, RTPCCurve);
	static_assert(FMovieSceneAkAudioRTPCSectionData_RTPCCurve_Offset == 0x10, "FMovieSceneAkAudioRTPCSectionData::RTPCCurve offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
