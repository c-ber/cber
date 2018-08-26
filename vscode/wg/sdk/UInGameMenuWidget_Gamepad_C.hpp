#pragma once
#include "UInputHookingWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInGameMenuWidget_Gamepad_C // Size: 0x3A9
	: public UInputHookingWidget_C // Size: 0x330
{
private:
	typedef UInGameMenuWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(177201); // id32("WidgetBlueprintGeneratedClass InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x330 Size: 0x8 - StructProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UButtonWidget_C> GamepadGuide; /* Ofs: 0x338 Size: 0x8 - ObjectProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.GamepadGuide */
	ExternalPtr<struct UButtonWidget_C> GotoLobbyButton; /* Ofs: 0x340 Size: 0x8 - ObjectProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.GotoLobbyButton */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x348 Size: 0x8 - ObjectProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Image_1 */
	ExternalPtr<struct UImage> Image_2; /* Ofs: 0x350 Size: 0x8 - ObjectProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Image_2 */
	ExternalPtr<struct UImage> Image_3; /* Ofs: 0x358 Size: 0x8 - ObjectProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Image_3 */
	ExternalPtr<struct UImage> Image_4; /* Ofs: 0x360 Size: 0x8 - ObjectProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Image_4 */
	ExternalPtr<struct UImage> Image_5; /* Ofs: 0x368 Size: 0x8 - ObjectProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Image_5 */
	ExternalPtr<struct UImage> Image_16; /* Ofs: 0x370 Size: 0x8 - ObjectProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Image_16 */
	ExternalPtr<struct UWidgetSwitcher> MainMenuSwitcher; /* Ofs: 0x378 Size: 0x8 - ObjectProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.MainMenuSwitcher */
	ExternalPtr<struct UButtonWidget_C> Settings; /* Ofs: 0x380 Size: 0x8 - ObjectProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.Settings */
	ExternalPtr<struct UButtonWidget_C> TeamManagement; /* Ofs: 0x388 Size: 0x8 - ObjectProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.TeamManagement */
	ExternalPtr<struct UTextBlock> TextBlock_3; /* Ofs: 0x390 Size: 0x8 - ObjectProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.TextBlock_3 */
	FScriptMulticastDelegate TestDispatcher; /* Ofs: 0x398 Size: 0x10 - MulticastDelegateProperty InGameMenuWidget_Gamepad.InGameMenuWidget_Gamepad_C.TestDispatcher */
	uint8_t boolField3A8;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x330, value); }
	inline bool SetGamepadGuide(t_structHelper inst, ExternalPtr<struct UButtonWidget_C> value) { inst.WriteOffset(0x338, value); }
	inline bool SetGotoLobbyButton(t_structHelper inst, ExternalPtr<struct UButtonWidget_C> value) { inst.WriteOffset(0x340, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x348, value); }
	inline bool SetImage_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x350, value); }
	inline bool SetImage_3(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x358, value); }
	inline bool SetImage_4(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x360, value); }
	inline bool SetImage_5(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x368, value); }
	inline bool SetImage_16(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x370, value); }
	inline bool SetMainMenuSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x378, value); }
	inline bool SetSettings(t_structHelper inst, ExternalPtr<struct UButtonWidget_C> value) { inst.WriteOffset(0x380, value); }
	inline bool SetTeamManagement(t_structHelper inst, ExternalPtr<struct UButtonWidget_C> value) { inst.WriteOffset(0x388, value); }
	inline bool SetTextBlock_3(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x390, value); }
	inline bool SetTestDispatcher(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x398, value); }
	inline bool IsGamePad()
	{
		return boolField3A8& 0x1;
	}
	inline bool SetIsGamePad(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInGameMenuWidget_Gamepad_C = sizeof(UInGameMenuWidget_Gamepad_C); // 937
    static_assert(sizeof(UInGameMenuWidget_Gamepad_C) == 0x3A9, "Size of UInGameMenuWidget_Gamepad_C is not correct.");
	auto constexpr UInGameMenuWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(UInGameMenuWidget_Gamepad_C, UberGraphFrame);
	static_assert(UInGameMenuWidget_Gamepad_C_UberGraphFrame_Offset == 0x330, "UInGameMenuWidget_Gamepad_C::UberGraphFrame offset is not 330");
	auto constexpr UInGameMenuWidget_Gamepad_C_GamepadGuide_Offset = offsetof(UInGameMenuWidget_Gamepad_C, GamepadGuide);
	static_assert(UInGameMenuWidget_Gamepad_C_GamepadGuide_Offset == 0x338, "UInGameMenuWidget_Gamepad_C::GamepadGuide offset is not 338");
	auto constexpr UInGameMenuWidget_Gamepad_C_GotoLobbyButton_Offset = offsetof(UInGameMenuWidget_Gamepad_C, GotoLobbyButton);
	static_assert(UInGameMenuWidget_Gamepad_C_GotoLobbyButton_Offset == 0x340, "UInGameMenuWidget_Gamepad_C::GotoLobbyButton offset is not 340");
	auto constexpr UInGameMenuWidget_Gamepad_C_Image_1_Offset = offsetof(UInGameMenuWidget_Gamepad_C, Image_1);
	static_assert(UInGameMenuWidget_Gamepad_C_Image_1_Offset == 0x348, "UInGameMenuWidget_Gamepad_C::Image_1 offset is not 348");
	auto constexpr UInGameMenuWidget_Gamepad_C_Image_2_Offset = offsetof(UInGameMenuWidget_Gamepad_C, Image_2);
	static_assert(UInGameMenuWidget_Gamepad_C_Image_2_Offset == 0x350, "UInGameMenuWidget_Gamepad_C::Image_2 offset is not 350");
	auto constexpr UInGameMenuWidget_Gamepad_C_Image_3_Offset = offsetof(UInGameMenuWidget_Gamepad_C, Image_3);
	static_assert(UInGameMenuWidget_Gamepad_C_Image_3_Offset == 0x358, "UInGameMenuWidget_Gamepad_C::Image_3 offset is not 358");
	auto constexpr UInGameMenuWidget_Gamepad_C_Image_4_Offset = offsetof(UInGameMenuWidget_Gamepad_C, Image_4);
	static_assert(UInGameMenuWidget_Gamepad_C_Image_4_Offset == 0x360, "UInGameMenuWidget_Gamepad_C::Image_4 offset is not 360");
	auto constexpr UInGameMenuWidget_Gamepad_C_Image_5_Offset = offsetof(UInGameMenuWidget_Gamepad_C, Image_5);
	static_assert(UInGameMenuWidget_Gamepad_C_Image_5_Offset == 0x368, "UInGameMenuWidget_Gamepad_C::Image_5 offset is not 368");
	auto constexpr UInGameMenuWidget_Gamepad_C_Image_16_Offset = offsetof(UInGameMenuWidget_Gamepad_C, Image_16);
	static_assert(UInGameMenuWidget_Gamepad_C_Image_16_Offset == 0x370, "UInGameMenuWidget_Gamepad_C::Image_16 offset is not 370");
	auto constexpr UInGameMenuWidget_Gamepad_C_MainMenuSwitcher_Offset = offsetof(UInGameMenuWidget_Gamepad_C, MainMenuSwitcher);
	static_assert(UInGameMenuWidget_Gamepad_C_MainMenuSwitcher_Offset == 0x378, "UInGameMenuWidget_Gamepad_C::MainMenuSwitcher offset is not 378");
	auto constexpr UInGameMenuWidget_Gamepad_C_Settings_Offset = offsetof(UInGameMenuWidget_Gamepad_C, Settings);
	static_assert(UInGameMenuWidget_Gamepad_C_Settings_Offset == 0x380, "UInGameMenuWidget_Gamepad_C::Settings offset is not 380");
	auto constexpr UInGameMenuWidget_Gamepad_C_TeamManagement_Offset = offsetof(UInGameMenuWidget_Gamepad_C, TeamManagement);
	static_assert(UInGameMenuWidget_Gamepad_C_TeamManagement_Offset == 0x388, "UInGameMenuWidget_Gamepad_C::TeamManagement offset is not 388");
	auto constexpr UInGameMenuWidget_Gamepad_C_TextBlock_3_Offset = offsetof(UInGameMenuWidget_Gamepad_C, TextBlock_3);
	static_assert(UInGameMenuWidget_Gamepad_C_TextBlock_3_Offset == 0x390, "UInGameMenuWidget_Gamepad_C::TextBlock_3 offset is not 390");
	auto constexpr UInGameMenuWidget_Gamepad_C_TestDispatcher_Offset = offsetof(UInGameMenuWidget_Gamepad_C, TestDispatcher);
	static_assert(UInGameMenuWidget_Gamepad_C_TestDispatcher_Offset == 0x398, "UInGameMenuWidget_Gamepad_C::TestDispatcher offset is not 398");
	auto constexpr UInGameMenuWidget_Gamepad_C_boolField3A8_Offset = offsetof(UInGameMenuWidget_Gamepad_C, boolField3A8);
	static_assert(UInGameMenuWidget_Gamepad_C_boolField3A8_Offset == 0x3a8, "UInGameMenuWidget_Gamepad_C::boolField3A8 offset is not 3a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
