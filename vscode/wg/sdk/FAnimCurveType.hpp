#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimCurveType // Size: 0x2
{
public:
    uint8_t UnknownData0[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimCurveType = sizeof(FAnimCurveType); // 2
    static_assert(sizeof(FAnimCurveType) == 0x2, "Size of FAnimCurveType is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
