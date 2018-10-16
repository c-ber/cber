#pragma once
#include "UBaseWeaponItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UThrowableItem // Size: 0x2C8
	: public UBaseWeaponItem // Size: 0x2B8
{
private:
	typedef UThrowableItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1909); // id32("Class TslGame.ThrowableItem")
		return ptr;
	}
	uint8_t UnknownData2B8[0x8];
	ExternalPtr<struct UTslWeapon> EquippedWeapon; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty TslGame.ThrowableItem.EquippedWeapon */


	inline bool SetEquippedWeapon(t_structHelper inst, ExternalPtr<struct UTslWeapon> value) { inst.WriteOffset(0x2C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUThrowableItem = sizeof(UThrowableItem); // 712
    static_assert(sizeof(UThrowableItem) == 0x2C8, "Size of UThrowableItem is not correct.");
	auto constexpr UThrowableItem_EquippedWeapon_Offset = offsetof(UThrowableItem, EquippedWeapon);
	static_assert(UThrowableItem_EquippedWeapon_Offset == 0x2c0, "UThrowableItem::EquippedWeapon offset is not 2c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
