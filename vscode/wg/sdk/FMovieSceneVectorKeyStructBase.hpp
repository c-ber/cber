#pragma once
#include "FMovieSceneKeyStruct.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneVectorKeyStructBase // Size: 0x48
 : public FMovieSceneKeyStruct // Size: 0x8
{
public:
    uint8_t UnknownData8[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneVectorKeyStructBase = sizeof(FMovieSceneVectorKeyStructBase); // 72
    static_assert(sizeof(FMovieSceneVectorKeyStructBase) == 0x48, "Size of FMovieSceneVectorKeyStructBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
