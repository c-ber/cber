#pragma once
#include "EMovieSceneCompletionMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSectionEvalOptions // Size: 0x2
{
public:
    bool bCanEditCompletionMode; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty MovieScene.MovieSceneSectionEvalOptions.bCanEditCompletionMode */
    TEnumAsByte<enum EMovieSceneCompletionMode> CompletionMode; /* Ofs: 0x1 Size: 0x1 EnumProperty MovieScene.MovieSceneSectionEvalOptions.CompletionMode */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSectionEvalOptions = sizeof(FMovieSceneSectionEvalOptions); // 2
    static_assert(sizeof(FMovieSceneSectionEvalOptions) == 0x2, "Size of FMovieSceneSectionEvalOptions is not correct.");
	auto constexpr FMovieSceneSectionEvalOptions_CompletionMode_Offset = offsetof(FMovieSceneSectionEvalOptions, CompletionMode);
	static_assert(FMovieSceneSectionEvalOptions_CompletionMode_Offset == 0x1, "FMovieSceneSectionEvalOptions::CompletionMode offset is not 1");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
