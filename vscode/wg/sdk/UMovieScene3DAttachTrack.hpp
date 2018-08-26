#pragma once
#include "UMovieScene3DConstraintTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieScene3DAttachTrack // Size: 0xD0
	: public UMovieScene3DConstraintTrack // Size: 0xD0
{
private:
	typedef UMovieScene3DAttachTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(84); // id32("Class MovieSceneTracks.MovieScene3DAttachTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieScene3DAttachTrack = sizeof(UMovieScene3DAttachTrack); // 208
    static_assert(sizeof(UMovieScene3DAttachTrack) == 0xD0, "Size of UMovieScene3DAttachTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
