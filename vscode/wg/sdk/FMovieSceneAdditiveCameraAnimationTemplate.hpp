#pragma once
#include "FMovieSceneEvalTemplate.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneAdditiveCameraAnimationTemplate // Size: 0x18
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneAdditiveCameraAnimationTemplate = sizeof(FMovieSceneAdditiveCameraAnimationTemplate); // 24
    static_assert(sizeof(FMovieSceneAdditiveCameraAnimationTemplate) == 0x18, "Size of FMovieSceneAdditiveCameraAnimationTemplate is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
