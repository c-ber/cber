#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFastArraySerializer // Size: 0xB0
{
public:
    uint8_t UnknownData0[0xB0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFastArraySerializer = sizeof(FFastArraySerializer); // 176
    static_assert(sizeof(FFastArraySerializer) == 0xB0, "Size of FFastArraySerializer is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
