#pragma once
#include "FVivoxConnectionInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVivoxManager // Size: 0x120
	: public UObject // Size: 0x30
{
private:
	typedef UVivoxManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(70); // id32("Class TslGame.VivoxManager")
		return ptr;
	}
	ExternalPtr<struct UWorld> World; /* Ofs: 0x30 Size: 0x8 - ObjectProperty TslGame.VivoxManager.World */
	uint8_t UnknownData38[0x8];
	FVivoxConnectionInfo ConnectionInfo; /* Ofs: 0x40 Size: 0x20 - StructProperty TslGame.VivoxManager.ConnectionInfo */
	uint8_t boolField60;
	uint8_t UnknownData61[0x7];
	FString AuthId; /* Ofs: 0x68 Size: 0x10 - StrProperty TslGame.VivoxManager.AuthId */
	FString AuthPwd; /* Ofs: 0x78 Size: 0x10 - StrProperty TslGame.VivoxManager.AuthPwd */
	int64_t AccessTokenExpirationTime; /* Ofs: 0x88 Size: 0x8 - Int64Property TslGame.VivoxManager.AccessTokenExpirationTime */
	FString Issuer; /* Ofs: 0x90 Size: 0x10 - StrProperty TslGame.VivoxManager.Issuer */
	FString Key; /* Ofs: 0xA0 Size: 0x10 - StrProperty TslGame.VivoxManager.Key */
	uint8_t UnknownDataB0[0x10];
	ExternalPtr<struct USignInResponse> SignIn; /* Ofs: 0xC0 Size: 0x8 - ObjectProperty TslGame.VivoxManager.SignIn */
	ExternalPtr<struct UKeyAddResponse> KeyAdd; /* Ofs: 0xC8 Size: 0x8 - ObjectProperty TslGame.VivoxManager.KeyAdd */
	ExternalPtr<struct UKeyRevokeResponse> KeyRevoke; /* Ofs: 0xD0 Size: 0x8 - ObjectProperty TslGame.VivoxManager.KeyRevoke */
	TArray<ExternalPtr<struct UChannelResponse>> Channels; /* Ofs: 0xD8 Size: 0x10 - ArrayProperty TslGame.VivoxManager.Channels */
	uint8_t UnknownDataE8[0x10];
	TArray<ExternalPtr<struct UTslPlayerController>> PlayerControllers; /* Ofs: 0xF8 Size: 0x10 - ArrayProperty TslGame.VivoxManager.PlayerControllers */
	int32_t ProximalMaxRange; /* Ofs: 0x108 Size: 0x4 - IntProperty TslGame.VivoxManager.ProximalMaxRange */
	int32_t ProximalClampingDistance; /* Ofs: 0x10C Size: 0x4 - IntProperty TslGame.VivoxManager.ProximalClampingDistance */
	int32_t ProximalDistanceModel; /* Ofs: 0x110 Size: 0x4 - IntProperty TslGame.VivoxManager.ProximalDistanceModel */
	uint8_t UnknownData114[0xC];


	inline bool SetWorld(t_structHelper inst, ExternalPtr<struct UWorld> value) { inst.WriteOffset(0x30, value); }
	inline bool SetConnectionInfo(t_structHelper inst, FVivoxConnectionInfo value) { inst.WriteOffset(0x40, value); }
	inline bool bUseEphmeralChannel()
	{
		return boolField60& 0x1;
	}
	inline bool SetbUseEphmeralChannel(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAuthId(t_structHelper inst, FString value) { inst.WriteOffset(0x68, value); }
	inline bool SetAuthPwd(t_structHelper inst, FString value) { inst.WriteOffset(0x78, value); }
	inline bool SetAccessTokenExpirationTime(t_structHelper inst, int64_t value) { inst.WriteOffset(0x88, value); }
	inline bool SetIssuer(t_structHelper inst, FString value) { inst.WriteOffset(0x90, value); }
	inline bool SetKey(t_structHelper inst, FString value) { inst.WriteOffset(0xA0, value); }
	inline bool SetSignIn(t_structHelper inst, ExternalPtr<struct USignInResponse> value) { inst.WriteOffset(0xC0, value); }
	inline bool SetKeyAdd(t_structHelper inst, ExternalPtr<struct UKeyAddResponse> value) { inst.WriteOffset(0xC8, value); }
	inline bool SetKeyRevoke(t_structHelper inst, ExternalPtr<struct UKeyRevokeResponse> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetChannels(t_structHelper inst, TArray<ExternalPtr<struct UChannelResponse>> value) { inst.WriteOffset(0xD8, value); }
	inline bool SetPlayerControllers(t_structHelper inst, TArray<ExternalPtr<struct UTslPlayerController>> value) { inst.WriteOffset(0xF8, value); }
	inline bool SetProximalMaxRange(t_structHelper inst, int32_t value) { inst.WriteOffset(0x108, value); }
	inline bool SetProximalClampingDistance(t_structHelper inst, int32_t value) { inst.WriteOffset(0x10C, value); }
	inline bool SetProximalDistanceModel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x110, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVivoxManager = sizeof(UVivoxManager); // 288
    static_assert(sizeof(UVivoxManager) == 0x120, "Size of UVivoxManager is not correct.");
	auto constexpr UVivoxManager_World_Offset = offsetof(UVivoxManager, World);
	static_assert(UVivoxManager_World_Offset == 0x30, "UVivoxManager::World offset is not 30");
	auto constexpr UVivoxManager_ConnectionInfo_Offset = offsetof(UVivoxManager, ConnectionInfo);
	static_assert(UVivoxManager_ConnectionInfo_Offset == 0x40, "UVivoxManager::ConnectionInfo offset is not 40");
	auto constexpr UVivoxManager_boolField60_Offset = offsetof(UVivoxManager, boolField60);
	static_assert(UVivoxManager_boolField60_Offset == 0x60, "UVivoxManager::boolField60 offset is not 60");
	auto constexpr UVivoxManager_AuthId_Offset = offsetof(UVivoxManager, AuthId);
	static_assert(UVivoxManager_AuthId_Offset == 0x68, "UVivoxManager::AuthId offset is not 68");
	auto constexpr UVivoxManager_AuthPwd_Offset = offsetof(UVivoxManager, AuthPwd);
	static_assert(UVivoxManager_AuthPwd_Offset == 0x78, "UVivoxManager::AuthPwd offset is not 78");
	auto constexpr UVivoxManager_AccessTokenExpirationTime_Offset = offsetof(UVivoxManager, AccessTokenExpirationTime);
	static_assert(UVivoxManager_AccessTokenExpirationTime_Offset == 0x88, "UVivoxManager::AccessTokenExpirationTime offset is not 88");
	auto constexpr UVivoxManager_Issuer_Offset = offsetof(UVivoxManager, Issuer);
	static_assert(UVivoxManager_Issuer_Offset == 0x90, "UVivoxManager::Issuer offset is not 90");
	auto constexpr UVivoxManager_Key_Offset = offsetof(UVivoxManager, Key);
	static_assert(UVivoxManager_Key_Offset == 0xa0, "UVivoxManager::Key offset is not a0");
	auto constexpr UVivoxManager_SignIn_Offset = offsetof(UVivoxManager, SignIn);
	static_assert(UVivoxManager_SignIn_Offset == 0xc0, "UVivoxManager::SignIn offset is not c0");
	auto constexpr UVivoxManager_KeyAdd_Offset = offsetof(UVivoxManager, KeyAdd);
	static_assert(UVivoxManager_KeyAdd_Offset == 0xc8, "UVivoxManager::KeyAdd offset is not c8");
	auto constexpr UVivoxManager_KeyRevoke_Offset = offsetof(UVivoxManager, KeyRevoke);
	static_assert(UVivoxManager_KeyRevoke_Offset == 0xd0, "UVivoxManager::KeyRevoke offset is not d0");
	auto constexpr UVivoxManager_Channels_Offset = offsetof(UVivoxManager, Channels);
	static_assert(UVivoxManager_Channels_Offset == 0xd8, "UVivoxManager::Channels offset is not d8");
	auto constexpr UVivoxManager_PlayerControllers_Offset = offsetof(UVivoxManager, PlayerControllers);
	static_assert(UVivoxManager_PlayerControllers_Offset == 0xf8, "UVivoxManager::PlayerControllers offset is not f8");
	auto constexpr UVivoxManager_ProximalMaxRange_Offset = offsetof(UVivoxManager, ProximalMaxRange);
	static_assert(UVivoxManager_ProximalMaxRange_Offset == 0x108, "UVivoxManager::ProximalMaxRange offset is not 108");
	auto constexpr UVivoxManager_ProximalClampingDistance_Offset = offsetof(UVivoxManager, ProximalClampingDistance);
	static_assert(UVivoxManager_ProximalClampingDistance_Offset == 0x10c, "UVivoxManager::ProximalClampingDistance offset is not 10c");
	auto constexpr UVivoxManager_ProximalDistanceModel_Offset = offsetof(UVivoxManager, ProximalDistanceModel);
	static_assert(UVivoxManager_ProximalDistanceModel_Offset == 0x110, "UVivoxManager::ProximalDistanceModel offset is not 110");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
