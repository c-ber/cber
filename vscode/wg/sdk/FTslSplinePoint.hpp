#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslSplinePoint // Size: 0x1C
{
public:
    uint8_t UnknownData0[0x1C];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslSplinePoint = sizeof(FTslSplinePoint); // 28
    static_assert(sizeof(FTslSplinePoint) == 0x1C, "Size of FTslSplinePoint is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
