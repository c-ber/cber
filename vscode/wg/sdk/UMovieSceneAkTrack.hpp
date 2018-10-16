#pragma once
#include "UMovieSceneTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneAkTrack // Size: 0xD0
	: public UMovieSceneTrack // Size: 0xC0
{
private:
	typedef UMovieSceneAkTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2148); // id32("Class AkAudio.MovieSceneAkTrack")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMovieSceneSection>> Sections; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty AkAudio.MovieSceneAkTrack.Sections */
	uint8_t UnknownDataC0[0x8];
	uint8_t boolFieldC8;
	uint8_t UnknownDataC9[0x7];


//	inline bool SetSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xB8, value); }
	inline bool bIsAMasterTrack()
	{
		return boolFieldC8& 0x1;
	}
	inline bool SetbIsAMasterTrack(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneAkTrack = sizeof(UMovieSceneAkTrack); // 208
    static_assert(sizeof(UMovieSceneAkTrack) == 0xD0, "Size of UMovieSceneAkTrack is not correct.");
//	auto constexpr UMovieSceneAkTrack_Sections_Offset = offsetof(UMovieSceneAkTrack, Sections);
//	static_assert(UMovieSceneAkTrack_Sections_Offset == 0xb8, "UMovieSceneAkTrack::Sections offset is not b8");
	auto constexpr UMovieSceneAkTrack_boolFieldC8_Offset = offsetof(UMovieSceneAkTrack, boolFieldC8);
	static_assert(UMovieSceneAkTrack_boolFieldC8_Offset == 0xc8, "UMovieSceneAkTrack::boolFieldC8 offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
