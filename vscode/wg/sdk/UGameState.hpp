#pragma once
#include "UGameStateBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameState // Size: 0x470
	: public UGameStateBase // Size: 0x450
{
private:
	typedef UGameState t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1395); // id32("Class Engine.GameState")
		return ptr;
	}
//	FName MatchState; /* Ofs: 0x448 Size: 0x8 - NameProperty Engine.GameState.MatchState */
	FName PreviousMatchState; /* Ofs: 0x450 Size: 0x8 - NameProperty Engine.GameState.PreviousMatchState */
	int32_t ElapsedTime; /* Ofs: 0x458 Size: 0x4 - IntProperty Engine.GameState.ElapsedTime */
	uint8_t UnknownData45C[0x14];


//	inline bool SetMatchState(t_structHelper inst, FName value) { inst.WriteOffset(0x448, value); }
	inline bool SetPreviousMatchState(t_structHelper inst, FName value) { inst.WriteOffset(0x450, value); }
	inline bool SetElapsedTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x458, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameState = sizeof(UGameState); // 1136
    static_assert(sizeof(UGameState) == 0x470, "Size of UGameState is not correct.");
//	auto constexpr UGameState_MatchState_Offset = offsetof(UGameState, MatchState);
//	static_assert(UGameState_MatchState_Offset == 0x448, "UGameState::MatchState offset is not 448");
	auto constexpr UGameState_PreviousMatchState_Offset = offsetof(UGameState, PreviousMatchState);
	static_assert(UGameState_PreviousMatchState_Offset == 0x450, "UGameState::PreviousMatchState offset is not 450");
	auto constexpr UGameState_ElapsedTime_Offset = offsetof(UGameState, ElapsedTime);
	static_assert(UGameState_ElapsedTime_Offset == 0x458, "UGameState::ElapsedTime offset is not 458");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
