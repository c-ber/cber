#pragma once
#include "FPoseLinkBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FComponentSpacePoseLink // Size: 0x18
 : public FPoseLinkBase // Size: 0x18
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFComponentSpacePoseLink = sizeof(FComponentSpacePoseLink); // 24
    static_assert(sizeof(FComponentSpacePoseLink) == 0x18, "Size of FComponentSpacePoseLink is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
