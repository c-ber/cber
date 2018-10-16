#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponAnimInfoComponent // Size: 0x2C0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UWeaponAnimInfoComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(71); // id32("Class TslGame.WeaponAnimInfoComponent")
		return ptr;
	}
	uint8_t UnknownData1F0[0x70];
	FName WeaponAttachPointPistol; /* Ofs: 0x260 Size: 0x8 - NameProperty TslGame.WeaponAnimInfoComponent.WeaponAttachPointPistol */
	FName WeaponAttachPointRifle; /* Ofs: 0x268 Size: 0x8 - NameProperty TslGame.WeaponAnimInfoComponent.WeaponAttachPointRifle */
	FName WeaponAttachPointThrowable; /* Ofs: 0x270 Size: 0x8 - NameProperty TslGame.WeaponAnimInfoComponent.WeaponAttachPointThrowable */
	FName WeaponAttachPointMelee; /* Ofs: 0x278 Size: 0x8 - NameProperty TslGame.WeaponAnimInfoComponent.WeaponAttachPointMelee */
	ExternalPtr<struct USkeletalMeshComponent> MeshComponent; /* Ofs: 0x280 Size: 0x8 - ObjectProperty TslGame.WeaponAnimInfoComponent.MeshComponent */
	ExternalPtr<struct UTslAccessoryComponent> CharacterAccessory_Primary; /* Ofs: 0x288 Size: 0x8 - ObjectProperty TslGame.WeaponAnimInfoComponent.CharacterAccessory_Primary */
	ExternalPtr<struct UTslAccessoryComponent> CharacterAccessory_Secondary; /* Ofs: 0x290 Size: 0x8 - ObjectProperty TslGame.WeaponAnimInfoComponent.CharacterAccessory_Secondary */
	ExternalPtr<struct UTslAccessoryComponent> CharacterAccessory_Sidearm; /* Ofs: 0x298 Size: 0x8 - ObjectProperty TslGame.WeaponAnimInfoComponent.CharacterAccessory_Sidearm */
	ExternalPtr<struct UTslAccessoryComponent> CharacterAccessory_Melee; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty TslGame.WeaponAnimInfoComponent.CharacterAccessory_Melee */
	ExternalPtr<struct UTslAccessoryComponent> CharacterAccessory_Thrown; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty TslGame.WeaponAnimInfoComponent.CharacterAccessory_Thrown */
	FName WeaponLeftHandIKAttachPoint; /* Ofs: 0x2B0 Size: 0x8 - NameProperty TslGame.WeaponAnimInfoComponent.WeaponLeftHandIKAttachPoint */
	uint8_t UnknownData2B8[0x8];


	inline bool SetWeaponAttachPointPistol(t_structHelper inst, FName value) { inst.WriteOffset(0x260, value); }
	inline bool SetWeaponAttachPointRifle(t_structHelper inst, FName value) { inst.WriteOffset(0x268, value); }
	inline bool SetWeaponAttachPointThrowable(t_structHelper inst, FName value) { inst.WriteOffset(0x270, value); }
	inline bool SetWeaponAttachPointMelee(t_structHelper inst, FName value) { inst.WriteOffset(0x278, value); }
	inline bool SetMeshComponent(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x280, value); }
	inline bool SetCharacterAccessory_Primary(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0x288, value); }
	inline bool SetCharacterAccessory_Secondary(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0x290, value); }
	inline bool SetCharacterAccessory_Sidearm(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0x298, value); }
	inline bool SetCharacterAccessory_Melee(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetCharacterAccessory_Thrown(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetWeaponLeftHandIKAttachPoint(t_structHelper inst, FName value) { inst.WriteOffset(0x2B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponAnimInfoComponent = sizeof(UWeaponAnimInfoComponent); // 704
    static_assert(sizeof(UWeaponAnimInfoComponent) == 0x2C0, "Size of UWeaponAnimInfoComponent is not correct.");
	auto constexpr UWeaponAnimInfoComponent_WeaponAttachPointPistol_Offset = offsetof(UWeaponAnimInfoComponent, WeaponAttachPointPistol);
	static_assert(UWeaponAnimInfoComponent_WeaponAttachPointPistol_Offset == 0x260, "UWeaponAnimInfoComponent::WeaponAttachPointPistol offset is not 260");
	auto constexpr UWeaponAnimInfoComponent_WeaponAttachPointRifle_Offset = offsetof(UWeaponAnimInfoComponent, WeaponAttachPointRifle);
	static_assert(UWeaponAnimInfoComponent_WeaponAttachPointRifle_Offset == 0x268, "UWeaponAnimInfoComponent::WeaponAttachPointRifle offset is not 268");
	auto constexpr UWeaponAnimInfoComponent_WeaponAttachPointThrowable_Offset = offsetof(UWeaponAnimInfoComponent, WeaponAttachPointThrowable);
	static_assert(UWeaponAnimInfoComponent_WeaponAttachPointThrowable_Offset == 0x270, "UWeaponAnimInfoComponent::WeaponAttachPointThrowable offset is not 270");
	auto constexpr UWeaponAnimInfoComponent_WeaponAttachPointMelee_Offset = offsetof(UWeaponAnimInfoComponent, WeaponAttachPointMelee);
	static_assert(UWeaponAnimInfoComponent_WeaponAttachPointMelee_Offset == 0x278, "UWeaponAnimInfoComponent::WeaponAttachPointMelee offset is not 278");
	auto constexpr UWeaponAnimInfoComponent_MeshComponent_Offset = offsetof(UWeaponAnimInfoComponent, MeshComponent);
	static_assert(UWeaponAnimInfoComponent_MeshComponent_Offset == 0x280, "UWeaponAnimInfoComponent::MeshComponent offset is not 280");
	auto constexpr UWeaponAnimInfoComponent_CharacterAccessory_Primary_Offset = offsetof(UWeaponAnimInfoComponent, CharacterAccessory_Primary);
	static_assert(UWeaponAnimInfoComponent_CharacterAccessory_Primary_Offset == 0x288, "UWeaponAnimInfoComponent::CharacterAccessory_Primary offset is not 288");
	auto constexpr UWeaponAnimInfoComponent_CharacterAccessory_Secondary_Offset = offsetof(UWeaponAnimInfoComponent, CharacterAccessory_Secondary);
	static_assert(UWeaponAnimInfoComponent_CharacterAccessory_Secondary_Offset == 0x290, "UWeaponAnimInfoComponent::CharacterAccessory_Secondary offset is not 290");
	auto constexpr UWeaponAnimInfoComponent_CharacterAccessory_Sidearm_Offset = offsetof(UWeaponAnimInfoComponent, CharacterAccessory_Sidearm);
	static_assert(UWeaponAnimInfoComponent_CharacterAccessory_Sidearm_Offset == 0x298, "UWeaponAnimInfoComponent::CharacterAccessory_Sidearm offset is not 298");
	auto constexpr UWeaponAnimInfoComponent_CharacterAccessory_Melee_Offset = offsetof(UWeaponAnimInfoComponent, CharacterAccessory_Melee);
	static_assert(UWeaponAnimInfoComponent_CharacterAccessory_Melee_Offset == 0x2a0, "UWeaponAnimInfoComponent::CharacterAccessory_Melee offset is not 2a0");
	auto constexpr UWeaponAnimInfoComponent_CharacterAccessory_Thrown_Offset = offsetof(UWeaponAnimInfoComponent, CharacterAccessory_Thrown);
	static_assert(UWeaponAnimInfoComponent_CharacterAccessory_Thrown_Offset == 0x2a8, "UWeaponAnimInfoComponent::CharacterAccessory_Thrown offset is not 2a8");
	auto constexpr UWeaponAnimInfoComponent_WeaponLeftHandIKAttachPoint_Offset = offsetof(UWeaponAnimInfoComponent, WeaponLeftHandIKAttachPoint);
	static_assert(UWeaponAnimInfoComponent_WeaponLeftHandIKAttachPoint_Offset == 0x2b0, "UWeaponAnimInfoComponent::WeaponLeftHandIKAttachPoint offset is not 2b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
