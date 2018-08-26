#pragma once
#include "EViewTargetBlendFunction.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FViewTargetTransitionParams // Size: 0x10
{
public:
    float BlendTime; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.ViewTargetTransitionParams.BlendTime */
    TEnumAsByte<enum EViewTargetBlendFunction> BlendFunction; /* Ofs: 0x4 Size: 0x1 ByteProperty Engine.ViewTargetTransitionParams.BlendFunction */
    uint8_t UnknownData5[0x3];
    float BlendExp; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.ViewTargetTransitionParams.BlendExp */
    bool bLockOutgoing; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Engine.ViewTargetTransitionParams.bLockOutgoing */
    uint8_t UnknownDataD[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFViewTargetTransitionParams = sizeof(FViewTargetTransitionParams); // 16
    static_assert(sizeof(FViewTargetTransitionParams) == 0x10, "Size of FViewTargetTransitionParams is not correct.");
	auto constexpr FViewTargetTransitionParams_BlendTime_Offset = offsetof(FViewTargetTransitionParams, BlendTime);
	static_assert(FViewTargetTransitionParams_BlendTime_Offset == 0x0, "FViewTargetTransitionParams::BlendTime offset is not 0");
	auto constexpr FViewTargetTransitionParams_BlendFunction_Offset = offsetof(FViewTargetTransitionParams, BlendFunction);
	static_assert(FViewTargetTransitionParams_BlendFunction_Offset == 0x4, "FViewTargetTransitionParams::BlendFunction offset is not 4");
	auto constexpr FViewTargetTransitionParams_BlendExp_Offset = offsetof(FViewTargetTransitionParams, BlendExp);
	static_assert(FViewTargetTransitionParams_BlendExp_Offset == 0x8, "FViewTargetTransitionParams::BlendExp offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
