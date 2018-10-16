#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#include "FInputScaleBias.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_ApplyMeshSpaceAdditive // Size: 0x78
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink Base; /* Ofs: 0x30 Size: 0x18 StructProperty Engine.AnimNode_ApplyMeshSpaceAdditive.Base */
    FPoseLink Additive; /* Ofs: 0x48 Size: 0x18 StructProperty Engine.AnimNode_ApplyMeshSpaceAdditive.Additive */
    float Alpha; /* Ofs: 0x60 Size: 0x4 FloatProperty Engine.AnimNode_ApplyMeshSpaceAdditive.Alpha */
    FInputScaleBias AlphaScaleBias; /* Ofs: 0x64 Size: 0x8 StructProperty Engine.AnimNode_ApplyMeshSpaceAdditive.AlphaScaleBias */
    int32_t LODThreshold; /* Ofs: 0x6C Size: 0x4 IntProperty Engine.AnimNode_ApplyMeshSpaceAdditive.LODThreshold */
    float ActualAlpha; /* Ofs: 0x70 Size: 0x4 FloatProperty Engine.AnimNode_ApplyMeshSpaceAdditive.ActualAlpha */
    uint8_t UnknownData74[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_ApplyMeshSpaceAdditive = sizeof(FAnimNode_ApplyMeshSpaceAdditive); // 120
    static_assert(sizeof(FAnimNode_ApplyMeshSpaceAdditive) == 0x78, "Size of FAnimNode_ApplyMeshSpaceAdditive is not correct.");
	auto constexpr FAnimNode_ApplyMeshSpaceAdditive_Base_Offset = offsetof(FAnimNode_ApplyMeshSpaceAdditive, Base);
	static_assert(FAnimNode_ApplyMeshSpaceAdditive_Base_Offset == 0x30, "FAnimNode_ApplyMeshSpaceAdditive::Base offset is not 30");
	auto constexpr FAnimNode_ApplyMeshSpaceAdditive_Additive_Offset = offsetof(FAnimNode_ApplyMeshSpaceAdditive, Additive);
	static_assert(FAnimNode_ApplyMeshSpaceAdditive_Additive_Offset == 0x48, "FAnimNode_ApplyMeshSpaceAdditive::Additive offset is not 48");
	auto constexpr FAnimNode_ApplyMeshSpaceAdditive_Alpha_Offset = offsetof(FAnimNode_ApplyMeshSpaceAdditive, Alpha);
	static_assert(FAnimNode_ApplyMeshSpaceAdditive_Alpha_Offset == 0x60, "FAnimNode_ApplyMeshSpaceAdditive::Alpha offset is not 60");
	auto constexpr FAnimNode_ApplyMeshSpaceAdditive_AlphaScaleBias_Offset = offsetof(FAnimNode_ApplyMeshSpaceAdditive, AlphaScaleBias);
	static_assert(FAnimNode_ApplyMeshSpaceAdditive_AlphaScaleBias_Offset == 0x64, "FAnimNode_ApplyMeshSpaceAdditive::AlphaScaleBias offset is not 64");
	auto constexpr FAnimNode_ApplyMeshSpaceAdditive_LODThreshold_Offset = offsetof(FAnimNode_ApplyMeshSpaceAdditive, LODThreshold);
	static_assert(FAnimNode_ApplyMeshSpaceAdditive_LODThreshold_Offset == 0x6c, "FAnimNode_ApplyMeshSpaceAdditive::LODThreshold offset is not 6c");
	auto constexpr FAnimNode_ApplyMeshSpaceAdditive_ActualAlpha_Offset = offsetof(FAnimNode_ApplyMeshSpaceAdditive, ActualAlpha);
	static_assert(FAnimNode_ApplyMeshSpaceAdditive_ActualAlpha_Offset == 0x70, "FAnimNode_ApplyMeshSpaceAdditive::ActualAlpha offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
