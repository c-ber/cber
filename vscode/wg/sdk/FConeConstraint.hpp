#pragma once
#include "FConstraintBaseParams.hpp"
#include "EAngularConstraintMotion.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FConeConstraint // Size: 0x20
 : public FConstraintBaseParams // Size: 0x14
{
public:
    float Swing1LimitDegrees; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.ConeConstraint.Swing1LimitDegrees */
    float Swing2LimitDegrees; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.ConeConstraint.Swing2LimitDegrees */
    TEnumAsByte<enum EAngularConstraintMotion> Swing1Motion; /* Ofs: 0x1C Size: 0x1 ByteProperty Engine.ConeConstraint.Swing1Motion */
    TEnumAsByte<enum EAngularConstraintMotion> Swing2Motion; /* Ofs: 0x1D Size: 0x1 ByteProperty Engine.ConeConstraint.Swing2Motion */
    uint8_t UnknownData1E[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFConeConstraint = sizeof(FConeConstraint); // 32
    static_assert(sizeof(FConeConstraint) == 0x20, "Size of FConeConstraint is not correct.");
	auto constexpr FConeConstraint_Swing1LimitDegrees_Offset = offsetof(FConeConstraint, Swing1LimitDegrees);
	static_assert(FConeConstraint_Swing1LimitDegrees_Offset == 0x14, "FConeConstraint::Swing1LimitDegrees offset is not 14");
	auto constexpr FConeConstraint_Swing2LimitDegrees_Offset = offsetof(FConeConstraint, Swing2LimitDegrees);
	static_assert(FConeConstraint_Swing2LimitDegrees_Offset == 0x18, "FConeConstraint::Swing2LimitDegrees offset is not 18");
	auto constexpr FConeConstraint_Swing1Motion_Offset = offsetof(FConeConstraint, Swing1Motion);
	static_assert(FConeConstraint_Swing1Motion_Offset == 0x1c, "FConeConstraint::Swing1Motion offset is not 1c");
	auto constexpr FConeConstraint_Swing2Motion_Offset = offsetof(FConeConstraint, Swing2Motion);
	static_assert(FConeConstraint_Swing2Motion_Offset == 0x1d, "FConeConstraint::Swing2Motion offset is not 1d");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
