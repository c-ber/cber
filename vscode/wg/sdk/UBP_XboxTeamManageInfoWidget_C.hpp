#pragma once
#include "UTslXboxTeamManageInfoWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_XboxTeamManageInfoWidget_C // Size: 0x390
	: public UTslXboxTeamManageInfoWidget // Size: 0x328
{
private:
	typedef UBP_XboxTeamManageInfoWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(184445); // id32("WidgetBlueprintGeneratedClass BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x328 Size: 0x8 - StructProperty BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.UberGraphFrame */
	ExternalPtr<struct UBorder> Border_1; /* Ofs: 0x330 Size: 0x8 - ObjectProperty BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.Border_1 */
	ExternalPtr<struct UImage> TeamIcon; /* Ofs: 0x338 Size: 0x8 - ObjectProperty BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.TeamIcon */
	ExternalPtr<struct UTextBlock> UserNameText; /* Ofs: 0x340 Size: 0x8 - ObjectProperty BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.UserNameText */
	ExternalPtr<struct UImage> VoiceChatIcon; /* Ofs: 0x348 Size: 0x8 - ObjectProperty BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.VoiceChatIcon */
	FScriptMulticastDelegate OnGamepadNavigateKeyDown; /* Ofs: 0x350 Size: 0x10 - MulticastDelegateProperty BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadNavigateKeyDown */
	FScriptMulticastDelegate OnGamepadA; /* Ofs: 0x360 Size: 0x10 - MulticastDelegateProperty BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadA */
	FScriptMulticastDelegate OnGamepadB; /* Ofs: 0x370 Size: 0x10 - MulticastDelegateProperty BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadB */
	FScriptMulticastDelegate OnGamepadX; /* Ofs: 0x380 Size: 0x10 - MulticastDelegateProperty BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadX */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x328, value); }
	inline bool SetBorder_1(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x330, value); }
	inline bool SetTeamIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x338, value); }
	inline bool SetUserNameText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x340, value); }
	inline bool SetVoiceChatIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x348, value); }
	inline bool SetOnGamepadNavigateKeyDown(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x350, value); }
	inline bool SetOnGamepadA(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x360, value); }
	inline bool SetOnGamepadB(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x370, value); }
	inline bool SetOnGamepadX(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x380, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_XboxTeamManageInfoWidget_C = sizeof(UBP_XboxTeamManageInfoWidget_C); // 912
    static_assert(sizeof(UBP_XboxTeamManageInfoWidget_C) == 0x390, "Size of UBP_XboxTeamManageInfoWidget_C is not correct.");
	auto constexpr UBP_XboxTeamManageInfoWidget_C_UberGraphFrame_Offset = offsetof(UBP_XboxTeamManageInfoWidget_C, UberGraphFrame);
	static_assert(UBP_XboxTeamManageInfoWidget_C_UberGraphFrame_Offset == 0x328, "UBP_XboxTeamManageInfoWidget_C::UberGraphFrame offset is not 328");
	auto constexpr UBP_XboxTeamManageInfoWidget_C_Border_1_Offset = offsetof(UBP_XboxTeamManageInfoWidget_C, Border_1);
	static_assert(UBP_XboxTeamManageInfoWidget_C_Border_1_Offset == 0x330, "UBP_XboxTeamManageInfoWidget_C::Border_1 offset is not 330");
	auto constexpr UBP_XboxTeamManageInfoWidget_C_TeamIcon_Offset = offsetof(UBP_XboxTeamManageInfoWidget_C, TeamIcon);
	static_assert(UBP_XboxTeamManageInfoWidget_C_TeamIcon_Offset == 0x338, "UBP_XboxTeamManageInfoWidget_C::TeamIcon offset is not 338");
	auto constexpr UBP_XboxTeamManageInfoWidget_C_UserNameText_Offset = offsetof(UBP_XboxTeamManageInfoWidget_C, UserNameText);
	static_assert(UBP_XboxTeamManageInfoWidget_C_UserNameText_Offset == 0x340, "UBP_XboxTeamManageInfoWidget_C::UserNameText offset is not 340");
	auto constexpr UBP_XboxTeamManageInfoWidget_C_VoiceChatIcon_Offset = offsetof(UBP_XboxTeamManageInfoWidget_C, VoiceChatIcon);
	static_assert(UBP_XboxTeamManageInfoWidget_C_VoiceChatIcon_Offset == 0x348, "UBP_XboxTeamManageInfoWidget_C::VoiceChatIcon offset is not 348");
	auto constexpr UBP_XboxTeamManageInfoWidget_C_OnGamepadNavigateKeyDown_Offset = offsetof(UBP_XboxTeamManageInfoWidget_C, OnGamepadNavigateKeyDown);
	static_assert(UBP_XboxTeamManageInfoWidget_C_OnGamepadNavigateKeyDown_Offset == 0x350, "UBP_XboxTeamManageInfoWidget_C::OnGamepadNavigateKeyDown offset is not 350");
	auto constexpr UBP_XboxTeamManageInfoWidget_C_OnGamepadA_Offset = offsetof(UBP_XboxTeamManageInfoWidget_C, OnGamepadA);
	static_assert(UBP_XboxTeamManageInfoWidget_C_OnGamepadA_Offset == 0x360, "UBP_XboxTeamManageInfoWidget_C::OnGamepadA offset is not 360");
	auto constexpr UBP_XboxTeamManageInfoWidget_C_OnGamepadB_Offset = offsetof(UBP_XboxTeamManageInfoWidget_C, OnGamepadB);
	static_assert(UBP_XboxTeamManageInfoWidget_C_OnGamepadB_Offset == 0x370, "UBP_XboxTeamManageInfoWidget_C::OnGamepadB offset is not 370");
	auto constexpr UBP_XboxTeamManageInfoWidget_C_OnGamepadX_Offset = offsetof(UBP_XboxTeamManageInfoWidget_C, OnGamepadX);
	static_assert(UBP_XboxTeamManageInfoWidget_C_OnGamepadX_Offset == 0x380, "UBP_XboxTeamManageInfoWidget_C::OnGamepadX offset is not 380");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
