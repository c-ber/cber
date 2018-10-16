#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimGroupInstance // Size: 0x80
{
public:
    uint8_t UnknownData0[0x80];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimGroupInstance = sizeof(FAnimGroupInstance); // 128
    static_assert(sizeof(FAnimGroupInstance) == 0x80, "Size of FAnimGroupInstance is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
