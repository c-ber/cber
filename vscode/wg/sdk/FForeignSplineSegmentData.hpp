#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FForeignSplineSegmentData // Size: 0x1
{
public:
    uint8_t UnknownData0[0x1];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFForeignSplineSegmentData = sizeof(FForeignSplineSegmentData); // 1
    static_assert(sizeof(FForeignSplineSegmentData) == 0x1, "Size of FForeignSplineSegmentData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
