#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGeometry // Size: 0x34
{
public:
    uint8_t UnknownData0[0x34];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGeometry = sizeof(FGeometry); // 52
    static_assert(sizeof(FGeometry) == 0x34, "Size of FGeometry is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
