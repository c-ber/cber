#pragma once
#include "UMovieSceneNameableTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneAudioTrack // Size: 0xD0
	: public UMovieSceneNameableTrack // Size: 0xC0
{
private:
	typedef UMovieSceneAudioTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(90); // id32("Class MovieSceneTracks.MovieSceneAudioTrack")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMovieSceneSection>> AudioSections; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneAudioTrack.AudioSections */
	uint8_t UnknownDataC0[0x10];


//	inline bool SetAudioSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneAudioTrack = sizeof(UMovieSceneAudioTrack); // 208
    static_assert(sizeof(UMovieSceneAudioTrack) == 0xD0, "Size of UMovieSceneAudioTrack is not correct.");
//	auto constexpr UMovieSceneAudioTrack_AudioSections_Offset = offsetof(UMovieSceneAudioTrack, AudioSections);
//	static_assert(UMovieSceneAudioTrack_AudioSections_Offset == 0xb8, "UMovieSceneAudioTrack::AudioSections offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
