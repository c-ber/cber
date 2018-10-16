#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_WheelHandler // Size: 0x88
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    uint8_t UnknownData70[0x18];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_WheelHandler = sizeof(FAnimNode_WheelHandler); // 136
    static_assert(sizeof(FAnimNode_WheelHandler) == 0x88, "Size of FAnimNode_WheelHandler is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
