#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#include "EModifyCurveApplyMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_ModifyCurve // Size: 0x78
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink SourcePose; /* Ofs: 0x30 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_ModifyCurve.SourcePose */
    TEnumAsByte<enum EModifyCurveApplyMode> ApplyMode; /* Ofs: 0x48 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_ModifyCurve.ApplyMode */
    uint8_t UnknownData49[0x7];
    TArray<float> CurveValues; /* Ofs: 0x50 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_ModifyCurve.CurveValues */
    TArray<struct FName> CurveNames; /* Ofs: 0x60 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_ModifyCurve.CurveNames */
    float Alpha; /* Ofs: 0x70 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_ModifyCurve.Alpha */
    uint8_t UnknownData74[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_ModifyCurve = sizeof(FAnimNode_ModifyCurve); // 120
    static_assert(sizeof(FAnimNode_ModifyCurve) == 0x78, "Size of FAnimNode_ModifyCurve is not correct.");
	auto constexpr FAnimNode_ModifyCurve_SourcePose_Offset = offsetof(FAnimNode_ModifyCurve, SourcePose);
	static_assert(FAnimNode_ModifyCurve_SourcePose_Offset == 0x30, "FAnimNode_ModifyCurve::SourcePose offset is not 30");
	auto constexpr FAnimNode_ModifyCurve_ApplyMode_Offset = offsetof(FAnimNode_ModifyCurve, ApplyMode);
	static_assert(FAnimNode_ModifyCurve_ApplyMode_Offset == 0x48, "FAnimNode_ModifyCurve::ApplyMode offset is not 48");
	auto constexpr FAnimNode_ModifyCurve_CurveValues_Offset = offsetof(FAnimNode_ModifyCurve, CurveValues);
	static_assert(FAnimNode_ModifyCurve_CurveValues_Offset == 0x50, "FAnimNode_ModifyCurve::CurveValues offset is not 50");
	auto constexpr FAnimNode_ModifyCurve_CurveNames_Offset = offsetof(FAnimNode_ModifyCurve, CurveNames);
	static_assert(FAnimNode_ModifyCurve_CurveNames_Offset == 0x60, "FAnimNode_ModifyCurve::CurveNames offset is not 60");
	auto constexpr FAnimNode_ModifyCurve_Alpha_Offset = offsetof(FAnimNode_ModifyCurve, Alpha);
	static_assert(FAnimNode_ModifyCurve_Alpha_Offset == 0x70, "FAnimNode_ModifyCurve::Alpha offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
