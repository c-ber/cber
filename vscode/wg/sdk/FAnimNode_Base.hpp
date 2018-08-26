#pragma once
#include "FExposedValueHandler.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_Base // Size: 0x30
{
public:
    uint8_t UnknownData0[0x8];
    FExposedValueHandler EvaluateGraphExposedInputs; /* Ofs: 0x8 Size: 0x28 StructProperty Engine.AnimNode_Base.EvaluateGraphExposedInputs */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_Base = sizeof(FAnimNode_Base); // 48
    static_assert(sizeof(FAnimNode_Base) == 0x30, "Size of FAnimNode_Base is not correct.");
	auto constexpr FAnimNode_Base_EvaluateGraphExposedInputs_Offset = offsetof(FAnimNode_Base, EvaluateGraphExposedInputs);
	static_assert(FAnimNode_Base_EvaluateGraphExposedInputs_Offset == 0x8, "FAnimNode_Base::EvaluateGraphExposedInputs offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
