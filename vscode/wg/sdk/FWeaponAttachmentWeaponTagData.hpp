#pragma once
#include "FWeaponAttachmentData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponAttachmentWeaponTagData // Size: 0x2B0
{
public:
    FName WeaponTag; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.WeaponAttachmentWeaponTagData.WeaponTag */
    TAssetPtr<ExternalPtr<struct UStaticMesh>> AttachmentMeshAsset; /* Ofs: 0x8 Size: 0x1C AssetObjectProperty TslGame.WeaponAttachmentWeaponTagData.AttachmentMeshAsset */
    uint8_t UnknownData24[0x4];
    FWeaponAttachmentData AttachmentData; /* Ofs: 0x28 Size: 0x280 StructProperty TslGame.WeaponAttachmentWeaponTagData.AttachmentData */
    FName AttachmentMeshName; /* Ofs: 0x2A8 Size: 0x8 NameProperty TslGame.WeaponAttachmentWeaponTagData.AttachmentMeshName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponAttachmentWeaponTagData = sizeof(FWeaponAttachmentWeaponTagData); // 688
    static_assert(sizeof(FWeaponAttachmentWeaponTagData) == 0x2B0, "Size of FWeaponAttachmentWeaponTagData is not correct.");
	auto constexpr FWeaponAttachmentWeaponTagData_WeaponTag_Offset = offsetof(FWeaponAttachmentWeaponTagData, WeaponTag);
	static_assert(FWeaponAttachmentWeaponTagData_WeaponTag_Offset == 0x0, "FWeaponAttachmentWeaponTagData::WeaponTag offset is not 0");
	auto constexpr FWeaponAttachmentWeaponTagData_AttachmentMeshAsset_Offset = offsetof(FWeaponAttachmentWeaponTagData, AttachmentMeshAsset);
	static_assert(FWeaponAttachmentWeaponTagData_AttachmentMeshAsset_Offset == 0x8, "FWeaponAttachmentWeaponTagData::AttachmentMeshAsset offset is not 8");
	auto constexpr FWeaponAttachmentWeaponTagData_AttachmentData_Offset = offsetof(FWeaponAttachmentWeaponTagData, AttachmentData);
	static_assert(FWeaponAttachmentWeaponTagData_AttachmentData_Offset == 0x28, "FWeaponAttachmentWeaponTagData::AttachmentData offset is not 28");
	auto constexpr FWeaponAttachmentWeaponTagData_AttachmentMeshName_Offset = offsetof(FWeaponAttachmentWeaponTagData, AttachmentMeshName);
	static_assert(FWeaponAttachmentWeaponTagData_AttachmentMeshName_Offset == 0x2a8, "FWeaponAttachmentWeaponTagData::AttachmentMeshName offset is not 2a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
