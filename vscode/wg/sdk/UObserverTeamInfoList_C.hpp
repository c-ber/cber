#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UObserverTeamInfoList_C // Size: 0x290
	: public UUserWidget // Size: 0x248
{
private:
	typedef UObserverTeamInfoList_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187579); // id32("WidgetBlueprintGeneratedClass ObserverTeamInfoList.ObserverTeamInfoList_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty ObserverTeamInfoList.ObserverTeamInfoList_C.UberGraphFrame */
	ExternalPtr<struct UVerticalBox> TeamList; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ObserverTeamInfoList.ObserverTeamInfoList_C.TeamList */
	TArray<ExternalPtr<struct UTslCharacter>> RefreshedPlayerList; /* Ofs: 0x258 Size: 0x10 - ArrayProperty ObserverTeamInfoList.ObserverTeamInfoList_C.RefreshedPlayerList */
	TArray<ExternalPtr<struct USquadPlayerInfoWidget_C>> SquadPlayerInfoPool; /* Ofs: 0x268 Size: 0x10 - ArrayProperty ObserverTeamInfoList.ObserverTeamInfoList_C.SquadPlayerInfoPool */
	FTimerHandle SaveTimer; /* Ofs: 0x278 Size: 0x8 - StructProperty ObserverTeamInfoList.ObserverTeamInfoList_C.SaveTimer */
	TArray<ExternalPtr<struct UTslPlayerState>> PlayerStatList; /* Ofs: 0x280 Size: 0x10 - ArrayProperty ObserverTeamInfoList.ObserverTeamInfoList_C.PlayerStatList */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetTeamList(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x250, value); }
	inline bool SetRefreshedPlayerList(t_structHelper inst, TArray<ExternalPtr<struct UTslCharacter>> value) { inst.WriteOffset(0x258, value); }
	inline bool SetSquadPlayerInfoPool(t_structHelper inst, TArray<ExternalPtr<struct USquadPlayerInfoWidget_C>> value) { inst.WriteOffset(0x268, value); }
	inline bool SetSaveTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x278, value); }
	inline bool SetPlayerStatList(t_structHelper inst, TArray<ExternalPtr<struct UTslPlayerState>> value) { inst.WriteOffset(0x280, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUObserverTeamInfoList_C = sizeof(UObserverTeamInfoList_C); // 656
    static_assert(sizeof(UObserverTeamInfoList_C) == 0x290, "Size of UObserverTeamInfoList_C is not correct.");
	auto constexpr UObserverTeamInfoList_C_UberGraphFrame_Offset = offsetof(UObserverTeamInfoList_C, UberGraphFrame);
	static_assert(UObserverTeamInfoList_C_UberGraphFrame_Offset == 0x248, "UObserverTeamInfoList_C::UberGraphFrame offset is not 248");
	auto constexpr UObserverTeamInfoList_C_TeamList_Offset = offsetof(UObserverTeamInfoList_C, TeamList);
	static_assert(UObserverTeamInfoList_C_TeamList_Offset == 0x250, "UObserverTeamInfoList_C::TeamList offset is not 250");
	auto constexpr UObserverTeamInfoList_C_RefreshedPlayerList_Offset = offsetof(UObserverTeamInfoList_C, RefreshedPlayerList);
	static_assert(UObserverTeamInfoList_C_RefreshedPlayerList_Offset == 0x258, "UObserverTeamInfoList_C::RefreshedPlayerList offset is not 258");
	auto constexpr UObserverTeamInfoList_C_SquadPlayerInfoPool_Offset = offsetof(UObserverTeamInfoList_C, SquadPlayerInfoPool);
	static_assert(UObserverTeamInfoList_C_SquadPlayerInfoPool_Offset == 0x268, "UObserverTeamInfoList_C::SquadPlayerInfoPool offset is not 268");
	auto constexpr UObserverTeamInfoList_C_SaveTimer_Offset = offsetof(UObserverTeamInfoList_C, SaveTimer);
	static_assert(UObserverTeamInfoList_C_SaveTimer_Offset == 0x278, "UObserverTeamInfoList_C::SaveTimer offset is not 278");
	auto constexpr UObserverTeamInfoList_C_PlayerStatList_Offset = offsetof(UObserverTeamInfoList_C, PlayerStatList);
	static_assert(UObserverTeamInfoList_C_PlayerStatList_Offset == 0x280, "UObserverTeamInfoList_C::PlayerStatList offset is not 280");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
