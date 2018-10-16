#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCurveMetaData // Size: 0x18
{
public:
    uint8_t UnknownData0[0x18];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCurveMetaData = sizeof(FCurveMetaData); // 24
    static_assert(sizeof(FCurveMetaData) == 0x18, "Size of FCurveMetaData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
