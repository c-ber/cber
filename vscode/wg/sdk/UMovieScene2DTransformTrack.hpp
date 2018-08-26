#pragma once
#include "UMovieScenePropertyTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieScene2DTransformTrack // Size: 0xE0
	: public UMovieScenePropertyTrack // Size: 0xE0
{
private:
	typedef UMovieScene2DTransformTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1629); // id32("Class UMG.MovieScene2DTransformTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieScene2DTransformTrack = sizeof(UMovieScene2DTransformTrack); // 224
    static_assert(sizeof(UMovieScene2DTransformTrack) == 0xE0, "Size of UMovieScene2DTransformTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
