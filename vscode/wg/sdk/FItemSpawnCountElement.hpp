#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FItemSpawnCountElement // Size: 0x18
{
public:
    uint8_t UnknownData0[0x18];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFItemSpawnCountElement = sizeof(FItemSpawnCountElement); // 24
    static_assert(sizeof(FItemSpawnCountElement) == 0x18, "Size of FItemSpawnCountElement is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
