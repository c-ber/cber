#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDestructibleDamageParameters // Size: 0x1C
{
public:
    float DamageThreshold; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.DestructibleDamageParameters.DamageThreshold */
    float DamageSpread; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.DestructibleDamageParameters.DamageSpread */
    bool bEnableImpactDamage; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.DestructibleDamageParameters.bEnableImpactDamage */
    uint8_t UnknownData9[0x3];
    float ImpactDamage; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.DestructibleDamageParameters.ImpactDamage */
    int32_t DefaultImpactDamageDepth; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.DestructibleDamageParameters.DefaultImpactDamageDepth */
    bool bCustomImpactResistance; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty Engine.DestructibleDamageParameters.bCustomImpactResistance */
    uint8_t UnknownData15[0x3];
    float ImpactResistance; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.DestructibleDamageParameters.ImpactResistance */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDestructibleDamageParameters = sizeof(FDestructibleDamageParameters); // 28
    static_assert(sizeof(FDestructibleDamageParameters) == 0x1C, "Size of FDestructibleDamageParameters is not correct.");
	auto constexpr FDestructibleDamageParameters_DamageThreshold_Offset = offsetof(FDestructibleDamageParameters, DamageThreshold);
	static_assert(FDestructibleDamageParameters_DamageThreshold_Offset == 0x0, "FDestructibleDamageParameters::DamageThreshold offset is not 0");
	auto constexpr FDestructibleDamageParameters_DamageSpread_Offset = offsetof(FDestructibleDamageParameters, DamageSpread);
	static_assert(FDestructibleDamageParameters_DamageSpread_Offset == 0x4, "FDestructibleDamageParameters::DamageSpread offset is not 4");
	auto constexpr FDestructibleDamageParameters_ImpactDamage_Offset = offsetof(FDestructibleDamageParameters, ImpactDamage);
	static_assert(FDestructibleDamageParameters_ImpactDamage_Offset == 0xc, "FDestructibleDamageParameters::ImpactDamage offset is not c");
	auto constexpr FDestructibleDamageParameters_DefaultImpactDamageDepth_Offset = offsetof(FDestructibleDamageParameters, DefaultImpactDamageDepth);
	static_assert(FDestructibleDamageParameters_DefaultImpactDamageDepth_Offset == 0x10, "FDestructibleDamageParameters::DefaultImpactDamageDepth offset is not 10");
	auto constexpr FDestructibleDamageParameters_ImpactResistance_Offset = offsetof(FDestructibleDamageParameters, ImpactResistance);
	static_assert(FDestructibleDamageParameters_ImpactResistance_Offset == 0x18, "FDestructibleDamageParameters::ImpactResistance offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
