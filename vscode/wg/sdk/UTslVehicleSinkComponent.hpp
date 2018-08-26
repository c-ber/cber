#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleSinkComponent // Size: 0x290
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslVehicleSinkComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1611); // id32("Class TslGame.TslVehicleSinkComponent")
		return ptr;
	}
//	ExternalPtr<struct UClass> SurfaceRippleFx; /* Ofs: 0x1E8 Size: 0x8 - ClassProperty TslGame.TslVehicleSinkComponent.SurfaceRippleFx */
	FName RippleEmissionScaleParam; /* Ofs: 0x1F0 Size: 0x8 - NameProperty TslGame.TslVehicleSinkComponent.RippleEmissionScaleParam */
	TArray<struct FName> RippleEmitSocketsNames; /* Ofs: 0x1F8 Size: 0x10 - ArrayProperty TslGame.TslVehicleSinkComponent.RippleEmitSocketsNames */
	ExternalPtr<struct UCurveFloat> RippleEmissionScalePerDepthCurve; /* Ofs: 0x208 Size: 0x8 - ObjectProperty TslGame.TslVehicleSinkComponent.RippleEmissionScalePerDepthCurve */
	TArray<float> SinkingSpeedMul; /* Ofs: 0x210 Size: 0x10 - ArrayProperty TslGame.TslVehicleSinkComponent.SinkingSpeedMul */
	ExternalPtr<struct UClass> FinalSplashFxTemplate; /* Ofs: 0x220 Size: 0x8 - ClassProperty TslGame.TslVehicleSinkComponent.FinalSplashFxTemplate */
	ExternalPtr<struct UCurveFloat> DensityChangeCurve; /* Ofs: 0x228 Size: 0x8 - ObjectProperty TslGame.TslVehicleSinkComponent.DensityChangeCurve */
	float MaxSinkingTime; /* Ofs: 0x230 Size: 0x4 - FloatProperty TslGame.TslVehicleSinkComponent.MaxSinkingTime */
	float MaxRippleEmissionDepth; /* Ofs: 0x234 Size: 0x4 - FloatProperty TslGame.TslVehicleSinkComponent.MaxRippleEmissionDepth */
	ExternalPtr<struct UBuoyancyForceComponent> BuoyancyForceComponent; /* Ofs: 0x238 Size: 0x8 - ObjectProperty TslGame.TslVehicleSinkComponent.BuoyancyForceComponent */
	uint8_t UnknownData240[0x18];
	ExternalPtr<struct USkeletalMeshComponent> MeshComponent; /* Ofs: 0x258 Size: 0x8 - ObjectProperty TslGame.TslVehicleSinkComponent.MeshComponent */
	ExternalPtr<struct UTslVehicleEffectComponent> VehicleEffectComponent; /* Ofs: 0x260 Size: 0x8 - ObjectProperty TslGame.TslVehicleSinkComponent.VehicleEffectComponent */
	ExternalPtr<struct UMovementComponent> MovementComponent; /* Ofs: 0x268 Size: 0x8 - ObjectProperty TslGame.TslVehicleSinkComponent.MovementComponent */
	TArray<ExternalPtr<struct UTslParticle>> RippleEffects; /* Ofs: 0x270 Size: 0x10 - ArrayProperty TslGame.TslVehicleSinkComponent.RippleEffects */
	uint8_t UnknownData280[0x10];


//	inline bool SetSurfaceRippleFx(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetRippleEmissionScaleParam(t_structHelper inst, FName value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetRippleEmitSocketsNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetRippleEmissionScalePerDepthCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x208, value); }
	inline bool SetSinkingSpeedMul(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x210, value); }
	inline bool SetFinalSplashFxTemplate(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x220, value); }
	inline bool SetDensityChangeCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x228, value); }
	inline bool SetMaxSinkingTime(t_structHelper inst, float value) { inst.WriteOffset(0x230, value); }
	inline bool SetMaxRippleEmissionDepth(t_structHelper inst, float value) { inst.WriteOffset(0x234, value); }
	inline bool SetBuoyancyForceComponent(t_structHelper inst, ExternalPtr<struct UBuoyancyForceComponent> value) { inst.WriteOffset(0x238, value); }
	inline bool SetMeshComponent(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x258, value); }
	inline bool SetVehicleEffectComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleEffectComponent> value) { inst.WriteOffset(0x260, value); }
	inline bool SetMovementComponent(t_structHelper inst, ExternalPtr<struct UMovementComponent> value) { inst.WriteOffset(0x268, value); }
	inline bool SetRippleEffects(t_structHelper inst, TArray<ExternalPtr<struct UTslParticle>> value) { inst.WriteOffset(0x270, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleSinkComponent = sizeof(UTslVehicleSinkComponent); // 656
    static_assert(sizeof(UTslVehicleSinkComponent) == 0x290, "Size of UTslVehicleSinkComponent is not correct.");
//	auto constexpr UTslVehicleSinkComponent_SurfaceRippleFx_Offset = offsetof(UTslVehicleSinkComponent, SurfaceRippleFx);
//	static_assert(UTslVehicleSinkComponent_SurfaceRippleFx_Offset == 0x1e8, "UTslVehicleSinkComponent::SurfaceRippleFx offset is not 1e8");
	auto constexpr UTslVehicleSinkComponent_RippleEmissionScaleParam_Offset = offsetof(UTslVehicleSinkComponent, RippleEmissionScaleParam);
	static_assert(UTslVehicleSinkComponent_RippleEmissionScaleParam_Offset == 0x1f0, "UTslVehicleSinkComponent::RippleEmissionScaleParam offset is not 1f0");
	auto constexpr UTslVehicleSinkComponent_RippleEmitSocketsNames_Offset = offsetof(UTslVehicleSinkComponent, RippleEmitSocketsNames);
	static_assert(UTslVehicleSinkComponent_RippleEmitSocketsNames_Offset == 0x1f8, "UTslVehicleSinkComponent::RippleEmitSocketsNames offset is not 1f8");
	auto constexpr UTslVehicleSinkComponent_RippleEmissionScalePerDepthCurve_Offset = offsetof(UTslVehicleSinkComponent, RippleEmissionScalePerDepthCurve);
	static_assert(UTslVehicleSinkComponent_RippleEmissionScalePerDepthCurve_Offset == 0x208, "UTslVehicleSinkComponent::RippleEmissionScalePerDepthCurve offset is not 208");
	auto constexpr UTslVehicleSinkComponent_SinkingSpeedMul_Offset = offsetof(UTslVehicleSinkComponent, SinkingSpeedMul);
	static_assert(UTslVehicleSinkComponent_SinkingSpeedMul_Offset == 0x210, "UTslVehicleSinkComponent::SinkingSpeedMul offset is not 210");
	auto constexpr UTslVehicleSinkComponent_FinalSplashFxTemplate_Offset = offsetof(UTslVehicleSinkComponent, FinalSplashFxTemplate);
	static_assert(UTslVehicleSinkComponent_FinalSplashFxTemplate_Offset == 0x220, "UTslVehicleSinkComponent::FinalSplashFxTemplate offset is not 220");
	auto constexpr UTslVehicleSinkComponent_DensityChangeCurve_Offset = offsetof(UTslVehicleSinkComponent, DensityChangeCurve);
	static_assert(UTslVehicleSinkComponent_DensityChangeCurve_Offset == 0x228, "UTslVehicleSinkComponent::DensityChangeCurve offset is not 228");
	auto constexpr UTslVehicleSinkComponent_MaxSinkingTime_Offset = offsetof(UTslVehicleSinkComponent, MaxSinkingTime);
	static_assert(UTslVehicleSinkComponent_MaxSinkingTime_Offset == 0x230, "UTslVehicleSinkComponent::MaxSinkingTime offset is not 230");
	auto constexpr UTslVehicleSinkComponent_MaxRippleEmissionDepth_Offset = offsetof(UTslVehicleSinkComponent, MaxRippleEmissionDepth);
	static_assert(UTslVehicleSinkComponent_MaxRippleEmissionDepth_Offset == 0x234, "UTslVehicleSinkComponent::MaxRippleEmissionDepth offset is not 234");
	auto constexpr UTslVehicleSinkComponent_BuoyancyForceComponent_Offset = offsetof(UTslVehicleSinkComponent, BuoyancyForceComponent);
	static_assert(UTslVehicleSinkComponent_BuoyancyForceComponent_Offset == 0x238, "UTslVehicleSinkComponent::BuoyancyForceComponent offset is not 238");
	auto constexpr UTslVehicleSinkComponent_MeshComponent_Offset = offsetof(UTslVehicleSinkComponent, MeshComponent);
	static_assert(UTslVehicleSinkComponent_MeshComponent_Offset == 0x258, "UTslVehicleSinkComponent::MeshComponent offset is not 258");
	auto constexpr UTslVehicleSinkComponent_VehicleEffectComponent_Offset = offsetof(UTslVehicleSinkComponent, VehicleEffectComponent);
	static_assert(UTslVehicleSinkComponent_VehicleEffectComponent_Offset == 0x260, "UTslVehicleSinkComponent::VehicleEffectComponent offset is not 260");
	auto constexpr UTslVehicleSinkComponent_MovementComponent_Offset = offsetof(UTslVehicleSinkComponent, MovementComponent);
	static_assert(UTslVehicleSinkComponent_MovementComponent_Offset == 0x268, "UTslVehicleSinkComponent::MovementComponent offset is not 268");
	auto constexpr UTslVehicleSinkComponent_RippleEffects_Offset = offsetof(UTslVehicleSinkComponent, RippleEffects);
	static_assert(UTslVehicleSinkComponent_RippleEffects_Offset == 0x270, "UTslVehicleSinkComponent::RippleEffects offset is not 270");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
