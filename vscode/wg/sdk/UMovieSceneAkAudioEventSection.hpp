#pragma once
#include "UMovieSceneSection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneAkAudioEventSection // Size: 0xF0
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneAkAudioEventSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2146); // id32("Class AkAudio.MovieSceneAkAudioEventSection")
		return ptr;
	}
	ExternalPtr<struct UAkAudioEvent> Event; /* Ofs: 0xD0 Size: 0x8 - ObjectProperty AkAudio.MovieSceneAkAudioEventSection.Event */
	FString EventName; /* Ofs: 0xD8 Size: 0x10 - StrProperty AkAudio.MovieSceneAkAudioEventSection.EventName */
	uint8_t UnknownDataE8[0x8];


	inline bool SetEvent(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetEventName(t_structHelper inst, FString value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneAkAudioEventSection = sizeof(UMovieSceneAkAudioEventSection); // 240
    static_assert(sizeof(UMovieSceneAkAudioEventSection) == 0xF0, "Size of UMovieSceneAkAudioEventSection is not correct.");
	auto constexpr UMovieSceneAkAudioEventSection_Event_Offset = offsetof(UMovieSceneAkAudioEventSection, Event);
	static_assert(UMovieSceneAkAudioEventSection_Event_Offset == 0xd0, "UMovieSceneAkAudioEventSection::Event offset is not d0");
	auto constexpr UMovieSceneAkAudioEventSection_EventName_Offset = offsetof(UMovieSceneAkAudioEventSection, EventName);
	static_assert(UMovieSceneAkAudioEventSection_EventName_Offset == 0xd8, "UMovieSceneAkAudioEventSection::EventName offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
