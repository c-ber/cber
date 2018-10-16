#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueZoneCustomOption // Size: 0x24
{
public:
    int32_t PhaseNum; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.BlueZoneCustomOption.PhaseNum */
    float StartDelay; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.BlueZoneCustomOption.StartDelay */
    float WarningDuration; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.BlueZoneCustomOption.WarningDuration */
    float ReleaseDuration; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.BlueZoneCustomOption.ReleaseDuration */
    float PoisonGasDamagePerSecond; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.BlueZoneCustomOption.PoisonGasDamagePerSecond */
    float RadiusRate; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.BlueZoneCustomOption.RadiusRate */
    float SpreadRatio; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.BlueZoneCustomOption.SpreadRatio */
    float LandRatio; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.BlueZoneCustomOption.LandRatio */
    int32_t CircleAlgorithm; /* Ofs: 0x20 Size: 0x4 IntProperty TslGame.BlueZoneCustomOption.CircleAlgorithm */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueZoneCustomOption = sizeof(FBlueZoneCustomOption); // 36
    static_assert(sizeof(FBlueZoneCustomOption) == 0x24, "Size of FBlueZoneCustomOption is not correct.");
	auto constexpr FBlueZoneCustomOption_PhaseNum_Offset = offsetof(FBlueZoneCustomOption, PhaseNum);
	static_assert(FBlueZoneCustomOption_PhaseNum_Offset == 0x0, "FBlueZoneCustomOption::PhaseNum offset is not 0");
	auto constexpr FBlueZoneCustomOption_StartDelay_Offset = offsetof(FBlueZoneCustomOption, StartDelay);
	static_assert(FBlueZoneCustomOption_StartDelay_Offset == 0x4, "FBlueZoneCustomOption::StartDelay offset is not 4");
	auto constexpr FBlueZoneCustomOption_WarningDuration_Offset = offsetof(FBlueZoneCustomOption, WarningDuration);
	static_assert(FBlueZoneCustomOption_WarningDuration_Offset == 0x8, "FBlueZoneCustomOption::WarningDuration offset is not 8");
	auto constexpr FBlueZoneCustomOption_ReleaseDuration_Offset = offsetof(FBlueZoneCustomOption, ReleaseDuration);
	static_assert(FBlueZoneCustomOption_ReleaseDuration_Offset == 0xc, "FBlueZoneCustomOption::ReleaseDuration offset is not c");
	auto constexpr FBlueZoneCustomOption_PoisonGasDamagePerSecond_Offset = offsetof(FBlueZoneCustomOption, PoisonGasDamagePerSecond);
	static_assert(FBlueZoneCustomOption_PoisonGasDamagePerSecond_Offset == 0x10, "FBlueZoneCustomOption::PoisonGasDamagePerSecond offset is not 10");
	auto constexpr FBlueZoneCustomOption_RadiusRate_Offset = offsetof(FBlueZoneCustomOption, RadiusRate);
	static_assert(FBlueZoneCustomOption_RadiusRate_Offset == 0x14, "FBlueZoneCustomOption::RadiusRate offset is not 14");
	auto constexpr FBlueZoneCustomOption_SpreadRatio_Offset = offsetof(FBlueZoneCustomOption, SpreadRatio);
	static_assert(FBlueZoneCustomOption_SpreadRatio_Offset == 0x18, "FBlueZoneCustomOption::SpreadRatio offset is not 18");
	auto constexpr FBlueZoneCustomOption_LandRatio_Offset = offsetof(FBlueZoneCustomOption, LandRatio);
	static_assert(FBlueZoneCustomOption_LandRatio_Offset == 0x1c, "FBlueZoneCustomOption::LandRatio offset is not 1c");
	auto constexpr FBlueZoneCustomOption_CircleAlgorithm_Offset = offsetof(FBlueZoneCustomOption, CircleAlgorithm);
	static_assert(FBlueZoneCustomOption_CircleAlgorithm_Offset == 0x20, "FBlueZoneCustomOption::CircleAlgorithm offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
