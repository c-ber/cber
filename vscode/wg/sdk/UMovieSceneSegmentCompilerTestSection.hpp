#pragma once
#include "UMovieSceneSection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSegmentCompilerTestSection // Size: 0xD0
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneSegmentCompilerTestSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(325); // id32("Class MovieScene.MovieSceneSegmentCompilerTestSection")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSegmentCompilerTestSection = sizeof(UMovieSceneSegmentCompilerTestSection); // 208
    static_assert(sizeof(UMovieSceneSegmentCompilerTestSection) == 0xD0, "Size of UMovieSceneSegmentCompilerTestSection is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
