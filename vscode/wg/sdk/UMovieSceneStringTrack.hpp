#pragma once
#include "UMovieScenePropertyTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneStringTrack // Size: 0xE0
	: public UMovieScenePropertyTrack // Size: 0xE0
{
private:
	typedef UMovieSceneStringTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(130); // id32("Class MovieSceneTracks.MovieSceneStringTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneStringTrack = sizeof(UMovieSceneStringTrack); // 224
    static_assert(sizeof(UMovieSceneStringTrack) == 0xE0, "Size of UMovieSceneStringTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
