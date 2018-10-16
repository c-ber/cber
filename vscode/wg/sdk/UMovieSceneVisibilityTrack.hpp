#pragma once
#include "UMovieSceneBoolTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneVisibilityTrack // Size: 0xE0
	: public UMovieSceneBoolTrack // Size: 0xE0
{
private:
	typedef UMovieSceneVisibilityTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(122); // id32("Class MovieSceneTracks.MovieSceneVisibilityTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneVisibilityTrack = sizeof(UMovieSceneVisibilityTrack); // 224
    static_assert(sizeof(UMovieSceneVisibilityTrack) == 0xE0, "Size of UMovieSceneVisibilityTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
