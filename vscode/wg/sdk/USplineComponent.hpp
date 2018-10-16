#pragma once
#include "UPrimitiveComponent.hpp"
#include "FSplineCurves.hpp"
#include "FInterpCurveVector.hpp"
#include "FInterpCurveQuat.hpp"
#include "FInterpCurveFloat.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USplineComponent // Size: 0x9D0
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef USplineComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(225); // id32("Class Engine.SplineComponent")
		return ptr;
	}
//	FSplineCurves SplineCurves; /* Ofs: 0x8E8 Size: 0x60 - StructProperty Engine.SplineComponent.SplineCurves */
	uint8_t UnknownData8F0[0x58];
	FInterpCurveVector SplineInfo; /* Ofs: 0x948 Size: 0x18 - StructProperty Engine.SplineComponent.SplineInfo */
	FInterpCurveQuat SplineRotInfo; /* Ofs: 0x960 Size: 0x18 - StructProperty Engine.SplineComponent.SplineRotInfo */
	FInterpCurveVector SplineScaleInfo; /* Ofs: 0x978 Size: 0x18 - StructProperty Engine.SplineComponent.SplineScaleInfo */
	FInterpCurveFloat SplineReparamTable; /* Ofs: 0x990 Size: 0x18 - StructProperty Engine.SplineComponent.SplineReparamTable */
	uint8_t boolField9A8;
	uint8_t UnknownData9A9[0x3];
	int32_t ReparamStepsPerSegment; /* Ofs: 0x9AC Size: 0x4 - IntProperty Engine.SplineComponent.ReparamStepsPerSegment */
	float Duration; /* Ofs: 0x9B0 Size: 0x4 - FloatProperty Engine.SplineComponent.Duration */
	uint8_t boolField9B4;
	uint8_t boolField9B5;
	uint8_t boolField9B6;
	uint8_t boolField9B7;
	uint8_t boolField9B8;
	uint8_t boolField9B9;
	uint8_t boolField9BA;
	uint8_t UnknownData9BB[0x1];
	float LoopPosition; /* Ofs: 0x9BC Size: 0x4 - FloatProperty Engine.SplineComponent.LoopPosition */
	FVector DefaultUpVector; /* Ofs: 0x9C0 Size: 0xC - StructProperty Engine.SplineComponent.DefaultUpVector */
	uint8_t UnknownData9CC[0x4];


//	inline bool SetSplineCurves(t_structHelper inst, FSplineCurves value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetSplineInfo(t_structHelper inst, FInterpCurveVector value) { inst.WriteOffset(0x948, value); }
	inline bool SetSplineRotInfo(t_structHelper inst, FInterpCurveQuat value) { inst.WriteOffset(0x960, value); }
	inline bool SetSplineScaleInfo(t_structHelper inst, FInterpCurveVector value) { inst.WriteOffset(0x978, value); }
	inline bool SetSplineReparamTable(t_structHelper inst, FInterpCurveFloat value) { inst.WriteOffset(0x990, value); }
	inline bool bAllowSplineEditingPerInstance()
	{
		return boolField9A8& 0x1;
	}
	inline bool SetbAllowSplineEditingPerInstance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReparamStepsPerSegment(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9AC, value); }
	inline bool SetDuration(t_structHelper inst, float value) { inst.WriteOffset(0x9B0, value); }
	inline bool bStationaryEndpoints()
	{
		return boolField9B4& 0x1;
	}
	inline bool SetbStationaryEndpoints(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9B4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSplineHasBeenEdited()
	{
		return boolField9B5& 0x1;
	}
	inline bool SetbSplineHasBeenEdited(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9B5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bModifiedByConstructionScript()
	{
		return boolField9B6& 0x1;
	}
	inline bool SetbModifiedByConstructionScript(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9B6, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bInputSplinePointsToConstructionScript()
	{
		return boolField9B7& 0x1;
	}
	inline bool SetbInputSplinePointsToConstructionScript(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9B7, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDrawDebug()
	{
		return boolField9B8& 0x1;
	}
	inline bool SetbDrawDebug(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9B8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bClosedLoop()
	{
		return boolField9B9& 0x1;
	}
	inline bool SetbClosedLoop(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9B9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLoopPositionOverride()
	{
		return boolField9BA& 0x1;
	}
	inline bool SetbLoopPositionOverride(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9BA, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLoopPosition(t_structHelper inst, float value) { inst.WriteOffset(0x9BC, value); }
	inline bool SetDefaultUpVector(t_structHelper inst, FVector value) { inst.WriteOffset(0x9C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSplineComponent = sizeof(USplineComponent); // 2512
    static_assert(sizeof(USplineComponent) == 0x9D0, "Size of USplineComponent is not correct.");
//	auto constexpr USplineComponent_SplineCurves_Offset = offsetof(USplineComponent, SplineCurves);
//	static_assert(USplineComponent_SplineCurves_Offset == 0x8e8, "USplineComponent::SplineCurves offset is not 8e8");
	auto constexpr USplineComponent_SplineInfo_Offset = offsetof(USplineComponent, SplineInfo);
	static_assert(USplineComponent_SplineInfo_Offset == 0x948, "USplineComponent::SplineInfo offset is not 948");
	auto constexpr USplineComponent_SplineRotInfo_Offset = offsetof(USplineComponent, SplineRotInfo);
	static_assert(USplineComponent_SplineRotInfo_Offset == 0x960, "USplineComponent::SplineRotInfo offset is not 960");
	auto constexpr USplineComponent_SplineScaleInfo_Offset = offsetof(USplineComponent, SplineScaleInfo);
	static_assert(USplineComponent_SplineScaleInfo_Offset == 0x978, "USplineComponent::SplineScaleInfo offset is not 978");
	auto constexpr USplineComponent_SplineReparamTable_Offset = offsetof(USplineComponent, SplineReparamTable);
	static_assert(USplineComponent_SplineReparamTable_Offset == 0x990, "USplineComponent::SplineReparamTable offset is not 990");
	auto constexpr USplineComponent_boolField9A8_Offset = offsetof(USplineComponent, boolField9A8);
	static_assert(USplineComponent_boolField9A8_Offset == 0x9a8, "USplineComponent::boolField9A8 offset is not 9a8");
	auto constexpr USplineComponent_ReparamStepsPerSegment_Offset = offsetof(USplineComponent, ReparamStepsPerSegment);
	static_assert(USplineComponent_ReparamStepsPerSegment_Offset == 0x9ac, "USplineComponent::ReparamStepsPerSegment offset is not 9ac");
	auto constexpr USplineComponent_Duration_Offset = offsetof(USplineComponent, Duration);
	static_assert(USplineComponent_Duration_Offset == 0x9b0, "USplineComponent::Duration offset is not 9b0");
	auto constexpr USplineComponent_boolField9B4_Offset = offsetof(USplineComponent, boolField9B4);
	static_assert(USplineComponent_boolField9B4_Offset == 0x9b4, "USplineComponent::boolField9B4 offset is not 9b4");
	auto constexpr USplineComponent_boolField9B5_Offset = offsetof(USplineComponent, boolField9B5);
	static_assert(USplineComponent_boolField9B5_Offset == 0x9b5, "USplineComponent::boolField9B5 offset is not 9b5");
	auto constexpr USplineComponent_boolField9B6_Offset = offsetof(USplineComponent, boolField9B6);
	static_assert(USplineComponent_boolField9B6_Offset == 0x9b6, "USplineComponent::boolField9B6 offset is not 9b6");
	auto constexpr USplineComponent_boolField9B7_Offset = offsetof(USplineComponent, boolField9B7);
	static_assert(USplineComponent_boolField9B7_Offset == 0x9b7, "USplineComponent::boolField9B7 offset is not 9b7");
	auto constexpr USplineComponent_boolField9B8_Offset = offsetof(USplineComponent, boolField9B8);
	static_assert(USplineComponent_boolField9B8_Offset == 0x9b8, "USplineComponent::boolField9B8 offset is not 9b8");
	auto constexpr USplineComponent_boolField9B9_Offset = offsetof(USplineComponent, boolField9B9);
	static_assert(USplineComponent_boolField9B9_Offset == 0x9b9, "USplineComponent::boolField9B9 offset is not 9b9");
	auto constexpr USplineComponent_boolField9BA_Offset = offsetof(USplineComponent, boolField9BA);
	static_assert(USplineComponent_boolField9BA_Offset == 0x9ba, "USplineComponent::boolField9BA offset is not 9ba");
	auto constexpr USplineComponent_LoopPosition_Offset = offsetof(USplineComponent, LoopPosition);
	static_assert(USplineComponent_LoopPosition_Offset == 0x9bc, "USplineComponent::LoopPosition offset is not 9bc");
	auto constexpr USplineComponent_DefaultUpVector_Offset = offsetof(USplineComponent, DefaultUpVector);
	static_assert(USplineComponent_DefaultUpVector_Offset == 0x9c0, "USplineComponent::DefaultUpVector offset is not 9c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
