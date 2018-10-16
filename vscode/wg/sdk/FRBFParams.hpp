#pragma once
#include "ERBFFunctionType.hpp"
#include "ERBFDistanceMethod.hpp"
#include "EBoneAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRBFParams // Size: 0x10
{
public:
    int32_t TargetDimensions; /* Ofs: 0x0 Size: 0x4 IntProperty AnimGraphRuntime.RBFParams.TargetDimensions */
    float Radius; /* Ofs: 0x4 Size: 0x4 FloatProperty AnimGraphRuntime.RBFParams.Radius */
    TEnumAsByte<enum ERBFFunctionType> Function; /* Ofs: 0x8 Size: 0x1 EnumProperty AnimGraphRuntime.RBFParams.Function */
    TEnumAsByte<enum ERBFDistanceMethod> DistanceMethod; /* Ofs: 0x9 Size: 0x1 EnumProperty AnimGraphRuntime.RBFParams.DistanceMethod */
    TEnumAsByte<enum EBoneAxis> TwistAxis; /* Ofs: 0xA Size: 0x1 ByteProperty AnimGraphRuntime.RBFParams.TwistAxis */
    uint8_t UnknownDataB[0x1];
    float WeightThreshold; /* Ofs: 0xC Size: 0x4 FloatProperty AnimGraphRuntime.RBFParams.WeightThreshold */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRBFParams = sizeof(FRBFParams); // 16
    static_assert(sizeof(FRBFParams) == 0x10, "Size of FRBFParams is not correct.");
	auto constexpr FRBFParams_TargetDimensions_Offset = offsetof(FRBFParams, TargetDimensions);
	static_assert(FRBFParams_TargetDimensions_Offset == 0x0, "FRBFParams::TargetDimensions offset is not 0");
	auto constexpr FRBFParams_Radius_Offset = offsetof(FRBFParams, Radius);
	static_assert(FRBFParams_Radius_Offset == 0x4, "FRBFParams::Radius offset is not 4");
	auto constexpr FRBFParams_Function_Offset = offsetof(FRBFParams, Function);
	static_assert(FRBFParams_Function_Offset == 0x8, "FRBFParams::Function offset is not 8");
	auto constexpr FRBFParams_DistanceMethod_Offset = offsetof(FRBFParams, DistanceMethod);
	static_assert(FRBFParams_DistanceMethod_Offset == 0x9, "FRBFParams::DistanceMethod offset is not 9");
	auto constexpr FRBFParams_TwistAxis_Offset = offsetof(FRBFParams, TwistAxis);
	static_assert(FRBFParams_TwistAxis_Offset == 0xa, "FRBFParams::TwistAxis offset is not a");
	auto constexpr FRBFParams_WeightThreshold_Offset = offsetof(FRBFParams, WeightThreshold);
	static_assert(FRBFParams_WeightThreshold_Offset == 0xc, "FRBFParams::WeightThreshold offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
