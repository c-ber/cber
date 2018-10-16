#pragma once
#include "FAnimInstanceProxy.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimSingleNodeInstanceProxy // Size: 0x640
 : public FAnimInstanceProxy // Size: 0x4C0
{
public:
    uint8_t UnknownData4C0[0x180];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimSingleNodeInstanceProxy = sizeof(FAnimSingleNodeInstanceProxy); // 1600
    static_assert(sizeof(FAnimSingleNodeInstanceProxy) == 0x640, "Size of FAnimSingleNodeInstanceProxy is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
