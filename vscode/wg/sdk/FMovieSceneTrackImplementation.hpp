#pragma once
#include "FMovieSceneEvalTemplateBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneTrackImplementation // Size: 0x10
 : public FMovieSceneEvalTemplateBase // Size: 0x10
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneTrackImplementation = sizeof(FMovieSceneTrackImplementation); // 16
    static_assert(sizeof(FMovieSceneTrackImplementation) == 0x10, "Size of FMovieSceneTrackImplementation is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
