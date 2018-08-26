#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBattleRoyalePoisionGasData // Size: 0x40
{
public:
    float StartDelay; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.BattleRoyalePoisionGasData.StartDelay */
    float WarningDuration; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.BattleRoyalePoisionGasData.WarningDuration */
    float ReleaseDuration; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.BattleRoyalePoisionGasData.ReleaseDuration */
    float RadiusRate; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.BattleRoyalePoisionGasData.RadiusRate */
    float RandomRadiusRate; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.BattleRoyalePoisionGasData.RandomRadiusRate */
    float PoisonGasDamagePerSecond; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.BattleRoyalePoisionGasData.PoisonGasDamagePerSecond */
    float SpreadRatio; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.BattleRoyalePoisionGasData.SpreadRatio */
    float DamageMagnifierForDistance; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.BattleRoyalePoisionGasData.DamageMagnifierForDistance */
    float DamageMagnifier; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.BattleRoyalePoisionGasData.DamageMagnifier */
    float LandRatio; /* Ofs: 0x24 Size: 0x4 FloatProperty TslGame.BattleRoyalePoisionGasData.LandRatio */
    int32_t CircleAlgorithm; /* Ofs: 0x28 Size: 0x4 IntProperty TslGame.BattleRoyalePoisionGasData.CircleAlgorithm */
    int32_t FastWarningPlayerCount; /* Ofs: 0x2C Size: 0x4 IntProperty TslGame.BattleRoyalePoisionGasData.FastWarningPlayerCount */
    float FastWarningDuration; /* Ofs: 0x30 Size: 0x4 FloatProperty TslGame.BattleRoyalePoisionGasData.FastWarningDuration */
    uint8_t UnknownData34[0x4];
    ExternalPtr<struct UCurveFloat> DamageMagnifierCurve; /* Ofs: 0x38 Size: 0x8 ObjectProperty TslGame.BattleRoyalePoisionGasData.DamageMagnifierCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBattleRoyalePoisionGasData = sizeof(FBattleRoyalePoisionGasData); // 64
    static_assert(sizeof(FBattleRoyalePoisionGasData) == 0x40, "Size of FBattleRoyalePoisionGasData is not correct.");
	auto constexpr FBattleRoyalePoisionGasData_StartDelay_Offset = offsetof(FBattleRoyalePoisionGasData, StartDelay);
	static_assert(FBattleRoyalePoisionGasData_StartDelay_Offset == 0x0, "FBattleRoyalePoisionGasData::StartDelay offset is not 0");
	auto constexpr FBattleRoyalePoisionGasData_WarningDuration_Offset = offsetof(FBattleRoyalePoisionGasData, WarningDuration);
	static_assert(FBattleRoyalePoisionGasData_WarningDuration_Offset == 0x4, "FBattleRoyalePoisionGasData::WarningDuration offset is not 4");
	auto constexpr FBattleRoyalePoisionGasData_ReleaseDuration_Offset = offsetof(FBattleRoyalePoisionGasData, ReleaseDuration);
	static_assert(FBattleRoyalePoisionGasData_ReleaseDuration_Offset == 0x8, "FBattleRoyalePoisionGasData::ReleaseDuration offset is not 8");
	auto constexpr FBattleRoyalePoisionGasData_RadiusRate_Offset = offsetof(FBattleRoyalePoisionGasData, RadiusRate);
	static_assert(FBattleRoyalePoisionGasData_RadiusRate_Offset == 0xc, "FBattleRoyalePoisionGasData::RadiusRate offset is not c");
	auto constexpr FBattleRoyalePoisionGasData_RandomRadiusRate_Offset = offsetof(FBattleRoyalePoisionGasData, RandomRadiusRate);
	static_assert(FBattleRoyalePoisionGasData_RandomRadiusRate_Offset == 0x10, "FBattleRoyalePoisionGasData::RandomRadiusRate offset is not 10");
	auto constexpr FBattleRoyalePoisionGasData_PoisonGasDamagePerSecond_Offset = offsetof(FBattleRoyalePoisionGasData, PoisonGasDamagePerSecond);
	static_assert(FBattleRoyalePoisionGasData_PoisonGasDamagePerSecond_Offset == 0x14, "FBattleRoyalePoisionGasData::PoisonGasDamagePerSecond offset is not 14");
	auto constexpr FBattleRoyalePoisionGasData_SpreadRatio_Offset = offsetof(FBattleRoyalePoisionGasData, SpreadRatio);
	static_assert(FBattleRoyalePoisionGasData_SpreadRatio_Offset == 0x18, "FBattleRoyalePoisionGasData::SpreadRatio offset is not 18");
	auto constexpr FBattleRoyalePoisionGasData_DamageMagnifierForDistance_Offset = offsetof(FBattleRoyalePoisionGasData, DamageMagnifierForDistance);
	static_assert(FBattleRoyalePoisionGasData_DamageMagnifierForDistance_Offset == 0x1c, "FBattleRoyalePoisionGasData::DamageMagnifierForDistance offset is not 1c");
	auto constexpr FBattleRoyalePoisionGasData_DamageMagnifier_Offset = offsetof(FBattleRoyalePoisionGasData, DamageMagnifier);
	static_assert(FBattleRoyalePoisionGasData_DamageMagnifier_Offset == 0x20, "FBattleRoyalePoisionGasData::DamageMagnifier offset is not 20");
	auto constexpr FBattleRoyalePoisionGasData_LandRatio_Offset = offsetof(FBattleRoyalePoisionGasData, LandRatio);
	static_assert(FBattleRoyalePoisionGasData_LandRatio_Offset == 0x24, "FBattleRoyalePoisionGasData::LandRatio offset is not 24");
	auto constexpr FBattleRoyalePoisionGasData_CircleAlgorithm_Offset = offsetof(FBattleRoyalePoisionGasData, CircleAlgorithm);
	static_assert(FBattleRoyalePoisionGasData_CircleAlgorithm_Offset == 0x28, "FBattleRoyalePoisionGasData::CircleAlgorithm offset is not 28");
	auto constexpr FBattleRoyalePoisionGasData_FastWarningPlayerCount_Offset = offsetof(FBattleRoyalePoisionGasData, FastWarningPlayerCount);
	static_assert(FBattleRoyalePoisionGasData_FastWarningPlayerCount_Offset == 0x2c, "FBattleRoyalePoisionGasData::FastWarningPlayerCount offset is not 2c");
	auto constexpr FBattleRoyalePoisionGasData_FastWarningDuration_Offset = offsetof(FBattleRoyalePoisionGasData, FastWarningDuration);
	static_assert(FBattleRoyalePoisionGasData_FastWarningDuration_Offset == 0x30, "FBattleRoyalePoisionGasData::FastWarningDuration offset is not 30");
	auto constexpr FBattleRoyalePoisionGasData_DamageMagnifierCurve_Offset = offsetof(FBattleRoyalePoisionGasData, DamageMagnifierCurve);
	static_assert(FBattleRoyalePoisionGasData_DamageMagnifierCurve_Offset == 0x38, "FBattleRoyalePoisionGasData::DamageMagnifierCurve offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
