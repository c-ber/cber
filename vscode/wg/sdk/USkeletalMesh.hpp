#pragma once
#include "FBoxSphereBounds.hpp"
#include "FVector.hpp"
#include "EAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkeletalMesh // Size: 0x2F0
	: public UObject // Size: 0x30
{
private:
	typedef USkeletalMesh t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1195); // id32("Class Engine.SkeletalMesh")
		return ptr;
	}
	uint8_t UnknownData30[0x20];
	ExternalPtr<struct USkeleton> Skeleton; /* Ofs: 0x50 Size: 0x8 - ObjectProperty Engine.SkeletalMesh.Skeleton */
	FBoxSphereBounds ImportedBounds; /* Ofs: 0x58 Size: 0x1C - StructProperty Engine.SkeletalMesh.ImportedBounds */
	FBoxSphereBounds ExtendedBounds; /* Ofs: 0x74 Size: 0x1C - StructProperty Engine.SkeletalMesh.ExtendedBounds */
	FVector PositiveBoundsExtension; /* Ofs: 0x90 Size: 0xC - StructProperty Engine.SkeletalMesh.PositiveBoundsExtension */
	FVector NegativeBoundsExtension; /* Ofs: 0x9C Size: 0xC - StructProperty Engine.SkeletalMesh.NegativeBoundsExtension */
	TArray<struct FSkeletalMaterial> Materials; /* Ofs: 0xA8 Size: 0x10 - ArrayProperty Engine.SkeletalMesh.Materials */
	TArray<struct FBoneMirrorInfo> SkelMirrorTable; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty Engine.SkeletalMesh.SkelMirrorTable */
	TEnumAsByte<enum EAxis> SkelMirrorAxis; /* Ofs: 0xC8 Size: 0x1 - ByteProperty Engine.SkeletalMesh.SkelMirrorAxis */
	TEnumAsByte<enum EAxis> SkelMirrorFlipAxis; /* Ofs: 0xC9 Size: 0x1 - ByteProperty Engine.SkeletalMesh.SkelMirrorFlipAxis */
	uint8_t UnknownDataCA[0x6];
	TArray<struct FSkeletalMeshLODInfo> LODInfo; /* Ofs: 0xD0 Size: 0x10 - ArrayProperty Engine.SkeletalMesh.LODInfo */
	uint8_t boolFieldE0;
	uint8_t UnknownDataE1[0x7];
	ExternalPtr<struct UBodySetup> BodySetup; /* Ofs: 0xE8 Size: 0x8 - ObjectProperty Engine.SkeletalMesh.BodySetup */
	ExternalPtr<struct UPhysicsAsset> PhysicsAsset; /* Ofs: 0xF0 Size: 0x8 - ObjectProperty Engine.SkeletalMesh.PhysicsAsset */
	ExternalPtr<struct UPhysicsAsset> ShadowPhysicsAsset; /* Ofs: 0xF8 Size: 0x8 - ObjectProperty Engine.SkeletalMesh.ShadowPhysicsAsset */
	TArray<ExternalPtr<struct UNodeMappingContainer>> NodeMappingData; /* Ofs: 0x100 Size: 0x10 - ArrayProperty Engine.SkeletalMesh.NodeMappingData */
	TArray<ExternalPtr<struct UMorphTarget>> MorphTargets; /* Ofs: 0x110 Size: 0x10 - ArrayProperty Engine.SkeletalMesh.MorphTargets */
	uint8_t UnknownData120[0x168];
	TArray<struct FClothingAssetData_Legacy> ClothingAssets; /* Ofs: 0x288 Size: 0x10 - ArrayProperty Engine.SkeletalMesh.ClothingAssets */
	ExternalPtr<struct UClass> PostProcessAnimBlueprint; /* Ofs: 0x298 Size: 0x8 - ClassProperty Engine.SkeletalMesh.PostProcessAnimBlueprint */
	TArray<ExternalPtr<struct UClothingAssetBase>> MeshClothingAssets; /* Ofs: 0x2A0 Size: 0x10 - ArrayProperty Engine.SkeletalMesh.MeshClothingAssets */
	TArray<ExternalPtr<struct UAssetUserData>> AssetUserData; /* Ofs: 0x2B0 Size: 0x10 - ArrayProperty Engine.SkeletalMesh.AssetUserData */
	uint8_t UnknownData2C0[0x8];
	TArray<ExternalPtr<struct USkeletalMeshSocket>> Sockets; /* Ofs: 0x2C8 Size: 0x10 - ArrayProperty Engine.SkeletalMesh.Sockets */
	uint8_t UnknownData2D8[0x18];


	inline bool SetSkeleton(t_structHelper inst, ExternalPtr<struct USkeleton> value) { inst.WriteOffset(0x50, value); }
	inline bool SetImportedBounds(t_structHelper inst, FBoxSphereBounds value) { inst.WriteOffset(0x58, value); }
	inline bool SetExtendedBounds(t_structHelper inst, FBoxSphereBounds value) { inst.WriteOffset(0x74, value); }
	inline bool SetPositiveBoundsExtension(t_structHelper inst, FVector value) { inst.WriteOffset(0x90, value); }
	inline bool SetNegativeBoundsExtension(t_structHelper inst, FVector value) { inst.WriteOffset(0x9C, value); }
	inline bool SetMaterials(t_structHelper inst, TArray<struct FSkeletalMaterial> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetSkelMirrorTable(t_structHelper inst, TArray<struct FBoneMirrorInfo> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetSkelMirrorAxis(t_structHelper inst, TEnumAsByte<enum EAxis> value) { inst.WriteOffset(0xC8, value); }
	inline bool SetSkelMirrorFlipAxis(t_structHelper inst, TEnumAsByte<enum EAxis> value) { inst.WriteOffset(0xC9, value); }
	inline bool SetLODInfo(t_structHelper inst, TArray<struct FSkeletalMeshLODInfo> value) { inst.WriteOffset(0xD0, value); }
	inline bool bUseFullPrecisionUVs()
	{
		return boolFieldE0& 0x1;
	}
	inline bool SetbUseFullPrecisionUVs(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bHasBeenSimplified()
	{
		return boolFieldE0& 0x2;
	}
	inline bool SetbHasBeenSimplified(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bHasVertexColors()
	{
		return boolFieldE0& 0x4;
	}
	inline bool SetbHasVertexColors(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE0, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bEnablePerPolyCollision()
	{
		return boolFieldE0& 0x8;
	}
	inline bool SetbEnablePerPolyCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE0, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0xE8, value); }
	inline bool SetPhysicsAsset(t_structHelper inst, ExternalPtr<struct UPhysicsAsset> value) { inst.WriteOffset(0xF0, value); }
	inline bool SetShadowPhysicsAsset(t_structHelper inst, ExternalPtr<struct UPhysicsAsset> value) { inst.WriteOffset(0xF8, value); }
	inline bool SetNodeMappingData(t_structHelper inst, TArray<ExternalPtr<struct UNodeMappingContainer>> value) { inst.WriteOffset(0x100, value); }
	inline bool SetMorphTargets(t_structHelper inst, TArray<ExternalPtr<struct UMorphTarget>> value) { inst.WriteOffset(0x110, value); }
	inline bool SetClothingAssets(t_structHelper inst, TArray<struct FClothingAssetData_Legacy> value) { inst.WriteOffset(0x288, value); }
	inline bool SetPostProcessAnimBlueprint(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x298, value); }
	inline bool SetMeshClothingAssets(t_structHelper inst, TArray<ExternalPtr<struct UClothingAssetBase>> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetAssetUserData(t_structHelper inst, TArray<ExternalPtr<struct UAssetUserData>> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetSockets(t_structHelper inst, TArray<ExternalPtr<struct USkeletalMeshSocket>> value) { inst.WriteOffset(0x2C8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkeletalMesh = sizeof(USkeletalMesh); // 752
    static_assert(sizeof(USkeletalMesh) == 0x2F0, "Size of USkeletalMesh is not correct.");
	auto constexpr USkeletalMesh_Skeleton_Offset = offsetof(USkeletalMesh, Skeleton);
	static_assert(USkeletalMesh_Skeleton_Offset == 0x50, "USkeletalMesh::Skeleton offset is not 50");
	auto constexpr USkeletalMesh_ImportedBounds_Offset = offsetof(USkeletalMesh, ImportedBounds);
	static_assert(USkeletalMesh_ImportedBounds_Offset == 0x58, "USkeletalMesh::ImportedBounds offset is not 58");
	auto constexpr USkeletalMesh_ExtendedBounds_Offset = offsetof(USkeletalMesh, ExtendedBounds);
	static_assert(USkeletalMesh_ExtendedBounds_Offset == 0x74, "USkeletalMesh::ExtendedBounds offset is not 74");
	auto constexpr USkeletalMesh_PositiveBoundsExtension_Offset = offsetof(USkeletalMesh, PositiveBoundsExtension);
	static_assert(USkeletalMesh_PositiveBoundsExtension_Offset == 0x90, "USkeletalMesh::PositiveBoundsExtension offset is not 90");
	auto constexpr USkeletalMesh_NegativeBoundsExtension_Offset = offsetof(USkeletalMesh, NegativeBoundsExtension);
	static_assert(USkeletalMesh_NegativeBoundsExtension_Offset == 0x9c, "USkeletalMesh::NegativeBoundsExtension offset is not 9c");
	auto constexpr USkeletalMesh_Materials_Offset = offsetof(USkeletalMesh, Materials);
	static_assert(USkeletalMesh_Materials_Offset == 0xa8, "USkeletalMesh::Materials offset is not a8");
	auto constexpr USkeletalMesh_SkelMirrorTable_Offset = offsetof(USkeletalMesh, SkelMirrorTable);
	static_assert(USkeletalMesh_SkelMirrorTable_Offset == 0xb8, "USkeletalMesh::SkelMirrorTable offset is not b8");
	auto constexpr USkeletalMesh_SkelMirrorAxis_Offset = offsetof(USkeletalMesh, SkelMirrorAxis);
	static_assert(USkeletalMesh_SkelMirrorAxis_Offset == 0xc8, "USkeletalMesh::SkelMirrorAxis offset is not c8");
	auto constexpr USkeletalMesh_SkelMirrorFlipAxis_Offset = offsetof(USkeletalMesh, SkelMirrorFlipAxis);
	static_assert(USkeletalMesh_SkelMirrorFlipAxis_Offset == 0xc9, "USkeletalMesh::SkelMirrorFlipAxis offset is not c9");
	auto constexpr USkeletalMesh_LODInfo_Offset = offsetof(USkeletalMesh, LODInfo);
	static_assert(USkeletalMesh_LODInfo_Offset == 0xd0, "USkeletalMesh::LODInfo offset is not d0");
	auto constexpr USkeletalMesh_boolFieldE0_Offset = offsetof(USkeletalMesh, boolFieldE0);
	static_assert(USkeletalMesh_boolFieldE0_Offset == 0xe0, "USkeletalMesh::boolFieldE0 offset is not e0");
	auto constexpr USkeletalMesh_BodySetup_Offset = offsetof(USkeletalMesh, BodySetup);
	static_assert(USkeletalMesh_BodySetup_Offset == 0xe8, "USkeletalMesh::BodySetup offset is not e8");
	auto constexpr USkeletalMesh_PhysicsAsset_Offset = offsetof(USkeletalMesh, PhysicsAsset);
	static_assert(USkeletalMesh_PhysicsAsset_Offset == 0xf0, "USkeletalMesh::PhysicsAsset offset is not f0");
	auto constexpr USkeletalMesh_ShadowPhysicsAsset_Offset = offsetof(USkeletalMesh, ShadowPhysicsAsset);
	static_assert(USkeletalMesh_ShadowPhysicsAsset_Offset == 0xf8, "USkeletalMesh::ShadowPhysicsAsset offset is not f8");
	auto constexpr USkeletalMesh_NodeMappingData_Offset = offsetof(USkeletalMesh, NodeMappingData);
	static_assert(USkeletalMesh_NodeMappingData_Offset == 0x100, "USkeletalMesh::NodeMappingData offset is not 100");
	auto constexpr USkeletalMesh_MorphTargets_Offset = offsetof(USkeletalMesh, MorphTargets);
	static_assert(USkeletalMesh_MorphTargets_Offset == 0x110, "USkeletalMesh::MorphTargets offset is not 110");
	auto constexpr USkeletalMesh_ClothingAssets_Offset = offsetof(USkeletalMesh, ClothingAssets);
	static_assert(USkeletalMesh_ClothingAssets_Offset == 0x288, "USkeletalMesh::ClothingAssets offset is not 288");
	auto constexpr USkeletalMesh_PostProcessAnimBlueprint_Offset = offsetof(USkeletalMesh, PostProcessAnimBlueprint);
	static_assert(USkeletalMesh_PostProcessAnimBlueprint_Offset == 0x298, "USkeletalMesh::PostProcessAnimBlueprint offset is not 298");
	auto constexpr USkeletalMesh_MeshClothingAssets_Offset = offsetof(USkeletalMesh, MeshClothingAssets);
	static_assert(USkeletalMesh_MeshClothingAssets_Offset == 0x2a0, "USkeletalMesh::MeshClothingAssets offset is not 2a0");
	auto constexpr USkeletalMesh_AssetUserData_Offset = offsetof(USkeletalMesh, AssetUserData);
	static_assert(USkeletalMesh_AssetUserData_Offset == 0x2b0, "USkeletalMesh::AssetUserData offset is not 2b0");
	auto constexpr USkeletalMesh_Sockets_Offset = offsetof(USkeletalMesh, Sockets);
	static_assert(USkeletalMesh_Sockets_Offset == 0x2c8, "USkeletalMesh::Sockets offset is not 2c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
