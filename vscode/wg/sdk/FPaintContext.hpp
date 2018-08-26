#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPaintContext // Size: 0x30
{
public:
    uint8_t UnknownData0[0x30];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPaintContext = sizeof(FPaintContext); // 48
    static_assert(sizeof(FPaintContext) == 0x30, "Size of FPaintContext is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
