#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLatentActionManager // Size: 0xF0
{
public:
    uint8_t UnknownData0[0xF0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLatentActionManager = sizeof(FLatentActionManager); // 240
    static_assert(sizeof(FLatentActionManager) == 0xF0, "Size of FLatentActionManager is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
