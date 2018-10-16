#pragma once
#include "UMovieSceneFloatTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSlomoTrack // Size: 0xE0
	: public UMovieSceneFloatTrack // Size: 0xE0
{
private:
	typedef UMovieSceneSlomoTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(128); // id32("Class MovieSceneTracks.MovieSceneSlomoTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSlomoTrack = sizeof(UMovieSceneSlomoTrack); // 224
    static_assert(sizeof(UMovieSceneSlomoTrack) == 0xE0, "Size of UMovieSceneSlomoTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
