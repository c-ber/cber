#pragma once
#include "UMovieSceneSection.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneParticleSection // Size: 0x140
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneParticleSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(117); // id32("Class MovieSceneTracks.MovieSceneParticleSection")
		return ptr;
	}
	FIntegralCurve ParticleKeys; /* Ofs: 0xD0 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneParticleSection.ParticleKeys */


	inline bool SetParticleKeys(t_structHelper inst, FIntegralCurve value) { inst.WriteOffset(0xD0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneParticleSection = sizeof(UMovieSceneParticleSection); // 320
    static_assert(sizeof(UMovieSceneParticleSection) == 0x140, "Size of UMovieSceneParticleSection is not correct.");
	auto constexpr UMovieSceneParticleSection_ParticleKeys_Offset = offsetof(UMovieSceneParticleSection, ParticleKeys);
	static_assert(UMovieSceneParticleSection_ParticleKeys_Offset == 0xd0, "UMovieSceneParticleSection::ParticleKeys offset is not d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
