#pragma once
#include "FAnimNode_BlendListBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_BlendListByBool // Size: 0xD0
 : public FAnimNode_BlendListBase // Size: 0xC8
{
public:
    bool bActiveValue; /* Ofs: 0xC8 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_BlendListByBool.bActiveValue */
    uint8_t UnknownDataC9[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_BlendListByBool = sizeof(FAnimNode_BlendListByBool); // 208
    static_assert(sizeof(FAnimNode_BlendListByBool) == 0xD0, "Size of FAnimNode_BlendListByBool is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
