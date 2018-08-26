#pragma once
#include "UMovieSceneSection.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneAkAudioRTPCSection // Size: 0x160
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneAkAudioRTPCSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2147); // id32("Class AkAudio.MovieSceneAkAudioRTPCSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	FString Name; /* Ofs: 0xD8 Size: 0x10 - StrProperty AkAudio.MovieSceneAkAudioRTPCSection.Name */
	FRichCurve FloatCurve; /* Ofs: 0xE8 Size: 0x70 - StructProperty AkAudio.MovieSceneAkAudioRTPCSection.FloatCurve */
	uint8_t UnknownData158[0x8];


	inline bool SetName(t_structHelper inst, FString value) { inst.WriteOffset(0xD8, value); }
	inline bool SetFloatCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0xE8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneAkAudioRTPCSection = sizeof(UMovieSceneAkAudioRTPCSection); // 352
    static_assert(sizeof(UMovieSceneAkAudioRTPCSection) == 0x160, "Size of UMovieSceneAkAudioRTPCSection is not correct.");
	auto constexpr UMovieSceneAkAudioRTPCSection_Name_Offset = offsetof(UMovieSceneAkAudioRTPCSection, Name);
	static_assert(UMovieSceneAkAudioRTPCSection_Name_Offset == 0xd8, "UMovieSceneAkAudioRTPCSection::Name offset is not d8");
	auto constexpr UMovieSceneAkAudioRTPCSection_FloatCurve_Offset = offsetof(UMovieSceneAkAudioRTPCSection, FloatCurve);
	static_assert(UMovieSceneAkAudioRTPCSection_FloatCurve_Offset == 0xe8, "UMovieSceneAkAudioRTPCSection::FloatCurve offset is not e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
