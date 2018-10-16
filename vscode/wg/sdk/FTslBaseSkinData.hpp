#pragma once
#include "FTableRowBase.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslBaseSkinData // Size: 0xC8
 : public FTableRowBase // Size: 0x8
{
public:
    TMap<struct FName, struct FSkinMesh> SkinnedMeshSet; /* Ofs: 0x8 Size: 0x50 MapProperty TslGame.TslBaseSkinData.SkinnedMeshSet */
    TMap<struct FName, struct FSkinMeshMaterials> SkinnedMaterialSet; /* Ofs: 0x58 Size: 0x50 MapProperty TslGame.TslBaseSkinData.SkinnedMaterialSet */
    TArray<struct FName> SkinnableTagList; /* Ofs: 0xA8 Size: 0x10 ArrayProperty TslGame.TslBaseSkinData.SkinnableTagList */
    FRotator DefaultViewModeRotation; /* Ofs: 0xB8 Size: 0xC StructProperty TslGame.TslBaseSkinData.DefaultViewModeRotation */
    uint8_t UnknownDataC4[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslBaseSkinData = sizeof(FTslBaseSkinData); // 200
    static_assert(sizeof(FTslBaseSkinData) == 0xC8, "Size of FTslBaseSkinData is not correct.");
	auto constexpr FTslBaseSkinData_SkinnedMeshSet_Offset = offsetof(FTslBaseSkinData, SkinnedMeshSet);
	static_assert(FTslBaseSkinData_SkinnedMeshSet_Offset == 0x8, "FTslBaseSkinData::SkinnedMeshSet offset is not 8");
	auto constexpr FTslBaseSkinData_SkinnedMaterialSet_Offset = offsetof(FTslBaseSkinData, SkinnedMaterialSet);
	static_assert(FTslBaseSkinData_SkinnedMaterialSet_Offset == 0x58, "FTslBaseSkinData::SkinnedMaterialSet offset is not 58");
	auto constexpr FTslBaseSkinData_SkinnableTagList_Offset = offsetof(FTslBaseSkinData, SkinnableTagList);
	static_assert(FTslBaseSkinData_SkinnableTagList_Offset == 0xa8, "FTslBaseSkinData::SkinnableTagList offset is not a8");
	auto constexpr FTslBaseSkinData_DefaultViewModeRotation_Offset = offsetof(FTslBaseSkinData, DefaultViewModeRotation);
	static_assert(FTslBaseSkinData_DefaultViewModeRotation_Offset == 0xb8, "FTslBaseSkinData::DefaultViewModeRotation offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
