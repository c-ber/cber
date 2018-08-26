#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInGameReplayMenu_C // Size: 0x268
	: public UUserWidget // Size: 0x248
{
private:
	typedef UInGameReplayMenu_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69384); // id32("WidgetBlueprintGeneratedClass InGameReplayMenu.InGameReplayMenu_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty InGameReplayMenu.InGameReplayMenu_C.UberGraphFrame */
	ExternalPtr<struct UButton> Button_Exit; /* Ofs: 0x250 Size: 0x8 - ObjectProperty InGameReplayMenu.InGameReplayMenu_C.Button_Exit */
	ExternalPtr<struct UButton> Button_ReplayList; /* Ofs: 0x258 Size: 0x8 - ObjectProperty InGameReplayMenu.InGameReplayMenu_C.Button_ReplayList */
	ExternalPtr<struct UTslHUD> HUD; /* Ofs: 0x260 Size: 0x8 - ObjectProperty InGameReplayMenu.InGameReplayMenu_C.HUD */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetButton_Exit(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetButton_ReplayList(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x258, value); }
	inline bool SetHUD(t_structHelper inst, ExternalPtr<struct UTslHUD> value) { inst.WriteOffset(0x260, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInGameReplayMenu_C = sizeof(UInGameReplayMenu_C); // 616
    static_assert(sizeof(UInGameReplayMenu_C) == 0x268, "Size of UInGameReplayMenu_C is not correct.");
	auto constexpr UInGameReplayMenu_C_UberGraphFrame_Offset = offsetof(UInGameReplayMenu_C, UberGraphFrame);
	static_assert(UInGameReplayMenu_C_UberGraphFrame_Offset == 0x248, "UInGameReplayMenu_C::UberGraphFrame offset is not 248");
	auto constexpr UInGameReplayMenu_C_Button_Exit_Offset = offsetof(UInGameReplayMenu_C, Button_Exit);
	static_assert(UInGameReplayMenu_C_Button_Exit_Offset == 0x250, "UInGameReplayMenu_C::Button_Exit offset is not 250");
	auto constexpr UInGameReplayMenu_C_Button_ReplayList_Offset = offsetof(UInGameReplayMenu_C, Button_ReplayList);
	static_assert(UInGameReplayMenu_C_Button_ReplayList_Offset == 0x258, "UInGameReplayMenu_C::Button_ReplayList offset is not 258");
	auto constexpr UInGameReplayMenu_C_HUD_Offset = offsetof(UInGameReplayMenu_C, HUD);
	static_assert(UInGameReplayMenu_C_HUD_Offset == 0x260, "UInGameReplayMenu_C::HUD offset is not 260");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
