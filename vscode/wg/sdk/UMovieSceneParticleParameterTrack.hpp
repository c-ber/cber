#pragma once
#include "UMovieSceneNameableTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneParticleParameterTrack // Size: 0xD0
	: public UMovieSceneNameableTrack // Size: 0xC0
{
private:
	typedef UMovieSceneParticleParameterTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(116); // id32("Class MovieSceneTracks.MovieSceneParticleParameterTrack")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMovieSceneSection>> Sections; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneParticleParameterTrack.Sections */
	uint8_t UnknownDataC0[0x10];


//	inline bool SetSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneParticleParameterTrack = sizeof(UMovieSceneParticleParameterTrack); // 208
    static_assert(sizeof(UMovieSceneParticleParameterTrack) == 0xD0, "Size of UMovieSceneParticleParameterTrack is not correct.");
//	auto constexpr UMovieSceneParticleParameterTrack_Sections_Offset = offsetof(UMovieSceneParticleParameterTrack, Sections);
//	static_assert(UMovieSceneParticleParameterTrack_Sections_Offset == 0xb8, "UMovieSceneParticleParameterTrack::Sections offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
