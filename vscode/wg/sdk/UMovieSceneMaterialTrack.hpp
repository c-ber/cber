#pragma once
#include "UMovieSceneNameableTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneMaterialTrack // Size: 0xD0
	: public UMovieSceneNameableTrack // Size: 0xC0
{
private:
	typedef UMovieSceneMaterialTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(113); // id32("Class MovieSceneTracks.MovieSceneMaterialTrack")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMovieSceneSection>> Sections; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneMaterialTrack.Sections */
	uint8_t UnknownDataC0[0x10];


//	inline bool SetSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneMaterialTrack = sizeof(UMovieSceneMaterialTrack); // 208
    static_assert(sizeof(UMovieSceneMaterialTrack) == 0xD0, "Size of UMovieSceneMaterialTrack is not correct.");
//	auto constexpr UMovieSceneMaterialTrack_Sections_Offset = offsetof(UMovieSceneMaterialTrack, Sections);
//	static_assert(UMovieSceneMaterialTrack_Sections_Offset == 0xb8, "UMovieSceneMaterialTrack::Sections offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
