#pragma once
#include "UMovieSceneAkTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneAkAudioEventTrack // Size: 0xD0
	: public UMovieSceneAkTrack // Size: 0xD0
{
private:
	typedef UMovieSceneAkAudioEventTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2149); // id32("Class AkAudio.MovieSceneAkAudioEventTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneAkAudioEventTrack = sizeof(UMovieSceneAkAudioEventTrack); // 208
    static_assert(sizeof(UMovieSceneAkAudioEventTrack) == 0xD0, "Size of UMovieSceneAkAudioEventTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
