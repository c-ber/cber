#pragma once
#include "UMovieSceneNameableTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneParticleTrack // Size: 0xD0
	: public UMovieSceneNameableTrack // Size: 0xC0
{
private:
	typedef UMovieSceneParticleTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(118); // id32("Class MovieSceneTracks.MovieSceneParticleTrack")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMovieSceneSection>> ParticleSections; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneParticleTrack.ParticleSections */
	uint8_t UnknownDataC0[0x10];


//	inline bool SetParticleSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneParticleTrack = sizeof(UMovieSceneParticleTrack); // 208
    static_assert(sizeof(UMovieSceneParticleTrack) == 0xD0, "Size of UMovieSceneParticleTrack is not correct.");
//	auto constexpr UMovieSceneParticleTrack_ParticleSections_Offset = offsetof(UMovieSceneParticleTrack, ParticleSections);
//	static_assert(UMovieSceneParticleTrack_ParticleSections_Offset == 0xb8, "UMovieSceneParticleTrack::ParticleSections offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
