#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWheelContactData // Size: 0x6
{
public:
    uint8_t UnknownData0[0x6];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWheelContactData = sizeof(FWheelContactData); // 6
    static_assert(sizeof(FWheelContactData) == 0x6, "Size of FWheelContactData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
