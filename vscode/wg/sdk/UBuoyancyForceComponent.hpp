#pragma once
#include "USceneComponent.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"
#include "ETickingGroup.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuoyancyForceComponent // Size: 0x530
	: public USceneComponent // Size: 0x490
{
private:
	typedef UBuoyancyForceComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1342); // id32("Class OceanPlugin.BuoyancyForceComponent")
		return ptr;
	}
	ExternalPtr<struct UOceanManager> OceanManager; /* Ofs: 0x490 Size: 0x8 - ObjectProperty OceanPlugin.BuoyancyForceComponent.OceanManager */
	float MeshDensity; /* Ofs: 0x498 Size: 0x4 - FloatProperty OceanPlugin.BuoyancyForceComponent.MeshDensity */
	float FluidDensity; /* Ofs: 0x49C Size: 0x4 - FloatProperty OceanPlugin.BuoyancyForceComponent.FluidDensity */
	float FluidLinearDamping; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty OceanPlugin.BuoyancyForceComponent.FluidLinearDamping */
	float FluidAngularDamping; /* Ofs: 0x4A4 Size: 0x4 - FloatProperty OceanPlugin.BuoyancyForceComponent.FluidAngularDamping */
	FVector VelocityDamper; /* Ofs: 0x4A8 Size: 0xC - StructProperty OceanPlugin.BuoyancyForceComponent.VelocityDamper */
	uint8_t boolField4B4;
	uint8_t UnknownData4B5[0x3];
	float MaxUnderwaterVelocity; /* Ofs: 0x4B8 Size: 0x4 - FloatProperty OceanPlugin.BuoyancyForceComponent.MaxUnderwaterVelocity */
	float TestPointRadius; /* Ofs: 0x4BC Size: 0x4 - FloatProperty OceanPlugin.BuoyancyForceComponent.TestPointRadius */
	TArray<struct FVector> TestPoints; /* Ofs: 0x4C0 Size: 0x10 - ArrayProperty OceanPlugin.BuoyancyForceComponent.TestPoints */
	uint8_t boolField4D0;
	uint8_t boolField4D1;
	uint8_t boolField4D2;
	uint8_t UnknownData4D3[0x5];
	TArray<float> PointDensityOverride; /* Ofs: 0x4D8 Size: 0x10 - ArrayProperty OceanPlugin.BuoyancyForceComponent.PointDensityOverride */
	TArray<struct FStructBoneOverride> BoneOverride; /* Ofs: 0x4E8 Size: 0x10 - ArrayProperty OceanPlugin.BuoyancyForceComponent.BoneOverride */
	uint8_t boolField4F8;
	uint8_t boolField4F9;
	uint8_t UnknownData4FA[0x2];
	float StayUprightStiffness; /* Ofs: 0x4FC Size: 0x4 - FloatProperty OceanPlugin.BuoyancyForceComponent.StayUprightStiffness */
	float StayUprightDamping; /* Ofs: 0x500 Size: 0x4 - FloatProperty OceanPlugin.BuoyancyForceComponent.StayUprightDamping */
	FRotator StayUprightDesiredRotation; /* Ofs: 0x504 Size: 0xC - StructProperty OceanPlugin.BuoyancyForceComponent.StayUprightDesiredRotation */
	uint8_t boolField510;
	uint8_t UnknownData511[0x3];
	float WaveForceMultiplier; /* Ofs: 0x514 Size: 0x4 - FloatProperty OceanPlugin.BuoyancyForceComponent.WaveForceMultiplier */
	TEnumAsByte<enum ETickingGroup> TickGroup; /* Ofs: 0x518 Size: 0x1 - ByteProperty OceanPlugin.BuoyancyForceComponent.TickGroup */
	uint8_t UnknownData519[0x17];


	inline bool SetOceanManager(t_structHelper inst, ExternalPtr<struct UOceanManager> value) { inst.WriteOffset(0x490, value); }
	inline bool SetMeshDensity(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool SetFluidDensity(t_structHelper inst, float value) { inst.WriteOffset(0x49C, value); }
	inline bool SetFluidLinearDamping(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetFluidAngularDamping(t_structHelper inst, float value) { inst.WriteOffset(0x4A4, value); }
	inline bool SetVelocityDamper(t_structHelper inst, FVector value) { inst.WriteOffset(0x4A8, value); }
	inline bool ClampMaxVelocity()
	{
		return boolField4B4& 0x1;
	}
	inline bool SetClampMaxVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaxUnderwaterVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetTestPointRadius(t_structHelper inst, float value) { inst.WriteOffset(0x4BC, value); }
	inline bool SetTestPoints(t_structHelper inst, TArray<struct FVector> value) { inst.WriteOffset(0x4C0, value); }
	inline bool ApplyForceToBones()
	{
		return boolField4D0& 0x1;
	}
	inline bool SetApplyForceToBones(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SnapToSurfaceIfNoPhysics()
	{
		return boolField4D1& 0x1;
	}
	inline bool SetSnapToSurfaceIfNoPhysics(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool TwoGerstnerIterations()
	{
		return boolField4D2& 0x1;
	}
	inline bool SetTwoGerstnerIterations(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D2, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPointDensityOverride(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetBoneOverride(t_structHelper inst, TArray<struct FStructBoneOverride> value) { inst.WriteOffset(0x4E8, value); }
	inline bool DrawDebugPoints()
	{
		return boolField4F8& 0x1;
	}
	inline bool SetDrawDebugPoints(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool EnableStayUprightConstraint()
	{
		return boolField4F9& 0x1;
	}
	inline bool SetEnableStayUprightConstraint(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStayUprightStiffness(t_structHelper inst, float value) { inst.WriteOffset(0x4FC, value); }
	inline bool SetStayUprightDamping(t_structHelper inst, float value) { inst.WriteOffset(0x500, value); }
	inline bool SetStayUprightDesiredRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x504, value); }
	inline bool EnableWaveForces()
	{
		return boolField510& 0x1;
	}
	inline bool SetEnableWaveForces(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x510, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWaveForceMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x514, value); }
	inline bool SetTickGroup(t_structHelper inst, TEnumAsByte<enum ETickingGroup> value) { inst.WriteOffset(0x518, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuoyancyForceComponent = sizeof(UBuoyancyForceComponent); // 1328
    static_assert(sizeof(UBuoyancyForceComponent) == 0x530, "Size of UBuoyancyForceComponent is not correct.");
	auto constexpr UBuoyancyForceComponent_OceanManager_Offset = offsetof(UBuoyancyForceComponent, OceanManager);
	static_assert(UBuoyancyForceComponent_OceanManager_Offset == 0x490, "UBuoyancyForceComponent::OceanManager offset is not 490");
	auto constexpr UBuoyancyForceComponent_MeshDensity_Offset = offsetof(UBuoyancyForceComponent, MeshDensity);
	static_assert(UBuoyancyForceComponent_MeshDensity_Offset == 0x498, "UBuoyancyForceComponent::MeshDensity offset is not 498");
	auto constexpr UBuoyancyForceComponent_FluidDensity_Offset = offsetof(UBuoyancyForceComponent, FluidDensity);
	static_assert(UBuoyancyForceComponent_FluidDensity_Offset == 0x49c, "UBuoyancyForceComponent::FluidDensity offset is not 49c");
	auto constexpr UBuoyancyForceComponent_FluidLinearDamping_Offset = offsetof(UBuoyancyForceComponent, FluidLinearDamping);
	static_assert(UBuoyancyForceComponent_FluidLinearDamping_Offset == 0x4a0, "UBuoyancyForceComponent::FluidLinearDamping offset is not 4a0");
	auto constexpr UBuoyancyForceComponent_FluidAngularDamping_Offset = offsetof(UBuoyancyForceComponent, FluidAngularDamping);
	static_assert(UBuoyancyForceComponent_FluidAngularDamping_Offset == 0x4a4, "UBuoyancyForceComponent::FluidAngularDamping offset is not 4a4");
	auto constexpr UBuoyancyForceComponent_VelocityDamper_Offset = offsetof(UBuoyancyForceComponent, VelocityDamper);
	static_assert(UBuoyancyForceComponent_VelocityDamper_Offset == 0x4a8, "UBuoyancyForceComponent::VelocityDamper offset is not 4a8");
	auto constexpr UBuoyancyForceComponent_boolField4B4_Offset = offsetof(UBuoyancyForceComponent, boolField4B4);
	static_assert(UBuoyancyForceComponent_boolField4B4_Offset == 0x4b4, "UBuoyancyForceComponent::boolField4B4 offset is not 4b4");
	auto constexpr UBuoyancyForceComponent_MaxUnderwaterVelocity_Offset = offsetof(UBuoyancyForceComponent, MaxUnderwaterVelocity);
	static_assert(UBuoyancyForceComponent_MaxUnderwaterVelocity_Offset == 0x4b8, "UBuoyancyForceComponent::MaxUnderwaterVelocity offset is not 4b8");
	auto constexpr UBuoyancyForceComponent_TestPointRadius_Offset = offsetof(UBuoyancyForceComponent, TestPointRadius);
	static_assert(UBuoyancyForceComponent_TestPointRadius_Offset == 0x4bc, "UBuoyancyForceComponent::TestPointRadius offset is not 4bc");
	auto constexpr UBuoyancyForceComponent_TestPoints_Offset = offsetof(UBuoyancyForceComponent, TestPoints);
	static_assert(UBuoyancyForceComponent_TestPoints_Offset == 0x4c0, "UBuoyancyForceComponent::TestPoints offset is not 4c0");
	auto constexpr UBuoyancyForceComponent_boolField4D0_Offset = offsetof(UBuoyancyForceComponent, boolField4D0);
	static_assert(UBuoyancyForceComponent_boolField4D0_Offset == 0x4d0, "UBuoyancyForceComponent::boolField4D0 offset is not 4d0");
	auto constexpr UBuoyancyForceComponent_boolField4D1_Offset = offsetof(UBuoyancyForceComponent, boolField4D1);
	static_assert(UBuoyancyForceComponent_boolField4D1_Offset == 0x4d1, "UBuoyancyForceComponent::boolField4D1 offset is not 4d1");
	auto constexpr UBuoyancyForceComponent_boolField4D2_Offset = offsetof(UBuoyancyForceComponent, boolField4D2);
	static_assert(UBuoyancyForceComponent_boolField4D2_Offset == 0x4d2, "UBuoyancyForceComponent::boolField4D2 offset is not 4d2");
	auto constexpr UBuoyancyForceComponent_PointDensityOverride_Offset = offsetof(UBuoyancyForceComponent, PointDensityOverride);
	static_assert(UBuoyancyForceComponent_PointDensityOverride_Offset == 0x4d8, "UBuoyancyForceComponent::PointDensityOverride offset is not 4d8");
	auto constexpr UBuoyancyForceComponent_BoneOverride_Offset = offsetof(UBuoyancyForceComponent, BoneOverride);
	static_assert(UBuoyancyForceComponent_BoneOverride_Offset == 0x4e8, "UBuoyancyForceComponent::BoneOverride offset is not 4e8");
	auto constexpr UBuoyancyForceComponent_boolField4F8_Offset = offsetof(UBuoyancyForceComponent, boolField4F8);
	static_assert(UBuoyancyForceComponent_boolField4F8_Offset == 0x4f8, "UBuoyancyForceComponent::boolField4F8 offset is not 4f8");
	auto constexpr UBuoyancyForceComponent_boolField4F9_Offset = offsetof(UBuoyancyForceComponent, boolField4F9);
	static_assert(UBuoyancyForceComponent_boolField4F9_Offset == 0x4f9, "UBuoyancyForceComponent::boolField4F9 offset is not 4f9");
	auto constexpr UBuoyancyForceComponent_StayUprightStiffness_Offset = offsetof(UBuoyancyForceComponent, StayUprightStiffness);
	static_assert(UBuoyancyForceComponent_StayUprightStiffness_Offset == 0x4fc, "UBuoyancyForceComponent::StayUprightStiffness offset is not 4fc");
	auto constexpr UBuoyancyForceComponent_StayUprightDamping_Offset = offsetof(UBuoyancyForceComponent, StayUprightDamping);
	static_assert(UBuoyancyForceComponent_StayUprightDamping_Offset == 0x500, "UBuoyancyForceComponent::StayUprightDamping offset is not 500");
	auto constexpr UBuoyancyForceComponent_StayUprightDesiredRotation_Offset = offsetof(UBuoyancyForceComponent, StayUprightDesiredRotation);
	static_assert(UBuoyancyForceComponent_StayUprightDesiredRotation_Offset == 0x504, "UBuoyancyForceComponent::StayUprightDesiredRotation offset is not 504");
	auto constexpr UBuoyancyForceComponent_boolField510_Offset = offsetof(UBuoyancyForceComponent, boolField510);
	static_assert(UBuoyancyForceComponent_boolField510_Offset == 0x510, "UBuoyancyForceComponent::boolField510 offset is not 510");
	auto constexpr UBuoyancyForceComponent_WaveForceMultiplier_Offset = offsetof(UBuoyancyForceComponent, WaveForceMultiplier);
	static_assert(UBuoyancyForceComponent_WaveForceMultiplier_Offset == 0x514, "UBuoyancyForceComponent::WaveForceMultiplier offset is not 514");
	auto constexpr UBuoyancyForceComponent_TickGroup_Offset = offsetof(UBuoyancyForceComponent, TickGroup);
	static_assert(UBuoyancyForceComponent_TickGroup_Offset == 0x518, "UBuoyancyForceComponent::TickGroup offset is not 518");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
