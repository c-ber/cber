#pragma once
#include "UMovieSceneFloatSection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSlomoSection // Size: 0x150
	: public UMovieSceneFloatSection // Size: 0x150
{
private:
	typedef UMovieSceneSlomoSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(107); // id32("Class MovieSceneTracks.MovieSceneSlomoSection")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSlomoSection = sizeof(UMovieSceneSlomoSection); // 336
    static_assert(sizeof(UMovieSceneSlomoSection) == 0x150, "Size of UMovieSceneSlomoSection is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
