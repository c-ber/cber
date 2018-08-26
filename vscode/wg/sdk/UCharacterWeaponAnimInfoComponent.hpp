#pragma once
#include "UWeaponAnimInfoComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCharacterWeaponAnimInfoComponent // Size: 0x300
	: public UWeaponAnimInfoComponent // Size: 0x2C0
{
private:
	typedef UCharacterWeaponAnimInfoComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(72); // id32("Class TslGame.CharacterWeaponAnimInfoComponent")
		return ptr;
	}
	FName WeaponAttachPointPistolDriving; /* Ofs: 0x2C0 Size: 0x8 - NameProperty TslGame.CharacterWeaponAnimInfoComponent.WeaponAttachPointPistolDriving */
	FName WeaponAttachPointPistolSitting; /* Ofs: 0x2C8 Size: 0x8 - NameProperty TslGame.CharacterWeaponAnimInfoComponent.WeaponAttachPointPistolSitting */
	FName WeaponAttachPointRifleDriving; /* Ofs: 0x2D0 Size: 0x8 - NameProperty TslGame.CharacterWeaponAnimInfoComponent.WeaponAttachPointRifleDriving */
	FName WeaponAttachPointRifleSitting; /* Ofs: 0x2D8 Size: 0x8 - NameProperty TslGame.CharacterWeaponAnimInfoComponent.WeaponAttachPointRifleSitting */
	FName WeaponAttachPointRifleAim; /* Ofs: 0x2E0 Size: 0x8 - NameProperty TslGame.CharacterWeaponAnimInfoComponent.WeaponAttachPointRifleAim */
	FName WeaponAttachPointThrowableDriving; /* Ofs: 0x2E8 Size: 0x8 - NameProperty TslGame.CharacterWeaponAnimInfoComponent.WeaponAttachPointThrowableDriving */
	FName WeaponAttachPointMeleeDriving; /* Ofs: 0x2F0 Size: 0x8 - NameProperty TslGame.CharacterWeaponAnimInfoComponent.WeaponAttachPointMeleeDriving */
	uint8_t UnknownData2F8[0x8];


	inline bool SetWeaponAttachPointPistolDriving(t_structHelper inst, FName value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetWeaponAttachPointPistolSitting(t_structHelper inst, FName value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetWeaponAttachPointRifleDriving(t_structHelper inst, FName value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetWeaponAttachPointRifleSitting(t_structHelper inst, FName value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetWeaponAttachPointRifleAim(t_structHelper inst, FName value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetWeaponAttachPointThrowableDriving(t_structHelper inst, FName value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetWeaponAttachPointMeleeDriving(t_structHelper inst, FName value) { inst.WriteOffset(0x2F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCharacterWeaponAnimInfoComponent = sizeof(UCharacterWeaponAnimInfoComponent); // 768
    static_assert(sizeof(UCharacterWeaponAnimInfoComponent) == 0x300, "Size of UCharacterWeaponAnimInfoComponent is not correct.");
	auto constexpr UCharacterWeaponAnimInfoComponent_WeaponAttachPointPistolDriving_Offset = offsetof(UCharacterWeaponAnimInfoComponent, WeaponAttachPointPistolDriving);
	static_assert(UCharacterWeaponAnimInfoComponent_WeaponAttachPointPistolDriving_Offset == 0x2c0, "UCharacterWeaponAnimInfoComponent::WeaponAttachPointPistolDriving offset is not 2c0");
	auto constexpr UCharacterWeaponAnimInfoComponent_WeaponAttachPointPistolSitting_Offset = offsetof(UCharacterWeaponAnimInfoComponent, WeaponAttachPointPistolSitting);
	static_assert(UCharacterWeaponAnimInfoComponent_WeaponAttachPointPistolSitting_Offset == 0x2c8, "UCharacterWeaponAnimInfoComponent::WeaponAttachPointPistolSitting offset is not 2c8");
	auto constexpr UCharacterWeaponAnimInfoComponent_WeaponAttachPointRifleDriving_Offset = offsetof(UCharacterWeaponAnimInfoComponent, WeaponAttachPointRifleDriving);
	static_assert(UCharacterWeaponAnimInfoComponent_WeaponAttachPointRifleDriving_Offset == 0x2d0, "UCharacterWeaponAnimInfoComponent::WeaponAttachPointRifleDriving offset is not 2d0");
	auto constexpr UCharacterWeaponAnimInfoComponent_WeaponAttachPointRifleSitting_Offset = offsetof(UCharacterWeaponAnimInfoComponent, WeaponAttachPointRifleSitting);
	static_assert(UCharacterWeaponAnimInfoComponent_WeaponAttachPointRifleSitting_Offset == 0x2d8, "UCharacterWeaponAnimInfoComponent::WeaponAttachPointRifleSitting offset is not 2d8");
	auto constexpr UCharacterWeaponAnimInfoComponent_WeaponAttachPointRifleAim_Offset = offsetof(UCharacterWeaponAnimInfoComponent, WeaponAttachPointRifleAim);
	static_assert(UCharacterWeaponAnimInfoComponent_WeaponAttachPointRifleAim_Offset == 0x2e0, "UCharacterWeaponAnimInfoComponent::WeaponAttachPointRifleAim offset is not 2e0");
	auto constexpr UCharacterWeaponAnimInfoComponent_WeaponAttachPointThrowableDriving_Offset = offsetof(UCharacterWeaponAnimInfoComponent, WeaponAttachPointThrowableDriving);
	static_assert(UCharacterWeaponAnimInfoComponent_WeaponAttachPointThrowableDriving_Offset == 0x2e8, "UCharacterWeaponAnimInfoComponent::WeaponAttachPointThrowableDriving offset is not 2e8");
	auto constexpr UCharacterWeaponAnimInfoComponent_WeaponAttachPointMeleeDriving_Offset = offsetof(UCharacterWeaponAnimInfoComponent, WeaponAttachPointMeleeDriving);
	static_assert(UCharacterWeaponAnimInfoComponent_WeaponAttachPointMeleeDriving_Offset == 0x2f0, "UCharacterWeaponAnimInfoComponent::WeaponAttachPointMeleeDriving offset is not 2f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
