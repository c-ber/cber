#pragma once
#include "FMovieSceneEvalTemplate.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSkeletalAnimationSharedTrack // Size: 0x18
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSkeletalAnimationSharedTrack = sizeof(FMovieSceneSkeletalAnimationSharedTrack); // 24
    static_assert(sizeof(FMovieSceneSkeletalAnimationSharedTrack) == 0x18, "Size of FMovieSceneSkeletalAnimationSharedTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
