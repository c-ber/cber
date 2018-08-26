#pragma once
#include "USceneComponent.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAdvancedBuoyancyComponent // Size: 0x5B0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UAdvancedBuoyancyComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2051); // id32("Class OceanPlugin.AdvancedBuoyancyComponent")
		return ptr;
	}
	uint8_t boolField490;
	uint8_t boolField491;
	uint8_t UnknownData492[0x6];
	ExternalPtr<struct UOceanManager> TheOcean; /* Ofs: 0x498 Size: 0x8 - ObjectProperty OceanPlugin.AdvancedBuoyancyComponent.TheOcean */
	float WaterDensity; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty OceanPlugin.AdvancedBuoyancyComponent.WaterDensity */
	float Gravity; /* Ofs: 0x4A4 Size: 0x4 - FloatProperty OceanPlugin.AdvancedBuoyancyComponent.Gravity */
	float MeshDensity; /* Ofs: 0x4A8 Size: 0x4 - FloatProperty OceanPlugin.AdvancedBuoyancyComponent.MeshDensity */
	uint8_t UnknownData4AC[0x14];
	ExternalPtr<struct UStaticMeshComponent> BuoyantMesh; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty OceanPlugin.AdvancedBuoyancyComponent.BuoyantMesh */
	uint8_t UnknownData4C8[0x8];
	FTransform MeshTransform; /* Ofs: 0x4D0 Size: 0x30 - StructProperty OceanPlugin.AdvancedBuoyancyComponent.MeshTransform */
	float FalseVolume; /* Ofs: 0x500 Size: 0x4 - FloatProperty OceanPlugin.AdvancedBuoyancyComponent.FalseVolume */
	float BuoyancyReductionCoefficient; /* Ofs: 0x504 Size: 0x4 - FloatProperty OceanPlugin.AdvancedBuoyancyComponent.BuoyancyReductionCoefficient */
	float BuoyancyPitchReductionCoefficient; /* Ofs: 0x508 Size: 0x4 - FloatProperty OceanPlugin.AdvancedBuoyancyComponent.BuoyancyPitchReductionCoefficient */
	float DensityCorrection; /* Ofs: 0x50C Size: 0x4 - FloatProperty OceanPlugin.AdvancedBuoyancyComponent.DensityCorrection */
	float DensityCorrectionModifier; /* Ofs: 0x510 Size: 0x4 - FloatProperty OceanPlugin.AdvancedBuoyancyComponent.DensityCorrectionModifier */
	float SubmergedVolume; /* Ofs: 0x514 Size: 0x4 - FloatProperty OceanPlugin.AdvancedBuoyancyComponent.SubmergedVolume */
	float ImpactCoefficient; /* Ofs: 0x518 Size: 0x4 - FloatProperty OceanPlugin.AdvancedBuoyancyComponent.ImpactCoefficient */
	FVector DragCoefficient; /* Ofs: 0x51C Size: 0xC - StructProperty OceanPlugin.AdvancedBuoyancyComponent.DragCoefficient */
	FVector SuctionCoefficient; /* Ofs: 0x528 Size: 0xC - StructProperty OceanPlugin.AdvancedBuoyancyComponent.SuctionCoefficient */
	float ViscousDragCoefficient; /* Ofs: 0x534 Size: 0x4 - FloatProperty OceanPlugin.AdvancedBuoyancyComponent.ViscousDragCoefficient */
	float MaxSlamAcceleration; /* Ofs: 0x538 Size: 0x4 - FloatProperty OceanPlugin.AdvancedBuoyancyComponent.MaxSlamAcceleration */
	uint8_t UnknownData53C[0x4];
	TArray<struct FVector> AdvancedGridHeight; /* Ofs: 0x540 Size: 0x10 - ArrayProperty OceanPlugin.AdvancedBuoyancyComponent.AdvancedGridHeight */
	TArray<struct FForceTriangle> SubmergedTris; /* Ofs: 0x550 Size: 0x10 - ArrayProperty OceanPlugin.AdvancedBuoyancyComponent.SubmergedTris */
	TArray<float> TriSizes; /* Ofs: 0x560 Size: 0x10 - ArrayProperty OceanPlugin.AdvancedBuoyancyComponent.TriSizes */
	TArray<float> TriSubmergedArea; /* Ofs: 0x570 Size: 0x10 - ArrayProperty OceanPlugin.AdvancedBuoyancyComponent.TriSubmergedArea */
	uint8_t UnknownData580[0x30];


	inline bool bUseDrag()
	{
		return boolField490& 0x1;
	}
	inline bool SetbUseDrag(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x490, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDebugOn()
	{
		return boolField491& 0x1;
	}
	inline bool SetbDebugOn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x491, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTheOcean(t_structHelper inst, ExternalPtr<struct UOceanManager> value) { inst.WriteOffset(0x498, value); }
	inline bool SetWaterDensity(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetGravity(t_structHelper inst, float value) { inst.WriteOffset(0x4A4, value); }
	inline bool SetMeshDensity(t_structHelper inst, float value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetBuoyantMesh(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetMeshTransform(t_structHelper inst, FTransform value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetFalseVolume(t_structHelper inst, float value) { inst.WriteOffset(0x500, value); }
	inline bool SetBuoyancyReductionCoefficient(t_structHelper inst, float value) { inst.WriteOffset(0x504, value); }
	inline bool SetBuoyancyPitchReductionCoefficient(t_structHelper inst, float value) { inst.WriteOffset(0x508, value); }
	inline bool SetDensityCorrection(t_structHelper inst, float value) { inst.WriteOffset(0x50C, value); }
	inline bool SetDensityCorrectionModifier(t_structHelper inst, float value) { inst.WriteOffset(0x510, value); }
	inline bool SetSubmergedVolume(t_structHelper inst, float value) { inst.WriteOffset(0x514, value); }
	inline bool SetImpactCoefficient(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
	inline bool SetDragCoefficient(t_structHelper inst, FVector value) { inst.WriteOffset(0x51C, value); }
	inline bool SetSuctionCoefficient(t_structHelper inst, FVector value) { inst.WriteOffset(0x528, value); }
	inline bool SetViscousDragCoefficient(t_structHelper inst, float value) { inst.WriteOffset(0x534, value); }
	inline bool SetMaxSlamAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
	inline bool SetAdvancedGridHeight(t_structHelper inst, TArray<struct FVector> value) { inst.WriteOffset(0x540, value); }
	inline bool SetSubmergedTris(t_structHelper inst, TArray<struct FForceTriangle> value) { inst.WriteOffset(0x550, value); }
	inline bool SetTriSizes(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x560, value); }
	inline bool SetTriSubmergedArea(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x570, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAdvancedBuoyancyComponent = sizeof(UAdvancedBuoyancyComponent); // 1456
    static_assert(sizeof(UAdvancedBuoyancyComponent) == 0x5B0, "Size of UAdvancedBuoyancyComponent is not correct.");
	auto constexpr UAdvancedBuoyancyComponent_boolField490_Offset = offsetof(UAdvancedBuoyancyComponent, boolField490);
	static_assert(UAdvancedBuoyancyComponent_boolField490_Offset == 0x490, "UAdvancedBuoyancyComponent::boolField490 offset is not 490");
	auto constexpr UAdvancedBuoyancyComponent_boolField491_Offset = offsetof(UAdvancedBuoyancyComponent, boolField491);
	static_assert(UAdvancedBuoyancyComponent_boolField491_Offset == 0x491, "UAdvancedBuoyancyComponent::boolField491 offset is not 491");
	auto constexpr UAdvancedBuoyancyComponent_TheOcean_Offset = offsetof(UAdvancedBuoyancyComponent, TheOcean);
	static_assert(UAdvancedBuoyancyComponent_TheOcean_Offset == 0x498, "UAdvancedBuoyancyComponent::TheOcean offset is not 498");
	auto constexpr UAdvancedBuoyancyComponent_WaterDensity_Offset = offsetof(UAdvancedBuoyancyComponent, WaterDensity);
	static_assert(UAdvancedBuoyancyComponent_WaterDensity_Offset == 0x4a0, "UAdvancedBuoyancyComponent::WaterDensity offset is not 4a0");
	auto constexpr UAdvancedBuoyancyComponent_Gravity_Offset = offsetof(UAdvancedBuoyancyComponent, Gravity);
	static_assert(UAdvancedBuoyancyComponent_Gravity_Offset == 0x4a4, "UAdvancedBuoyancyComponent::Gravity offset is not 4a4");
	auto constexpr UAdvancedBuoyancyComponent_MeshDensity_Offset = offsetof(UAdvancedBuoyancyComponent, MeshDensity);
	static_assert(UAdvancedBuoyancyComponent_MeshDensity_Offset == 0x4a8, "UAdvancedBuoyancyComponent::MeshDensity offset is not 4a8");
	auto constexpr UAdvancedBuoyancyComponent_BuoyantMesh_Offset = offsetof(UAdvancedBuoyancyComponent, BuoyantMesh);
	static_assert(UAdvancedBuoyancyComponent_BuoyantMesh_Offset == 0x4c0, "UAdvancedBuoyancyComponent::BuoyantMesh offset is not 4c0");
	auto constexpr UAdvancedBuoyancyComponent_MeshTransform_Offset = offsetof(UAdvancedBuoyancyComponent, MeshTransform);
	static_assert(UAdvancedBuoyancyComponent_MeshTransform_Offset == 0x4d0, "UAdvancedBuoyancyComponent::MeshTransform offset is not 4d0");
	auto constexpr UAdvancedBuoyancyComponent_FalseVolume_Offset = offsetof(UAdvancedBuoyancyComponent, FalseVolume);
	static_assert(UAdvancedBuoyancyComponent_FalseVolume_Offset == 0x500, "UAdvancedBuoyancyComponent::FalseVolume offset is not 500");
	auto constexpr UAdvancedBuoyancyComponent_BuoyancyReductionCoefficient_Offset = offsetof(UAdvancedBuoyancyComponent, BuoyancyReductionCoefficient);
	static_assert(UAdvancedBuoyancyComponent_BuoyancyReductionCoefficient_Offset == 0x504, "UAdvancedBuoyancyComponent::BuoyancyReductionCoefficient offset is not 504");
	auto constexpr UAdvancedBuoyancyComponent_BuoyancyPitchReductionCoefficient_Offset = offsetof(UAdvancedBuoyancyComponent, BuoyancyPitchReductionCoefficient);
	static_assert(UAdvancedBuoyancyComponent_BuoyancyPitchReductionCoefficient_Offset == 0x508, "UAdvancedBuoyancyComponent::BuoyancyPitchReductionCoefficient offset is not 508");
	auto constexpr UAdvancedBuoyancyComponent_DensityCorrection_Offset = offsetof(UAdvancedBuoyancyComponent, DensityCorrection);
	static_assert(UAdvancedBuoyancyComponent_DensityCorrection_Offset == 0x50c, "UAdvancedBuoyancyComponent::DensityCorrection offset is not 50c");
	auto constexpr UAdvancedBuoyancyComponent_DensityCorrectionModifier_Offset = offsetof(UAdvancedBuoyancyComponent, DensityCorrectionModifier);
	static_assert(UAdvancedBuoyancyComponent_DensityCorrectionModifier_Offset == 0x510, "UAdvancedBuoyancyComponent::DensityCorrectionModifier offset is not 510");
	auto constexpr UAdvancedBuoyancyComponent_SubmergedVolume_Offset = offsetof(UAdvancedBuoyancyComponent, SubmergedVolume);
	static_assert(UAdvancedBuoyancyComponent_SubmergedVolume_Offset == 0x514, "UAdvancedBuoyancyComponent::SubmergedVolume offset is not 514");
	auto constexpr UAdvancedBuoyancyComponent_ImpactCoefficient_Offset = offsetof(UAdvancedBuoyancyComponent, ImpactCoefficient);
	static_assert(UAdvancedBuoyancyComponent_ImpactCoefficient_Offset == 0x518, "UAdvancedBuoyancyComponent::ImpactCoefficient offset is not 518");
	auto constexpr UAdvancedBuoyancyComponent_DragCoefficient_Offset = offsetof(UAdvancedBuoyancyComponent, DragCoefficient);
	static_assert(UAdvancedBuoyancyComponent_DragCoefficient_Offset == 0x51c, "UAdvancedBuoyancyComponent::DragCoefficient offset is not 51c");
	auto constexpr UAdvancedBuoyancyComponent_SuctionCoefficient_Offset = offsetof(UAdvancedBuoyancyComponent, SuctionCoefficient);
	static_assert(UAdvancedBuoyancyComponent_SuctionCoefficient_Offset == 0x528, "UAdvancedBuoyancyComponent::SuctionCoefficient offset is not 528");
	auto constexpr UAdvancedBuoyancyComponent_ViscousDragCoefficient_Offset = offsetof(UAdvancedBuoyancyComponent, ViscousDragCoefficient);
	static_assert(UAdvancedBuoyancyComponent_ViscousDragCoefficient_Offset == 0x534, "UAdvancedBuoyancyComponent::ViscousDragCoefficient offset is not 534");
	auto constexpr UAdvancedBuoyancyComponent_MaxSlamAcceleration_Offset = offsetof(UAdvancedBuoyancyComponent, MaxSlamAcceleration);
	static_assert(UAdvancedBuoyancyComponent_MaxSlamAcceleration_Offset == 0x538, "UAdvancedBuoyancyComponent::MaxSlamAcceleration offset is not 538");
	auto constexpr UAdvancedBuoyancyComponent_AdvancedGridHeight_Offset = offsetof(UAdvancedBuoyancyComponent, AdvancedGridHeight);
	static_assert(UAdvancedBuoyancyComponent_AdvancedGridHeight_Offset == 0x540, "UAdvancedBuoyancyComponent::AdvancedGridHeight offset is not 540");
	auto constexpr UAdvancedBuoyancyComponent_SubmergedTris_Offset = offsetof(UAdvancedBuoyancyComponent, SubmergedTris);
	static_assert(UAdvancedBuoyancyComponent_SubmergedTris_Offset == 0x550, "UAdvancedBuoyancyComponent::SubmergedTris offset is not 550");
	auto constexpr UAdvancedBuoyancyComponent_TriSizes_Offset = offsetof(UAdvancedBuoyancyComponent, TriSizes);
	static_assert(UAdvancedBuoyancyComponent_TriSizes_Offset == 0x560, "UAdvancedBuoyancyComponent::TriSizes offset is not 560");
	auto constexpr UAdvancedBuoyancyComponent_TriSubmergedArea_Offset = offsetof(UAdvancedBuoyancyComponent, TriSubmergedArea);
	static_assert(UAdvancedBuoyancyComponent_TriSubmergedArea_Offset == 0x570, "UAdvancedBuoyancyComponent::TriSubmergedArea offset is not 570");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
