#pragma once
#include "UMutableCharacter.hpp"
#include "FLobbyWeaponProcessor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULobbyCharacter // Size: 0x950
	: public UMutableCharacter // Size: 0x8C0
{
private:
	typedef ULobbyCharacter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1934); // id32("Class TslGame.LobbyCharacter")
		return ptr;
	}
//	FScriptMulticastDelegate OnReady; /* Ofs: 0x8B8 Size: 0x10 - MulticastDelegateProperty TslGame.LobbyCharacter.OnReady */
	uint8_t UnknownData8C0[0x8];
	FScriptMulticastDelegate OnHost; /* Ofs: 0x8C8 Size: 0x10 - MulticastDelegateProperty TslGame.LobbyCharacter.OnHost */
	FScriptMulticastDelegate OnLobbySceneChanged; /* Ofs: 0x8D8 Size: 0x10 - MulticastDelegateProperty TslGame.LobbyCharacter.OnLobbySceneChanged */
	uint8_t boolField8E8;
	uint8_t UnknownData8E9[0x37];
	ExternalPtr<struct UWeaponAnimInfoComponent> WeaponAnimInfoComponent; /* Ofs: 0x920 Size: 0x8 - ObjectProperty TslGame.LobbyCharacter.WeaponAnimInfoComponent */
	FLobbyWeaponProcessor LobbyWeaponProcessor; /* Ofs: 0x928 Size: 0x18 - StructProperty TslGame.LobbyCharacter.LobbyWeaponProcessor */
	TArray<struct FLobbyItem> SkinItemList; /* Ofs: 0x940 Size: 0x10 - ArrayProperty TslGame.LobbyCharacter.SkinItemList */


//	inline bool SetOnReady(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x8B8, value); }
	inline bool SetOnHost(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x8C8, value); }
	inline bool SetOnLobbySceneChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x8D8, value); }
	inline bool bHasJacket()
	{
		return boolField8E8& 0x1;
	}
	inline bool SetbHasJacket(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8E8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsReady()
	{
		return boolField8E8& 0x2;
	}
	inline bool SetbIsReady(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8E8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bIsHost()
	{
		return boolField8E8& 0x4;
	}
	inline bool SetbIsHost(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8E8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bIsInCustomizationScene()
	{
		return boolField8E8& 0x8;
	}
	inline bool SetbIsInCustomizationScene(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8E8, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetWeaponAnimInfoComponent(t_structHelper inst, ExternalPtr<struct UWeaponAnimInfoComponent> value) { inst.WriteOffset(0x920, value); }
	inline bool SetLobbyWeaponProcessor(t_structHelper inst, FLobbyWeaponProcessor value) { inst.WriteOffset(0x928, value); }
	inline bool SetSkinItemList(t_structHelper inst, TArray<struct FLobbyItem> value) { inst.WriteOffset(0x940, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULobbyCharacter = sizeof(ULobbyCharacter); // 2384
    static_assert(sizeof(ULobbyCharacter) == 0x950, "Size of ULobbyCharacter is not correct.");
//	auto constexpr ULobbyCharacter_OnReady_Offset = offsetof(ULobbyCharacter, OnReady);
//	static_assert(ULobbyCharacter_OnReady_Offset == 0x8b8, "ULobbyCharacter::OnReady offset is not 8b8");
	auto constexpr ULobbyCharacter_OnHost_Offset = offsetof(ULobbyCharacter, OnHost);
	static_assert(ULobbyCharacter_OnHost_Offset == 0x8c8, "ULobbyCharacter::OnHost offset is not 8c8");
	auto constexpr ULobbyCharacter_OnLobbySceneChanged_Offset = offsetof(ULobbyCharacter, OnLobbySceneChanged);
	static_assert(ULobbyCharacter_OnLobbySceneChanged_Offset == 0x8d8, "ULobbyCharacter::OnLobbySceneChanged offset is not 8d8");
	auto constexpr ULobbyCharacter_boolField8E8_Offset = offsetof(ULobbyCharacter, boolField8E8);
	static_assert(ULobbyCharacter_boolField8E8_Offset == 0x8e8, "ULobbyCharacter::boolField8E8 offset is not 8e8");
	auto constexpr ULobbyCharacter_WeaponAnimInfoComponent_Offset = offsetof(ULobbyCharacter, WeaponAnimInfoComponent);
	static_assert(ULobbyCharacter_WeaponAnimInfoComponent_Offset == 0x920, "ULobbyCharacter::WeaponAnimInfoComponent offset is not 920");
	auto constexpr ULobbyCharacter_LobbyWeaponProcessor_Offset = offsetof(ULobbyCharacter, LobbyWeaponProcessor);
	static_assert(ULobbyCharacter_LobbyWeaponProcessor_Offset == 0x928, "ULobbyCharacter::LobbyWeaponProcessor offset is not 928");
	auto constexpr ULobbyCharacter_SkinItemList_Offset = offsetof(ULobbyCharacter, SkinItemList);
	static_assert(ULobbyCharacter_SkinItemList_Offset == 0x940, "ULobbyCharacter::SkinItemList offset is not 940");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
