#pragma once
#include "UMovieSceneAkTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneAkAudioRTPCTrack // Size: 0xD0
	: public UMovieSceneAkTrack // Size: 0xD0
{
private:
	typedef UMovieSceneAkAudioRTPCTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2150); // id32("Class AkAudio.MovieSceneAkAudioRTPCTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneAkAudioRTPCTrack = sizeof(UMovieSceneAkAudioRTPCTrack); // 208
    static_assert(sizeof(UMovieSceneAkAudioRTPCTrack) == 0xD0, "Size of UMovieSceneAkAudioRTPCTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
