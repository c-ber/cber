#pragma once
#include "UHUD.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBaseHUD // Size: 0x610
	: public UHUD // Size: 0x4F0
{
private:
	typedef UTslBaseHUD t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(405); // id32("Class TslGame.TslBaseHUD")
		return ptr;
	}
	ExternalPtr<struct UClass> MainUMGHudClass; /* Ofs: 0x4F0 Size: 0x8 - ClassProperty TslGame.TslBaseHUD.MainUMGHudClass */
	TArray<ExternalPtr<struct UAkAudioBank>> AutoLoadAudioBanks; /* Ofs: 0x4F8 Size: 0x10 - ArrayProperty TslGame.TslBaseHUD.AutoLoadAudioBanks */
	uint8_t UnknownData508[0x8];
	TArray<ExternalPtr<struct UActionInputEventHolder>> ActionInputEventHolderArray; /* Ofs: 0x510 Size: 0x10 - ArrayProperty TslGame.TslBaseHUD.ActionInputEventHolderArray */
	TMap<struct FString, struct FTslWidgetState> WidgetStateMap; /* Ofs: 0x520 Size: 0x50 - MapProperty TslGame.TslBaseHUD.WidgetStateMap */
	ExternalPtr<struct UUserWidget> MainUMGHud; /* Ofs: 0x570 Size: 0x8 - ObjectProperty TslGame.TslBaseHUD.MainUMGHud */
	TArray<ExternalPtr<struct UBlockInputUserWidget>> BlockInputWidgetList; /* Ofs: 0x578 Size: 0x10 - ArrayProperty TslGame.TslBaseHUD.BlockInputWidgetList */
	TArray<struct FString> UseMouseWidgetStack; /* Ofs: 0x588 Size: 0x10 - ArrayProperty TslGame.TslBaseHUD.UseMouseWidgetStack */
	uint8_t boolField598;
	uint8_t UnknownData599[0x77];


	inline bool SetMainUMGHudClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetAutoLoadAudioBanks(t_structHelper inst, TArray<ExternalPtr<struct UAkAudioBank>> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetActionInputEventHolderArray(t_structHelper inst, TArray<ExternalPtr<struct UActionInputEventHolder>> value) { inst.WriteOffset(0x510, value); }
	inline bool SetWidgetStateMap(t_structHelper inst, TMap<struct FString, struct FTslWidgetState> value) { inst.WriteOffset(0x520, value); }
	inline bool SetMainUMGHud(t_structHelper inst, ExternalPtr<struct UUserWidget> value) { inst.WriteOffset(0x570, value); }
	inline bool SetBlockInputWidgetList(t_structHelper inst, TArray<ExternalPtr<struct UBlockInputUserWidget>> value) { inst.WriteOffset(0x578, value); }
	inline bool SetUseMouseWidgetStack(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x588, value); }
	inline bool IsTimelineMaximize()
	{
		return boolField598& 0x1;
	}
	inline bool SetIsTimelineMaximize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x598, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBaseHUD = sizeof(UTslBaseHUD); // 1552
    static_assert(sizeof(UTslBaseHUD) == 0x610, "Size of UTslBaseHUD is not correct.");
	auto constexpr UTslBaseHUD_MainUMGHudClass_Offset = offsetof(UTslBaseHUD, MainUMGHudClass);
	static_assert(UTslBaseHUD_MainUMGHudClass_Offset == 0x4f0, "UTslBaseHUD::MainUMGHudClass offset is not 4f0");
	auto constexpr UTslBaseHUD_AutoLoadAudioBanks_Offset = offsetof(UTslBaseHUD, AutoLoadAudioBanks);
	static_assert(UTslBaseHUD_AutoLoadAudioBanks_Offset == 0x4f8, "UTslBaseHUD::AutoLoadAudioBanks offset is not 4f8");
	auto constexpr UTslBaseHUD_ActionInputEventHolderArray_Offset = offsetof(UTslBaseHUD, ActionInputEventHolderArray);
	static_assert(UTslBaseHUD_ActionInputEventHolderArray_Offset == 0x510, "UTslBaseHUD::ActionInputEventHolderArray offset is not 510");
	auto constexpr UTslBaseHUD_WidgetStateMap_Offset = offsetof(UTslBaseHUD, WidgetStateMap);
	static_assert(UTslBaseHUD_WidgetStateMap_Offset == 0x520, "UTslBaseHUD::WidgetStateMap offset is not 520");
	auto constexpr UTslBaseHUD_MainUMGHud_Offset = offsetof(UTslBaseHUD, MainUMGHud);
	static_assert(UTslBaseHUD_MainUMGHud_Offset == 0x570, "UTslBaseHUD::MainUMGHud offset is not 570");
	auto constexpr UTslBaseHUD_BlockInputWidgetList_Offset = offsetof(UTslBaseHUD, BlockInputWidgetList);
	static_assert(UTslBaseHUD_BlockInputWidgetList_Offset == 0x578, "UTslBaseHUD::BlockInputWidgetList offset is not 578");
	auto constexpr UTslBaseHUD_UseMouseWidgetStack_Offset = offsetof(UTslBaseHUD, UseMouseWidgetStack);
	static_assert(UTslBaseHUD_UseMouseWidgetStack_Offset == 0x588, "UTslBaseHUD::UseMouseWidgetStack offset is not 588");
	auto constexpr UTslBaseHUD_boolField598_Offset = offsetof(UTslBaseHUD, boolField598);
	static_assert(UTslBaseHUD_boolField598_Offset == 0x598, "UTslBaseHUD::boolField598 offset is not 598");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
