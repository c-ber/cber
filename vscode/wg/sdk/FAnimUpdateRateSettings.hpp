#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimUpdateRateSettings // Size: 0x78
{
public:
    bool bUseLookAheadMode; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.AnimUpdateRateSettings.bUseLookAheadMode */
    bool bShouldUseLodMap; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty TslGame.AnimUpdateRateSettings.bShouldUseLodMap */
    uint8_t UnknownData2[0x6];
    TMap<int32_t, int32_t> LODToFrameSkipMap; /* Ofs: 0x8 Size: 0x50 MapProperty TslGame.AnimUpdateRateSettings.LODToFrameSkipMap */
    int32_t BaseNonRenderedUpdateRate; /* Ofs: 0x58 Size: 0x4 IntProperty TslGame.AnimUpdateRateSettings.BaseNonRenderedUpdateRate */
    uint8_t UnknownData5C[0x4];
    TArray<float> BaseVisibleDistanceFactorThesholds; /* Ofs: 0x60 Size: 0x10 ArrayProperty TslGame.AnimUpdateRateSettings.BaseVisibleDistanceFactorThesholds */
    int32_t MaxEvalRateForInterpolation; /* Ofs: 0x70 Size: 0x4 IntProperty TslGame.AnimUpdateRateSettings.MaxEvalRateForInterpolation */
    uint8_t UnknownData74[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimUpdateRateSettings = sizeof(FAnimUpdateRateSettings); // 120
    static_assert(sizeof(FAnimUpdateRateSettings) == 0x78, "Size of FAnimUpdateRateSettings is not correct.");
	auto constexpr FAnimUpdateRateSettings_LODToFrameSkipMap_Offset = offsetof(FAnimUpdateRateSettings, LODToFrameSkipMap);
	static_assert(FAnimUpdateRateSettings_LODToFrameSkipMap_Offset == 0x8, "FAnimUpdateRateSettings::LODToFrameSkipMap offset is not 8");
	auto constexpr FAnimUpdateRateSettings_BaseNonRenderedUpdateRate_Offset = offsetof(FAnimUpdateRateSettings, BaseNonRenderedUpdateRate);
	static_assert(FAnimUpdateRateSettings_BaseNonRenderedUpdateRate_Offset == 0x58, "FAnimUpdateRateSettings::BaseNonRenderedUpdateRate offset is not 58");
	auto constexpr FAnimUpdateRateSettings_BaseVisibleDistanceFactorThesholds_Offset = offsetof(FAnimUpdateRateSettings, BaseVisibleDistanceFactorThesholds);
	static_assert(FAnimUpdateRateSettings_BaseVisibleDistanceFactorThesholds_Offset == 0x60, "FAnimUpdateRateSettings::BaseVisibleDistanceFactorThesholds offset is not 60");
	auto constexpr FAnimUpdateRateSettings_MaxEvalRateForInterpolation_Offset = offsetof(FAnimUpdateRateSettings, MaxEvalRateForInterpolation);
	static_assert(FAnimUpdateRateSettings_MaxEvalRateForInterpolation_Offset == 0x70, "FAnimUpdateRateSettings::MaxEvalRateForInterpolation offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
