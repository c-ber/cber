#pragma once
#include "FConstraintBaseParams.hpp"
#include "EAngularConstraintMotion.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTwistConstraint // Size: 0x1C
 : public FConstraintBaseParams // Size: 0x14
{
public:
    float TwistLimitDegrees; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.TwistConstraint.TwistLimitDegrees */
    TEnumAsByte<enum EAngularConstraintMotion> TwistMotion; /* Ofs: 0x18 Size: 0x1 ByteProperty Engine.TwistConstraint.TwistMotion */
    uint8_t UnknownData19[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTwistConstraint = sizeof(FTwistConstraint); // 28
    static_assert(sizeof(FTwistConstraint) == 0x1C, "Size of FTwistConstraint is not correct.");
	auto constexpr FTwistConstraint_TwistLimitDegrees_Offset = offsetof(FTwistConstraint, TwistLimitDegrees);
	static_assert(FTwistConstraint_TwistLimitDegrees_Offset == 0x14, "FTwistConstraint::TwistLimitDegrees offset is not 14");
	auto constexpr FTwistConstraint_TwistMotion_Offset = offsetof(FTwistConstraint, TwistMotion);
	static_assert(FTwistConstraint_TwistMotion_Offset == 0x18, "FTwistConstraint::TwistMotion offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
