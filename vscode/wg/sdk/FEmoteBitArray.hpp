#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEmoteBitArray // Size: 0x20
{
public:
    uint8_t UnknownData0[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEmoteBitArray = sizeof(FEmoteBitArray); // 32
    static_assert(sizeof(FEmoteBitArray) == 0x20, "Size of FEmoteBitArray is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
