#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavGraphEdge // Size: 0x18
{
public:
    uint8_t UnknownData0[0x18];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavGraphEdge = sizeof(FNavGraphEdge); // 24
    static_assert(sizeof(FNavGraphEdge) == 0x18, "Size of FNavGraphEdge is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
