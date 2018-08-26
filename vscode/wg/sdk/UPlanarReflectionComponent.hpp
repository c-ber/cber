#pragma once
#include "USceneCaptureComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlanarReflectionComponent // Size: 0x610
	: public USceneCaptureComponent // Size: 0x510
{
private:
	typedef UPlanarReflectionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(238); // id32("Class Engine.PlanarReflectionComponent")
		return ptr;
	}
	ExternalPtr<struct UBoxComponent> PreviewBox; /* Ofs: 0x510 Size: 0x8 - ObjectProperty Engine.PlanarReflectionComponent.PreviewBox */
	float NormalDistortionStrength; /* Ofs: 0x518 Size: 0x4 - FloatProperty Engine.PlanarReflectionComponent.NormalDistortionStrength */
	float PrefilterRoughness; /* Ofs: 0x51C Size: 0x4 - FloatProperty Engine.PlanarReflectionComponent.PrefilterRoughness */
	float PrefilterRoughnessDistance; /* Ofs: 0x520 Size: 0x4 - FloatProperty Engine.PlanarReflectionComponent.PrefilterRoughnessDistance */
	int32_t ScreenPercentage; /* Ofs: 0x524 Size: 0x4 - IntProperty Engine.PlanarReflectionComponent.ScreenPercentage */
	float ExtraFOV; /* Ofs: 0x528 Size: 0x4 - FloatProperty Engine.PlanarReflectionComponent.ExtraFOV */
	float DistanceFromPlaneFadeStart; /* Ofs: 0x52C Size: 0x4 - FloatProperty Engine.PlanarReflectionComponent.DistanceFromPlaneFadeStart */
	float DistanceFromPlaneFadeEnd; /* Ofs: 0x530 Size: 0x4 - FloatProperty Engine.PlanarReflectionComponent.DistanceFromPlaneFadeEnd */
	float DistanceFromPlaneFadeoutStart; /* Ofs: 0x534 Size: 0x4 - FloatProperty Engine.PlanarReflectionComponent.DistanceFromPlaneFadeoutStart */
	float DistanceFromPlaneFadeoutEnd; /* Ofs: 0x538 Size: 0x4 - FloatProperty Engine.PlanarReflectionComponent.DistanceFromPlaneFadeoutEnd */
	float AngleFromPlaneFadeStart; /* Ofs: 0x53C Size: 0x4 - FloatProperty Engine.PlanarReflectionComponent.AngleFromPlaneFadeStart */
	float AngleFromPlaneFadeEnd; /* Ofs: 0x540 Size: 0x4 - FloatProperty Engine.PlanarReflectionComponent.AngleFromPlaneFadeEnd */
	uint8_t boolField544;
	uint8_t UnknownData545[0xCB];


	inline bool SetPreviewBox(t_structHelper inst, ExternalPtr<struct UBoxComponent> value) { inst.WriteOffset(0x510, value); }
	inline bool SetNormalDistortionStrength(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
	inline bool SetPrefilterRoughness(t_structHelper inst, float value) { inst.WriteOffset(0x51C, value); }
	inline bool SetPrefilterRoughnessDistance(t_structHelper inst, float value) { inst.WriteOffset(0x520, value); }
	inline bool SetScreenPercentage(t_structHelper inst, int32_t value) { inst.WriteOffset(0x524, value); }
	inline bool SetExtraFOV(t_structHelper inst, float value) { inst.WriteOffset(0x528, value); }
	inline bool SetDistanceFromPlaneFadeStart(t_structHelper inst, float value) { inst.WriteOffset(0x52C, value); }
	inline bool SetDistanceFromPlaneFadeEnd(t_structHelper inst, float value) { inst.WriteOffset(0x530, value); }
	inline bool SetDistanceFromPlaneFadeoutStart(t_structHelper inst, float value) { inst.WriteOffset(0x534, value); }
	inline bool SetDistanceFromPlaneFadeoutEnd(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
	inline bool SetAngleFromPlaneFadeStart(t_structHelper inst, float value) { inst.WriteOffset(0x53C, value); }
	inline bool SetAngleFromPlaneFadeEnd(t_structHelper inst, float value) { inst.WriteOffset(0x540, value); }
	inline bool bRenderSceneTwoSided()
	{
		return boolField544& 0x1;
	}
	inline bool SetbRenderSceneTwoSided(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x544, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlanarReflectionComponent = sizeof(UPlanarReflectionComponent); // 1552
    static_assert(sizeof(UPlanarReflectionComponent) == 0x610, "Size of UPlanarReflectionComponent is not correct.");
	auto constexpr UPlanarReflectionComponent_PreviewBox_Offset = offsetof(UPlanarReflectionComponent, PreviewBox);
	static_assert(UPlanarReflectionComponent_PreviewBox_Offset == 0x510, "UPlanarReflectionComponent::PreviewBox offset is not 510");
	auto constexpr UPlanarReflectionComponent_NormalDistortionStrength_Offset = offsetof(UPlanarReflectionComponent, NormalDistortionStrength);
	static_assert(UPlanarReflectionComponent_NormalDistortionStrength_Offset == 0x518, "UPlanarReflectionComponent::NormalDistortionStrength offset is not 518");
	auto constexpr UPlanarReflectionComponent_PrefilterRoughness_Offset = offsetof(UPlanarReflectionComponent, PrefilterRoughness);
	static_assert(UPlanarReflectionComponent_PrefilterRoughness_Offset == 0x51c, "UPlanarReflectionComponent::PrefilterRoughness offset is not 51c");
	auto constexpr UPlanarReflectionComponent_PrefilterRoughnessDistance_Offset = offsetof(UPlanarReflectionComponent, PrefilterRoughnessDistance);
	static_assert(UPlanarReflectionComponent_PrefilterRoughnessDistance_Offset == 0x520, "UPlanarReflectionComponent::PrefilterRoughnessDistance offset is not 520");
	auto constexpr UPlanarReflectionComponent_ScreenPercentage_Offset = offsetof(UPlanarReflectionComponent, ScreenPercentage);
	static_assert(UPlanarReflectionComponent_ScreenPercentage_Offset == 0x524, "UPlanarReflectionComponent::ScreenPercentage offset is not 524");
	auto constexpr UPlanarReflectionComponent_ExtraFOV_Offset = offsetof(UPlanarReflectionComponent, ExtraFOV);
	static_assert(UPlanarReflectionComponent_ExtraFOV_Offset == 0x528, "UPlanarReflectionComponent::ExtraFOV offset is not 528");
	auto constexpr UPlanarReflectionComponent_DistanceFromPlaneFadeStart_Offset = offsetof(UPlanarReflectionComponent, DistanceFromPlaneFadeStart);
	static_assert(UPlanarReflectionComponent_DistanceFromPlaneFadeStart_Offset == 0x52c, "UPlanarReflectionComponent::DistanceFromPlaneFadeStart offset is not 52c");
	auto constexpr UPlanarReflectionComponent_DistanceFromPlaneFadeEnd_Offset = offsetof(UPlanarReflectionComponent, DistanceFromPlaneFadeEnd);
	static_assert(UPlanarReflectionComponent_DistanceFromPlaneFadeEnd_Offset == 0x530, "UPlanarReflectionComponent::DistanceFromPlaneFadeEnd offset is not 530");
	auto constexpr UPlanarReflectionComponent_DistanceFromPlaneFadeoutStart_Offset = offsetof(UPlanarReflectionComponent, DistanceFromPlaneFadeoutStart);
	static_assert(UPlanarReflectionComponent_DistanceFromPlaneFadeoutStart_Offset == 0x534, "UPlanarReflectionComponent::DistanceFromPlaneFadeoutStart offset is not 534");
	auto constexpr UPlanarReflectionComponent_DistanceFromPlaneFadeoutEnd_Offset = offsetof(UPlanarReflectionComponent, DistanceFromPlaneFadeoutEnd);
	static_assert(UPlanarReflectionComponent_DistanceFromPlaneFadeoutEnd_Offset == 0x538, "UPlanarReflectionComponent::DistanceFromPlaneFadeoutEnd offset is not 538");
	auto constexpr UPlanarReflectionComponent_AngleFromPlaneFadeStart_Offset = offsetof(UPlanarReflectionComponent, AngleFromPlaneFadeStart);
	static_assert(UPlanarReflectionComponent_AngleFromPlaneFadeStart_Offset == 0x53c, "UPlanarReflectionComponent::AngleFromPlaneFadeStart offset is not 53c");
	auto constexpr UPlanarReflectionComponent_AngleFromPlaneFadeEnd_Offset = offsetof(UPlanarReflectionComponent, AngleFromPlaneFadeEnd);
	static_assert(UPlanarReflectionComponent_AngleFromPlaneFadeEnd_Offset == 0x540, "UPlanarReflectionComponent::AngleFromPlaneFadeEnd offset is not 540");
	auto constexpr UPlanarReflectionComponent_boolField544_Offset = offsetof(UPlanarReflectionComponent, boolField544);
	static_assert(UPlanarReflectionComponent_boolField544_Offset == 0x544, "UPlanarReflectionComponent::boolField544 offset is not 544");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
