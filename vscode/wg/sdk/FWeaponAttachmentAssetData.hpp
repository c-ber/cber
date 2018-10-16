#pragma once
#include "EWeaponAttachmentSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponAttachmentAssetData // Size: 0x38
{
public:
    TEnumAsByte<enum EWeaponAttachmentSlotID> AttachmentSlotID; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.WeaponAttachmentAssetData.AttachmentSlotID */
    uint8_t UnknownData1[0x7];
    FName AttachmentTag; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.WeaponAttachmentAssetData.AttachmentTag */
    TAssetPtr<ExternalPtr<struct UStaticMesh>> AttachmentMeshAsset; /* Ofs: 0x10 Size: 0x1C AssetObjectProperty TslGame.WeaponAttachmentAssetData.AttachmentMeshAsset */
    uint8_t UnknownData2C[0x4];
    FName AttachmentMeshName; /* Ofs: 0x30 Size: 0x8 NameProperty TslGame.WeaponAttachmentAssetData.AttachmentMeshName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponAttachmentAssetData = sizeof(FWeaponAttachmentAssetData); // 56
    static_assert(sizeof(FWeaponAttachmentAssetData) == 0x38, "Size of FWeaponAttachmentAssetData is not correct.");
	auto constexpr FWeaponAttachmentAssetData_AttachmentSlotID_Offset = offsetof(FWeaponAttachmentAssetData, AttachmentSlotID);
	static_assert(FWeaponAttachmentAssetData_AttachmentSlotID_Offset == 0x0, "FWeaponAttachmentAssetData::AttachmentSlotID offset is not 0");
	auto constexpr FWeaponAttachmentAssetData_AttachmentTag_Offset = offsetof(FWeaponAttachmentAssetData, AttachmentTag);
	static_assert(FWeaponAttachmentAssetData_AttachmentTag_Offset == 0x8, "FWeaponAttachmentAssetData::AttachmentTag offset is not 8");
	auto constexpr FWeaponAttachmentAssetData_AttachmentMeshAsset_Offset = offsetof(FWeaponAttachmentAssetData, AttachmentMeshAsset);
	static_assert(FWeaponAttachmentAssetData_AttachmentMeshAsset_Offset == 0x10, "FWeaponAttachmentAssetData::AttachmentMeshAsset offset is not 10");
	auto constexpr FWeaponAttachmentAssetData_AttachmentMeshName_Offset = offsetof(FWeaponAttachmentAssetData, AttachmentMeshName);
	static_assert(FWeaponAttachmentAssetData_AttachmentMeshName_Offset == 0x30, "FWeaponAttachmentAssetData::AttachmentMeshName offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
