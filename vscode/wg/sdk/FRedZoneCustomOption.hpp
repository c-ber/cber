#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRedZoneCustomOption // Size: 0x1C
{
public:
    bool bIsActive; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.RedZoneCustomOption.bIsActive */
    uint8_t UnknownData1[0x3];
    float MultiplierRedZoneExplosionDensity; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.RedZoneCustomOption.MultiplierRedZoneExplosionDensity */
    float MultiplierRedZoneStartTime; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.RedZoneCustomOption.MultiplierRedZoneStartTime */
    float MultiplierRedZoneEndTime; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.RedZoneCustomOption.MultiplierRedZoneEndTime */
    float MultiplierRedZoneExplosionDelay; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.RedZoneCustomOption.MultiplierRedZoneExplosionDelay */
    float MultiplierRedZoneDuration; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.RedZoneCustomOption.MultiplierRedZoneDuration */
    float MultiplierRedZoneArea; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.RedZoneCustomOption.MultiplierRedZoneArea */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRedZoneCustomOption = sizeof(FRedZoneCustomOption); // 28
    static_assert(sizeof(FRedZoneCustomOption) == 0x1C, "Size of FRedZoneCustomOption is not correct.");
	auto constexpr FRedZoneCustomOption_MultiplierRedZoneExplosionDensity_Offset = offsetof(FRedZoneCustomOption, MultiplierRedZoneExplosionDensity);
	static_assert(FRedZoneCustomOption_MultiplierRedZoneExplosionDensity_Offset == 0x4, "FRedZoneCustomOption::MultiplierRedZoneExplosionDensity offset is not 4");
	auto constexpr FRedZoneCustomOption_MultiplierRedZoneStartTime_Offset = offsetof(FRedZoneCustomOption, MultiplierRedZoneStartTime);
	static_assert(FRedZoneCustomOption_MultiplierRedZoneStartTime_Offset == 0x8, "FRedZoneCustomOption::MultiplierRedZoneStartTime offset is not 8");
	auto constexpr FRedZoneCustomOption_MultiplierRedZoneEndTime_Offset = offsetof(FRedZoneCustomOption, MultiplierRedZoneEndTime);
	static_assert(FRedZoneCustomOption_MultiplierRedZoneEndTime_Offset == 0xc, "FRedZoneCustomOption::MultiplierRedZoneEndTime offset is not c");
	auto constexpr FRedZoneCustomOption_MultiplierRedZoneExplosionDelay_Offset = offsetof(FRedZoneCustomOption, MultiplierRedZoneExplosionDelay);
	static_assert(FRedZoneCustomOption_MultiplierRedZoneExplosionDelay_Offset == 0x10, "FRedZoneCustomOption::MultiplierRedZoneExplosionDelay offset is not 10");
	auto constexpr FRedZoneCustomOption_MultiplierRedZoneDuration_Offset = offsetof(FRedZoneCustomOption, MultiplierRedZoneDuration);
	static_assert(FRedZoneCustomOption_MultiplierRedZoneDuration_Offset == 0x14, "FRedZoneCustomOption::MultiplierRedZoneDuration offset is not 14");
	auto constexpr FRedZoneCustomOption_MultiplierRedZoneArea_Offset = offsetof(FRedZoneCustomOption, MultiplierRedZoneArea);
	static_assert(FRedZoneCustomOption_MultiplierRedZoneArea_Offset == 0x18, "FRedZoneCustomOption::MultiplierRedZoneArea offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
