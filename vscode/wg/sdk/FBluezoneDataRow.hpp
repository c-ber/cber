#pragma once
#include "FTableRowBase.hpp"
#include "EBluezoneType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBluezoneDataRow // Size: 0x50
 : public FTableRowBase // Size: 0x8
{
public:
    float StartDelay; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.BluezoneDataRow.StartDelay */
    float WarningDuration; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.BluezoneDataRow.WarningDuration */
    float ReleaseDuration; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.BluezoneDataRow.ReleaseDuration */
    float RadiusRate; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.BluezoneDataRow.RadiusRate */
    float RandomRadiusRate; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.BluezoneDataRow.RandomRadiusRate */
    float PoisonGasDPS; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.BluezoneDataRow.PoisonGasDPS */
    float SpreadRatio; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.BluezoneDataRow.SpreadRatio */
    float DamageMagnifierForDistance; /* Ofs: 0x24 Size: 0x4 FloatProperty TslGame.BluezoneDataRow.DamageMagnifierForDistance */
    float DamageMagnifier; /* Ofs: 0x28 Size: 0x4 FloatProperty TslGame.BluezoneDataRow.DamageMagnifier */
    uint8_t UnknownData2C[0x4];
    FString DamageMagnifierCurve; /* Ofs: 0x30 Size: 0x10 StrProperty TslGame.BluezoneDataRow.DamageMagnifierCurve */
    TEnumAsByte<enum EBluezoneType> BluezoneType; /* Ofs: 0x40 Size: 0x1 EnumProperty TslGame.BluezoneDataRow.BluezoneType */
    uint8_t UnknownData41[0x3];
    int32_t CircleAlgorithm; /* Ofs: 0x44 Size: 0x4 IntProperty TslGame.BluezoneDataRow.CircleAlgorithm */
    float LandRatio; /* Ofs: 0x48 Size: 0x4 FloatProperty TslGame.BluezoneDataRow.LandRatio */
    uint8_t UnknownData4C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBluezoneDataRow = sizeof(FBluezoneDataRow); // 80
    static_assert(sizeof(FBluezoneDataRow) == 0x50, "Size of FBluezoneDataRow is not correct.");
	auto constexpr FBluezoneDataRow_StartDelay_Offset = offsetof(FBluezoneDataRow, StartDelay);
	static_assert(FBluezoneDataRow_StartDelay_Offset == 0x8, "FBluezoneDataRow::StartDelay offset is not 8");
	auto constexpr FBluezoneDataRow_WarningDuration_Offset = offsetof(FBluezoneDataRow, WarningDuration);
	static_assert(FBluezoneDataRow_WarningDuration_Offset == 0xc, "FBluezoneDataRow::WarningDuration offset is not c");
	auto constexpr FBluezoneDataRow_ReleaseDuration_Offset = offsetof(FBluezoneDataRow, ReleaseDuration);
	static_assert(FBluezoneDataRow_ReleaseDuration_Offset == 0x10, "FBluezoneDataRow::ReleaseDuration offset is not 10");
	auto constexpr FBluezoneDataRow_RadiusRate_Offset = offsetof(FBluezoneDataRow, RadiusRate);
	static_assert(FBluezoneDataRow_RadiusRate_Offset == 0x14, "FBluezoneDataRow::RadiusRate offset is not 14");
	auto constexpr FBluezoneDataRow_RandomRadiusRate_Offset = offsetof(FBluezoneDataRow, RandomRadiusRate);
	static_assert(FBluezoneDataRow_RandomRadiusRate_Offset == 0x18, "FBluezoneDataRow::RandomRadiusRate offset is not 18");
	auto constexpr FBluezoneDataRow_PoisonGasDPS_Offset = offsetof(FBluezoneDataRow, PoisonGasDPS);
	static_assert(FBluezoneDataRow_PoisonGasDPS_Offset == 0x1c, "FBluezoneDataRow::PoisonGasDPS offset is not 1c");
	auto constexpr FBluezoneDataRow_SpreadRatio_Offset = offsetof(FBluezoneDataRow, SpreadRatio);
	static_assert(FBluezoneDataRow_SpreadRatio_Offset == 0x20, "FBluezoneDataRow::SpreadRatio offset is not 20");
	auto constexpr FBluezoneDataRow_DamageMagnifierForDistance_Offset = offsetof(FBluezoneDataRow, DamageMagnifierForDistance);
	static_assert(FBluezoneDataRow_DamageMagnifierForDistance_Offset == 0x24, "FBluezoneDataRow::DamageMagnifierForDistance offset is not 24");
	auto constexpr FBluezoneDataRow_DamageMagnifier_Offset = offsetof(FBluezoneDataRow, DamageMagnifier);
	static_assert(FBluezoneDataRow_DamageMagnifier_Offset == 0x28, "FBluezoneDataRow::DamageMagnifier offset is not 28");
	auto constexpr FBluezoneDataRow_DamageMagnifierCurve_Offset = offsetof(FBluezoneDataRow, DamageMagnifierCurve);
	static_assert(FBluezoneDataRow_DamageMagnifierCurve_Offset == 0x30, "FBluezoneDataRow::DamageMagnifierCurve offset is not 30");
	auto constexpr FBluezoneDataRow_BluezoneType_Offset = offsetof(FBluezoneDataRow, BluezoneType);
	static_assert(FBluezoneDataRow_BluezoneType_Offset == 0x40, "FBluezoneDataRow::BluezoneType offset is not 40");
	auto constexpr FBluezoneDataRow_CircleAlgorithm_Offset = offsetof(FBluezoneDataRow, CircleAlgorithm);
	static_assert(FBluezoneDataRow_CircleAlgorithm_Offset == 0x44, "FBluezoneDataRow::CircleAlgorithm offset is not 44");
	auto constexpr FBluezoneDataRow_LandRatio_Offset = offsetof(FBluezoneDataRow, LandRatio);
	static_assert(FBluezoneDataRow_LandRatio_Offset == 0x48, "FBluezoneDataRow::LandRatio offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
