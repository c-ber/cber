#pragma once
#include "UMovieSceneFloatTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneFadeTrack // Size: 0xE0
	: public UMovieSceneFloatTrack // Size: 0xE0
{
private:
	typedef UMovieSceneFadeTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(127); // id32("Class MovieSceneTracks.MovieSceneFadeTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneFadeTrack = sizeof(UMovieSceneFadeTrack); // 224
    static_assert(sizeof(UMovieSceneFadeTrack) == 0xE0, "Size of UMovieSceneFadeTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
