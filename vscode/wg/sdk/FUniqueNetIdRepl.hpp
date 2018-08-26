#pragma once
#include "FUniqueNetIdWrapper.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUniqueNetIdRepl // Size: 0x18
 : public FUniqueNetIdWrapper // Size: 0x1
{
public:
    uint8_t UnknownData1[0x17];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUniqueNetIdRepl = sizeof(FUniqueNetIdRepl); // 24
    static_assert(sizeof(FUniqueNetIdRepl) == 0x18, "Size of FUniqueNetIdRepl is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
