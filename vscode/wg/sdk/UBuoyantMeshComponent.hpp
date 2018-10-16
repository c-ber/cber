#pragma once
#include "UStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuoyantMeshComponent // Size: 0xAF0
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef UBuoyantMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2055); // id32("Class OceanPlugin.BuoyantMeshComponent")
		return ptr;
	}
	uint8_t UnknownDataA80[0x8];
	uint8_t boolFieldA88;
	uint8_t boolFieldA89;
	uint8_t boolFieldA8A;
	uint8_t boolFieldA8B;
	uint8_t UnknownDataA8C[0x4];
	ExternalPtr<struct UOceanManager> OceanManager; /* Ofs: 0xA90 Size: 0x8 - ObjectProperty OceanPlugin.BuoyantMeshComponent.OceanManager */
	uint8_t boolFieldA98;
	uint8_t boolFieldA99;
	uint8_t boolFieldA9A;
	uint8_t boolFieldA9B;
	uint8_t boolFieldA9C;
	uint8_t UnknownDataA9D[0x3];
	float ForceArrowSize; /* Ofs: 0xAA0 Size: 0x4 - FloatProperty OceanPlugin.BuoyantMeshComponent.ForceArrowSize */
	uint8_t boolFieldAA4;
	uint8_t UnknownDataAA5[0x3];
	float MeshDensity; /* Ofs: 0xAA8 Size: 0x4 - FloatProperty OceanPlugin.BuoyantMeshComponent.MeshDensity */
	uint8_t boolFieldAAC;
	uint8_t UnknownDataAAD[0x3];
	float Mass; /* Ofs: 0xAB0 Size: 0x4 - FloatProperty OceanPlugin.BuoyantMeshComponent.Mass */
	float WaterDensity; /* Ofs: 0xAB4 Size: 0x4 - FloatProperty OceanPlugin.BuoyantMeshComponent.WaterDensity */
	uint8_t UnknownDataAB8[0x28];
	ExternalPtr<struct UWaterHeightmapComponent> WaterHeightmap; /* Ofs: 0xAE0 Size: 0x8 - ObjectProperty OceanPlugin.BuoyantMeshComponent.WaterHeightmap */
	uint8_t UnknownDataAE8[0x8];


	inline bool bVerticalForcesOnly()
	{
		return boolFieldA88& 0x1;
	}
	inline bool SetbVerticalForcesOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseWaterPatch()
	{
		return boolFieldA89& 0x1;
	}
	inline bool SetbUseWaterPatch(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA89, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseStaticForces()
	{
		return boolFieldA8A& 0x1;
	}
	inline bool SetbUseStaticForces(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseDynamicForces()
	{
		return boolFieldA8B& 0x1;
	}
	inline bool SetbUseDynamicForces(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOceanManager(t_structHelper inst, ExternalPtr<struct UOceanManager> value) { inst.WriteOffset(0xA90, value); }
	inline bool bDrawForceArrows()
	{
		return boolFieldA98& 0x1;
	}
	inline bool SetbDrawForceArrows(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA98, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDrawWaterline()
	{
		return boolFieldA99& 0x1;
	}
	inline bool SetbDrawWaterline(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA99, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDrawVertices()
	{
		return boolFieldA9A& 0x1;
	}
	inline bool SetbDrawVertices(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA9A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDrawTriangles()
	{
		return boolFieldA9B& 0x1;
	}
	inline bool SetbDrawTriangles(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA9B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDrawSubtriangles()
	{
		return boolFieldA9C& 0x1;
	}
	inline bool SetbDrawSubtriangles(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA9C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetForceArrowSize(t_structHelper inst, float value) { inst.WriteOffset(0xAA0, value); }
	inline bool bOverrideMeshDensity()
	{
		return boolFieldAA4& 0x1;
	}
	inline bool SetbOverrideMeshDensity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAA4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMeshDensity(t_structHelper inst, float value) { inst.WriteOffset(0xAA8, value); }
	inline bool bOverrideMass()
	{
		return boolFieldAAC& 0x1;
	}
	inline bool SetbOverrideMass(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAAC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMass(t_structHelper inst, float value) { inst.WriteOffset(0xAB0, value); }
	inline bool SetWaterDensity(t_structHelper inst, float value) { inst.WriteOffset(0xAB4, value); }
	inline bool SetWaterHeightmap(t_structHelper inst, ExternalPtr<struct UWaterHeightmapComponent> value) { inst.WriteOffset(0xAE0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuoyantMeshComponent = sizeof(UBuoyantMeshComponent); // 2800
    static_assert(sizeof(UBuoyantMeshComponent) == 0xAF0, "Size of UBuoyantMeshComponent is not correct.");
	auto constexpr UBuoyantMeshComponent_boolFieldA88_Offset = offsetof(UBuoyantMeshComponent, boolFieldA88);
	static_assert(UBuoyantMeshComponent_boolFieldA88_Offset == 0xa88, "UBuoyantMeshComponent::boolFieldA88 offset is not a88");
	auto constexpr UBuoyantMeshComponent_boolFieldA89_Offset = offsetof(UBuoyantMeshComponent, boolFieldA89);
	static_assert(UBuoyantMeshComponent_boolFieldA89_Offset == 0xa89, "UBuoyantMeshComponent::boolFieldA89 offset is not a89");
	auto constexpr UBuoyantMeshComponent_boolFieldA8A_Offset = offsetof(UBuoyantMeshComponent, boolFieldA8A);
	static_assert(UBuoyantMeshComponent_boolFieldA8A_Offset == 0xa8a, "UBuoyantMeshComponent::boolFieldA8A offset is not a8a");
	auto constexpr UBuoyantMeshComponent_boolFieldA8B_Offset = offsetof(UBuoyantMeshComponent, boolFieldA8B);
	static_assert(UBuoyantMeshComponent_boolFieldA8B_Offset == 0xa8b, "UBuoyantMeshComponent::boolFieldA8B offset is not a8b");
	auto constexpr UBuoyantMeshComponent_OceanManager_Offset = offsetof(UBuoyantMeshComponent, OceanManager);
	static_assert(UBuoyantMeshComponent_OceanManager_Offset == 0xa90, "UBuoyantMeshComponent::OceanManager offset is not a90");
	auto constexpr UBuoyantMeshComponent_boolFieldA98_Offset = offsetof(UBuoyantMeshComponent, boolFieldA98);
	static_assert(UBuoyantMeshComponent_boolFieldA98_Offset == 0xa98, "UBuoyantMeshComponent::boolFieldA98 offset is not a98");
	auto constexpr UBuoyantMeshComponent_boolFieldA99_Offset = offsetof(UBuoyantMeshComponent, boolFieldA99);
	static_assert(UBuoyantMeshComponent_boolFieldA99_Offset == 0xa99, "UBuoyantMeshComponent::boolFieldA99 offset is not a99");
	auto constexpr UBuoyantMeshComponent_boolFieldA9A_Offset = offsetof(UBuoyantMeshComponent, boolFieldA9A);
	static_assert(UBuoyantMeshComponent_boolFieldA9A_Offset == 0xa9a, "UBuoyantMeshComponent::boolFieldA9A offset is not a9a");
	auto constexpr UBuoyantMeshComponent_boolFieldA9B_Offset = offsetof(UBuoyantMeshComponent, boolFieldA9B);
	static_assert(UBuoyantMeshComponent_boolFieldA9B_Offset == 0xa9b, "UBuoyantMeshComponent::boolFieldA9B offset is not a9b");
	auto constexpr UBuoyantMeshComponent_boolFieldA9C_Offset = offsetof(UBuoyantMeshComponent, boolFieldA9C);
	static_assert(UBuoyantMeshComponent_boolFieldA9C_Offset == 0xa9c, "UBuoyantMeshComponent::boolFieldA9C offset is not a9c");
	auto constexpr UBuoyantMeshComponent_ForceArrowSize_Offset = offsetof(UBuoyantMeshComponent, ForceArrowSize);
	static_assert(UBuoyantMeshComponent_ForceArrowSize_Offset == 0xaa0, "UBuoyantMeshComponent::ForceArrowSize offset is not aa0");
	auto constexpr UBuoyantMeshComponent_boolFieldAA4_Offset = offsetof(UBuoyantMeshComponent, boolFieldAA4);
	static_assert(UBuoyantMeshComponent_boolFieldAA4_Offset == 0xaa4, "UBuoyantMeshComponent::boolFieldAA4 offset is not aa4");
	auto constexpr UBuoyantMeshComponent_MeshDensity_Offset = offsetof(UBuoyantMeshComponent, MeshDensity);
	static_assert(UBuoyantMeshComponent_MeshDensity_Offset == 0xaa8, "UBuoyantMeshComponent::MeshDensity offset is not aa8");
	auto constexpr UBuoyantMeshComponent_boolFieldAAC_Offset = offsetof(UBuoyantMeshComponent, boolFieldAAC);
	static_assert(UBuoyantMeshComponent_boolFieldAAC_Offset == 0xaac, "UBuoyantMeshComponent::boolFieldAAC offset is not aac");
	auto constexpr UBuoyantMeshComponent_Mass_Offset = offsetof(UBuoyantMeshComponent, Mass);
	static_assert(UBuoyantMeshComponent_Mass_Offset == 0xab0, "UBuoyantMeshComponent::Mass offset is not ab0");
	auto constexpr UBuoyantMeshComponent_WaterDensity_Offset = offsetof(UBuoyantMeshComponent, WaterDensity);
	static_assert(UBuoyantMeshComponent_WaterDensity_Offset == 0xab4, "UBuoyantMeshComponent::WaterDensity offset is not ab4");
	auto constexpr UBuoyantMeshComponent_WaterHeightmap_Offset = offsetof(UBuoyantMeshComponent, WaterHeightmap);
	static_assert(UBuoyantMeshComponent_WaterHeightmap_Offset == 0xae0, "UBuoyantMeshComponent::WaterHeightmap offset is not ae0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
