#pragma once
#include "FAnimNode_Base.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_TransitionResult // Size: 0x80
 : public FAnimNode_Base // Size: 0x30
{
public:
    bool bCanEnterTransition; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty Engine.AnimNode_TransitionResult.bCanEnterTransition */
    uint8_t UnknownData31[0x4F];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_TransitionResult = sizeof(FAnimNode_TransitionResult); // 128
    static_assert(sizeof(FAnimNode_TransitionResult) == 0x80, "Size of FAnimNode_TransitionResult is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
