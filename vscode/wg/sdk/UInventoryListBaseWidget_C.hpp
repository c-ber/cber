#pragma once
#include "UTslUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInventoryListBaseWidget_C // Size: 0x3A4
	: public UTslUserWidget // Size: 0x288
{
private:
	typedef UInventoryListBaseWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(59925); // id32("WidgetBlueprintGeneratedClass InventoryListBaseWidget.InventoryListBaseWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x288 Size: 0x8 - StructProperty InventoryListBaseWidget.InventoryListBaseWidget_C.UberGraphFrame */
	ExternalPtr<struct UListBaseGroupWidget_C> CarePackage_Group; /* Ofs: 0x290 Size: 0x8 - ObjectProperty InventoryListBaseWidget.InventoryListBaseWidget_C.CarePackage_Group */
	ExternalPtr<struct UBorder> FocusColorBG; /* Ofs: 0x298 Size: 0x8 - ObjectProperty InventoryListBaseWidget.InventoryListBaseWidget_C.FocusColorBG */
	ExternalPtr<struct UCategoryGroupWidget_C> Ground_Group; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty InventoryListBaseWidget.InventoryListBaseWidget_C.Ground_Group */
	ExternalPtr<struct UListBaseGroupWidget_C> InventoryOrDeathDropGroup; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty InventoryListBaseWidget.InventoryListBaseWidget_C.InventoryOrDeathDropGroup */
	ExternalPtr<struct UScrollBox> ItemList; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty InventoryListBaseWidget.InventoryListBaseWidget_C.ItemList */
	ExternalPtr<struct UListBaseGroupWidget_C> ItemPackage_Group; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty InventoryListBaseWidget.InventoryListBaseWidget_C.ItemPackage_Group */
	TScriptInterface<ExternalPtr<struct USlotContainerInterface>> Container; /* Ofs: 0x2C0 Size: 0x10 - InterfaceProperty InventoryListBaseWidget.InventoryListBaseWidget_C.Container */
	int32_t BackgroundSlotWidgetCount; /* Ofs: 0x2D0 Size: 0x4 - IntProperty InventoryListBaseWidget.InventoryListBaseWidget_C.BackgroundSlotWidgetCount */
	uint8_t UnknownData2D4[0x4];
	TArray<ExternalPtr<struct UItemSlotWidget_C>> BackgroundSlotWidgets; /* Ofs: 0x2D8 Size: 0x10 - ArrayProperty InventoryListBaseWidget.InventoryListBaseWidget_C.BackgroundSlotWidgets */
	FScriptMulticastDelegate OnChildSlotFocus; /* Ofs: 0x2E8 Size: 0x10 - MulticastDelegateProperty InventoryListBaseWidget.InventoryListBaseWidget_C.OnChildSlotFocus */
	uint8_t boolField2F8;
	uint8_t boolField2F9;
	uint8_t UnknownData2FA[0x6];
	TArray<ExternalPtr<struct USlotInterface>> PendingSpawnList; /* Ofs: 0x300 Size: 0x10 - ArrayProperty InventoryListBaseWidget.InventoryListBaseWidget_C.PendingSpawnList */
	int32_t PendingSpawnCount; /* Ofs: 0x310 Size: 0x4 - IntProperty InventoryListBaseWidget.InventoryListBaseWidget_C.PendingSpawnCount */
	float PendingSpawnTimeCheck; /* Ofs: 0x314 Size: 0x4 - FloatProperty InventoryListBaseWidget.InventoryListBaseWidget_C.PendingSpawnTimeCheck */
	float PendingSpawnTimeInterval; /* Ofs: 0x318 Size: 0x4 - FloatProperty InventoryListBaseWidget.InventoryListBaseWidget_C.PendingSpawnTimeInterval */
	uint8_t UnknownData31C[0x4];
	ExternalPtr<struct UItemSlotWidget_C> TempSlotItem; /* Ofs: 0x320 Size: 0x8 - ObjectProperty InventoryListBaseWidget.InventoryListBaseWidget_C.TempSlotItem */
	int32_t FocusWidgetIndex; /* Ofs: 0x328 Size: 0x4 - IntProperty InventoryListBaseWidget.InventoryListBaseWidget_C.FocusWidgetIndex */
	uint8_t boolField32C;
	uint8_t UnknownData32D[0x3];
	TArray<ExternalPtr<struct UItemSlotWidget_C>> AddList; /* Ofs: 0x330 Size: 0x10 - ArrayProperty InventoryListBaseWidget.InventoryListBaseWidget_C.AddList */
	FScriptMulticastDelegate RefreshFocus; /* Ofs: 0x340 Size: 0x10 - MulticastDelegateProperty InventoryListBaseWidget.InventoryListBaseWidget_C.RefreshFocus */
	float StartTime; /* Ofs: 0x350 Size: 0x4 - FloatProperty InventoryListBaseWidget.InventoryListBaseWidget_C.StartTime */
	float TimeCheck; /* Ofs: 0x354 Size: 0x4 - FloatProperty InventoryListBaseWidget.InventoryListBaseWidget_C.TimeCheck */
	uint8_t boolField358;
	uint8_t boolField359;
	uint8_t UnknownData35A[0x6];
	FScriptMulticastDelegate OnInventoryDrop; /* Ofs: 0x360 Size: 0x10 - MulticastDelegateProperty InventoryListBaseWidget.InventoryListBaseWidget_C.OnInventoryDrop */
	FScriptMulticastDelegate OnDoSlotAction; /* Ofs: 0x370 Size: 0x10 - MulticastDelegateProperty InventoryListBaseWidget.InventoryListBaseWidget_C.OnDoSlotAction */
	FScriptMulticastDelegate OnEnterSlot; /* Ofs: 0x380 Size: 0x10 - MulticastDelegateProperty InventoryListBaseWidget.InventoryListBaseWidget_C.OnEnterSlot */
	FScriptMulticastDelegate OnLeaveSlot; /* Ofs: 0x390 Size: 0x10 - MulticastDelegateProperty InventoryListBaseWidget.InventoryListBaseWidget_C.OnLeaveSlot */
	int32_t CountLoop; /* Ofs: 0x3A0 Size: 0x4 - IntProperty InventoryListBaseWidget.InventoryListBaseWidget_C.CountLoop */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x288, value); }
	inline bool SetCarePackage_Group(t_structHelper inst, ExternalPtr<struct UListBaseGroupWidget_C> value) { inst.WriteOffset(0x290, value); }
	inline bool SetFocusColorBG(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x298, value); }
	inline bool SetGround_Group(t_structHelper inst, ExternalPtr<struct UCategoryGroupWidget_C> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetInventoryOrDeathDropGroup(t_structHelper inst, ExternalPtr<struct UListBaseGroupWidget_C> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetItemList(t_structHelper inst, ExternalPtr<struct UScrollBox> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetItemPackage_Group(t_structHelper inst, ExternalPtr<struct UListBaseGroupWidget_C> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetContainer(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotContainerInterface>> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetBackgroundSlotWidgetCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetBackgroundSlotWidgets(t_structHelper inst, TArray<ExternalPtr<struct UItemSlotWidget_C>> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetOnChildSlotFocus(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2E8, value); }
	inline bool bVicinity()
	{
		return boolField2F8& 0x1;
	}
	inline bool SetbVicinity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSort()
	{
		return boolField2F9& 0x1;
	}
	inline bool SetbSort(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2F9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPendingSpawnList(t_structHelper inst, TArray<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x300, value); }
	inline bool SetPendingSpawnCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x310, value); }
	inline bool SetPendingSpawnTimeCheck(t_structHelper inst, float value) { inst.WriteOffset(0x314, value); }
	inline bool SetPendingSpawnTimeInterval(t_structHelper inst, float value) { inst.WriteOffset(0x318, value); }
	inline bool SetTempSlotItem(t_structHelper inst, ExternalPtr<struct UItemSlotWidget_C> value) { inst.WriteOffset(0x320, value); }
	inline bool SetFocusWidgetIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x328, value); }
	inline bool bWantFocus()
	{
		return boolField32C& 0x1;
	}
	inline bool SetbWantFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x32C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAddList(t_structHelper inst, TArray<ExternalPtr<struct UItemSlotWidget_C>> value) { inst.WriteOffset(0x330, value); }
	inline bool SetRefreshFocus(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x340, value); }
	inline bool SetStartTime(t_structHelper inst, float value) { inst.WriteOffset(0x350, value); }
	inline bool SetTimeCheck(t_structHelper inst, float value) { inst.WriteOffset(0x354, value); }
	inline bool bIsSlotScrollUp()
	{
		return boolField358& 0x1;
	}
	inline bool SetbIsSlotScrollUp(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x358, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsSlotScrollDown()
	{
		return boolField359& 0x1;
	}
	inline bool SetbIsSlotScrollDown(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x359, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnInventoryDrop(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x360, value); }
	inline bool SetOnDoSlotAction(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x370, value); }
	inline bool SetOnEnterSlot(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x380, value); }
	inline bool SetOnLeaveSlot(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x390, value); }
	inline bool SetCountLoop(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInventoryListBaseWidget_C = sizeof(UInventoryListBaseWidget_C); // 932
    static_assert(sizeof(UInventoryListBaseWidget_C) == 0x3A4, "Size of UInventoryListBaseWidget_C is not correct.");
	auto constexpr UInventoryListBaseWidget_C_UberGraphFrame_Offset = offsetof(UInventoryListBaseWidget_C, UberGraphFrame);
	static_assert(UInventoryListBaseWidget_C_UberGraphFrame_Offset == 0x288, "UInventoryListBaseWidget_C::UberGraphFrame offset is not 288");
	auto constexpr UInventoryListBaseWidget_C_CarePackage_Group_Offset = offsetof(UInventoryListBaseWidget_C, CarePackage_Group);
	static_assert(UInventoryListBaseWidget_C_CarePackage_Group_Offset == 0x290, "UInventoryListBaseWidget_C::CarePackage_Group offset is not 290");
	auto constexpr UInventoryListBaseWidget_C_FocusColorBG_Offset = offsetof(UInventoryListBaseWidget_C, FocusColorBG);
	static_assert(UInventoryListBaseWidget_C_FocusColorBG_Offset == 0x298, "UInventoryListBaseWidget_C::FocusColorBG offset is not 298");
	auto constexpr UInventoryListBaseWidget_C_Ground_Group_Offset = offsetof(UInventoryListBaseWidget_C, Ground_Group);
	static_assert(UInventoryListBaseWidget_C_Ground_Group_Offset == 0x2a0, "UInventoryListBaseWidget_C::Ground_Group offset is not 2a0");
	auto constexpr UInventoryListBaseWidget_C_InventoryOrDeathDropGroup_Offset = offsetof(UInventoryListBaseWidget_C, InventoryOrDeathDropGroup);
	static_assert(UInventoryListBaseWidget_C_InventoryOrDeathDropGroup_Offset == 0x2a8, "UInventoryListBaseWidget_C::InventoryOrDeathDropGroup offset is not 2a8");
	auto constexpr UInventoryListBaseWidget_C_ItemList_Offset = offsetof(UInventoryListBaseWidget_C, ItemList);
	static_assert(UInventoryListBaseWidget_C_ItemList_Offset == 0x2b0, "UInventoryListBaseWidget_C::ItemList offset is not 2b0");
	auto constexpr UInventoryListBaseWidget_C_ItemPackage_Group_Offset = offsetof(UInventoryListBaseWidget_C, ItemPackage_Group);
	static_assert(UInventoryListBaseWidget_C_ItemPackage_Group_Offset == 0x2b8, "UInventoryListBaseWidget_C::ItemPackage_Group offset is not 2b8");
	auto constexpr UInventoryListBaseWidget_C_Container_Offset = offsetof(UInventoryListBaseWidget_C, Container);
	static_assert(UInventoryListBaseWidget_C_Container_Offset == 0x2c0, "UInventoryListBaseWidget_C::Container offset is not 2c0");
	auto constexpr UInventoryListBaseWidget_C_BackgroundSlotWidgetCount_Offset = offsetof(UInventoryListBaseWidget_C, BackgroundSlotWidgetCount);
	static_assert(UInventoryListBaseWidget_C_BackgroundSlotWidgetCount_Offset == 0x2d0, "UInventoryListBaseWidget_C::BackgroundSlotWidgetCount offset is not 2d0");
	auto constexpr UInventoryListBaseWidget_C_BackgroundSlotWidgets_Offset = offsetof(UInventoryListBaseWidget_C, BackgroundSlotWidgets);
	static_assert(UInventoryListBaseWidget_C_BackgroundSlotWidgets_Offset == 0x2d8, "UInventoryListBaseWidget_C::BackgroundSlotWidgets offset is not 2d8");
	auto constexpr UInventoryListBaseWidget_C_OnChildSlotFocus_Offset = offsetof(UInventoryListBaseWidget_C, OnChildSlotFocus);
	static_assert(UInventoryListBaseWidget_C_OnChildSlotFocus_Offset == 0x2e8, "UInventoryListBaseWidget_C::OnChildSlotFocus offset is not 2e8");
	auto constexpr UInventoryListBaseWidget_C_boolField2F8_Offset = offsetof(UInventoryListBaseWidget_C, boolField2F8);
	static_assert(UInventoryListBaseWidget_C_boolField2F8_Offset == 0x2f8, "UInventoryListBaseWidget_C::boolField2F8 offset is not 2f8");
	auto constexpr UInventoryListBaseWidget_C_boolField2F9_Offset = offsetof(UInventoryListBaseWidget_C, boolField2F9);
	static_assert(UInventoryListBaseWidget_C_boolField2F9_Offset == 0x2f9, "UInventoryListBaseWidget_C::boolField2F9 offset is not 2f9");
	auto constexpr UInventoryListBaseWidget_C_PendingSpawnList_Offset = offsetof(UInventoryListBaseWidget_C, PendingSpawnList);
	static_assert(UInventoryListBaseWidget_C_PendingSpawnList_Offset == 0x300, "UInventoryListBaseWidget_C::PendingSpawnList offset is not 300");
	auto constexpr UInventoryListBaseWidget_C_PendingSpawnCount_Offset = offsetof(UInventoryListBaseWidget_C, PendingSpawnCount);
	static_assert(UInventoryListBaseWidget_C_PendingSpawnCount_Offset == 0x310, "UInventoryListBaseWidget_C::PendingSpawnCount offset is not 310");
	auto constexpr UInventoryListBaseWidget_C_PendingSpawnTimeCheck_Offset = offsetof(UInventoryListBaseWidget_C, PendingSpawnTimeCheck);
	static_assert(UInventoryListBaseWidget_C_PendingSpawnTimeCheck_Offset == 0x314, "UInventoryListBaseWidget_C::PendingSpawnTimeCheck offset is not 314");
	auto constexpr UInventoryListBaseWidget_C_PendingSpawnTimeInterval_Offset = offsetof(UInventoryListBaseWidget_C, PendingSpawnTimeInterval);
	static_assert(UInventoryListBaseWidget_C_PendingSpawnTimeInterval_Offset == 0x318, "UInventoryListBaseWidget_C::PendingSpawnTimeInterval offset is not 318");
	auto constexpr UInventoryListBaseWidget_C_TempSlotItem_Offset = offsetof(UInventoryListBaseWidget_C, TempSlotItem);
	static_assert(UInventoryListBaseWidget_C_TempSlotItem_Offset == 0x320, "UInventoryListBaseWidget_C::TempSlotItem offset is not 320");
	auto constexpr UInventoryListBaseWidget_C_FocusWidgetIndex_Offset = offsetof(UInventoryListBaseWidget_C, FocusWidgetIndex);
	static_assert(UInventoryListBaseWidget_C_FocusWidgetIndex_Offset == 0x328, "UInventoryListBaseWidget_C::FocusWidgetIndex offset is not 328");
	auto constexpr UInventoryListBaseWidget_C_boolField32C_Offset = offsetof(UInventoryListBaseWidget_C, boolField32C);
	static_assert(UInventoryListBaseWidget_C_boolField32C_Offset == 0x32c, "UInventoryListBaseWidget_C::boolField32C offset is not 32c");
	auto constexpr UInventoryListBaseWidget_C_AddList_Offset = offsetof(UInventoryListBaseWidget_C, AddList);
	static_assert(UInventoryListBaseWidget_C_AddList_Offset == 0x330, "UInventoryListBaseWidget_C::AddList offset is not 330");
	auto constexpr UInventoryListBaseWidget_C_RefreshFocus_Offset = offsetof(UInventoryListBaseWidget_C, RefreshFocus);
	static_assert(UInventoryListBaseWidget_C_RefreshFocus_Offset == 0x340, "UInventoryListBaseWidget_C::RefreshFocus offset is not 340");
	auto constexpr UInventoryListBaseWidget_C_StartTime_Offset = offsetof(UInventoryListBaseWidget_C, StartTime);
	static_assert(UInventoryListBaseWidget_C_StartTime_Offset == 0x350, "UInventoryListBaseWidget_C::StartTime offset is not 350");
	auto constexpr UInventoryListBaseWidget_C_TimeCheck_Offset = offsetof(UInventoryListBaseWidget_C, TimeCheck);
	static_assert(UInventoryListBaseWidget_C_TimeCheck_Offset == 0x354, "UInventoryListBaseWidget_C::TimeCheck offset is not 354");
	auto constexpr UInventoryListBaseWidget_C_boolField358_Offset = offsetof(UInventoryListBaseWidget_C, boolField358);
	static_assert(UInventoryListBaseWidget_C_boolField358_Offset == 0x358, "UInventoryListBaseWidget_C::boolField358 offset is not 358");
	auto constexpr UInventoryListBaseWidget_C_boolField359_Offset = offsetof(UInventoryListBaseWidget_C, boolField359);
	static_assert(UInventoryListBaseWidget_C_boolField359_Offset == 0x359, "UInventoryListBaseWidget_C::boolField359 offset is not 359");
	auto constexpr UInventoryListBaseWidget_C_OnInventoryDrop_Offset = offsetof(UInventoryListBaseWidget_C, OnInventoryDrop);
	static_assert(UInventoryListBaseWidget_C_OnInventoryDrop_Offset == 0x360, "UInventoryListBaseWidget_C::OnInventoryDrop offset is not 360");
	auto constexpr UInventoryListBaseWidget_C_OnDoSlotAction_Offset = offsetof(UInventoryListBaseWidget_C, OnDoSlotAction);
	static_assert(UInventoryListBaseWidget_C_OnDoSlotAction_Offset == 0x370, "UInventoryListBaseWidget_C::OnDoSlotAction offset is not 370");
	auto constexpr UInventoryListBaseWidget_C_OnEnterSlot_Offset = offsetof(UInventoryListBaseWidget_C, OnEnterSlot);
	static_assert(UInventoryListBaseWidget_C_OnEnterSlot_Offset == 0x380, "UInventoryListBaseWidget_C::OnEnterSlot offset is not 380");
	auto constexpr UInventoryListBaseWidget_C_OnLeaveSlot_Offset = offsetof(UInventoryListBaseWidget_C, OnLeaveSlot);
	static_assert(UInventoryListBaseWidget_C_OnLeaveSlot_Offset == 0x390, "UInventoryListBaseWidget_C::OnLeaveSlot offset is not 390");
	auto constexpr UInventoryListBaseWidget_C_CountLoop_Offset = offsetof(UInventoryListBaseWidget_C, CountLoop);
	static_assert(UInventoryListBaseWidget_C_CountLoop_Offset == 0x3a0, "UInventoryListBaseWidget_C::CountLoop offset is not 3a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
