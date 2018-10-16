#pragma once
#include "UInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameModeBase // Size: 0x4A0
	: public UInfo // Size: 0x410
{
private:
	typedef UGameModeBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1370); // id32("Class Engine.GameModeBase")
		return ptr;
	}
//	FString OptionsString; /* Ofs: 0x408 Size: 0x10 - StrProperty Engine.GameModeBase.OptionsString */
	uint8_t UnknownData410[0x8];
	ExternalPtr<struct UClass> GameSessionClass; /* Ofs: 0x418 Size: 0x8 - ClassProperty Engine.GameModeBase.GameSessionClass */
	ExternalPtr<struct UClass> GameStateClass; /* Ofs: 0x420 Size: 0x8 - ClassProperty Engine.GameModeBase.GameStateClass */
	ExternalPtr<struct UClass> PlayerControllerClass; /* Ofs: 0x428 Size: 0x8 - ClassProperty Engine.GameModeBase.PlayerControllerClass */
	ExternalPtr<struct UClass> PlayerStateClass; /* Ofs: 0x430 Size: 0x8 - ClassProperty Engine.GameModeBase.PlayerStateClass */
	ExternalPtr<struct UClass> HUDClass; /* Ofs: 0x438 Size: 0x8 - ClassProperty Engine.GameModeBase.HUDClass */
	ExternalPtr<struct UClass> DefaultPawnClass; /* Ofs: 0x440 Size: 0x8 - ClassProperty Engine.GameModeBase.DefaultPawnClass */
	ExternalPtr<struct UClass> SpectatorClass; /* Ofs: 0x448 Size: 0x8 - ClassProperty Engine.GameModeBase.SpectatorClass */
	ExternalPtr<struct UClass> ReplaySpectatorPlayerControllerClass; /* Ofs: 0x450 Size: 0x8 - ClassProperty Engine.GameModeBase.ReplaySpectatorPlayerControllerClass */
	ExternalPtr<struct UGameSession> GameSession; /* Ofs: 0x458 Size: 0x8 - ObjectProperty Engine.GameModeBase.GameSession */
	ExternalPtr<struct UGameStateBase> GameState; /* Ofs: 0x460 Size: 0x8 - ObjectProperty Engine.GameModeBase.GameState */
	FText DefaultPlayerName; /* Ofs: 0x468 Size: 0x18 - TextProperty Engine.GameModeBase.DefaultPlayerName */
	uint8_t boolField480;
	uint8_t UnknownData481[0x1F];


//	inline bool SetOptionsString(t_structHelper inst, FString value) { inst.WriteOffset(0x408, value); }
	inline bool SetGameSessionClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x418, value); }
	inline bool SetGameStateClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x420, value); }
	inline bool SetPlayerControllerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x428, value); }
	inline bool SetPlayerStateClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x430, value); }
	inline bool SetHUDClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x438, value); }
	inline bool SetDefaultPawnClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x440, value); }
	inline bool SetSpectatorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x448, value); }
	inline bool SetReplaySpectatorPlayerControllerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x450, value); }
	inline bool SetGameSession(t_structHelper inst, ExternalPtr<struct UGameSession> value) { inst.WriteOffset(0x458, value); }
	inline bool SetGameState(t_structHelper inst, ExternalPtr<struct UGameStateBase> value) { inst.WriteOffset(0x460, value); }
	inline bool SetDefaultPlayerName(t_structHelper inst, FText value) { inst.WriteOffset(0x468, value); }
	inline bool bUseSeamlessTravel()
	{
		return boolField480& 0x1;
	}
	inline bool SetbUseSeamlessTravel(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x480, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bStartPlayersAsSpectators()
	{
		return boolField480& 0x2;
	}
	inline bool SetbStartPlayersAsSpectators(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x480, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bPauseable()
	{
		return boolField480& 0x4;
	}
	inline bool SetbPauseable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x480, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameModeBase = sizeof(UGameModeBase); // 1184
    static_assert(sizeof(UGameModeBase) == 0x4A0, "Size of UGameModeBase is not correct.");
//	auto constexpr UGameModeBase_OptionsString_Offset = offsetof(UGameModeBase, OptionsString);
//	static_assert(UGameModeBase_OptionsString_Offset == 0x408, "UGameModeBase::OptionsString offset is not 408");
	auto constexpr UGameModeBase_GameSessionClass_Offset = offsetof(UGameModeBase, GameSessionClass);
	static_assert(UGameModeBase_GameSessionClass_Offset == 0x418, "UGameModeBase::GameSessionClass offset is not 418");
	auto constexpr UGameModeBase_GameStateClass_Offset = offsetof(UGameModeBase, GameStateClass);
	static_assert(UGameModeBase_GameStateClass_Offset == 0x420, "UGameModeBase::GameStateClass offset is not 420");
	auto constexpr UGameModeBase_PlayerControllerClass_Offset = offsetof(UGameModeBase, PlayerControllerClass);
	static_assert(UGameModeBase_PlayerControllerClass_Offset == 0x428, "UGameModeBase::PlayerControllerClass offset is not 428");
	auto constexpr UGameModeBase_PlayerStateClass_Offset = offsetof(UGameModeBase, PlayerStateClass);
	static_assert(UGameModeBase_PlayerStateClass_Offset == 0x430, "UGameModeBase::PlayerStateClass offset is not 430");
	auto constexpr UGameModeBase_HUDClass_Offset = offsetof(UGameModeBase, HUDClass);
	static_assert(UGameModeBase_HUDClass_Offset == 0x438, "UGameModeBase::HUDClass offset is not 438");
	auto constexpr UGameModeBase_DefaultPawnClass_Offset = offsetof(UGameModeBase, DefaultPawnClass);
	static_assert(UGameModeBase_DefaultPawnClass_Offset == 0x440, "UGameModeBase::DefaultPawnClass offset is not 440");
	auto constexpr UGameModeBase_SpectatorClass_Offset = offsetof(UGameModeBase, SpectatorClass);
	static_assert(UGameModeBase_SpectatorClass_Offset == 0x448, "UGameModeBase::SpectatorClass offset is not 448");
	auto constexpr UGameModeBase_ReplaySpectatorPlayerControllerClass_Offset = offsetof(UGameModeBase, ReplaySpectatorPlayerControllerClass);
	static_assert(UGameModeBase_ReplaySpectatorPlayerControllerClass_Offset == 0x450, "UGameModeBase::ReplaySpectatorPlayerControllerClass offset is not 450");
	auto constexpr UGameModeBase_GameSession_Offset = offsetof(UGameModeBase, GameSession);
	static_assert(UGameModeBase_GameSession_Offset == 0x458, "UGameModeBase::GameSession offset is not 458");
	auto constexpr UGameModeBase_GameState_Offset = offsetof(UGameModeBase, GameState);
	static_assert(UGameModeBase_GameState_Offset == 0x460, "UGameModeBase::GameState offset is not 460");
	auto constexpr UGameModeBase_DefaultPlayerName_Offset = offsetof(UGameModeBase, DefaultPlayerName);
	static_assert(UGameModeBase_DefaultPlayerName_Offset == 0x468, "UGameModeBase::DefaultPlayerName offset is not 468");
	auto constexpr UGameModeBase_boolField480_Offset = offsetof(UGameModeBase, boolField480);
	static_assert(UGameModeBase_boolField480_Offset == 0x480, "UGameModeBase::boolField480 offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
