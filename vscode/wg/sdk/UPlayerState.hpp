#pragma once
#include "UInfo.hpp"
#include "FUniqueNetIdRepl.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerState // Size: 0x4A0
	: public UInfo // Size: 0x410
{
private:
	typedef UPlayerState t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1479); // id32("Class Engine.PlayerState")
		return ptr;
	}
//	uint8_t Ping; /* Ofs: 0x408 Size: 0x1 - ByteProperty Engine.PlayerState.Ping */
//	uint8_t boolField40C;
	FString PlayerName; /* Ofs: 0x410 Size: 0x10 - StrProperty Engine.PlayerState.PlayerName */
	ExternalPtr<struct UClass> EngineMessageClass; /* Ofs: 0x420 Size: 0x8 - ClassProperty Engine.PlayerState.EngineMessageClass */
	int32_t StartTime; /* Ofs: 0x428 Size: 0x4 - IntProperty Engine.PlayerState.StartTime */
	int32_t PlayerId; /* Ofs: 0x42C Size: 0x4 - IntProperty Engine.PlayerState.PlayerId */
	uint8_t UnknownData430[0x8];
	FString SavedNetworkAddress; /* Ofs: 0x438 Size: 0x10 - StrProperty Engine.PlayerState.SavedNetworkAddress */
	FUniqueNetIdRepl UniqueId; /* Ofs: 0x448 Size: 0x18 - StructProperty Engine.PlayerState.UniqueId */
	uint8_t UnknownData460[0x8];
	float Score; /* Ofs: 0x468 Size: 0x4 - FloatProperty Engine.PlayerState.Score */
	uint8_t UnknownData46C[0x2C];
	uint8_t boolField498;
	uint8_t UnknownData499[0x7];


//	inline bool SetPing(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x408, value); }
	inline bool SetPlayerName(t_structHelper inst, FString value) { inst.WriteOffset(0x410, value); }
	inline bool SetEngineMessageClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x420, value); }
	inline bool SetStartTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x428, value); }
	inline bool SetPlayerId(t_structHelper inst, int32_t value) { inst.WriteOffset(0x42C, value); }
	inline bool SetSavedNetworkAddress(t_structHelper inst, FString value) { inst.WriteOffset(0x438, value); }
	inline bool SetUniqueId(t_structHelper inst, FUniqueNetIdRepl value) { inst.WriteOffset(0x448, value); }
	inline bool SetScore(t_structHelper inst, float value) { inst.WriteOffset(0x468, value); }
	inline bool bShouldUpdateReplicatedPing()
	{
		return boolField498& 0x1;
	}
	inline bool SetbShouldUpdateReplicatedPing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x498, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerState = sizeof(UPlayerState); // 1184
    static_assert(sizeof(UPlayerState) == 0x4A0, "Size of UPlayerState is not correct.");
//	auto constexpr UPlayerState_Ping_Offset = offsetof(UPlayerState, Ping);
//	static_assert(UPlayerState_Ping_Offset == 0x408, "UPlayerState::Ping offset is not 408");
//	auto constexpr UPlayerState_boolField40C_Offset = offsetof(UPlayerState, boolField40C);
//	static_assert(UPlayerState_boolField40C_Offset == 0x40c, "UPlayerState::boolField40C offset is not 40c");
	auto constexpr UPlayerState_PlayerName_Offset = offsetof(UPlayerState, PlayerName);
	static_assert(UPlayerState_PlayerName_Offset == 0x410, "UPlayerState::PlayerName offset is not 410");
	auto constexpr UPlayerState_EngineMessageClass_Offset = offsetof(UPlayerState, EngineMessageClass);
	static_assert(UPlayerState_EngineMessageClass_Offset == 0x420, "UPlayerState::EngineMessageClass offset is not 420");
	auto constexpr UPlayerState_StartTime_Offset = offsetof(UPlayerState, StartTime);
	static_assert(UPlayerState_StartTime_Offset == 0x428, "UPlayerState::StartTime offset is not 428");
	auto constexpr UPlayerState_PlayerId_Offset = offsetof(UPlayerState, PlayerId);
	static_assert(UPlayerState_PlayerId_Offset == 0x42c, "UPlayerState::PlayerId offset is not 42c");
	auto constexpr UPlayerState_SavedNetworkAddress_Offset = offsetof(UPlayerState, SavedNetworkAddress);
	static_assert(UPlayerState_SavedNetworkAddress_Offset == 0x438, "UPlayerState::SavedNetworkAddress offset is not 438");
	auto constexpr UPlayerState_UniqueId_Offset = offsetof(UPlayerState, UniqueId);
	static_assert(UPlayerState_UniqueId_Offset == 0x448, "UPlayerState::UniqueId offset is not 448");
	auto constexpr UPlayerState_Score_Offset = offsetof(UPlayerState, Score);
	static_assert(UPlayerState_Score_Offset == 0x468, "UPlayerState::Score offset is not 468");
	auto constexpr UPlayerState_boolField498_Offset = offsetof(UPlayerState, boolField498);
	static_assert(UPlayerState_boolField498_Offset == 0x498, "UPlayerState::boolField498 offset is not 498");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
