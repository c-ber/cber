#pragma once
#include "FConstraintBaseParams.hpp"
#include "ELinearConstraintMotion.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLinearConstraint // Size: 0x1C
 : public FConstraintBaseParams // Size: 0x14
{
public:
    float Limit; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.LinearConstraint.Limit */
    TEnumAsByte<enum ELinearConstraintMotion> XMotion; /* Ofs: 0x18 Size: 0x1 ByteProperty Engine.LinearConstraint.XMotion */
    TEnumAsByte<enum ELinearConstraintMotion> YMotion; /* Ofs: 0x19 Size: 0x1 ByteProperty Engine.LinearConstraint.YMotion */
    TEnumAsByte<enum ELinearConstraintMotion> ZMotion; /* Ofs: 0x1A Size: 0x1 ByteProperty Engine.LinearConstraint.ZMotion */
    uint8_t UnknownData1B[0x1];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLinearConstraint = sizeof(FLinearConstraint); // 28
    static_assert(sizeof(FLinearConstraint) == 0x1C, "Size of FLinearConstraint is not correct.");
	auto constexpr FLinearConstraint_Limit_Offset = offsetof(FLinearConstraint, Limit);
	static_assert(FLinearConstraint_Limit_Offset == 0x14, "FLinearConstraint::Limit offset is not 14");
	auto constexpr FLinearConstraint_XMotion_Offset = offsetof(FLinearConstraint, XMotion);
	static_assert(FLinearConstraint_XMotion_Offset == 0x18, "FLinearConstraint::XMotion offset is not 18");
	auto constexpr FLinearConstraint_YMotion_Offset = offsetof(FLinearConstraint, YMotion);
	static_assert(FLinearConstraint_YMotion_Offset == 0x19, "FLinearConstraint::YMotion offset is not 19");
	auto constexpr FLinearConstraint_ZMotion_Offset = offsetof(FLinearConstraint, ZMotion);
	static_assert(FLinearConstraint_ZMotion_Offset == 0x1a, "FLinearConstraint::ZMotion offset is not 1a");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
