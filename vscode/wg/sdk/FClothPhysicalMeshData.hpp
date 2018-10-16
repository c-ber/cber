#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClothPhysicalMeshData // Size: 0x98
{
public:
    TArray<struct FVector> Vertices; /* Ofs: 0x0 Size: 0x10 ArrayProperty ClothingSystemRuntime.ClothPhysicalMeshData.Vertices */
    TArray<struct FVector> Normals; /* Ofs: 0x10 Size: 0x10 ArrayProperty ClothingSystemRuntime.ClothPhysicalMeshData.Normals */
    TArray<uint32_t> Indices; /* Ofs: 0x20 Size: 0x10 ArrayProperty ClothingSystemRuntime.ClothPhysicalMeshData.Indices */
    TArray<float> MaxDistances; /* Ofs: 0x30 Size: 0x10 ArrayProperty ClothingSystemRuntime.ClothPhysicalMeshData.MaxDistances */
    TArray<float> BackstopDistances; /* Ofs: 0x40 Size: 0x10 ArrayProperty ClothingSystemRuntime.ClothPhysicalMeshData.BackstopDistances */
    TArray<float> BackstopRadiuses; /* Ofs: 0x50 Size: 0x10 ArrayProperty ClothingSystemRuntime.ClothPhysicalMeshData.BackstopRadiuses */
    TArray<float> InverseMasses; /* Ofs: 0x60 Size: 0x10 ArrayProperty ClothingSystemRuntime.ClothPhysicalMeshData.InverseMasses */
    TArray<struct FClothVertBoneData> BoneData; /* Ofs: 0x70 Size: 0x10 ArrayProperty ClothingSystemRuntime.ClothPhysicalMeshData.BoneData */
    int32_t MaxBoneWeights; /* Ofs: 0x80 Size: 0x4 IntProperty ClothingSystemRuntime.ClothPhysicalMeshData.MaxBoneWeights */
    int32_t NumFixedVerts; /* Ofs: 0x84 Size: 0x4 IntProperty ClothingSystemRuntime.ClothPhysicalMeshData.NumFixedVerts */
    TArray<uint32_t> SelfCollisionIndices; /* Ofs: 0x88 Size: 0x10 ArrayProperty ClothingSystemRuntime.ClothPhysicalMeshData.SelfCollisionIndices */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClothPhysicalMeshData = sizeof(FClothPhysicalMeshData); // 152
    static_assert(sizeof(FClothPhysicalMeshData) == 0x98, "Size of FClothPhysicalMeshData is not correct.");
	auto constexpr FClothPhysicalMeshData_Vertices_Offset = offsetof(FClothPhysicalMeshData, Vertices);
	static_assert(FClothPhysicalMeshData_Vertices_Offset == 0x0, "FClothPhysicalMeshData::Vertices offset is not 0");
	auto constexpr FClothPhysicalMeshData_Normals_Offset = offsetof(FClothPhysicalMeshData, Normals);
	static_assert(FClothPhysicalMeshData_Normals_Offset == 0x10, "FClothPhysicalMeshData::Normals offset is not 10");
	auto constexpr FClothPhysicalMeshData_Indices_Offset = offsetof(FClothPhysicalMeshData, Indices);
	static_assert(FClothPhysicalMeshData_Indices_Offset == 0x20, "FClothPhysicalMeshData::Indices offset is not 20");
	auto constexpr FClothPhysicalMeshData_MaxDistances_Offset = offsetof(FClothPhysicalMeshData, MaxDistances);
	static_assert(FClothPhysicalMeshData_MaxDistances_Offset == 0x30, "FClothPhysicalMeshData::MaxDistances offset is not 30");
	auto constexpr FClothPhysicalMeshData_BackstopDistances_Offset = offsetof(FClothPhysicalMeshData, BackstopDistances);
	static_assert(FClothPhysicalMeshData_BackstopDistances_Offset == 0x40, "FClothPhysicalMeshData::BackstopDistances offset is not 40");
	auto constexpr FClothPhysicalMeshData_BackstopRadiuses_Offset = offsetof(FClothPhysicalMeshData, BackstopRadiuses);
	static_assert(FClothPhysicalMeshData_BackstopRadiuses_Offset == 0x50, "FClothPhysicalMeshData::BackstopRadiuses offset is not 50");
	auto constexpr FClothPhysicalMeshData_InverseMasses_Offset = offsetof(FClothPhysicalMeshData, InverseMasses);
	static_assert(FClothPhysicalMeshData_InverseMasses_Offset == 0x60, "FClothPhysicalMeshData::InverseMasses offset is not 60");
	auto constexpr FClothPhysicalMeshData_BoneData_Offset = offsetof(FClothPhysicalMeshData, BoneData);
	static_assert(FClothPhysicalMeshData_BoneData_Offset == 0x70, "FClothPhysicalMeshData::BoneData offset is not 70");
	auto constexpr FClothPhysicalMeshData_MaxBoneWeights_Offset = offsetof(FClothPhysicalMeshData, MaxBoneWeights);
	static_assert(FClothPhysicalMeshData_MaxBoneWeights_Offset == 0x80, "FClothPhysicalMeshData::MaxBoneWeights offset is not 80");
	auto constexpr FClothPhysicalMeshData_NumFixedVerts_Offset = offsetof(FClothPhysicalMeshData, NumFixedVerts);
	static_assert(FClothPhysicalMeshData_NumFixedVerts_Offset == 0x84, "FClothPhysicalMeshData::NumFixedVerts offset is not 84");
	auto constexpr FClothPhysicalMeshData_SelfCollisionIndices_Offset = offsetof(FClothPhysicalMeshData, SelfCollisionIndices);
	static_assert(FClothPhysicalMeshData_SelfCollisionIndices_Offset == 0x88, "FClothPhysicalMeshData::SelfCollisionIndices offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
