#pragma once
#include "USceneComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslEquippedWeaponsProxy // Size: 0x4D0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UTslEquippedWeaponsProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1373); // id32("Class TslGame.TslEquippedWeaponsProxy")
		return ptr;
	}
	TArray<ExternalPtr<struct UWeaponClone>> ArmedWeapons; /* Ofs: 0x490 Size: 0x10 - ArrayProperty TslGame.TslEquippedWeaponsProxy.ArmedWeapons */
	ExternalPtr<struct UCharacterWeaponAnimInfoComponent> WeaponAnimInfo; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty TslGame.TslEquippedWeaponsProxy.WeaponAnimInfo */
	TWeakObjectPtr<ExternalPtr<struct UTslCharacter>> CachedCharacter; /* Ofs: 0x4A8 Size: 0x8 - WeakObjectProperty TslGame.TslEquippedWeaponsProxy.CachedCharacter */
	TWeakObjectPtr<ExternalPtr<struct USkeletalMeshComponent>> CachedSkelMesh; /* Ofs: 0x4B0 Size: 0x8 - WeakObjectProperty TslGame.TslEquippedWeaponsProxy.CachedSkelMesh */
	uint8_t UnknownData4B8[0x18];


	inline bool SetArmedWeapons(t_structHelper inst, TArray<ExternalPtr<struct UWeaponClone>> value) { inst.WriteOffset(0x490, value); }
	inline bool SetWeaponAnimInfo(t_structHelper inst, ExternalPtr<struct UCharacterWeaponAnimInfoComponent> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetCachedCharacter(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct UTslCharacter>> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetCachedSkelMesh(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct USkeletalMeshComponent>> value) { inst.WriteOffset(0x4B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslEquippedWeaponsProxy = sizeof(UTslEquippedWeaponsProxy); // 1232
    static_assert(sizeof(UTslEquippedWeaponsProxy) == 0x4D0, "Size of UTslEquippedWeaponsProxy is not correct.");
	auto constexpr UTslEquippedWeaponsProxy_ArmedWeapons_Offset = offsetof(UTslEquippedWeaponsProxy, ArmedWeapons);
	static_assert(UTslEquippedWeaponsProxy_ArmedWeapons_Offset == 0x490, "UTslEquippedWeaponsProxy::ArmedWeapons offset is not 490");
	auto constexpr UTslEquippedWeaponsProxy_WeaponAnimInfo_Offset = offsetof(UTslEquippedWeaponsProxy, WeaponAnimInfo);
	static_assert(UTslEquippedWeaponsProxy_WeaponAnimInfo_Offset == 0x4a0, "UTslEquippedWeaponsProxy::WeaponAnimInfo offset is not 4a0");
	auto constexpr UTslEquippedWeaponsProxy_CachedCharacter_Offset = offsetof(UTslEquippedWeaponsProxy, CachedCharacter);
	static_assert(UTslEquippedWeaponsProxy_CachedCharacter_Offset == 0x4a8, "UTslEquippedWeaponsProxy::CachedCharacter offset is not 4a8");
	auto constexpr UTslEquippedWeaponsProxy_CachedSkelMesh_Offset = offsetof(UTslEquippedWeaponsProxy, CachedSkelMesh);
	static_assert(UTslEquippedWeaponsProxy_CachedSkelMesh_Offset == 0x4b0, "UTslEquippedWeaponsProxy::CachedSkelMesh offset is not 4b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
