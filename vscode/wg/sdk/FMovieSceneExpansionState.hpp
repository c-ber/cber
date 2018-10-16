#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneExpansionState // Size: 0x1
{
public:
    bool bExpanded; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty MovieScene.MovieSceneExpansionState.bExpanded */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneExpansionState = sizeof(FMovieSceneExpansionState); // 1
    static_assert(sizeof(FMovieSceneExpansionState) == 0x1, "Size of FMovieSceneExpansionState is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
