#pragma once
#include "FAnimNode_Base.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_SubInput // Size: 0x68
 : public FAnimNode_Base // Size: 0x30
{
public:
    uint8_t UnknownData30[0x38];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_SubInput = sizeof(FAnimNode_SubInput); // 104
    static_assert(sizeof(FAnimNode_SubInput) == 0x68, "Size of FAnimNode_SubInput is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
