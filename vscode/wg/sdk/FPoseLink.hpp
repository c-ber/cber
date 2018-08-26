#pragma once
#include "FPoseLinkBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPoseLink // Size: 0x18
 : public FPoseLinkBase // Size: 0x18
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPoseLink = sizeof(FPoseLink); // 24
    static_assert(sizeof(FPoseLink) == 0x18, "Size of FPoseLink is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
