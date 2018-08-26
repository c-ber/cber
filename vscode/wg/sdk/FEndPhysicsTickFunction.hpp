#pragma once
#include "FTickFunction.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEndPhysicsTickFunction // Size: 0x58
 : public FTickFunction // Size: 0x50
{
public:
    uint8_t UnknownData50[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEndPhysicsTickFunction = sizeof(FEndPhysicsTickFunction); // 88
    static_assert(sizeof(FEndPhysicsTickFunction) == 0x58, "Size of FEndPhysicsTickFunction is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
