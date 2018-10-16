#pragma once
#include "UMovementComponent.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuoyancyComponent // Size: 0x2C0
	: public UMovementComponent // Size: 0x230
{
private:
	typedef UBuoyancyComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2052); // id32("Class OceanPlugin.BuoyancyComponent")
		return ptr;
	}
	ExternalPtr<struct UOceanManager> OceanManager; /* Ofs: 0x230 Size: 0x8 - ObjectProperty OceanPlugin.BuoyancyComponent.OceanManager */
	float MeshDensity; /* Ofs: 0x238 Size: 0x4 - FloatProperty OceanPlugin.BuoyancyComponent.MeshDensity */
	float FluidDensity; /* Ofs: 0x23C Size: 0x4 - FloatProperty OceanPlugin.BuoyancyComponent.FluidDensity */
	float FluidLinearDamping; /* Ofs: 0x240 Size: 0x4 - FloatProperty OceanPlugin.BuoyancyComponent.FluidLinearDamping */
	float FluidAngularDamping; /* Ofs: 0x244 Size: 0x4 - FloatProperty OceanPlugin.BuoyancyComponent.FluidAngularDamping */
	FVector VelocityDamper; /* Ofs: 0x248 Size: 0xC - StructProperty OceanPlugin.BuoyancyComponent.VelocityDamper */
	uint8_t boolField254;
	uint8_t UnknownData255[0x3];
	float MaxUnderwaterVelocity; /* Ofs: 0x258 Size: 0x4 - FloatProperty OceanPlugin.BuoyancyComponent.MaxUnderwaterVelocity */
	float TestPointRadius; /* Ofs: 0x25C Size: 0x4 - FloatProperty OceanPlugin.BuoyancyComponent.TestPointRadius */
	TArray<struct FVector> TestPoints; /* Ofs: 0x260 Size: 0x10 - ArrayProperty OceanPlugin.BuoyancyComponent.TestPoints */
	TArray<float> PointDensityOverride; /* Ofs: 0x270 Size: 0x10 - ArrayProperty OceanPlugin.BuoyancyComponent.PointDensityOverride */
	uint8_t boolField280;
	uint8_t boolField281;
	uint8_t UnknownData282[0x2];
	float StayUprightStiffness; /* Ofs: 0x284 Size: 0x4 - FloatProperty OceanPlugin.BuoyancyComponent.StayUprightStiffness */
	float StayUprightDamping; /* Ofs: 0x288 Size: 0x4 - FloatProperty OceanPlugin.BuoyancyComponent.StayUprightDamping */
	FRotator StayUprightDesiredRotation; /* Ofs: 0x28C Size: 0xC - StructProperty OceanPlugin.BuoyancyComponent.StayUprightDesiredRotation */
	uint8_t boolField298;
	uint8_t UnknownData299[0x3];
	float WaveForceMultiplier; /* Ofs: 0x29C Size: 0x4 - FloatProperty OceanPlugin.BuoyancyComponent.WaveForceMultiplier */
	uint8_t UnknownData2A0[0x20];


	inline bool SetOceanManager(t_structHelper inst, ExternalPtr<struct UOceanManager> value) { inst.WriteOffset(0x230, value); }
	inline bool SetMeshDensity(t_structHelper inst, float value) { inst.WriteOffset(0x238, value); }
	inline bool SetFluidDensity(t_structHelper inst, float value) { inst.WriteOffset(0x23C, value); }
	inline bool SetFluidLinearDamping(t_structHelper inst, float value) { inst.WriteOffset(0x240, value); }
	inline bool SetFluidAngularDamping(t_structHelper inst, float value) { inst.WriteOffset(0x244, value); }
	inline bool SetVelocityDamper(t_structHelper inst, FVector value) { inst.WriteOffset(0x248, value); }
	inline bool ClampMaxVelocity()
	{
		return boolField254& 0x1;
	}
	inline bool SetClampMaxVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x254, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaxUnderwaterVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x258, value); }
	inline bool SetTestPointRadius(t_structHelper inst, float value) { inst.WriteOffset(0x25C, value); }
	inline bool SetTestPoints(t_structHelper inst, TArray<struct FVector> value) { inst.WriteOffset(0x260, value); }
	inline bool SetPointDensityOverride(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x270, value); }
	inline bool DrawDebugPoints()
	{
		return boolField280& 0x1;
	}
	inline bool SetDrawDebugPoints(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x280, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool EnableStayUprightConstraint()
	{
		return boolField281& 0x1;
	}
	inline bool SetEnableStayUprightConstraint(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x281, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStayUprightStiffness(t_structHelper inst, float value) { inst.WriteOffset(0x284, value); }
	inline bool SetStayUprightDamping(t_structHelper inst, float value) { inst.WriteOffset(0x288, value); }
	inline bool SetStayUprightDesiredRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x28C, value); }
	inline bool EnableWaveForces()
	{
		return boolField298& 0x1;
	}
	inline bool SetEnableWaveForces(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x298, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWaveForceMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x29C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuoyancyComponent = sizeof(UBuoyancyComponent); // 704
    static_assert(sizeof(UBuoyancyComponent) == 0x2C0, "Size of UBuoyancyComponent is not correct.");
	auto constexpr UBuoyancyComponent_OceanManager_Offset = offsetof(UBuoyancyComponent, OceanManager);
	static_assert(UBuoyancyComponent_OceanManager_Offset == 0x230, "UBuoyancyComponent::OceanManager offset is not 230");
	auto constexpr UBuoyancyComponent_MeshDensity_Offset = offsetof(UBuoyancyComponent, MeshDensity);
	static_assert(UBuoyancyComponent_MeshDensity_Offset == 0x238, "UBuoyancyComponent::MeshDensity offset is not 238");
	auto constexpr UBuoyancyComponent_FluidDensity_Offset = offsetof(UBuoyancyComponent, FluidDensity);
	static_assert(UBuoyancyComponent_FluidDensity_Offset == 0x23c, "UBuoyancyComponent::FluidDensity offset is not 23c");
	auto constexpr UBuoyancyComponent_FluidLinearDamping_Offset = offsetof(UBuoyancyComponent, FluidLinearDamping);
	static_assert(UBuoyancyComponent_FluidLinearDamping_Offset == 0x240, "UBuoyancyComponent::FluidLinearDamping offset is not 240");
	auto constexpr UBuoyancyComponent_FluidAngularDamping_Offset = offsetof(UBuoyancyComponent, FluidAngularDamping);
	static_assert(UBuoyancyComponent_FluidAngularDamping_Offset == 0x244, "UBuoyancyComponent::FluidAngularDamping offset is not 244");
	auto constexpr UBuoyancyComponent_VelocityDamper_Offset = offsetof(UBuoyancyComponent, VelocityDamper);
	static_assert(UBuoyancyComponent_VelocityDamper_Offset == 0x248, "UBuoyancyComponent::VelocityDamper offset is not 248");
	auto constexpr UBuoyancyComponent_boolField254_Offset = offsetof(UBuoyancyComponent, boolField254);
	static_assert(UBuoyancyComponent_boolField254_Offset == 0x254, "UBuoyancyComponent::boolField254 offset is not 254");
	auto constexpr UBuoyancyComponent_MaxUnderwaterVelocity_Offset = offsetof(UBuoyancyComponent, MaxUnderwaterVelocity);
	static_assert(UBuoyancyComponent_MaxUnderwaterVelocity_Offset == 0x258, "UBuoyancyComponent::MaxUnderwaterVelocity offset is not 258");
	auto constexpr UBuoyancyComponent_TestPointRadius_Offset = offsetof(UBuoyancyComponent, TestPointRadius);
	static_assert(UBuoyancyComponent_TestPointRadius_Offset == 0x25c, "UBuoyancyComponent::TestPointRadius offset is not 25c");
	auto constexpr UBuoyancyComponent_TestPoints_Offset = offsetof(UBuoyancyComponent, TestPoints);
	static_assert(UBuoyancyComponent_TestPoints_Offset == 0x260, "UBuoyancyComponent::TestPoints offset is not 260");
	auto constexpr UBuoyancyComponent_PointDensityOverride_Offset = offsetof(UBuoyancyComponent, PointDensityOverride);
	static_assert(UBuoyancyComponent_PointDensityOverride_Offset == 0x270, "UBuoyancyComponent::PointDensityOverride offset is not 270");
	auto constexpr UBuoyancyComponent_boolField280_Offset = offsetof(UBuoyancyComponent, boolField280);
	static_assert(UBuoyancyComponent_boolField280_Offset == 0x280, "UBuoyancyComponent::boolField280 offset is not 280");
	auto constexpr UBuoyancyComponent_boolField281_Offset = offsetof(UBuoyancyComponent, boolField281);
	static_assert(UBuoyancyComponent_boolField281_Offset == 0x281, "UBuoyancyComponent::boolField281 offset is not 281");
	auto constexpr UBuoyancyComponent_StayUprightStiffness_Offset = offsetof(UBuoyancyComponent, StayUprightStiffness);
	static_assert(UBuoyancyComponent_StayUprightStiffness_Offset == 0x284, "UBuoyancyComponent::StayUprightStiffness offset is not 284");
	auto constexpr UBuoyancyComponent_StayUprightDamping_Offset = offsetof(UBuoyancyComponent, StayUprightDamping);
	static_assert(UBuoyancyComponent_StayUprightDamping_Offset == 0x288, "UBuoyancyComponent::StayUprightDamping offset is not 288");
	auto constexpr UBuoyancyComponent_StayUprightDesiredRotation_Offset = offsetof(UBuoyancyComponent, StayUprightDesiredRotation);
	static_assert(UBuoyancyComponent_StayUprightDesiredRotation_Offset == 0x28c, "UBuoyancyComponent::StayUprightDesiredRotation offset is not 28c");
	auto constexpr UBuoyancyComponent_boolField298_Offset = offsetof(UBuoyancyComponent, boolField298);
	static_assert(UBuoyancyComponent_boolField298_Offset == 0x298, "UBuoyancyComponent::boolField298 offset is not 298");
	auto constexpr UBuoyancyComponent_WaveForceMultiplier_Offset = offsetof(UBuoyancyComponent, WaveForceMultiplier);
	static_assert(UBuoyancyComponent_WaveForceMultiplier_Offset == 0x29c, "UBuoyancyComponent::WaveForceMultiplier offset is not 29c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
