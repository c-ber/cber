#pragma once
#include "FMovieSceneEvaluationTemplate.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCachedMovieSceneEvaluationTemplate // Size: 0x220
 : public FMovieSceneEvaluationTemplate // Size: 0x220
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCachedMovieSceneEvaluationTemplate = sizeof(FCachedMovieSceneEvaluationTemplate); // 544
    static_assert(sizeof(FCachedMovieSceneEvaluationTemplate) == 0x220, "Size of FCachedMovieSceneEvaluationTemplate is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
