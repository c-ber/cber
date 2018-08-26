#pragma once
#include "ECastPriority.hpp"
#include "ECastLevel.hpp"
#include "ECastAnim.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCastConfig // Size: 0x38
{
public:
    FText CastName; /* Ofs: 0x0 Size: 0x18 TextProperty TslGame.CastConfig.CastName */
    float CastTime; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.CastConfig.CastTime */
    TEnumAsByte<enum ECastPriority> CastPriority; /* Ofs: 0x1C Size: 0x1 EnumProperty TslGame.CastConfig.CastPriority */
    TEnumAsByte<enum ECastLevel> CastLevel; /* Ofs: 0x1D Size: 0x1 EnumProperty TslGame.CastConfig.CastLevel */
    uint8_t UnknownData1E[0x2];
    float CastMaxDistance; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.CastConfig.CastMaxDistance */
    float CasterAndCastObjectMaxDistance; /* Ofs: 0x24 Size: 0x4 FloatProperty TslGame.CastConfig.CasterAndCastObjectMaxDistance */
    bool bCanCastInsideMovingVehicle; /* Ofs: 0x28 Size: 0x1 BitMask: 01 BoolProperty TslGame.CastConfig.bCanCastInsideMovingVehicle */
    uint8_t UnknownData29[0x3];
    float MaxLinAcceleration; /* Ofs: 0x2C Size: 0x4 FloatProperty TslGame.CastConfig.MaxLinAcceleration */
    float CastMaxSpeed; /* Ofs: 0x30 Size: 0x4 FloatProperty TslGame.CastConfig.CastMaxSpeed */
    bool bNeedUnarm; /* Ofs: 0x34 Size: 0x1 BitMask: 01 BoolProperty TslGame.CastConfig.bNeedUnarm */
    TEnumAsByte<enum ECastAnim> CastAnim; /* Ofs: 0x35 Size: 0x1 EnumProperty TslGame.CastConfig.CastAnim */
    uint8_t UnknownData36[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCastConfig = sizeof(FCastConfig); // 56
    static_assert(sizeof(FCastConfig) == 0x38, "Size of FCastConfig is not correct.");
	auto constexpr FCastConfig_CastName_Offset = offsetof(FCastConfig, CastName);
	static_assert(FCastConfig_CastName_Offset == 0x0, "FCastConfig::CastName offset is not 0");
	auto constexpr FCastConfig_CastTime_Offset = offsetof(FCastConfig, CastTime);
	static_assert(FCastConfig_CastTime_Offset == 0x18, "FCastConfig::CastTime offset is not 18");
	auto constexpr FCastConfig_CastPriority_Offset = offsetof(FCastConfig, CastPriority);
	static_assert(FCastConfig_CastPriority_Offset == 0x1c, "FCastConfig::CastPriority offset is not 1c");
	auto constexpr FCastConfig_CastLevel_Offset = offsetof(FCastConfig, CastLevel);
	static_assert(FCastConfig_CastLevel_Offset == 0x1d, "FCastConfig::CastLevel offset is not 1d");
	auto constexpr FCastConfig_CastMaxDistance_Offset = offsetof(FCastConfig, CastMaxDistance);
	static_assert(FCastConfig_CastMaxDistance_Offset == 0x20, "FCastConfig::CastMaxDistance offset is not 20");
	auto constexpr FCastConfig_CasterAndCastObjectMaxDistance_Offset = offsetof(FCastConfig, CasterAndCastObjectMaxDistance);
	static_assert(FCastConfig_CasterAndCastObjectMaxDistance_Offset == 0x24, "FCastConfig::CasterAndCastObjectMaxDistance offset is not 24");
	auto constexpr FCastConfig_MaxLinAcceleration_Offset = offsetof(FCastConfig, MaxLinAcceleration);
	static_assert(FCastConfig_MaxLinAcceleration_Offset == 0x2c, "FCastConfig::MaxLinAcceleration offset is not 2c");
	auto constexpr FCastConfig_CastMaxSpeed_Offset = offsetof(FCastConfig, CastMaxSpeed);
	static_assert(FCastConfig_CastMaxSpeed_Offset == 0x30, "FCastConfig::CastMaxSpeed offset is not 30");
	auto constexpr FCastConfig_CastAnim_Offset = offsetof(FCastConfig, CastAnim);
	static_assert(FCastConfig_CastAnim_Offset == 0x35, "FCastConfig::CastAnim offset is not 35");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
