#pragma once
#include "UBaseWeaponItem.hpp"
#include "EFiringMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponItem // Size: 0x2F8
	: public UBaseWeaponItem // Size: 0x2B8
{
private:
	typedef UWeaponItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1910); // id32("Class TslGame.WeaponItem")
		return ptr;
	}
	uint8_t UnknownData2B8[0x8];
	int32_t AmmoCount; /* Ofs: 0x2C0 Size: 0x4 - IntProperty TslGame.WeaponItem.AmmoCount */
	int32_t AmmoPerClip; /* Ofs: 0x2C4 Size: 0x4 - IntProperty TslGame.WeaponItem.AmmoPerClip */
	TArray<struct FWeaponAttachmentTagData> AttachmentTagData; /* Ofs: 0x2C8 Size: 0x10 - ArrayProperty TslGame.WeaponItem.AttachmentTagData */
	TArray<ExternalPtr<struct UAttachableItem>> AttachedItems; /* Ofs: 0x2D8 Size: 0x10 - ArrayProperty TslGame.WeaponItem.AttachedItems */
	TEnumAsByte<enum EFiringMode> firingMode; /* Ofs: 0x2E8 Size: 0x1 - EnumProperty TslGame.WeaponItem.firingMode */
	uint8_t UnknownData2E9[0x7];
	ExternalPtr<struct UTslWeapon> EquippedWeapon; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty TslGame.WeaponItem.EquippedWeapon */


	inline bool SetAmmoCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetAmmoPerClip(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2C4, value); }
	inline bool SetAttachmentTagData(t_structHelper inst, TArray<struct FWeaponAttachmentTagData> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetAttachedItems(t_structHelper inst, TArray<ExternalPtr<struct UAttachableItem>> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetfiringMode(t_structHelper inst, TEnumAsByte<enum EFiringMode> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetEquippedWeapon(t_structHelper inst, ExternalPtr<struct UTslWeapon> value) { inst.WriteOffset(0x2F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponItem = sizeof(UWeaponItem); // 760
    static_assert(sizeof(UWeaponItem) == 0x2F8, "Size of UWeaponItem is not correct.");
	auto constexpr UWeaponItem_AmmoCount_Offset = offsetof(UWeaponItem, AmmoCount);
	static_assert(UWeaponItem_AmmoCount_Offset == 0x2c0, "UWeaponItem::AmmoCount offset is not 2c0");
	auto constexpr UWeaponItem_AmmoPerClip_Offset = offsetof(UWeaponItem, AmmoPerClip);
	static_assert(UWeaponItem_AmmoPerClip_Offset == 0x2c4, "UWeaponItem::AmmoPerClip offset is not 2c4");
	auto constexpr UWeaponItem_AttachmentTagData_Offset = offsetof(UWeaponItem, AttachmentTagData);
	static_assert(UWeaponItem_AttachmentTagData_Offset == 0x2c8, "UWeaponItem::AttachmentTagData offset is not 2c8");
	auto constexpr UWeaponItem_AttachedItems_Offset = offsetof(UWeaponItem, AttachedItems);
	static_assert(UWeaponItem_AttachedItems_Offset == 0x2d8, "UWeaponItem::AttachedItems offset is not 2d8");
	auto constexpr UWeaponItem_firingMode_Offset = offsetof(UWeaponItem, firingMode);
	static_assert(UWeaponItem_firingMode_Offset == 0x2e8, "UWeaponItem::firingMode offset is not 2e8");
	auto constexpr UWeaponItem_EquippedWeapon_Offset = offsetof(UWeaponItem, EquippedWeapon);
	static_assert(UWeaponItem_EquippedWeapon_Offset == 0x2f0, "UWeaponItem::EquippedWeapon offset is not 2f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
