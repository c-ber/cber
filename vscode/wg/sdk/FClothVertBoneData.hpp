#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClothVertBoneData // Size: 0x30
{
public:
    uint16_t BoneIndices[8]; /* Ofs: 0x0 Size: 0x2 UInt16Property ClothingSystemRuntime.ClothVertBoneData.BoneIndices */
    float BoneWeights[8]; /* Ofs: 0x10 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothVertBoneData.BoneWeights */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClothVertBoneData = sizeof(FClothVertBoneData); // 48
    static_assert(sizeof(FClothVertBoneData) == 0x30, "Size of FClothVertBoneData is not correct.");
	auto constexpr FClothVertBoneData_BoneIndices_Offset = offsetof(FClothVertBoneData, BoneIndices);
	static_assert(FClothVertBoneData_BoneIndices_Offset == 0x0, "FClothVertBoneData::BoneIndices offset is not 0");
	auto constexpr FClothVertBoneData_BoneWeights_Offset = offsetof(FClothVertBoneData, BoneWeights);
	static_assert(FClothVertBoneData_BoneWeights_Offset == 0x10, "FClothVertBoneData::BoneWeights offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
