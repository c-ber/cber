#pragma once
#include "UMovieSceneBoolSection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSpawnSection // Size: 0x150
	: public UMovieSceneBoolSection // Size: 0x150
{
private:
	typedef UMovieSceneSpawnSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(92); // id32("Class MovieSceneTracks.MovieSceneSpawnSection")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSpawnSection = sizeof(UMovieSceneSpawnSection); // 336
    static_assert(sizeof(UMovieSceneSpawnSection) == 0x150, "Size of UMovieSceneSpawnSection is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
