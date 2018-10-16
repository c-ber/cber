#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEventReply // Size: 0xB8
{
public:
    uint8_t UnknownData0[0xB8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEventReply = sizeof(FEventReply); // 184
    static_assert(sizeof(FEventReply) == 0xB8, "Size of FEventReply is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
