#pragma once
#include "UInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameStateBase // Size: 0x450
	: public UInfo // Size: 0x410
{
private:
	typedef UGameStateBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1394); // id32("Class Engine.GameStateBase")
		return ptr;
	}
//	ExternalPtr<struct UClass> GameModeClass; /* Ofs: 0x408 Size: 0x8 - ClassProperty Engine.GameStateBase.GameModeClass */
	ExternalPtr<struct UGameModeBase> AuthorityGameMode; /* Ofs: 0x410 Size: 0x8 - ObjectProperty Engine.GameStateBase.AuthorityGameMode */
	ExternalPtr<struct UClass> SpectatorClass; /* Ofs: 0x418 Size: 0x8 - ClassProperty Engine.GameStateBase.SpectatorClass */
	TArray<ExternalPtr<struct UPlayerState>> PlayerArray; /* Ofs: 0x420 Size: 0x10 - ArrayProperty Engine.GameStateBase.PlayerArray */
	uint8_t boolField430;
	uint8_t UnknownData431[0x3];
	float ReplicatedWorldTimeSeconds; /* Ofs: 0x434 Size: 0x4 - FloatProperty Engine.GameStateBase.ReplicatedWorldTimeSeconds */
	float ServerWorldTimeSecondsDelta; /* Ofs: 0x438 Size: 0x4 - FloatProperty Engine.GameStateBase.ServerWorldTimeSecondsDelta */
	float ServerWorldTimeSecondsUpdateFrequency; /* Ofs: 0x43C Size: 0x4 - FloatProperty Engine.GameStateBase.ServerWorldTimeSecondsUpdateFrequency */
	uint8_t UnknownData440[0x10];


//	inline bool SetGameModeClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x408, value); }
	inline bool SetAuthorityGameMode(t_structHelper inst, ExternalPtr<struct UGameModeBase> value) { inst.WriteOffset(0x410, value); }
	inline bool SetSpectatorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x418, value); }
	inline bool SetPlayerArray(t_structHelper inst, TArray<ExternalPtr<struct UPlayerState>> value) { inst.WriteOffset(0x420, value); }
	inline bool bReplicatedHasBegunPlay()
	{
		return boolField430& 0x1;
	}
	inline bool SetbReplicatedHasBegunPlay(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x430, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReplicatedWorldTimeSeconds(t_structHelper inst, float value) { inst.WriteOffset(0x434, value); }
	inline bool SetServerWorldTimeSecondsDelta(t_structHelper inst, float value) { inst.WriteOffset(0x438, value); }
	inline bool SetServerWorldTimeSecondsUpdateFrequency(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameStateBase = sizeof(UGameStateBase); // 1104
    static_assert(sizeof(UGameStateBase) == 0x450, "Size of UGameStateBase is not correct.");
//	auto constexpr UGameStateBase_GameModeClass_Offset = offsetof(UGameStateBase, GameModeClass);
//	static_assert(UGameStateBase_GameModeClass_Offset == 0x408, "UGameStateBase::GameModeClass offset is not 408");
	auto constexpr UGameStateBase_AuthorityGameMode_Offset = offsetof(UGameStateBase, AuthorityGameMode);
	static_assert(UGameStateBase_AuthorityGameMode_Offset == 0x410, "UGameStateBase::AuthorityGameMode offset is not 410");
	auto constexpr UGameStateBase_SpectatorClass_Offset = offsetof(UGameStateBase, SpectatorClass);
	static_assert(UGameStateBase_SpectatorClass_Offset == 0x418, "UGameStateBase::SpectatorClass offset is not 418");
	auto constexpr UGameStateBase_PlayerArray_Offset = offsetof(UGameStateBase, PlayerArray);
	static_assert(UGameStateBase_PlayerArray_Offset == 0x420, "UGameStateBase::PlayerArray offset is not 420");
	auto constexpr UGameStateBase_boolField430_Offset = offsetof(UGameStateBase, boolField430);
	static_assert(UGameStateBase_boolField430_Offset == 0x430, "UGameStateBase::boolField430 offset is not 430");
	auto constexpr UGameStateBase_ReplicatedWorldTimeSeconds_Offset = offsetof(UGameStateBase, ReplicatedWorldTimeSeconds);
	static_assert(UGameStateBase_ReplicatedWorldTimeSeconds_Offset == 0x434, "UGameStateBase::ReplicatedWorldTimeSeconds offset is not 434");
	auto constexpr UGameStateBase_ServerWorldTimeSecondsDelta_Offset = offsetof(UGameStateBase, ServerWorldTimeSecondsDelta);
	static_assert(UGameStateBase_ServerWorldTimeSecondsDelta_Offset == 0x438, "UGameStateBase::ServerWorldTimeSecondsDelta offset is not 438");
	auto constexpr UGameStateBase_ServerWorldTimeSecondsUpdateFrequency_Offset = offsetof(UGameStateBase, ServerWorldTimeSecondsUpdateFrequency);
	static_assert(UGameStateBase_ServerWorldTimeSecondsUpdateFrequency_Offset == 0x43c, "UGameStateBase::ServerWorldTimeSecondsUpdateFrequency offset is not 43c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
