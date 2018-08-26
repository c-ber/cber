#pragma once
#include "UTslKillMessageWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_KillMessageWidget_C // Size: 0x3F0
	: public UTslKillMessageWidget // Size: 0x350
{
private:
	typedef UBP_KillMessageWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(194768); // id32("WidgetBlueprintGeneratedClass BP_KillMessageWidget.BP_KillMessageWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x350 Size: 0x8 - StructProperty BP_KillMessageWidget.BP_KillMessageWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> vanish; /* Ofs: 0x358 Size: 0x8 - ObjectProperty BP_KillMessageWidget.BP_KillMessageWidget_C.vanish */
	ExternalPtr<struct UImage> CauseOfDeathIcon; /* Ofs: 0x360 Size: 0x8 - ObjectProperty BP_KillMessageWidget.BP_KillMessageWidget_C.CauseOfDeathIcon */
	ExternalPtr<struct UImage> ConditionOfEventIcon; /* Ofs: 0x368 Size: 0x8 - ObjectProperty BP_KillMessageWidget.BP_KillMessageWidget_C.ConditionOfEventIcon */
	ExternalPtr<struct UTextBlock> KillerName; /* Ofs: 0x370 Size: 0x8 - ObjectProperty BP_KillMessageWidget.BP_KillMessageWidget_C.KillerName */
	ExternalPtr<struct USizeBox> SizeBoxOfCause; /* Ofs: 0x378 Size: 0x8 - ObjectProperty BP_KillMessageWidget.BP_KillMessageWidget_C.SizeBoxOfCause */
	ExternalPtr<struct USizeBox> SizeBoxOfCondition; /* Ofs: 0x380 Size: 0x8 - ObjectProperty BP_KillMessageWidget.BP_KillMessageWidget_C.SizeBoxOfCondition */
	ExternalPtr<struct UTextBlock> VictimName; /* Ofs: 0x388 Size: 0x8 - ObjectProperty BP_KillMessageWidget.BP_KillMessageWidget_C.VictimName */
	FLinearColor NormalColor; /* Ofs: 0x390 Size: 0x10 - StructProperty BP_KillMessageWidget.BP_KillMessageWidget_C.NormalColor */
	FLinearColor TeamKillerColor; /* Ofs: 0x3A0 Size: 0x10 - StructProperty BP_KillMessageWidget.BP_KillMessageWidget_C.TeamKillerColor */
	FLinearColor TeamKillerDBNOColor; /* Ofs: 0x3B0 Size: 0x10 - StructProperty BP_KillMessageWidget.BP_KillMessageWidget_C.TeamKillerDBNOColor */
	FLinearColor TeamVictimColor; /* Ofs: 0x3C0 Size: 0x10 - StructProperty BP_KillMessageWidget.BP_KillMessageWidget_C.TeamVictimColor */
	FLinearColor TeamVictimDBNOColor; /* Ofs: 0x3D0 Size: 0x10 - StructProperty BP_KillMessageWidget.BP_KillMessageWidget_C.TeamVictimDBNOColor */
	FLinearColor NormalDBNOColor; /* Ofs: 0x3E0 Size: 0x10 - StructProperty BP_KillMessageWidget.BP_KillMessageWidget_C.NormalDBNOColor */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x350, value); }
	inline bool Setvanish(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x358, value); }
	inline bool SetCauseOfDeathIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x360, value); }
	inline bool SetConditionOfEventIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x368, value); }
	inline bool SetKillerName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x370, value); }
	inline bool SetSizeBoxOfCause(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x378, value); }
	inline bool SetSizeBoxOfCondition(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x380, value); }
	inline bool SetVictimName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x388, value); }
	inline bool SetNormalColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x390, value); }
	inline bool SetTeamKillerColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetTeamKillerDBNOColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetTeamVictimColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetTeamVictimDBNOColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetNormalDBNOColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x3E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_KillMessageWidget_C = sizeof(UBP_KillMessageWidget_C); // 1008
    static_assert(sizeof(UBP_KillMessageWidget_C) == 0x3F0, "Size of UBP_KillMessageWidget_C is not correct.");
	auto constexpr UBP_KillMessageWidget_C_UberGraphFrame_Offset = offsetof(UBP_KillMessageWidget_C, UberGraphFrame);
	static_assert(UBP_KillMessageWidget_C_UberGraphFrame_Offset == 0x350, "UBP_KillMessageWidget_C::UberGraphFrame offset is not 350");
	auto constexpr UBP_KillMessageWidget_C_vanish_Offset = offsetof(UBP_KillMessageWidget_C, vanish);
	static_assert(UBP_KillMessageWidget_C_vanish_Offset == 0x358, "UBP_KillMessageWidget_C::vanish offset is not 358");
	auto constexpr UBP_KillMessageWidget_C_CauseOfDeathIcon_Offset = offsetof(UBP_KillMessageWidget_C, CauseOfDeathIcon);
	static_assert(UBP_KillMessageWidget_C_CauseOfDeathIcon_Offset == 0x360, "UBP_KillMessageWidget_C::CauseOfDeathIcon offset is not 360");
	auto constexpr UBP_KillMessageWidget_C_ConditionOfEventIcon_Offset = offsetof(UBP_KillMessageWidget_C, ConditionOfEventIcon);
	static_assert(UBP_KillMessageWidget_C_ConditionOfEventIcon_Offset == 0x368, "UBP_KillMessageWidget_C::ConditionOfEventIcon offset is not 368");
	auto constexpr UBP_KillMessageWidget_C_KillerName_Offset = offsetof(UBP_KillMessageWidget_C, KillerName);
	static_assert(UBP_KillMessageWidget_C_KillerName_Offset == 0x370, "UBP_KillMessageWidget_C::KillerName offset is not 370");
	auto constexpr UBP_KillMessageWidget_C_SizeBoxOfCause_Offset = offsetof(UBP_KillMessageWidget_C, SizeBoxOfCause);
	static_assert(UBP_KillMessageWidget_C_SizeBoxOfCause_Offset == 0x378, "UBP_KillMessageWidget_C::SizeBoxOfCause offset is not 378");
	auto constexpr UBP_KillMessageWidget_C_SizeBoxOfCondition_Offset = offsetof(UBP_KillMessageWidget_C, SizeBoxOfCondition);
	static_assert(UBP_KillMessageWidget_C_SizeBoxOfCondition_Offset == 0x380, "UBP_KillMessageWidget_C::SizeBoxOfCondition offset is not 380");
	auto constexpr UBP_KillMessageWidget_C_VictimName_Offset = offsetof(UBP_KillMessageWidget_C, VictimName);
	static_assert(UBP_KillMessageWidget_C_VictimName_Offset == 0x388, "UBP_KillMessageWidget_C::VictimName offset is not 388");
	auto constexpr UBP_KillMessageWidget_C_NormalColor_Offset = offsetof(UBP_KillMessageWidget_C, NormalColor);
	static_assert(UBP_KillMessageWidget_C_NormalColor_Offset == 0x390, "UBP_KillMessageWidget_C::NormalColor offset is not 390");
	auto constexpr UBP_KillMessageWidget_C_TeamKillerColor_Offset = offsetof(UBP_KillMessageWidget_C, TeamKillerColor);
	static_assert(UBP_KillMessageWidget_C_TeamKillerColor_Offset == 0x3a0, "UBP_KillMessageWidget_C::TeamKillerColor offset is not 3a0");
	auto constexpr UBP_KillMessageWidget_C_TeamKillerDBNOColor_Offset = offsetof(UBP_KillMessageWidget_C, TeamKillerDBNOColor);
	static_assert(UBP_KillMessageWidget_C_TeamKillerDBNOColor_Offset == 0x3b0, "UBP_KillMessageWidget_C::TeamKillerDBNOColor offset is not 3b0");
	auto constexpr UBP_KillMessageWidget_C_TeamVictimColor_Offset = offsetof(UBP_KillMessageWidget_C, TeamVictimColor);
	static_assert(UBP_KillMessageWidget_C_TeamVictimColor_Offset == 0x3c0, "UBP_KillMessageWidget_C::TeamVictimColor offset is not 3c0");
	auto constexpr UBP_KillMessageWidget_C_TeamVictimDBNOColor_Offset = offsetof(UBP_KillMessageWidget_C, TeamVictimDBNOColor);
	static_assert(UBP_KillMessageWidget_C_TeamVictimDBNOColor_Offset == 0x3d0, "UBP_KillMessageWidget_C::TeamVictimDBNOColor offset is not 3d0");
	auto constexpr UBP_KillMessageWidget_C_NormalDBNOColor_Offset = offsetof(UBP_KillMessageWidget_C, NormalDBNOColor);
	static_assert(UBP_KillMessageWidget_C_NormalDBNOColor_Offset == 0x3e0, "UBP_KillMessageWidget_C::NormalDBNOColor offset is not 3e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
