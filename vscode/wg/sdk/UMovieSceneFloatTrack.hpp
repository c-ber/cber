#pragma once
#include "UMovieScenePropertyTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneFloatTrack // Size: 0xE0
	: public UMovieScenePropertyTrack // Size: 0xE0
{
private:
	typedef UMovieSceneFloatTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126); // id32("Class MovieSceneTracks.MovieSceneFloatTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneFloatTrack = sizeof(UMovieSceneFloatTrack); // 224
    static_assert(sizeof(UMovieSceneFloatTrack) == 0xE0, "Size of UMovieSceneFloatTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
