#pragma once
#include "MaskTarget_PhysMesh.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClothParameterMask_PhysMesh // Size: 0x28
{
public:
    FName MaskName; /* Ofs: 0x0 Size: 0x8 NameProperty ClothingSystemRuntime.ClothParameterMask_PhysMesh.MaskName */
    TEnumAsByte<enum MaskTarget_PhysMesh> CurrentTarget; /* Ofs: 0x8 Size: 0x1 EnumProperty ClothingSystemRuntime.ClothParameterMask_PhysMesh.CurrentTarget */
    uint8_t UnknownData9[0x3];
    float MaxValue; /* Ofs: 0xC Size: 0x4 FloatProperty ClothingSystemRuntime.ClothParameterMask_PhysMesh.MaxValue */
    float MinValue; /* Ofs: 0x10 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothParameterMask_PhysMesh.MinValue */
    uint8_t UnknownData14[0x4];
    TArray<float> Values; /* Ofs: 0x18 Size: 0x10 ArrayProperty ClothingSystemRuntime.ClothParameterMask_PhysMesh.Values */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClothParameterMask_PhysMesh = sizeof(FClothParameterMask_PhysMesh); // 40
    static_assert(sizeof(FClothParameterMask_PhysMesh) == 0x28, "Size of FClothParameterMask_PhysMesh is not correct.");
	auto constexpr FClothParameterMask_PhysMesh_MaskName_Offset = offsetof(FClothParameterMask_PhysMesh, MaskName);
	static_assert(FClothParameterMask_PhysMesh_MaskName_Offset == 0x0, "FClothParameterMask_PhysMesh::MaskName offset is not 0");
	auto constexpr FClothParameterMask_PhysMesh_CurrentTarget_Offset = offsetof(FClothParameterMask_PhysMesh, CurrentTarget);
	static_assert(FClothParameterMask_PhysMesh_CurrentTarget_Offset == 0x8, "FClothParameterMask_PhysMesh::CurrentTarget offset is not 8");
	auto constexpr FClothParameterMask_PhysMesh_MaxValue_Offset = offsetof(FClothParameterMask_PhysMesh, MaxValue);
	static_assert(FClothParameterMask_PhysMesh_MaxValue_Offset == 0xc, "FClothParameterMask_PhysMesh::MaxValue offset is not c");
	auto constexpr FClothParameterMask_PhysMesh_MinValue_Offset = offsetof(FClothParameterMask_PhysMesh, MinValue);
	static_assert(FClothParameterMask_PhysMesh_MinValue_Offset == 0x10, "FClothParameterMask_PhysMesh::MinValue offset is not 10");
	auto constexpr FClothParameterMask_PhysMesh_Values_Offset = offsetof(FClothParameterMask_PhysMesh, Values);
	static_assert(FClothParameterMask_PhysMesh_Values_Offset == 0x18, "FClothParameterMask_PhysMesh::Values offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
