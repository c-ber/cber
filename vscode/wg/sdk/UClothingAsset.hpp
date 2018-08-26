#pragma once
#include "UClothingAssetBase.hpp"
#include "FClothConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UClothingAsset // Size: 0x160
	: public UClothingAssetBase // Size: 0x50
{
private:
	typedef UClothingAsset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(316); // id32("Class ClothingSystemRuntime.ClothingAsset")
		return ptr;
	}
	FClothConfig ClothConfig; /* Ofs: 0x50 Size: 0xBC - StructProperty ClothingSystemRuntime.ClothingAsset.ClothConfig */
	uint8_t UnknownData10C[0x4];
	TArray<struct FClothLODData> LODData; /* Ofs: 0x110 Size: 0x10 - ArrayProperty ClothingSystemRuntime.ClothingAsset.LODData */
	TArray<int32_t> LodMap; /* Ofs: 0x120 Size: 0x10 - ArrayProperty ClothingSystemRuntime.ClothingAsset.LodMap */
	TArray<struct FName> UsedBoneNames; /* Ofs: 0x130 Size: 0x10 - ArrayProperty ClothingSystemRuntime.ClothingAsset.UsedBoneNames */
	TArray<int32_t> UsedBoneIndices; /* Ofs: 0x140 Size: 0x10 - ArrayProperty ClothingSystemRuntime.ClothingAsset.UsedBoneIndices */
	int32_t ReferenceBoneIndex; /* Ofs: 0x150 Size: 0x4 - IntProperty ClothingSystemRuntime.ClothingAsset.ReferenceBoneIndex */
	uint8_t UnknownData154[0x4];
	ExternalPtr<struct UClothingAssetCustomData> CustomData; /* Ofs: 0x158 Size: 0x8 - ObjectProperty ClothingSystemRuntime.ClothingAsset.CustomData */


	inline bool SetClothConfig(t_structHelper inst, FClothConfig value) { inst.WriteOffset(0x50, value); }
	inline bool SetLODData(t_structHelper inst, TArray<struct FClothLODData> value) { inst.WriteOffset(0x110, value); }
	inline bool SetLodMap(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x120, value); }
	inline bool SetUsedBoneNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x130, value); }
	inline bool SetUsedBoneIndices(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x140, value); }
	inline bool SetReferenceBoneIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x150, value); }
	inline bool SetCustomData(t_structHelper inst, ExternalPtr<struct UClothingAssetCustomData> value) { inst.WriteOffset(0x158, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUClothingAsset = sizeof(UClothingAsset); // 352
    static_assert(sizeof(UClothingAsset) == 0x160, "Size of UClothingAsset is not correct.");
	auto constexpr UClothingAsset_ClothConfig_Offset = offsetof(UClothingAsset, ClothConfig);
	static_assert(UClothingAsset_ClothConfig_Offset == 0x50, "UClothingAsset::ClothConfig offset is not 50");
	auto constexpr UClothingAsset_LODData_Offset = offsetof(UClothingAsset, LODData);
	static_assert(UClothingAsset_LODData_Offset == 0x110, "UClothingAsset::LODData offset is not 110");
	auto constexpr UClothingAsset_LodMap_Offset = offsetof(UClothingAsset, LodMap);
	static_assert(UClothingAsset_LodMap_Offset == 0x120, "UClothingAsset::LodMap offset is not 120");
	auto constexpr UClothingAsset_UsedBoneNames_Offset = offsetof(UClothingAsset, UsedBoneNames);
	static_assert(UClothingAsset_UsedBoneNames_Offset == 0x130, "UClothingAsset::UsedBoneNames offset is not 130");
	auto constexpr UClothingAsset_UsedBoneIndices_Offset = offsetof(UClothingAsset, UsedBoneIndices);
	static_assert(UClothingAsset_UsedBoneIndices_Offset == 0x140, "UClothingAsset::UsedBoneIndices offset is not 140");
	auto constexpr UClothingAsset_ReferenceBoneIndex_Offset = offsetof(UClothingAsset, ReferenceBoneIndex);
	static_assert(UClothingAsset_ReferenceBoneIndex_Offset == 0x150, "UClothingAsset::ReferenceBoneIndex offset is not 150");
	auto constexpr UClothingAsset_CustomData_Offset = offsetof(UClothingAsset, CustomData);
	static_assert(UClothingAsset_CustomData_Offset == 0x158, "UClothingAsset::CustomData offset is not 158");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
