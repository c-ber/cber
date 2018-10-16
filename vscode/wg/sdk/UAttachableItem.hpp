#pragma once
#include "UItem.hpp"
#include "FWeaponAttachmentData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAttachableItem // Size: 0x490
	: public UItem // Size: 0x1C8
{
private:
	typedef UAttachableItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1902); // id32("Class TslGame.AttachableItem")
		return ptr;
	}
	FWeaponAttachmentData AttachmentData; /* Ofs: 0x1C8 Size: 0x280 - StructProperty TslGame.AttachableItem.AttachmentData */
	TAssetPtr<ExternalPtr<struct UStaticMesh>> AttachmentMeshAsset; /* Ofs: 0x448 Size: 0x1C - AssetObjectProperty TslGame.AttachableItem.AttachmentMeshAsset */
	uint8_t UnknownData464[0x4];
	FName AttachmentMeshName; /* Ofs: 0x468 Size: 0x8 - NameProperty TslGame.AttachableItem.AttachmentMeshName */
	TArray<struct FWeaponAttachmentWeaponTagData> AttachmentWeaponTagData; /* Ofs: 0x470 Size: 0x10 - ArrayProperty TslGame.AttachableItem.AttachmentWeaponTagData */
	uint8_t boolField480;
	uint8_t UnknownData481[0x7];
	ExternalPtr<struct UAkAudioEvent> AttachedSoundAk; /* Ofs: 0x488 Size: 0x8 - ObjectProperty TslGame.AttachableItem.AttachedSoundAk */


	inline bool SetAttachmentData(t_structHelper inst, FWeaponAttachmentData value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetAttachmentMeshAsset(t_structHelper inst, TAssetPtr<ExternalPtr<struct UStaticMesh>> value) { inst.WriteOffset(0x448, value); }
	inline bool SetAttachmentMeshName(t_structHelper inst, FName value) { inst.WriteOffset(0x468, value); }
	inline bool SetAttachmentWeaponTagData(t_structHelper inst, TArray<struct FWeaponAttachmentWeaponTagData> value) { inst.WriteOffset(0x470, value); }
	inline bool EquipOnPickUp()
	{
		return boolField480& 0x1;
	}
	inline bool SetEquipOnPickUp(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x480, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAttachedSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x488, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAttachableItem = sizeof(UAttachableItem); // 1168
    static_assert(sizeof(UAttachableItem) == 0x490, "Size of UAttachableItem is not correct.");
	auto constexpr UAttachableItem_AttachmentData_Offset = offsetof(UAttachableItem, AttachmentData);
	static_assert(UAttachableItem_AttachmentData_Offset == 0x1c8, "UAttachableItem::AttachmentData offset is not 1c8");
	auto constexpr UAttachableItem_AttachmentMeshAsset_Offset = offsetof(UAttachableItem, AttachmentMeshAsset);
	static_assert(UAttachableItem_AttachmentMeshAsset_Offset == 0x448, "UAttachableItem::AttachmentMeshAsset offset is not 448");
	auto constexpr UAttachableItem_AttachmentMeshName_Offset = offsetof(UAttachableItem, AttachmentMeshName);
	static_assert(UAttachableItem_AttachmentMeshName_Offset == 0x468, "UAttachableItem::AttachmentMeshName offset is not 468");
	auto constexpr UAttachableItem_AttachmentWeaponTagData_Offset = offsetof(UAttachableItem, AttachmentWeaponTagData);
	static_assert(UAttachableItem_AttachmentWeaponTagData_Offset == 0x470, "UAttachableItem::AttachmentWeaponTagData offset is not 470");
	auto constexpr UAttachableItem_boolField480_Offset = offsetof(UAttachableItem, boolField480);
	static_assert(UAttachableItem_boolField480_Offset == 0x480, "UAttachableItem::boolField480 offset is not 480");
	auto constexpr UAttachableItem_AttachedSoundAk_Offset = offsetof(UAttachableItem, AttachedSoundAk);
	static_assert(UAttachableItem_AttachedSoundAk_Offset == 0x488, "UAttachableItem::AttachedSoundAk offset is not 488");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
