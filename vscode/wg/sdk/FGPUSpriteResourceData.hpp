#pragma once
#include "FVector4.hpp"
#include "FVector.hpp"
#include "EParticleScreenAlignment.hpp"
#include "EParticleAxisLock.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGPUSpriteResourceData // Size: 0x160
{
public:
    TArray<struct FColor> QuantizedColorSamples; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.GPUSpriteResourceData.QuantizedColorSamples */
    TArray<struct FColor> QuantizedMiscSamples; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.GPUSpriteResourceData.QuantizedMiscSamples */
    TArray<struct FColor> QuantizedSimulationAttrSamples; /* Ofs: 0x20 Size: 0x10 ArrayProperty Engine.GPUSpriteResourceData.QuantizedSimulationAttrSamples */
    FVector4 ColorScale; /* Ofs: 0x30 Size: 0x10 StructProperty Engine.GPUSpriteResourceData.ColorScale */
    FVector4 ColorBias; /* Ofs: 0x40 Size: 0x10 StructProperty Engine.GPUSpriteResourceData.ColorBias */
    FVector4 MiscScale; /* Ofs: 0x50 Size: 0x10 StructProperty Engine.GPUSpriteResourceData.MiscScale */
    FVector4 MiscBias; /* Ofs: 0x60 Size: 0x10 StructProperty Engine.GPUSpriteResourceData.MiscBias */
    FVector4 SimulationAttrCurveScale; /* Ofs: 0x70 Size: 0x10 StructProperty Engine.GPUSpriteResourceData.SimulationAttrCurveScale */
    FVector4 SimulationAttrCurveBias; /* Ofs: 0x80 Size: 0x10 StructProperty Engine.GPUSpriteResourceData.SimulationAttrCurveBias */
    FVector4 SubImageSize; /* Ofs: 0x90 Size: 0x10 StructProperty Engine.GPUSpriteResourceData.SubImageSize */
    FVector4 SizeBySpeed; /* Ofs: 0xA0 Size: 0x10 StructProperty Engine.GPUSpriteResourceData.SizeBySpeed */
    FVector ConstantAcceleration; /* Ofs: 0xB0 Size: 0xC StructProperty Engine.GPUSpriteResourceData.ConstantAcceleration */
    FVector OrbitOffsetBase; /* Ofs: 0xBC Size: 0xC StructProperty Engine.GPUSpriteResourceData.OrbitOffsetBase */
    FVector OrbitOffsetRange; /* Ofs: 0xC8 Size: 0xC StructProperty Engine.GPUSpriteResourceData.OrbitOffsetRange */
    FVector OrbitFrequencyBase; /* Ofs: 0xD4 Size: 0xC StructProperty Engine.GPUSpriteResourceData.OrbitFrequencyBase */
    FVector OrbitFrequencyRange; /* Ofs: 0xE0 Size: 0xC StructProperty Engine.GPUSpriteResourceData.OrbitFrequencyRange */
    FVector OrbitPhaseBase; /* Ofs: 0xEC Size: 0xC StructProperty Engine.GPUSpriteResourceData.OrbitPhaseBase */
    FVector OrbitPhaseRange; /* Ofs: 0xF8 Size: 0xC StructProperty Engine.GPUSpriteResourceData.OrbitPhaseRange */
    float GlobalVectorFieldScale; /* Ofs: 0x104 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.GlobalVectorFieldScale */
    float GlobalVectorFieldTightness; /* Ofs: 0x108 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.GlobalVectorFieldTightness */
    float PerParticleVectorFieldScale; /* Ofs: 0x10C Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.PerParticleVectorFieldScale */
    float PerParticleVectorFieldBias; /* Ofs: 0x110 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.PerParticleVectorFieldBias */
    float DragCoefficientScale; /* Ofs: 0x114 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.DragCoefficientScale */
    float DragCoefficientBias; /* Ofs: 0x118 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.DragCoefficientBias */
    float ResilienceScale; /* Ofs: 0x11C Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.ResilienceScale */
    float ResilienceBias; /* Ofs: 0x120 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.ResilienceBias */
    float CollisionRadiusScale; /* Ofs: 0x124 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.CollisionRadiusScale */
    float CollisionRadiusBias; /* Ofs: 0x128 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.CollisionRadiusBias */
    float CollisionTimeBias; /* Ofs: 0x12C Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.CollisionTimeBias */
    float CollisionRandomSpread; /* Ofs: 0x130 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.CollisionRandomSpread */
    float CollisionRandomDistribution; /* Ofs: 0x134 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.CollisionRandomDistribution */
    float OneMinusFriction; /* Ofs: 0x138 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.OneMinusFriction */
    float RotationRateScale; /* Ofs: 0x13C Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.RotationRateScale */
    float CameraMotionBlurAmount; /* Ofs: 0x140 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.CameraMotionBlurAmount */
    TEnumAsByte<enum EParticleScreenAlignment> ScreenAlignment; /* Ofs: 0x144 Size: 0x1 ByteProperty Engine.GPUSpriteResourceData.ScreenAlignment */
    TEnumAsByte<enum EParticleAxisLock> LockAxisFlag; /* Ofs: 0x145 Size: 0x1 ByteProperty Engine.GPUSpriteResourceData.LockAxisFlag */
    uint8_t UnknownData146[0x2];
    FVector2D PivotOffset; /* Ofs: 0x148 Size: 0x8 StructProperty Engine.GPUSpriteResourceData.PivotOffset */
    bool bRemoveHMDRoll; /* Ofs: 0x150 Size: 0x1 BitMask: 01 BoolProperty Engine.GPUSpriteResourceData.bRemoveHMDRoll */
    uint8_t UnknownData151[0x3];
    float MinFacingCameraBlendDistance; /* Ofs: 0x154 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.MinFacingCameraBlendDistance */
    float MaxFacingCameraBlendDistance; /* Ofs: 0x158 Size: 0x4 FloatProperty Engine.GPUSpriteResourceData.MaxFacingCameraBlendDistance */
    uint8_t UnknownData15C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGPUSpriteResourceData = sizeof(FGPUSpriteResourceData); // 352
    static_assert(sizeof(FGPUSpriteResourceData) == 0x160, "Size of FGPUSpriteResourceData is not correct.");
	auto constexpr FGPUSpriteResourceData_QuantizedColorSamples_Offset = offsetof(FGPUSpriteResourceData, QuantizedColorSamples);
	static_assert(FGPUSpriteResourceData_QuantizedColorSamples_Offset == 0x0, "FGPUSpriteResourceData::QuantizedColorSamples offset is not 0");
	auto constexpr FGPUSpriteResourceData_QuantizedMiscSamples_Offset = offsetof(FGPUSpriteResourceData, QuantizedMiscSamples);
	static_assert(FGPUSpriteResourceData_QuantizedMiscSamples_Offset == 0x10, "FGPUSpriteResourceData::QuantizedMiscSamples offset is not 10");
	auto constexpr FGPUSpriteResourceData_QuantizedSimulationAttrSamples_Offset = offsetof(FGPUSpriteResourceData, QuantizedSimulationAttrSamples);
	static_assert(FGPUSpriteResourceData_QuantizedSimulationAttrSamples_Offset == 0x20, "FGPUSpriteResourceData::QuantizedSimulationAttrSamples offset is not 20");
	auto constexpr FGPUSpriteResourceData_ColorScale_Offset = offsetof(FGPUSpriteResourceData, ColorScale);
	static_assert(FGPUSpriteResourceData_ColorScale_Offset == 0x30, "FGPUSpriteResourceData::ColorScale offset is not 30");
	auto constexpr FGPUSpriteResourceData_ColorBias_Offset = offsetof(FGPUSpriteResourceData, ColorBias);
	static_assert(FGPUSpriteResourceData_ColorBias_Offset == 0x40, "FGPUSpriteResourceData::ColorBias offset is not 40");
	auto constexpr FGPUSpriteResourceData_MiscScale_Offset = offsetof(FGPUSpriteResourceData, MiscScale);
	static_assert(FGPUSpriteResourceData_MiscScale_Offset == 0x50, "FGPUSpriteResourceData::MiscScale offset is not 50");
	auto constexpr FGPUSpriteResourceData_MiscBias_Offset = offsetof(FGPUSpriteResourceData, MiscBias);
	static_assert(FGPUSpriteResourceData_MiscBias_Offset == 0x60, "FGPUSpriteResourceData::MiscBias offset is not 60");
	auto constexpr FGPUSpriteResourceData_SimulationAttrCurveScale_Offset = offsetof(FGPUSpriteResourceData, SimulationAttrCurveScale);
	static_assert(FGPUSpriteResourceData_SimulationAttrCurveScale_Offset == 0x70, "FGPUSpriteResourceData::SimulationAttrCurveScale offset is not 70");
	auto constexpr FGPUSpriteResourceData_SimulationAttrCurveBias_Offset = offsetof(FGPUSpriteResourceData, SimulationAttrCurveBias);
	static_assert(FGPUSpriteResourceData_SimulationAttrCurveBias_Offset == 0x80, "FGPUSpriteResourceData::SimulationAttrCurveBias offset is not 80");
	auto constexpr FGPUSpriteResourceData_SubImageSize_Offset = offsetof(FGPUSpriteResourceData, SubImageSize);
	static_assert(FGPUSpriteResourceData_SubImageSize_Offset == 0x90, "FGPUSpriteResourceData::SubImageSize offset is not 90");
	auto constexpr FGPUSpriteResourceData_SizeBySpeed_Offset = offsetof(FGPUSpriteResourceData, SizeBySpeed);
	static_assert(FGPUSpriteResourceData_SizeBySpeed_Offset == 0xa0, "FGPUSpriteResourceData::SizeBySpeed offset is not a0");
	auto constexpr FGPUSpriteResourceData_ConstantAcceleration_Offset = offsetof(FGPUSpriteResourceData, ConstantAcceleration);
	static_assert(FGPUSpriteResourceData_ConstantAcceleration_Offset == 0xb0, "FGPUSpriteResourceData::ConstantAcceleration offset is not b0");
	auto constexpr FGPUSpriteResourceData_OrbitOffsetBase_Offset = offsetof(FGPUSpriteResourceData, OrbitOffsetBase);
	static_assert(FGPUSpriteResourceData_OrbitOffsetBase_Offset == 0xbc, "FGPUSpriteResourceData::OrbitOffsetBase offset is not bc");
	auto constexpr FGPUSpriteResourceData_OrbitOffsetRange_Offset = offsetof(FGPUSpriteResourceData, OrbitOffsetRange);
	static_assert(FGPUSpriteResourceData_OrbitOffsetRange_Offset == 0xc8, "FGPUSpriteResourceData::OrbitOffsetRange offset is not c8");
	auto constexpr FGPUSpriteResourceData_OrbitFrequencyBase_Offset = offsetof(FGPUSpriteResourceData, OrbitFrequencyBase);
	static_assert(FGPUSpriteResourceData_OrbitFrequencyBase_Offset == 0xd4, "FGPUSpriteResourceData::OrbitFrequencyBase offset is not d4");
	auto constexpr FGPUSpriteResourceData_OrbitFrequencyRange_Offset = offsetof(FGPUSpriteResourceData, OrbitFrequencyRange);
	static_assert(FGPUSpriteResourceData_OrbitFrequencyRange_Offset == 0xe0, "FGPUSpriteResourceData::OrbitFrequencyRange offset is not e0");
	auto constexpr FGPUSpriteResourceData_OrbitPhaseBase_Offset = offsetof(FGPUSpriteResourceData, OrbitPhaseBase);
	static_assert(FGPUSpriteResourceData_OrbitPhaseBase_Offset == 0xec, "FGPUSpriteResourceData::OrbitPhaseBase offset is not ec");
	auto constexpr FGPUSpriteResourceData_OrbitPhaseRange_Offset = offsetof(FGPUSpriteResourceData, OrbitPhaseRange);
	static_assert(FGPUSpriteResourceData_OrbitPhaseRange_Offset == 0xf8, "FGPUSpriteResourceData::OrbitPhaseRange offset is not f8");
	auto constexpr FGPUSpriteResourceData_GlobalVectorFieldScale_Offset = offsetof(FGPUSpriteResourceData, GlobalVectorFieldScale);
	static_assert(FGPUSpriteResourceData_GlobalVectorFieldScale_Offset == 0x104, "FGPUSpriteResourceData::GlobalVectorFieldScale offset is not 104");
	auto constexpr FGPUSpriteResourceData_GlobalVectorFieldTightness_Offset = offsetof(FGPUSpriteResourceData, GlobalVectorFieldTightness);
	static_assert(FGPUSpriteResourceData_GlobalVectorFieldTightness_Offset == 0x108, "FGPUSpriteResourceData::GlobalVectorFieldTightness offset is not 108");
	auto constexpr FGPUSpriteResourceData_PerParticleVectorFieldScale_Offset = offsetof(FGPUSpriteResourceData, PerParticleVectorFieldScale);
	static_assert(FGPUSpriteResourceData_PerParticleVectorFieldScale_Offset == 0x10c, "FGPUSpriteResourceData::PerParticleVectorFieldScale offset is not 10c");
	auto constexpr FGPUSpriteResourceData_PerParticleVectorFieldBias_Offset = offsetof(FGPUSpriteResourceData, PerParticleVectorFieldBias);
	static_assert(FGPUSpriteResourceData_PerParticleVectorFieldBias_Offset == 0x110, "FGPUSpriteResourceData::PerParticleVectorFieldBias offset is not 110");
	auto constexpr FGPUSpriteResourceData_DragCoefficientScale_Offset = offsetof(FGPUSpriteResourceData, DragCoefficientScale);
	static_assert(FGPUSpriteResourceData_DragCoefficientScale_Offset == 0x114, "FGPUSpriteResourceData::DragCoefficientScale offset is not 114");
	auto constexpr FGPUSpriteResourceData_DragCoefficientBias_Offset = offsetof(FGPUSpriteResourceData, DragCoefficientBias);
	static_assert(FGPUSpriteResourceData_DragCoefficientBias_Offset == 0x118, "FGPUSpriteResourceData::DragCoefficientBias offset is not 118");
	auto constexpr FGPUSpriteResourceData_ResilienceScale_Offset = offsetof(FGPUSpriteResourceData, ResilienceScale);
	static_assert(FGPUSpriteResourceData_ResilienceScale_Offset == 0x11c, "FGPUSpriteResourceData::ResilienceScale offset is not 11c");
	auto constexpr FGPUSpriteResourceData_ResilienceBias_Offset = offsetof(FGPUSpriteResourceData, ResilienceBias);
	static_assert(FGPUSpriteResourceData_ResilienceBias_Offset == 0x120, "FGPUSpriteResourceData::ResilienceBias offset is not 120");
	auto constexpr FGPUSpriteResourceData_CollisionRadiusScale_Offset = offsetof(FGPUSpriteResourceData, CollisionRadiusScale);
	static_assert(FGPUSpriteResourceData_CollisionRadiusScale_Offset == 0x124, "FGPUSpriteResourceData::CollisionRadiusScale offset is not 124");
	auto constexpr FGPUSpriteResourceData_CollisionRadiusBias_Offset = offsetof(FGPUSpriteResourceData, CollisionRadiusBias);
	static_assert(FGPUSpriteResourceData_CollisionRadiusBias_Offset == 0x128, "FGPUSpriteResourceData::CollisionRadiusBias offset is not 128");
	auto constexpr FGPUSpriteResourceData_CollisionTimeBias_Offset = offsetof(FGPUSpriteResourceData, CollisionTimeBias);
	static_assert(FGPUSpriteResourceData_CollisionTimeBias_Offset == 0x12c, "FGPUSpriteResourceData::CollisionTimeBias offset is not 12c");
	auto constexpr FGPUSpriteResourceData_CollisionRandomSpread_Offset = offsetof(FGPUSpriteResourceData, CollisionRandomSpread);
	static_assert(FGPUSpriteResourceData_CollisionRandomSpread_Offset == 0x130, "FGPUSpriteResourceData::CollisionRandomSpread offset is not 130");
	auto constexpr FGPUSpriteResourceData_CollisionRandomDistribution_Offset = offsetof(FGPUSpriteResourceData, CollisionRandomDistribution);
	static_assert(FGPUSpriteResourceData_CollisionRandomDistribution_Offset == 0x134, "FGPUSpriteResourceData::CollisionRandomDistribution offset is not 134");
	auto constexpr FGPUSpriteResourceData_OneMinusFriction_Offset = offsetof(FGPUSpriteResourceData, OneMinusFriction);
	static_assert(FGPUSpriteResourceData_OneMinusFriction_Offset == 0x138, "FGPUSpriteResourceData::OneMinusFriction offset is not 138");
	auto constexpr FGPUSpriteResourceData_RotationRateScale_Offset = offsetof(FGPUSpriteResourceData, RotationRateScale);
	static_assert(FGPUSpriteResourceData_RotationRateScale_Offset == 0x13c, "FGPUSpriteResourceData::RotationRateScale offset is not 13c");
	auto constexpr FGPUSpriteResourceData_CameraMotionBlurAmount_Offset = offsetof(FGPUSpriteResourceData, CameraMotionBlurAmount);
	static_assert(FGPUSpriteResourceData_CameraMotionBlurAmount_Offset == 0x140, "FGPUSpriteResourceData::CameraMotionBlurAmount offset is not 140");
	auto constexpr FGPUSpriteResourceData_ScreenAlignment_Offset = offsetof(FGPUSpriteResourceData, ScreenAlignment);
	static_assert(FGPUSpriteResourceData_ScreenAlignment_Offset == 0x144, "FGPUSpriteResourceData::ScreenAlignment offset is not 144");
	auto constexpr FGPUSpriteResourceData_LockAxisFlag_Offset = offsetof(FGPUSpriteResourceData, LockAxisFlag);
	static_assert(FGPUSpriteResourceData_LockAxisFlag_Offset == 0x145, "FGPUSpriteResourceData::LockAxisFlag offset is not 145");
	auto constexpr FGPUSpriteResourceData_PivotOffset_Offset = offsetof(FGPUSpriteResourceData, PivotOffset);
	static_assert(FGPUSpriteResourceData_PivotOffset_Offset == 0x148, "FGPUSpriteResourceData::PivotOffset offset is not 148");
	auto constexpr FGPUSpriteResourceData_MinFacingCameraBlendDistance_Offset = offsetof(FGPUSpriteResourceData, MinFacingCameraBlendDistance);
	static_assert(FGPUSpriteResourceData_MinFacingCameraBlendDistance_Offset == 0x154, "FGPUSpriteResourceData::MinFacingCameraBlendDistance offset is not 154");
	auto constexpr FGPUSpriteResourceData_MaxFacingCameraBlendDistance_Offset = offsetof(FGPUSpriteResourceData, MaxFacingCameraBlendDistance);
	static_assert(FGPUSpriteResourceData_MaxFacingCameraBlendDistance_Offset == 0x158, "FGPUSpriteResourceData::MaxFacingCameraBlendDistance offset is not 158");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
