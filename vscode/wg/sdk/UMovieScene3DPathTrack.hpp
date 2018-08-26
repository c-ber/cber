#pragma once
#include "UMovieScene3DConstraintTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieScene3DPathTrack // Size: 0xD0
	: public UMovieScene3DConstraintTrack // Size: 0xD0
{
private:
	typedef UMovieScene3DPathTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(85); // id32("Class MovieSceneTracks.MovieScene3DPathTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieScene3DPathTrack = sizeof(UMovieScene3DPathTrack); // 208
    static_assert(sizeof(UMovieScene3DPathTrack) == 0xD0, "Size of UMovieScene3DPathTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
