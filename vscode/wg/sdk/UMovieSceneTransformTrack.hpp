#pragma once
#include "UMovieScenePropertyTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneTransformTrack // Size: 0xE0
	: public UMovieScenePropertyTrack // Size: 0xE0
{
private:
	typedef UMovieSceneTransformTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(131); // id32("Class MovieSceneTracks.MovieSceneTransformTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneTransformTrack = sizeof(UMovieSceneTransformTrack); // 224
    static_assert(sizeof(UMovieSceneTransformTrack) == 0xE0, "Size of UMovieSceneTransformTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
