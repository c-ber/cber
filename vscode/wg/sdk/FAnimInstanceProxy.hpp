#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimInstanceProxy // Size: 0x4C0
{
public:
    uint8_t UnknownData0[0x4C0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimInstanceProxy = sizeof(FAnimInstanceProxy); // 1216
    static_assert(sizeof(FAnimInstanceProxy) == 0x4C0, "Size of FAnimInstanceProxy is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
