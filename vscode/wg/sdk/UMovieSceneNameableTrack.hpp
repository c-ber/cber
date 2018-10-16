#pragma once
#include "UMovieSceneTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneNameableTrack // Size: 0xC0
	: public UMovieSceneTrack // Size: 0xC0
{
private:
	typedef UMovieSceneNameableTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(89); // id32("Class MovieScene.MovieSceneNameableTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneNameableTrack = sizeof(UMovieSceneNameableTrack); // 192
    static_assert(sizeof(UMovieSceneNameableTrack) == 0xC0, "Size of UMovieSceneNameableTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
