#pragma once
#include "FRBFEntry.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRBFTarget // Size: 0x88
 : public FRBFEntry // Size: 0x10
{
public:
    float ScaleFactor; /* Ofs: 0x10 Size: 0x4 FloatProperty AnimGraphRuntime.RBFTarget.ScaleFactor */
    bool bApplyCustomCurve; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.RBFTarget.bApplyCustomCurve */
    uint8_t UnknownData15[0x3];
    FRichCurve CustomCurve; /* Ofs: 0x18 Size: 0x70 StructProperty AnimGraphRuntime.RBFTarget.CustomCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRBFTarget = sizeof(FRBFTarget); // 136
    static_assert(sizeof(FRBFTarget) == 0x88, "Size of FRBFTarget is not correct.");
	auto constexpr FRBFTarget_ScaleFactor_Offset = offsetof(FRBFTarget, ScaleFactor);
	static_assert(FRBFTarget_ScaleFactor_Offset == 0x10, "FRBFTarget::ScaleFactor offset is not 10");
	auto constexpr FRBFTarget_CustomCurve_Offset = offsetof(FRBFTarget, CustomCurve);
	static_assert(FRBFTarget_CustomCurve_Offset == 0x18, "FRBFTarget::CustomCurve offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
