#pragma once
#include "FAnimNode_BlendListBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_BlendListByInt // Size: 0xD0
 : public FAnimNode_BlendListBase // Size: 0xC8
{
public:
    int32_t ActiveChildIndex; /* Ofs: 0xC8 Size: 0x4 IntProperty AnimGraphRuntime.AnimNode_BlendListByInt.ActiveChildIndex */
    uint8_t UnknownDataCC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_BlendListByInt = sizeof(FAnimNode_BlendListByInt); // 208
    static_assert(sizeof(FAnimNode_BlendListByInt) == 0xD0, "Size of FAnimNode_BlendListByInt is not correct.");
	auto constexpr FAnimNode_BlendListByInt_ActiveChildIndex_Offset = offsetof(FAnimNode_BlendListByInt, ActiveChildIndex);
	static_assert(FAnimNode_BlendListByInt_ActiveChildIndex_Offset == 0xc8, "FAnimNode_BlendListByInt::ActiveChildIndex offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
