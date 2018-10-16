#pragma once
#include "FVector.hpp"
#include "FBoxSphereBounds.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStaticMesh // Size: 0x158
	: public UObject // Size: 0x30
{
private:
	typedef UStaticMesh t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1234); // id32("Class Engine.StaticMesh")
		return ptr;
	}
	uint8_t UnknownData30[0x18];
	TArray<struct FMeshSectionInfoExt> SectionInfoExts; /* Ofs: 0x48 Size: 0x10 - ArrayProperty Engine.StaticMesh.SectionInfoExts */
	int32_t MinLOD; /* Ofs: 0x58 Size: 0x4 - IntProperty Engine.StaticMesh.MinLOD */
	uint8_t UnknownData5C[0x4];
	TArray<ExternalPtr<struct UMaterialInterface>> Materials; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.StaticMesh.Materials */
	TArray<struct FStaticMaterial> StaticMaterials; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Engine.StaticMesh.StaticMaterials */
	float LightmapUVDensity; /* Ofs: 0x80 Size: 0x4 - FloatProperty Engine.StaticMesh.LightmapUVDensity */
	int32_t LightMapResolution; /* Ofs: 0x84 Size: 0x4 - IntProperty Engine.StaticMesh.LightMapResolution */
	int32_t LightMapCoordinateIndex; /* Ofs: 0x88 Size: 0x4 - IntProperty Engine.StaticMesh.LightMapCoordinateIndex */
	float DistanceFieldSelfShadowBias; /* Ofs: 0x8C Size: 0x4 - FloatProperty Engine.StaticMesh.DistanceFieldSelfShadowBias */
	uint8_t boolField90;
	uint8_t UnknownData91[0x7];
	ExternalPtr<struct UBodySetup> BodySetup; /* Ofs: 0x98 Size: 0x8 - ObjectProperty Engine.StaticMesh.BodySetup */
	int32_t LODForCollision; /* Ofs: 0xA0 Size: 0x4 - IntProperty Engine.StaticMesh.LODForCollision */
	uint8_t boolFieldA4;
	uint8_t UnknownDataA5[0x3];
	float LpvBiasMultiplier; /* Ofs: 0xA8 Size: 0x4 - FloatProperty Engine.StaticMesh.LpvBiasMultiplier */
	uint8_t boolFieldAC;
	uint8_t UnknownDataAD[0x33];
	TArray<ExternalPtr<struct UStaticMeshSocket>> Sockets; /* Ofs: 0xE0 Size: 0x10 - ArrayProperty Engine.StaticMesh.Sockets */
	uint8_t UnknownDataF0[0x10];
	FVector PositiveBoundsExtension; /* Ofs: 0x100 Size: 0xC - StructProperty Engine.StaticMesh.PositiveBoundsExtension */
	FVector NegativeBoundsExtension; /* Ofs: 0x10C Size: 0xC - StructProperty Engine.StaticMesh.NegativeBoundsExtension */
	FBoxSphereBounds ExtendedBounds; /* Ofs: 0x118 Size: 0x1C - StructProperty Engine.StaticMesh.ExtendedBounds */
	uint8_t boolField134;
	uint8_t UnknownData135[0x3];
	int32_t ElementToIgnoreForTexFactor; /* Ofs: 0x138 Size: 0x4 - IntProperty Engine.StaticMesh.ElementToIgnoreForTexFactor */
	uint8_t UnknownData13C[0x4];
	TArray<ExternalPtr<struct UAssetUserData>> AssetUserData; /* Ofs: 0x140 Size: 0x10 - ArrayProperty Engine.StaticMesh.AssetUserData */
	ExternalPtr<struct UNavCollision> NavCollision; /* Ofs: 0x150 Size: 0x8 - ObjectProperty Engine.StaticMesh.NavCollision */


	inline bool SetSectionInfoExts(t_structHelper inst, TArray<struct FMeshSectionInfoExt> value) { inst.WriteOffset(0x48, value); }
	inline bool SetMinLOD(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
	inline bool SetMaterials(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInterface>> value) { inst.WriteOffset(0x60, value); }
	inline bool SetStaticMaterials(t_structHelper inst, TArray<struct FStaticMaterial> value) { inst.WriteOffset(0x70, value); }
	inline bool SetLightmapUVDensity(t_structHelper inst, float value) { inst.WriteOffset(0x80, value); }
	inline bool SetLightMapResolution(t_structHelper inst, int32_t value) { inst.WriteOffset(0x84, value); }
	inline bool SetLightMapCoordinateIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x88, value); }
	inline bool SetDistanceFieldSelfShadowBias(t_structHelper inst, float value) { inst.WriteOffset(0x8C, value); }
	inline bool bGenerateMeshDistanceField()
	{
		return boolField90& 0x1;
	}
	inline bool SetbGenerateMeshDistanceField(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x90, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0x98, value); }
	inline bool SetLODForCollision(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA0, value); }
	inline bool bStripComplexCollisionForConsole()
	{
		return boolFieldA4& 0x1;
	}
	inline bool SetbStripComplexCollisionForConsole(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bHasNavigationData()
	{
		return boolFieldA4& 0x2;
	}
	inline bool SetbHasNavigationData(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bRequiresAreaWeightedSampling()
	{
		return boolFieldA4& 0x4;
	}
	inline bool SetbRequiresAreaWeightedSampling(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetLpvBiasMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0xA8, value); }
	inline bool bAllowCPUAccess()
	{
		return boolFieldAC& 0x1;
	}
	inline bool SetbAllowCPUAccess(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSockets(t_structHelper inst, TArray<ExternalPtr<struct UStaticMeshSocket>> value) { inst.WriteOffset(0xE0, value); }
	inline bool SetPositiveBoundsExtension(t_structHelper inst, FVector value) { inst.WriteOffset(0x100, value); }
	inline bool SetNegativeBoundsExtension(t_structHelper inst, FVector value) { inst.WriteOffset(0x10C, value); }
	inline bool SetExtendedBounds(t_structHelper inst, FBoxSphereBounds value) { inst.WriteOffset(0x118, value); }
	inline bool bIgnoreDistanceFieldData()
	{
		return boolField134& 0x1;
	}
	inline bool SetbIgnoreDistanceFieldData(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x134, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetElementToIgnoreForTexFactor(t_structHelper inst, int32_t value) { inst.WriteOffset(0x138, value); }
	inline bool SetAssetUserData(t_structHelper inst, TArray<ExternalPtr<struct UAssetUserData>> value) { inst.WriteOffset(0x140, value); }
	inline bool SetNavCollision(t_structHelper inst, ExternalPtr<struct UNavCollision> value) { inst.WriteOffset(0x150, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStaticMesh = sizeof(UStaticMesh); // 344
    static_assert(sizeof(UStaticMesh) == 0x158, "Size of UStaticMesh is not correct.");
	auto constexpr UStaticMesh_SectionInfoExts_Offset = offsetof(UStaticMesh, SectionInfoExts);
	static_assert(UStaticMesh_SectionInfoExts_Offset == 0x48, "UStaticMesh::SectionInfoExts offset is not 48");
	auto constexpr UStaticMesh_MinLOD_Offset = offsetof(UStaticMesh, MinLOD);
	static_assert(UStaticMesh_MinLOD_Offset == 0x58, "UStaticMesh::MinLOD offset is not 58");
	auto constexpr UStaticMesh_Materials_Offset = offsetof(UStaticMesh, Materials);
	static_assert(UStaticMesh_Materials_Offset == 0x60, "UStaticMesh::Materials offset is not 60");
	auto constexpr UStaticMesh_StaticMaterials_Offset = offsetof(UStaticMesh, StaticMaterials);
	static_assert(UStaticMesh_StaticMaterials_Offset == 0x70, "UStaticMesh::StaticMaterials offset is not 70");
	auto constexpr UStaticMesh_LightmapUVDensity_Offset = offsetof(UStaticMesh, LightmapUVDensity);
	static_assert(UStaticMesh_LightmapUVDensity_Offset == 0x80, "UStaticMesh::LightmapUVDensity offset is not 80");
	auto constexpr UStaticMesh_LightMapResolution_Offset = offsetof(UStaticMesh, LightMapResolution);
	static_assert(UStaticMesh_LightMapResolution_Offset == 0x84, "UStaticMesh::LightMapResolution offset is not 84");
	auto constexpr UStaticMesh_LightMapCoordinateIndex_Offset = offsetof(UStaticMesh, LightMapCoordinateIndex);
	static_assert(UStaticMesh_LightMapCoordinateIndex_Offset == 0x88, "UStaticMesh::LightMapCoordinateIndex offset is not 88");
	auto constexpr UStaticMesh_DistanceFieldSelfShadowBias_Offset = offsetof(UStaticMesh, DistanceFieldSelfShadowBias);
	static_assert(UStaticMesh_DistanceFieldSelfShadowBias_Offset == 0x8c, "UStaticMesh::DistanceFieldSelfShadowBias offset is not 8c");
	auto constexpr UStaticMesh_boolField90_Offset = offsetof(UStaticMesh, boolField90);
	static_assert(UStaticMesh_boolField90_Offset == 0x90, "UStaticMesh::boolField90 offset is not 90");
	auto constexpr UStaticMesh_BodySetup_Offset = offsetof(UStaticMesh, BodySetup);
	static_assert(UStaticMesh_BodySetup_Offset == 0x98, "UStaticMesh::BodySetup offset is not 98");
	auto constexpr UStaticMesh_LODForCollision_Offset = offsetof(UStaticMesh, LODForCollision);
	static_assert(UStaticMesh_LODForCollision_Offset == 0xa0, "UStaticMesh::LODForCollision offset is not a0");
	auto constexpr UStaticMesh_boolFieldA4_Offset = offsetof(UStaticMesh, boolFieldA4);
	static_assert(UStaticMesh_boolFieldA4_Offset == 0xa4, "UStaticMesh::boolFieldA4 offset is not a4");
	auto constexpr UStaticMesh_LpvBiasMultiplier_Offset = offsetof(UStaticMesh, LpvBiasMultiplier);
	static_assert(UStaticMesh_LpvBiasMultiplier_Offset == 0xa8, "UStaticMesh::LpvBiasMultiplier offset is not a8");
	auto constexpr UStaticMesh_boolFieldAC_Offset = offsetof(UStaticMesh, boolFieldAC);
	static_assert(UStaticMesh_boolFieldAC_Offset == 0xac, "UStaticMesh::boolFieldAC offset is not ac");
	auto constexpr UStaticMesh_Sockets_Offset = offsetof(UStaticMesh, Sockets);
	static_assert(UStaticMesh_Sockets_Offset == 0xe0, "UStaticMesh::Sockets offset is not e0");
	auto constexpr UStaticMesh_PositiveBoundsExtension_Offset = offsetof(UStaticMesh, PositiveBoundsExtension);
	static_assert(UStaticMesh_PositiveBoundsExtension_Offset == 0x100, "UStaticMesh::PositiveBoundsExtension offset is not 100");
	auto constexpr UStaticMesh_NegativeBoundsExtension_Offset = offsetof(UStaticMesh, NegativeBoundsExtension);
	static_assert(UStaticMesh_NegativeBoundsExtension_Offset == 0x10c, "UStaticMesh::NegativeBoundsExtension offset is not 10c");
	auto constexpr UStaticMesh_ExtendedBounds_Offset = offsetof(UStaticMesh, ExtendedBounds);
	static_assert(UStaticMesh_ExtendedBounds_Offset == 0x118, "UStaticMesh::ExtendedBounds offset is not 118");
	auto constexpr UStaticMesh_boolField134_Offset = offsetof(UStaticMesh, boolField134);
	static_assert(UStaticMesh_boolField134_Offset == 0x134, "UStaticMesh::boolField134 offset is not 134");
	auto constexpr UStaticMesh_ElementToIgnoreForTexFactor_Offset = offsetof(UStaticMesh, ElementToIgnoreForTexFactor);
	static_assert(UStaticMesh_ElementToIgnoreForTexFactor_Offset == 0x138, "UStaticMesh::ElementToIgnoreForTexFactor offset is not 138");
	auto constexpr UStaticMesh_AssetUserData_Offset = offsetof(UStaticMesh, AssetUserData);
	static_assert(UStaticMesh_AssetUserData_Offset == 0x140, "UStaticMesh::AssetUserData offset is not 140");
	auto constexpr UStaticMesh_NavCollision_Offset = offsetof(UStaticMesh, NavCollision);
	static_assert(UStaticMesh_NavCollision_Offset == 0x150, "UStaticMesh::NavCollision offset is not 150");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
