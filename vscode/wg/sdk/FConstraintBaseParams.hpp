#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FConstraintBaseParams // Size: 0x14
{
public:
    float Stiffness; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.ConstraintBaseParams.Stiffness */
    float Damping; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.ConstraintBaseParams.Damping */
    float Restitution; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.ConstraintBaseParams.Restitution */
    float ContactDistance; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.ConstraintBaseParams.ContactDistance */
    bool bSoftConstraint; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Engine.ConstraintBaseParams.bSoftConstraint */
    uint8_t UnknownData11[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFConstraintBaseParams = sizeof(FConstraintBaseParams); // 20
    static_assert(sizeof(FConstraintBaseParams) == 0x14, "Size of FConstraintBaseParams is not correct.");
	auto constexpr FConstraintBaseParams_Stiffness_Offset = offsetof(FConstraintBaseParams, Stiffness);
	static_assert(FConstraintBaseParams_Stiffness_Offset == 0x0, "FConstraintBaseParams::Stiffness offset is not 0");
	auto constexpr FConstraintBaseParams_Damping_Offset = offsetof(FConstraintBaseParams, Damping);
	static_assert(FConstraintBaseParams_Damping_Offset == 0x4, "FConstraintBaseParams::Damping offset is not 4");
	auto constexpr FConstraintBaseParams_Restitution_Offset = offsetof(FConstraintBaseParams, Restitution);
	static_assert(FConstraintBaseParams_Restitution_Offset == 0x8, "FConstraintBaseParams::Restitution offset is not 8");
	auto constexpr FConstraintBaseParams_ContactDistance_Offset = offsetof(FConstraintBaseParams, ContactDistance);
	static_assert(FConstraintBaseParams_ContactDistance_Offset == 0xc, "FConstraintBaseParams::ContactDistance offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
