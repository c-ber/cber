#pragma once
#include "ULightComponent.hpp"
#include "FVector.hpp"
#include "FLightmassDirectionalLightSettings.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDirectionalLightComponent // Size: 0x640
	: public ULightComponent // Size: 0x5D0
{
private:
	typedef UDirectionalLightComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(188); // id32("Class Engine.DirectionalLightComponent")
		return ptr;
	}
//	uint8_t boolField5C8;
//	float OcclusionMaskDarkness; /* Ofs: 0x5CC Size: 0x4 - FloatProperty Engine.DirectionalLightComponent.OcclusionMaskDarkness */
	float OcclusionDepthRange; /* Ofs: 0x5D0 Size: 0x4 - FloatProperty Engine.DirectionalLightComponent.OcclusionDepthRange */
	FVector LightShaftOverrideDirection; /* Ofs: 0x5D4 Size: 0xC - StructProperty Engine.DirectionalLightComponent.LightShaftOverrideDirection */
	float WholeSceneDynamicShadowRadius; /* Ofs: 0x5E0 Size: 0x4 - FloatProperty Engine.DirectionalLightComponent.WholeSceneDynamicShadowRadius */
	float DynamicShadowDistanceMovableLight; /* Ofs: 0x5E4 Size: 0x4 - FloatProperty Engine.DirectionalLightComponent.DynamicShadowDistanceMovableLight */
	float DynamicShadowDistanceStationaryLight; /* Ofs: 0x5E8 Size: 0x4 - FloatProperty Engine.DirectionalLightComponent.DynamicShadowDistanceStationaryLight */
	int32_t DynamicShadowCascades; /* Ofs: 0x5EC Size: 0x4 - IntProperty Engine.DirectionalLightComponent.DynamicShadowCascades */
	float CascadeDistributionExponent; /* Ofs: 0x5F0 Size: 0x4 - FloatProperty Engine.DirectionalLightComponent.CascadeDistributionExponent */
	float CascadeTransitionFraction; /* Ofs: 0x5F4 Size: 0x4 - FloatProperty Engine.DirectionalLightComponent.CascadeTransitionFraction */
	float ShadowDistanceFadeoutFraction; /* Ofs: 0x5F8 Size: 0x4 - FloatProperty Engine.DirectionalLightComponent.ShadowDistanceFadeoutFraction */
	uint8_t boolField5FC;
	uint8_t UnknownData5FD[0x3];
	int32_t FarShadowCascadeCount; /* Ofs: 0x600 Size: 0x4 - IntProperty Engine.DirectionalLightComponent.FarShadowCascadeCount */
	float FarShadowDistance; /* Ofs: 0x604 Size: 0x4 - FloatProperty Engine.DirectionalLightComponent.FarShadowDistance */
	float DistanceFieldShadowDistance; /* Ofs: 0x608 Size: 0x4 - FloatProperty Engine.DirectionalLightComponent.DistanceFieldShadowDistance */
	float LightSourceAngle; /* Ofs: 0x60C Size: 0x4 - FloatProperty Engine.DirectionalLightComponent.LightSourceAngle */
	float TraceDistance; /* Ofs: 0x610 Size: 0x4 - FloatProperty Engine.DirectionalLightComponent.TraceDistance */
	FLightmassDirectionalLightSettings LightmassSettings; /* Ofs: 0x614 Size: 0x10 - StructProperty Engine.DirectionalLightComponent.LightmassSettings */
	uint8_t boolField624;
	uint8_t UnknownData625[0x3];
	FColor ModulatedShadowColor; /* Ofs: 0x628 Size: 0x4 - StructProperty Engine.DirectionalLightComponent.ModulatedShadowColor */
	uint8_t boolField62C;
	uint8_t UnknownData62D[0x3];
	TArray<struct FGridShadowSplitSettings> GridShadowSplitSettings; /* Ofs: 0x630 Size: 0x10 - ArrayProperty Engine.DirectionalLightComponent.GridShadowSplitSettings */


//	inline bool SetOcclusionMaskDarkness(t_structHelper inst, float value) { inst.WriteOffset(0x5CC, value); }
	inline bool SetOcclusionDepthRange(t_structHelper inst, float value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetLightShaftOverrideDirection(t_structHelper inst, FVector value) { inst.WriteOffset(0x5D4, value); }
	inline bool SetWholeSceneDynamicShadowRadius(t_structHelper inst, float value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetDynamicShadowDistanceMovableLight(t_structHelper inst, float value) { inst.WriteOffset(0x5E4, value); }
	inline bool SetDynamicShadowDistanceStationaryLight(t_structHelper inst, float value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetDynamicShadowCascades(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5EC, value); }
	inline bool SetCascadeDistributionExponent(t_structHelper inst, float value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetCascadeTransitionFraction(t_structHelper inst, float value) { inst.WriteOffset(0x5F4, value); }
	inline bool SetShadowDistanceFadeoutFraction(t_structHelper inst, float value) { inst.WriteOffset(0x5F8, value); }
	inline bool bUseInsetShadowsForMovableObjects()
	{
		return boolField5FC& 0x1;
	}
	inline bool SetbUseInsetShadowsForMovableObjects(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5FC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFarShadowCascadeCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x600, value); }
	inline bool SetFarShadowDistance(t_structHelper inst, float value) { inst.WriteOffset(0x604, value); }
	inline bool SetDistanceFieldShadowDistance(t_structHelper inst, float value) { inst.WriteOffset(0x608, value); }
	inline bool SetLightSourceAngle(t_structHelper inst, float value) { inst.WriteOffset(0x60C, value); }
	inline bool SetTraceDistance(t_structHelper inst, float value) { inst.WriteOffset(0x610, value); }
	inline bool SetLightmassSettings(t_structHelper inst, FLightmassDirectionalLightSettings value) { inst.WriteOffset(0x614, value); }
	inline bool bCastModulatedShadows()
	{
		return boolField624& 0x1;
	}
	inline bool SetbCastModulatedShadows(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x624, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetModulatedShadowColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x628, value); }
	inline bool bUsedAsAtmosphereSunLight()
	{
		return boolField62C& 0x1;
	}
	inline bool SetbUsedAsAtmosphereSunLight(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x62C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseGridShadow()
	{
		return boolField62C& 0x2;
	}
	inline bool SetbUseGridShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x62C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetGridShadowSplitSettings(t_structHelper inst, TArray<struct FGridShadowSplitSettings> value) { inst.WriteOffset(0x630, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDirectionalLightComponent = sizeof(UDirectionalLightComponent); // 1600
    static_assert(sizeof(UDirectionalLightComponent) == 0x640, "Size of UDirectionalLightComponent is not correct.");
//	auto constexpr UDirectionalLightComponent_boolField5C8_Offset = offsetof(UDirectionalLightComponent, boolField5C8);
//	static_assert(UDirectionalLightComponent_boolField5C8_Offset == 0x5c8, "UDirectionalLightComponent::boolField5C8 offset is not 5c8");
//	auto constexpr UDirectionalLightComponent_OcclusionMaskDarkness_Offset = offsetof(UDirectionalLightComponent, OcclusionMaskDarkness);
//	static_assert(UDirectionalLightComponent_OcclusionMaskDarkness_Offset == 0x5cc, "UDirectionalLightComponent::OcclusionMaskDarkness offset is not 5cc");
	auto constexpr UDirectionalLightComponent_OcclusionDepthRange_Offset = offsetof(UDirectionalLightComponent, OcclusionDepthRange);
	static_assert(UDirectionalLightComponent_OcclusionDepthRange_Offset == 0x5d0, "UDirectionalLightComponent::OcclusionDepthRange offset is not 5d0");
	auto constexpr UDirectionalLightComponent_LightShaftOverrideDirection_Offset = offsetof(UDirectionalLightComponent, LightShaftOverrideDirection);
	static_assert(UDirectionalLightComponent_LightShaftOverrideDirection_Offset == 0x5d4, "UDirectionalLightComponent::LightShaftOverrideDirection offset is not 5d4");
	auto constexpr UDirectionalLightComponent_WholeSceneDynamicShadowRadius_Offset = offsetof(UDirectionalLightComponent, WholeSceneDynamicShadowRadius);
	static_assert(UDirectionalLightComponent_WholeSceneDynamicShadowRadius_Offset == 0x5e0, "UDirectionalLightComponent::WholeSceneDynamicShadowRadius offset is not 5e0");
	auto constexpr UDirectionalLightComponent_DynamicShadowDistanceMovableLight_Offset = offsetof(UDirectionalLightComponent, DynamicShadowDistanceMovableLight);
	static_assert(UDirectionalLightComponent_DynamicShadowDistanceMovableLight_Offset == 0x5e4, "UDirectionalLightComponent::DynamicShadowDistanceMovableLight offset is not 5e4");
	auto constexpr UDirectionalLightComponent_DynamicShadowDistanceStationaryLight_Offset = offsetof(UDirectionalLightComponent, DynamicShadowDistanceStationaryLight);
	static_assert(UDirectionalLightComponent_DynamicShadowDistanceStationaryLight_Offset == 0x5e8, "UDirectionalLightComponent::DynamicShadowDistanceStationaryLight offset is not 5e8");
	auto constexpr UDirectionalLightComponent_DynamicShadowCascades_Offset = offsetof(UDirectionalLightComponent, DynamicShadowCascades);
	static_assert(UDirectionalLightComponent_DynamicShadowCascades_Offset == 0x5ec, "UDirectionalLightComponent::DynamicShadowCascades offset is not 5ec");
	auto constexpr UDirectionalLightComponent_CascadeDistributionExponent_Offset = offsetof(UDirectionalLightComponent, CascadeDistributionExponent);
	static_assert(UDirectionalLightComponent_CascadeDistributionExponent_Offset == 0x5f0, "UDirectionalLightComponent::CascadeDistributionExponent offset is not 5f0");
	auto constexpr UDirectionalLightComponent_CascadeTransitionFraction_Offset = offsetof(UDirectionalLightComponent, CascadeTransitionFraction);
	static_assert(UDirectionalLightComponent_CascadeTransitionFraction_Offset == 0x5f4, "UDirectionalLightComponent::CascadeTransitionFraction offset is not 5f4");
	auto constexpr UDirectionalLightComponent_ShadowDistanceFadeoutFraction_Offset = offsetof(UDirectionalLightComponent, ShadowDistanceFadeoutFraction);
	static_assert(UDirectionalLightComponent_ShadowDistanceFadeoutFraction_Offset == 0x5f8, "UDirectionalLightComponent::ShadowDistanceFadeoutFraction offset is not 5f8");
	auto constexpr UDirectionalLightComponent_boolField5FC_Offset = offsetof(UDirectionalLightComponent, boolField5FC);
	static_assert(UDirectionalLightComponent_boolField5FC_Offset == 0x5fc, "UDirectionalLightComponent::boolField5FC offset is not 5fc");
	auto constexpr UDirectionalLightComponent_FarShadowCascadeCount_Offset = offsetof(UDirectionalLightComponent, FarShadowCascadeCount);
	static_assert(UDirectionalLightComponent_FarShadowCascadeCount_Offset == 0x600, "UDirectionalLightComponent::FarShadowCascadeCount offset is not 600");
	auto constexpr UDirectionalLightComponent_FarShadowDistance_Offset = offsetof(UDirectionalLightComponent, FarShadowDistance);
	static_assert(UDirectionalLightComponent_FarShadowDistance_Offset == 0x604, "UDirectionalLightComponent::FarShadowDistance offset is not 604");
	auto constexpr UDirectionalLightComponent_DistanceFieldShadowDistance_Offset = offsetof(UDirectionalLightComponent, DistanceFieldShadowDistance);
	static_assert(UDirectionalLightComponent_DistanceFieldShadowDistance_Offset == 0x608, "UDirectionalLightComponent::DistanceFieldShadowDistance offset is not 608");
	auto constexpr UDirectionalLightComponent_LightSourceAngle_Offset = offsetof(UDirectionalLightComponent, LightSourceAngle);
	static_assert(UDirectionalLightComponent_LightSourceAngle_Offset == 0x60c, "UDirectionalLightComponent::LightSourceAngle offset is not 60c");
	auto constexpr UDirectionalLightComponent_TraceDistance_Offset = offsetof(UDirectionalLightComponent, TraceDistance);
	static_assert(UDirectionalLightComponent_TraceDistance_Offset == 0x610, "UDirectionalLightComponent::TraceDistance offset is not 610");
	auto constexpr UDirectionalLightComponent_LightmassSettings_Offset = offsetof(UDirectionalLightComponent, LightmassSettings);
	static_assert(UDirectionalLightComponent_LightmassSettings_Offset == 0x614, "UDirectionalLightComponent::LightmassSettings offset is not 614");
	auto constexpr UDirectionalLightComponent_boolField624_Offset = offsetof(UDirectionalLightComponent, boolField624);
	static_assert(UDirectionalLightComponent_boolField624_Offset == 0x624, "UDirectionalLightComponent::boolField624 offset is not 624");
	auto constexpr UDirectionalLightComponent_ModulatedShadowColor_Offset = offsetof(UDirectionalLightComponent, ModulatedShadowColor);
	static_assert(UDirectionalLightComponent_ModulatedShadowColor_Offset == 0x628, "UDirectionalLightComponent::ModulatedShadowColor offset is not 628");
	auto constexpr UDirectionalLightComponent_boolField62C_Offset = offsetof(UDirectionalLightComponent, boolField62C);
	static_assert(UDirectionalLightComponent_boolField62C_Offset == 0x62c, "UDirectionalLightComponent::boolField62C offset is not 62c");
	auto constexpr UDirectionalLightComponent_GridShadowSplitSettings_Offset = offsetof(UDirectionalLightComponent, GridShadowSplitSettings);
	static_assert(UDirectionalLightComponent_GridShadowSplitSettings_Offset == 0x630, "UDirectionalLightComponent::GridShadowSplitSettings offset is not 630");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
