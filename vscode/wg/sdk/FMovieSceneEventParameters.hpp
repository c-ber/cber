#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEventParameters // Size: 0x20
{
public:
    uint8_t UnknownData0[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEventParameters = sizeof(FMovieSceneEventParameters); // 32
    static_assert(sizeof(FMovieSceneEventParameters) == 0x20, "Size of FMovieSceneEventParameters is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
