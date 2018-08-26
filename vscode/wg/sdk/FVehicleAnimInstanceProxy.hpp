#pragma once
#include "FAnimInstanceProxy.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVehicleAnimInstanceProxy // Size: 0x4E0
 : public FAnimInstanceProxy // Size: 0x4C0
{
public:
    uint8_t UnknownData4C0[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVehicleAnimInstanceProxy = sizeof(FVehicleAnimInstanceProxy); // 1248
    static_assert(sizeof(FVehicleAnimInstanceProxy) == 0x4E0, "Size of FVehicleAnimInstanceProxy is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
