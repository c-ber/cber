#pragma once
#include "EUpdateRateShiftBucket.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimUpdateRateParameters // Size: 0x88
{
public:
    uint8_t UnknownData0[0x4];
    int32_t UpdateRate; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.AnimUpdateRateParameters.UpdateRate */
    int32_t EvaluationRate; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.AnimUpdateRateParameters.EvaluationRate */
    bool bInterpolateSkippedFrames; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Engine.AnimUpdateRateParameters.bInterpolateSkippedFrames */
    bool bShouldUseLodMap; /* Ofs: 0xD Size: 0x1 BitMask: 01 BoolProperty Engine.AnimUpdateRateParameters.bShouldUseLodMap */
    bool bSkipUpdate; /* Ofs: 0xE Size: 0x1 BitMask: 01 BoolProperty Engine.AnimUpdateRateParameters.bSkipUpdate */
    bool bSkipEvaluation; /* Ofs: 0xF Size: 0x1 BitMask: 01 BoolProperty Engine.AnimUpdateRateParameters.bSkipEvaluation */
    float TickedPoseOffestTime; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.AnimUpdateRateParameters.TickedPoseOffestTime */
    float AdditionalTime; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.AnimUpdateRateParameters.AdditionalTime */
    uint8_t UnknownData18[0x4];
    int32_t BaseNonRenderedUpdateRate; /* Ofs: 0x1C Size: 0x4 IntProperty Engine.AnimUpdateRateParameters.BaseNonRenderedUpdateRate */
    TArray<float> BaseVisibleDistanceFactorThesholds; /* Ofs: 0x20 Size: 0x10 ArrayProperty Engine.AnimUpdateRateParameters.BaseVisibleDistanceFactorThesholds */
    TMap<int32_t, int32_t> LODToFrameSkipMap; /* Ofs: 0x30 Size: 0x50 MapProperty Engine.AnimUpdateRateParameters.LODToFrameSkipMap */
    int32_t MaxEvalRateForInterpolation; /* Ofs: 0x80 Size: 0x4 IntProperty Engine.AnimUpdateRateParameters.MaxEvalRateForInterpolation */
    TEnumAsByte<enum EUpdateRateShiftBucket> ShiftBucket; /* Ofs: 0x84 Size: 0x1 EnumProperty Engine.AnimUpdateRateParameters.ShiftBucket */
    uint8_t UnknownData85[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimUpdateRateParameters = sizeof(FAnimUpdateRateParameters); // 136
    static_assert(sizeof(FAnimUpdateRateParameters) == 0x88, "Size of FAnimUpdateRateParameters is not correct.");
	auto constexpr FAnimUpdateRateParameters_UpdateRate_Offset = offsetof(FAnimUpdateRateParameters, UpdateRate);
	static_assert(FAnimUpdateRateParameters_UpdateRate_Offset == 0x4, "FAnimUpdateRateParameters::UpdateRate offset is not 4");
	auto constexpr FAnimUpdateRateParameters_EvaluationRate_Offset = offsetof(FAnimUpdateRateParameters, EvaluationRate);
	static_assert(FAnimUpdateRateParameters_EvaluationRate_Offset == 0x8, "FAnimUpdateRateParameters::EvaluationRate offset is not 8");
	auto constexpr FAnimUpdateRateParameters_TickedPoseOffestTime_Offset = offsetof(FAnimUpdateRateParameters, TickedPoseOffestTime);
	static_assert(FAnimUpdateRateParameters_TickedPoseOffestTime_Offset == 0x10, "FAnimUpdateRateParameters::TickedPoseOffestTime offset is not 10");
	auto constexpr FAnimUpdateRateParameters_AdditionalTime_Offset = offsetof(FAnimUpdateRateParameters, AdditionalTime);
	static_assert(FAnimUpdateRateParameters_AdditionalTime_Offset == 0x14, "FAnimUpdateRateParameters::AdditionalTime offset is not 14");
	auto constexpr FAnimUpdateRateParameters_BaseNonRenderedUpdateRate_Offset = offsetof(FAnimUpdateRateParameters, BaseNonRenderedUpdateRate);
	static_assert(FAnimUpdateRateParameters_BaseNonRenderedUpdateRate_Offset == 0x1c, "FAnimUpdateRateParameters::BaseNonRenderedUpdateRate offset is not 1c");
	auto constexpr FAnimUpdateRateParameters_BaseVisibleDistanceFactorThesholds_Offset = offsetof(FAnimUpdateRateParameters, BaseVisibleDistanceFactorThesholds);
	static_assert(FAnimUpdateRateParameters_BaseVisibleDistanceFactorThesholds_Offset == 0x20, "FAnimUpdateRateParameters::BaseVisibleDistanceFactorThesholds offset is not 20");
	auto constexpr FAnimUpdateRateParameters_LODToFrameSkipMap_Offset = offsetof(FAnimUpdateRateParameters, LODToFrameSkipMap);
	static_assert(FAnimUpdateRateParameters_LODToFrameSkipMap_Offset == 0x30, "FAnimUpdateRateParameters::LODToFrameSkipMap offset is not 30");
	auto constexpr FAnimUpdateRateParameters_MaxEvalRateForInterpolation_Offset = offsetof(FAnimUpdateRateParameters, MaxEvalRateForInterpolation);
	static_assert(FAnimUpdateRateParameters_MaxEvalRateForInterpolation_Offset == 0x80, "FAnimUpdateRateParameters::MaxEvalRateForInterpolation offset is not 80");
	auto constexpr FAnimUpdateRateParameters_ShiftBucket_Offset = offsetof(FAnimUpdateRateParameters, ShiftBucket);
	static_assert(FAnimUpdateRateParameters_ShiftBucket_Offset == 0x84, "FAnimUpdateRateParameters::ShiftBucket offset is not 84");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
