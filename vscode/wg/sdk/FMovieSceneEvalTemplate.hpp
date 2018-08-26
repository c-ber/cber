#pragma once
#include "FMovieSceneEvalTemplateBase.hpp"
#include "EMovieSceneCompletionMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEvalTemplate // Size: 0x18
 : public FMovieSceneEvalTemplateBase // Size: 0x10
{
public:
    TEnumAsByte<enum EMovieSceneCompletionMode> CompletionMode; /* Ofs: 0x10 Size: 0x1 EnumProperty MovieScene.MovieSceneEvalTemplate.CompletionMode */
    uint8_t UnknownData11[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEvalTemplate = sizeof(FMovieSceneEvalTemplate); // 24
    static_assert(sizeof(FMovieSceneEvalTemplate) == 0x18, "Size of FMovieSceneEvalTemplate is not correct.");
	auto constexpr FMovieSceneEvalTemplate_CompletionMode_Offset = offsetof(FMovieSceneEvalTemplate, CompletionMode);
	static_assert(FMovieSceneEvalTemplate_CompletionMode_Offset == 0x10, "FMovieSceneEvalTemplate::CompletionMode offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
