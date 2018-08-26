#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponClone // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UWeaponClone t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(73); // id32("Class TslGame.WeaponClone")
		return ptr;
	}
	uint8_t UnknownData30[0x10];
	ExternalPtr<struct UTslWeapon> ClonedWeapon; /* Ofs: 0x40 Size: 0x8 - ObjectProperty TslGame.WeaponClone.ClonedWeapon */


	inline bool SetClonedWeapon(t_structHelper inst, ExternalPtr<struct UTslWeapon> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponClone = sizeof(UWeaponClone); // 72
    static_assert(sizeof(UWeaponClone) == 0x48, "Size of UWeaponClone is not correct.");
	auto constexpr UWeaponClone_ClonedWeapon_Offset = offsetof(UWeaponClone, ClonedWeapon);
	static_assert(UWeaponClone_ClonedWeapon_Offset == 0x40, "UWeaponClone::ClonedWeapon offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
