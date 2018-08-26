#pragma once
#include "FAnimNode_Base.hpp"
#include "FInputScaleBias.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_MultiWayBlend // Size: 0x70
 : public FAnimNode_Base // Size: 0x30
{
public:
    TArray<struct FPoseLink> Poses; /* Ofs: 0x30 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_MultiWayBlend.Poses */
    TArray<float> DesiredAlphas; /* Ofs: 0x40 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_MultiWayBlend.DesiredAlphas */
    bool bAdditiveNode; /* Ofs: 0x50 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_MultiWayBlend.bAdditiveNode */
    bool bNormalizeAlpha; /* Ofs: 0x51 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_MultiWayBlend.bNormalizeAlpha */
    uint8_t UnknownData52[0x2];
    FInputScaleBias AlphaScaleBias; /* Ofs: 0x54 Size: 0x8 StructProperty AnimGraphRuntime.AnimNode_MultiWayBlend.AlphaScaleBias */
    uint8_t UnknownData5C[0x14];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_MultiWayBlend = sizeof(FAnimNode_MultiWayBlend); // 112
    static_assert(sizeof(FAnimNode_MultiWayBlend) == 0x70, "Size of FAnimNode_MultiWayBlend is not correct.");
	auto constexpr FAnimNode_MultiWayBlend_Poses_Offset = offsetof(FAnimNode_MultiWayBlend, Poses);
	static_assert(FAnimNode_MultiWayBlend_Poses_Offset == 0x30, "FAnimNode_MultiWayBlend::Poses offset is not 30");
	auto constexpr FAnimNode_MultiWayBlend_DesiredAlphas_Offset = offsetof(FAnimNode_MultiWayBlend, DesiredAlphas);
	static_assert(FAnimNode_MultiWayBlend_DesiredAlphas_Offset == 0x40, "FAnimNode_MultiWayBlend::DesiredAlphas offset is not 40");
	auto constexpr FAnimNode_MultiWayBlend_AlphaScaleBias_Offset = offsetof(FAnimNode_MultiWayBlend, AlphaScaleBias);
	static_assert(FAnimNode_MultiWayBlend_AlphaScaleBias_Offset == 0x54, "FAnimNode_MultiWayBlend::AlphaScaleBias offset is not 54");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
