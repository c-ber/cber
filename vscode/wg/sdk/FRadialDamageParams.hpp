#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRadialDamageParams // Size: 0x14
{
public:
    float BaseDamage; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.RadialDamageParams.BaseDamage */
    float MinimumDamage; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.RadialDamageParams.MinimumDamage */
    float InnerRadius; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.RadialDamageParams.InnerRadius */
    float OuterRadius; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.RadialDamageParams.OuterRadius */
    float DamageFalloff; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.RadialDamageParams.DamageFalloff */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRadialDamageParams = sizeof(FRadialDamageParams); // 20
    static_assert(sizeof(FRadialDamageParams) == 0x14, "Size of FRadialDamageParams is not correct.");
	auto constexpr FRadialDamageParams_BaseDamage_Offset = offsetof(FRadialDamageParams, BaseDamage);
	static_assert(FRadialDamageParams_BaseDamage_Offset == 0x0, "FRadialDamageParams::BaseDamage offset is not 0");
	auto constexpr FRadialDamageParams_MinimumDamage_Offset = offsetof(FRadialDamageParams, MinimumDamage);
	static_assert(FRadialDamageParams_MinimumDamage_Offset == 0x4, "FRadialDamageParams::MinimumDamage offset is not 4");
	auto constexpr FRadialDamageParams_InnerRadius_Offset = offsetof(FRadialDamageParams, InnerRadius);
	static_assert(FRadialDamageParams_InnerRadius_Offset == 0x8, "FRadialDamageParams::InnerRadius offset is not 8");
	auto constexpr FRadialDamageParams_OuterRadius_Offset = offsetof(FRadialDamageParams, OuterRadius);
	static_assert(FRadialDamageParams_OuterRadius_Offset == 0xc, "FRadialDamageParams::OuterRadius offset is not c");
	auto constexpr FRadialDamageParams_DamageFalloff_Offset = offsetof(FRadialDamageParams, DamageFalloff);
	static_assert(FRadialDamageParams_DamageFalloff_Offset == 0x10, "FRadialDamageParams::DamageFalloff offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
