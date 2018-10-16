#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVector_NetQuantize // Size: 0xC
 : public FVector // Size: 0xC
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVector_NetQuantize = sizeof(FVector_NetQuantize); // 12
    static_assert(sizeof(FVector_NetQuantize) == 0xC, "Size of FVector_NetQuantize is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
