#pragma once
#include "UGameModeBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameMode // Size: 0x4E0
	: public UGameModeBase // Size: 0x4A0
{
private:
	typedef UGameMode t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1371); // id32("Class Engine.GameMode")
		return ptr;
	}
//	FName MatchState; /* Ofs: 0x498 Size: 0x8 - NameProperty Engine.GameMode.MatchState */
	uint8_t boolField4A0;
	uint8_t UnknownData4A1[0x3];
	int32_t NumSpectators; /* Ofs: 0x4A4 Size: 0x4 - IntProperty Engine.GameMode.NumSpectators */
	int32_t NumPlayers; /* Ofs: 0x4A8 Size: 0x4 - IntProperty Engine.GameMode.NumPlayers */
	int32_t NumBots; /* Ofs: 0x4AC Size: 0x4 - IntProperty Engine.GameMode.NumBots */
	float MinRespawnDelay; /* Ofs: 0x4B0 Size: 0x4 - FloatProperty Engine.GameMode.MinRespawnDelay */
	int32_t NumTravellingPlayers; /* Ofs: 0x4B4 Size: 0x4 - IntProperty Engine.GameMode.NumTravellingPlayers */
	ExternalPtr<struct UClass> EngineMessageClass; /* Ofs: 0x4B8 Size: 0x8 - ClassProperty Engine.GameMode.EngineMessageClass */
	TArray<ExternalPtr<struct UPlayerState>> InactivePlayerArray; /* Ofs: 0x4C0 Size: 0x10 - ArrayProperty Engine.GameMode.InactivePlayerArray */
	float InactivePlayerStateLifeSpan; /* Ofs: 0x4D0 Size: 0x4 - FloatProperty Engine.GameMode.InactivePlayerStateLifeSpan */
	uint8_t boolField4D4;
	uint8_t UnknownData4D5[0xB];


//	inline bool SetMatchState(t_structHelper inst, FName value) { inst.WriteOffset(0x498, value); }
	inline bool bDelayedStart()
	{
		return boolField4A0& 0x1;
	}
	inline bool SetbDelayedStart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNumSpectators(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4A4, value); }
	inline bool SetNumPlayers(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetNumBots(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4AC, value); }
	inline bool SetMinRespawnDelay(t_structHelper inst, float value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetNumTravellingPlayers(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4B4, value); }
	inline bool SetEngineMessageClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetInactivePlayerArray(t_structHelper inst, TArray<ExternalPtr<struct UPlayerState>> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetInactivePlayerStateLifeSpan(t_structHelper inst, float value) { inst.WriteOffset(0x4D0, value); }
	inline bool bHandleDedicatedServerReplays()
	{
		return boolField4D4& 0x1;
	}
	inline bool SetbHandleDedicatedServerReplays(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameMode = sizeof(UGameMode); // 1248
    static_assert(sizeof(UGameMode) == 0x4E0, "Size of UGameMode is not correct.");
//	auto constexpr UGameMode_MatchState_Offset = offsetof(UGameMode, MatchState);
//	static_assert(UGameMode_MatchState_Offset == 0x498, "UGameMode::MatchState offset is not 498");
	auto constexpr UGameMode_boolField4A0_Offset = offsetof(UGameMode, boolField4A0);
	static_assert(UGameMode_boolField4A0_Offset == 0x4a0, "UGameMode::boolField4A0 offset is not 4a0");
	auto constexpr UGameMode_NumSpectators_Offset = offsetof(UGameMode, NumSpectators);
	static_assert(UGameMode_NumSpectators_Offset == 0x4a4, "UGameMode::NumSpectators offset is not 4a4");
	auto constexpr UGameMode_NumPlayers_Offset = offsetof(UGameMode, NumPlayers);
	static_assert(UGameMode_NumPlayers_Offset == 0x4a8, "UGameMode::NumPlayers offset is not 4a8");
	auto constexpr UGameMode_NumBots_Offset = offsetof(UGameMode, NumBots);
	static_assert(UGameMode_NumBots_Offset == 0x4ac, "UGameMode::NumBots offset is not 4ac");
	auto constexpr UGameMode_MinRespawnDelay_Offset = offsetof(UGameMode, MinRespawnDelay);
	static_assert(UGameMode_MinRespawnDelay_Offset == 0x4b0, "UGameMode::MinRespawnDelay offset is not 4b0");
	auto constexpr UGameMode_NumTravellingPlayers_Offset = offsetof(UGameMode, NumTravellingPlayers);
	static_assert(UGameMode_NumTravellingPlayers_Offset == 0x4b4, "UGameMode::NumTravellingPlayers offset is not 4b4");
	auto constexpr UGameMode_EngineMessageClass_Offset = offsetof(UGameMode, EngineMessageClass);
	static_assert(UGameMode_EngineMessageClass_Offset == 0x4b8, "UGameMode::EngineMessageClass offset is not 4b8");
	auto constexpr UGameMode_InactivePlayerArray_Offset = offsetof(UGameMode, InactivePlayerArray);
	static_assert(UGameMode_InactivePlayerArray_Offset == 0x4c0, "UGameMode::InactivePlayerArray offset is not 4c0");
	auto constexpr UGameMode_InactivePlayerStateLifeSpan_Offset = offsetof(UGameMode, InactivePlayerStateLifeSpan);
	static_assert(UGameMode_InactivePlayerStateLifeSpan_Offset == 0x4d0, "UGameMode::InactivePlayerStateLifeSpan offset is not 4d0");
	auto constexpr UGameMode_boolField4D4_Offset = offsetof(UGameMode, boolField4D4);
	static_assert(UGameMode_boolField4D4_Offset == 0x4d4, "UGameMode::boolField4D4 offset is not 4d4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
