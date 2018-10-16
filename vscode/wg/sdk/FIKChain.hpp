#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FIKChain // Size: 0x30
{
public:
    uint8_t UnknownData0[0x30];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFIKChain = sizeof(FIKChain); // 48
    static_assert(sizeof(FIKChain) == 0x30, "Size of FIKChain is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
