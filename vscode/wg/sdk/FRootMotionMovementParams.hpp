#pragma once
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRootMotionMovementParams // Size: 0x40
{
public:
    bool bHasRootMotion; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.RootMotionMovementParams.bHasRootMotion */
    uint8_t UnknownData1[0x3];
    float BlendWeight; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.RootMotionMovementParams.BlendWeight */
    uint8_t UnknownData8[0x8];
    FTransform RootMotionTransform; /* Ofs: 0x10 Size: 0x30 StructProperty Engine.RootMotionMovementParams.RootMotionTransform */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRootMotionMovementParams = sizeof(FRootMotionMovementParams); // 64
    static_assert(sizeof(FRootMotionMovementParams) == 0x40, "Size of FRootMotionMovementParams is not correct.");
	auto constexpr FRootMotionMovementParams_BlendWeight_Offset = offsetof(FRootMotionMovementParams, BlendWeight);
	static_assert(FRootMotionMovementParams_BlendWeight_Offset == 0x4, "FRootMotionMovementParams::BlendWeight offset is not 4");
	auto constexpr FRootMotionMovementParams_RootMotionTransform_Offset = offsetof(FRootMotionMovementParams, RootMotionTransform);
	static_assert(FRootMotionMovementParams_RootMotionTransform_Offset == 0x10, "FRootMotionMovementParams::RootMotionTransform offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
