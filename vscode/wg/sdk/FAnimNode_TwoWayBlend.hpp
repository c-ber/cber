#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#include "FInputScaleBias.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_TwoWayBlend // Size: 0x78
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink A; /* Ofs: 0x30 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_TwoWayBlend.A */
    FPoseLink B; /* Ofs: 0x48 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_TwoWayBlend.B */
    float Alpha; /* Ofs: 0x60 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_TwoWayBlend.Alpha */
    FInputScaleBias AlphaScaleBias; /* Ofs: 0x64 Size: 0x8 StructProperty AnimGraphRuntime.AnimNode_TwoWayBlend.AlphaScaleBias */
    float InternalBlendAlpha; /* Ofs: 0x6C Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_TwoWayBlend.InternalBlendAlpha */
    bool bAIsRelevant; /* Ofs: 0x70 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_TwoWayBlend.bAIsRelevant */
    bool bBIsRelevant; /* Ofs: 0x71 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_TwoWayBlend.bBIsRelevant */
    bool bResetChildOnActivation; /* Ofs: 0x72 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_TwoWayBlend.bResetChildOnActivation */
    uint8_t UnknownData73[0x5];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_TwoWayBlend = sizeof(FAnimNode_TwoWayBlend); // 120
    static_assert(sizeof(FAnimNode_TwoWayBlend) == 0x78, "Size of FAnimNode_TwoWayBlend is not correct.");
	auto constexpr FAnimNode_TwoWayBlend_A_Offset = offsetof(FAnimNode_TwoWayBlend, A);
	static_assert(FAnimNode_TwoWayBlend_A_Offset == 0x30, "FAnimNode_TwoWayBlend::A offset is not 30");
	auto constexpr FAnimNode_TwoWayBlend_B_Offset = offsetof(FAnimNode_TwoWayBlend, B);
	static_assert(FAnimNode_TwoWayBlend_B_Offset == 0x48, "FAnimNode_TwoWayBlend::B offset is not 48");
	auto constexpr FAnimNode_TwoWayBlend_Alpha_Offset = offsetof(FAnimNode_TwoWayBlend, Alpha);
	static_assert(FAnimNode_TwoWayBlend_Alpha_Offset == 0x60, "FAnimNode_TwoWayBlend::Alpha offset is not 60");
	auto constexpr FAnimNode_TwoWayBlend_AlphaScaleBias_Offset = offsetof(FAnimNode_TwoWayBlend, AlphaScaleBias);
	static_assert(FAnimNode_TwoWayBlend_AlphaScaleBias_Offset == 0x64, "FAnimNode_TwoWayBlend::AlphaScaleBias offset is not 64");
	auto constexpr FAnimNode_TwoWayBlend_InternalBlendAlpha_Offset = offsetof(FAnimNode_TwoWayBlend, InternalBlendAlpha);
	static_assert(FAnimNode_TwoWayBlend_InternalBlendAlpha_Offset == 0x6c, "FAnimNode_TwoWayBlend::InternalBlendAlpha offset is not 6c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
