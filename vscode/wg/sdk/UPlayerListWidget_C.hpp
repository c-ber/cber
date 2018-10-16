#pragma once
#include "UTslUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerListWidget_C // Size: 0x33C
	: public UTslUserWidget // Size: 0x288
{
private:
	typedef UPlayerListWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(191515); // id32("WidgetBlueprintGeneratedClass PlayerListWidget.PlayerListWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x288 Size: 0x8 - StructProperty PlayerListWidget.PlayerListWidget_C.UberGraphFrame */
	ExternalPtr<struct UCheckBox> DeadPlayerIncludeCheckBox; /* Ofs: 0x290 Size: 0x8 - ObjectProperty PlayerListWidget.PlayerListWidget_C.DeadPlayerIncludeCheckBox */
	ExternalPtr<struct UDistanceSliderWidget_C> DistanceSliderWidget; /* Ofs: 0x298 Size: 0x8 - ObjectProperty PlayerListWidget.PlayerListWidget_C.DistanceSliderWidget */
	ExternalPtr<struct UScrollBox> List; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty PlayerListWidget.PlayerListWidget_C.List */
	ExternalPtr<struct USizeBox> SizeBox_1; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty PlayerListWidget.PlayerListWidget_C.SizeBox_1 */
	float Distance; /* Ofs: 0x2B0 Size: 0x4 - FloatProperty PlayerListWidget.PlayerListWidget_C.Distance */
	uint8_t UnknownData2B4[0x4];
	TArray<ExternalPtr<struct UTslCharacter>> RefreshedPlayerList; /* Ofs: 0x2B8 Size: 0x10 - ArrayProperty PlayerListWidget.PlayerListWidget_C.RefreshedPlayerList */
	float TimeCheck; /* Ofs: 0x2C8 Size: 0x4 - FloatProperty PlayerListWidget.PlayerListWidget_C.TimeCheck */
	float RefeshInterval; /* Ofs: 0x2CC Size: 0x4 - FloatProperty PlayerListWidget.PlayerListWidget_C.RefeshInterval */
	TArray<ExternalPtr<struct UPlayerInfoWidget_C>> PlayerInfoWidgetList; /* Ofs: 0x2D0 Size: 0x10 - ArrayProperty PlayerListWidget.PlayerListWidget_C.PlayerInfoWidgetList */
	int32_t Count; /* Ofs: 0x2E0 Size: 0x4 - IntProperty PlayerListWidget.PlayerListWidget_C.Count */
	uint8_t UnknownData2E4[0x4];
	FTimerHandle UpdateCheckTimer; /* Ofs: 0x2E8 Size: 0x8 - StructProperty PlayerListWidget.PlayerListWidget_C.UpdateCheckTimer */
	TArray<int32_t> GroupKey; /* Ofs: 0x2F0 Size: 0x10 - ArrayProperty PlayerListWidget.PlayerListWidget_C.GroupKey */
	TArray<ExternalPtr<struct UPlayerGroupWidget_C>> GroupWidgetList; /* Ofs: 0x300 Size: 0x10 - ArrayProperty PlayerListWidget.PlayerListWidget_C.GroupWidgetList */
	ExternalPtr<struct UPlayerInfoWidget_C> PlayerInfoTemp; /* Ofs: 0x310 Size: 0x8 - ObjectProperty PlayerListWidget.PlayerListWidget_C.PlayerInfoTemp */
	ExternalPtr<struct UPlayerGroupWidget_C> PlayerGroupTemp; /* Ofs: 0x318 Size: 0x8 - ObjectProperty PlayerListWidget.PlayerListWidget_C.PlayerGroupTemp */
	FVector CurrentSpectatorPawnLocation; /* Ofs: 0x320 Size: 0xC - StructProperty PlayerListWidget.PlayerListWidget_C.CurrentSpectatorPawnLocation */
	float DistanceValue; /* Ofs: 0x32C Size: 0x4 - FloatProperty PlayerListWidget.PlayerListWidget_C.DistanceValue */
	uint8_t boolField330;
	uint8_t UnknownData331[0x3];
	FVector2D MouseDownPosition; /* Ofs: 0x334 Size: 0x8 - StructProperty PlayerListWidget.PlayerListWidget_C.MouseDownPosition */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x288, value); }
	inline bool SetDeadPlayerIncludeCheckBox(t_structHelper inst, ExternalPtr<struct UCheckBox> value) { inst.WriteOffset(0x290, value); }
	inline bool SetDistanceSliderWidget(t_structHelper inst, ExternalPtr<struct UDistanceSliderWidget_C> value) { inst.WriteOffset(0x298, value); }
	inline bool SetList(t_structHelper inst, ExternalPtr<struct UScrollBox> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetSizeBox_1(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetDistance(t_structHelper inst, float value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetRefreshedPlayerList(t_structHelper inst, TArray<ExternalPtr<struct UTslCharacter>> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetTimeCheck(t_structHelper inst, float value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetRefeshInterval(t_structHelper inst, float value) { inst.WriteOffset(0x2CC, value); }
	inline bool SetPlayerInfoWidgetList(t_structHelper inst, TArray<ExternalPtr<struct UPlayerInfoWidget_C>> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetUpdateCheckTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetGroupKey(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetGroupWidgetList(t_structHelper inst, TArray<ExternalPtr<struct UPlayerGroupWidget_C>> value) { inst.WriteOffset(0x300, value); }
	inline bool SetPlayerInfoTemp(t_structHelper inst, ExternalPtr<struct UPlayerInfoWidget_C> value) { inst.WriteOffset(0x310, value); }
	inline bool SetPlayerGroupTemp(t_structHelper inst, ExternalPtr<struct UPlayerGroupWidget_C> value) { inst.WriteOffset(0x318, value); }
	inline bool SetCurrentSpectatorPawnLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x320, value); }
	inline bool SetDistanceValue(t_structHelper inst, float value) { inst.WriteOffset(0x32C, value); }
	inline bool bMouseDown()
	{
		return boolField330& 0x1;
	}
	inline bool SetbMouseDown(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x330, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMouseDownPosition(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x334, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerListWidget_C = sizeof(UPlayerListWidget_C); // 828
    static_assert(sizeof(UPlayerListWidget_C) == 0x33C, "Size of UPlayerListWidget_C is not correct.");
	auto constexpr UPlayerListWidget_C_UberGraphFrame_Offset = offsetof(UPlayerListWidget_C, UberGraphFrame);
	static_assert(UPlayerListWidget_C_UberGraphFrame_Offset == 0x288, "UPlayerListWidget_C::UberGraphFrame offset is not 288");
	auto constexpr UPlayerListWidget_C_DeadPlayerIncludeCheckBox_Offset = offsetof(UPlayerListWidget_C, DeadPlayerIncludeCheckBox);
	static_assert(UPlayerListWidget_C_DeadPlayerIncludeCheckBox_Offset == 0x290, "UPlayerListWidget_C::DeadPlayerIncludeCheckBox offset is not 290");
	auto constexpr UPlayerListWidget_C_DistanceSliderWidget_Offset = offsetof(UPlayerListWidget_C, DistanceSliderWidget);
	static_assert(UPlayerListWidget_C_DistanceSliderWidget_Offset == 0x298, "UPlayerListWidget_C::DistanceSliderWidget offset is not 298");
	auto constexpr UPlayerListWidget_C_List_Offset = offsetof(UPlayerListWidget_C, List);
	static_assert(UPlayerListWidget_C_List_Offset == 0x2a0, "UPlayerListWidget_C::List offset is not 2a0");
	auto constexpr UPlayerListWidget_C_SizeBox_1_Offset = offsetof(UPlayerListWidget_C, SizeBox_1);
	static_assert(UPlayerListWidget_C_SizeBox_1_Offset == 0x2a8, "UPlayerListWidget_C::SizeBox_1 offset is not 2a8");
	auto constexpr UPlayerListWidget_C_Distance_Offset = offsetof(UPlayerListWidget_C, Distance);
	static_assert(UPlayerListWidget_C_Distance_Offset == 0x2b0, "UPlayerListWidget_C::Distance offset is not 2b0");
	auto constexpr UPlayerListWidget_C_RefreshedPlayerList_Offset = offsetof(UPlayerListWidget_C, RefreshedPlayerList);
	static_assert(UPlayerListWidget_C_RefreshedPlayerList_Offset == 0x2b8, "UPlayerListWidget_C::RefreshedPlayerList offset is not 2b8");
	auto constexpr UPlayerListWidget_C_TimeCheck_Offset = offsetof(UPlayerListWidget_C, TimeCheck);
	static_assert(UPlayerListWidget_C_TimeCheck_Offset == 0x2c8, "UPlayerListWidget_C::TimeCheck offset is not 2c8");
	auto constexpr UPlayerListWidget_C_RefeshInterval_Offset = offsetof(UPlayerListWidget_C, RefeshInterval);
	static_assert(UPlayerListWidget_C_RefeshInterval_Offset == 0x2cc, "UPlayerListWidget_C::RefeshInterval offset is not 2cc");
	auto constexpr UPlayerListWidget_C_PlayerInfoWidgetList_Offset = offsetof(UPlayerListWidget_C, PlayerInfoWidgetList);
	static_assert(UPlayerListWidget_C_PlayerInfoWidgetList_Offset == 0x2d0, "UPlayerListWidget_C::PlayerInfoWidgetList offset is not 2d0");
	auto constexpr UPlayerListWidget_C_Count_Offset = offsetof(UPlayerListWidget_C, Count);
	static_assert(UPlayerListWidget_C_Count_Offset == 0x2e0, "UPlayerListWidget_C::Count offset is not 2e0");
	auto constexpr UPlayerListWidget_C_UpdateCheckTimer_Offset = offsetof(UPlayerListWidget_C, UpdateCheckTimer);
	static_assert(UPlayerListWidget_C_UpdateCheckTimer_Offset == 0x2e8, "UPlayerListWidget_C::UpdateCheckTimer offset is not 2e8");
	auto constexpr UPlayerListWidget_C_GroupKey_Offset = offsetof(UPlayerListWidget_C, GroupKey);
	static_assert(UPlayerListWidget_C_GroupKey_Offset == 0x2f0, "UPlayerListWidget_C::GroupKey offset is not 2f0");
	auto constexpr UPlayerListWidget_C_GroupWidgetList_Offset = offsetof(UPlayerListWidget_C, GroupWidgetList);
	static_assert(UPlayerListWidget_C_GroupWidgetList_Offset == 0x300, "UPlayerListWidget_C::GroupWidgetList offset is not 300");
	auto constexpr UPlayerListWidget_C_PlayerInfoTemp_Offset = offsetof(UPlayerListWidget_C, PlayerInfoTemp);
	static_assert(UPlayerListWidget_C_PlayerInfoTemp_Offset == 0x310, "UPlayerListWidget_C::PlayerInfoTemp offset is not 310");
	auto constexpr UPlayerListWidget_C_PlayerGroupTemp_Offset = offsetof(UPlayerListWidget_C, PlayerGroupTemp);
	static_assert(UPlayerListWidget_C_PlayerGroupTemp_Offset == 0x318, "UPlayerListWidget_C::PlayerGroupTemp offset is not 318");
	auto constexpr UPlayerListWidget_C_CurrentSpectatorPawnLocation_Offset = offsetof(UPlayerListWidget_C, CurrentSpectatorPawnLocation);
	static_assert(UPlayerListWidget_C_CurrentSpectatorPawnLocation_Offset == 0x320, "UPlayerListWidget_C::CurrentSpectatorPawnLocation offset is not 320");
	auto constexpr UPlayerListWidget_C_DistanceValue_Offset = offsetof(UPlayerListWidget_C, DistanceValue);
	static_assert(UPlayerListWidget_C_DistanceValue_Offset == 0x32c, "UPlayerListWidget_C::DistanceValue offset is not 32c");
	auto constexpr UPlayerListWidget_C_boolField330_Offset = offsetof(UPlayerListWidget_C, boolField330);
	static_assert(UPlayerListWidget_C_boolField330_Offset == 0x330, "UPlayerListWidget_C::boolField330 offset is not 330");
	auto constexpr UPlayerListWidget_C_MouseDownPosition_Offset = offsetof(UPlayerListWidget_C, MouseDownPosition);
	static_assert(UPlayerListWidget_C_MouseDownPosition_Offset == 0x334, "UPlayerListWidget_C::MouseDownPosition offset is not 334");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
