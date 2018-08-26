#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavAvoidanceData // Size: 0x3C
{
public:
    uint8_t UnknownData0[0x3C];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavAvoidanceData = sizeof(FNavAvoidanceData); // 60
    static_assert(sizeof(FNavAvoidanceData) == 0x3C, "Size of FNavAvoidanceData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
