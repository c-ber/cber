#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#include "FInputScaleBias.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_ApplyAdditive // Size: 0x78
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink Base; /* Ofs: 0x30 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_ApplyAdditive.Base */
    FPoseLink Additive; /* Ofs: 0x48 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_ApplyAdditive.Additive */
    float Alpha; /* Ofs: 0x60 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_ApplyAdditive.Alpha */
    FInputScaleBias AlphaScaleBias; /* Ofs: 0x64 Size: 0x8 StructProperty AnimGraphRuntime.AnimNode_ApplyAdditive.AlphaScaleBias */
    int32_t LODThreshold; /* Ofs: 0x6C Size: 0x4 IntProperty AnimGraphRuntime.AnimNode_ApplyAdditive.LODThreshold */
    float ActualAlpha; /* Ofs: 0x70 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_ApplyAdditive.ActualAlpha */
    uint8_t UnknownData74[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_ApplyAdditive = sizeof(FAnimNode_ApplyAdditive); // 120
    static_assert(sizeof(FAnimNode_ApplyAdditive) == 0x78, "Size of FAnimNode_ApplyAdditive is not correct.");
	auto constexpr FAnimNode_ApplyAdditive_Base_Offset = offsetof(FAnimNode_ApplyAdditive, Base);
	static_assert(FAnimNode_ApplyAdditive_Base_Offset == 0x30, "FAnimNode_ApplyAdditive::Base offset is not 30");
	auto constexpr FAnimNode_ApplyAdditive_Additive_Offset = offsetof(FAnimNode_ApplyAdditive, Additive);
	static_assert(FAnimNode_ApplyAdditive_Additive_Offset == 0x48, "FAnimNode_ApplyAdditive::Additive offset is not 48");
	auto constexpr FAnimNode_ApplyAdditive_Alpha_Offset = offsetof(FAnimNode_ApplyAdditive, Alpha);
	static_assert(FAnimNode_ApplyAdditive_Alpha_Offset == 0x60, "FAnimNode_ApplyAdditive::Alpha offset is not 60");
	auto constexpr FAnimNode_ApplyAdditive_AlphaScaleBias_Offset = offsetof(FAnimNode_ApplyAdditive, AlphaScaleBias);
	static_assert(FAnimNode_ApplyAdditive_AlphaScaleBias_Offset == 0x64, "FAnimNode_ApplyAdditive::AlphaScaleBias offset is not 64");
	auto constexpr FAnimNode_ApplyAdditive_LODThreshold_Offset = offsetof(FAnimNode_ApplyAdditive, LODThreshold);
	static_assert(FAnimNode_ApplyAdditive_LODThreshold_Offset == 0x6c, "FAnimNode_ApplyAdditive::LODThreshold offset is not 6c");
	auto constexpr FAnimNode_ApplyAdditive_ActualAlpha_Offset = offsetof(FAnimNode_ApplyAdditive, ActualAlpha);
	static_assert(FAnimNode_ApplyAdditive_ActualAlpha_Offset == 0x70, "FAnimNode_ApplyAdditive::ActualAlpha offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
