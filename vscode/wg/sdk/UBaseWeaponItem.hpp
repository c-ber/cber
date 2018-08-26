#pragma once
#include "UEquipableItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBaseWeaponItem // Size: 0x2B8
	: public UEquipableItem // Size: 0x2A8
{
private:
	typedef UBaseWeaponItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1908); // id32("Class TslGame.BaseWeaponItem")
		return ptr;
	}
	ExternalPtr<struct UClass> WeaponType; /* Ofs: 0x2A8 Size: 0x8 - ClassProperty TslGame.BaseWeaponItem.WeaponType */
	FName WeaponTag; /* Ofs: 0x2B0 Size: 0x8 - NameProperty TslGame.BaseWeaponItem.WeaponTag */


	inline bool SetWeaponType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetWeaponTag(t_structHelper inst, FName value) { inst.WriteOffset(0x2B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBaseWeaponItem = sizeof(UBaseWeaponItem); // 696
    static_assert(sizeof(UBaseWeaponItem) == 0x2B8, "Size of UBaseWeaponItem is not correct.");
	auto constexpr UBaseWeaponItem_WeaponType_Offset = offsetof(UBaseWeaponItem, WeaponType);
	static_assert(UBaseWeaponItem_WeaponType_Offset == 0x2a8, "UBaseWeaponItem::WeaponType offset is not 2a8");
	auto constexpr UBaseWeaponItem_WeaponTag_Offset = offsetof(UBaseWeaponItem, WeaponTag);
	static_assert(UBaseWeaponItem_WeaponTag_Offset == 0x2b0, "UBaseWeaponItem::WeaponTag offset is not 2b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
