#pragma once
#include "UTslUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemListWidget_Gamepad_C // Size: 0x3B8
	: public UTslUserWidget // Size: 0x288
{
private:
	typedef UItemListWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(62637); // id32("WidgetBlueprintGeneratedClass ItemListWidget_Gamepad.ItemListWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x288 Size: 0x8 - StructProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct USizeBox> Bottom; /* Ofs: 0x290 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Bottom */
	ExternalPtr<struct UListBaseGroupWidget_Gamepad_C> CarePackage_Group; /* Ofs: 0x298 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.CarePackage_Group */
	ExternalPtr<struct UBorder> FocusColorBG; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.FocusColorBG */
	ExternalPtr<struct UCategoryGroupWidget_Gamepad_C> Ground_Group; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Ground_Group */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Image_1 */
	ExternalPtr<struct UImage> Image_2; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Image_2 */
	ExternalPtr<struct UListBaseGroupWidget_Gamepad_C> InventoryOrDeathDropGroup; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.InventoryOrDeathDropGroup */
	ExternalPtr<struct UScrollBox> ItemList; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.ItemList */
	ExternalPtr<struct UListBaseGroupWidget_Gamepad_C> ItemPackage_Group; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.ItemPackage_Group */
	ExternalPtr<struct USizeBox> ListHeight; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.ListHeight */
	ExternalPtr<struct USectionTitleWidget_Gamepad_C> SectionTitleWidget_Gamepad; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.SectionTitleWidget_Gamepad */
	ExternalPtr<struct USizeBox> Top; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Top */
	TScriptInterface<ExternalPtr<struct USlotContainerInterface>> Container; /* Ofs: 0x2F0 Size: 0x10 - InterfaceProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Container */
	int32_t BackgroundSlotWidgetCount; /* Ofs: 0x300 Size: 0x4 - IntProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.BackgroundSlotWidgetCount */
	uint8_t UnknownData304[0x4];
	TArray<ExternalPtr<struct UItemSlotWidget_Gamepad_C>> BackgroundSlotWidgets; /* Ofs: 0x308 Size: 0x10 - ArrayProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.BackgroundSlotWidgets */
	FScriptMulticastDelegate OnChildSlotFocus; /* Ofs: 0x318 Size: 0x10 - MulticastDelegateProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnChildSlotFocus */
	uint8_t boolField328;
	uint8_t boolField329;
	uint8_t UnknownData32A[0x6];
	TArray<ExternalPtr<struct USlotInterface>> PendingSpawnList; /* Ofs: 0x330 Size: 0x10 - ArrayProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.PendingSpawnList */
	int32_t PendingSpawnCount; /* Ofs: 0x340 Size: 0x4 - IntProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.PendingSpawnCount */
	float PendingSpawnTimeCheck; /* Ofs: 0x344 Size: 0x4 - FloatProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.PendingSpawnTimeCheck */
	float PendingSpawnTimeInterval; /* Ofs: 0x348 Size: 0x4 - FloatProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.PendingSpawnTimeInterval */
	uint8_t UnknownData34C[0x4];
	ExternalPtr<struct UItemSlotWidget_Gamepad_C> TempSlotItem; /* Ofs: 0x350 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.TempSlotItem */
	int32_t FocusWidgetIndex; /* Ofs: 0x358 Size: 0x4 - IntProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.FocusWidgetIndex */
	uint8_t boolField35C;
	uint8_t UnknownData35D[0x3];
	TArray<ExternalPtr<struct UItemSlotWidget_Gamepad_C>> AddList; /* Ofs: 0x360 Size: 0x10 - ArrayProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.AddList */
	FScriptMulticastDelegate RefreshFocus; /* Ofs: 0x370 Size: 0x10 - MulticastDelegateProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.RefreshFocus */
	float StartTime; /* Ofs: 0x380 Size: 0x4 - FloatProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.StartTime */
	float TimeCheck; /* Ofs: 0x384 Size: 0x4 - FloatProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.TimeCheck */
	uint8_t boolField388;
	uint8_t boolField389;
	uint8_t UnknownData38A[0x6];
	ExternalPtr<struct UNearbyInteractiveItemExplorer> ItemExplorer; /* Ofs: 0x390 Size: 0x8 - ObjectProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.ItemExplorer */
	float ItemPackageTitleHeight; /* Ofs: 0x398 Size: 0x4 - FloatProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.ItemPackageTitleHeight */
	float GroundTitleHeight; /* Ofs: 0x39C Size: 0x4 - FloatProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GroundTitleHeight */
	float ItemSlotHeight; /* Ofs: 0x3A0 Size: 0x4 - FloatProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.ItemSlotHeight */
	float ItemListHeight; /* Ofs: 0x3A4 Size: 0x4 - FloatProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.ItemListHeight */
	int32_t MaxLoop; /* Ofs: 0x3A8 Size: 0x4 - IntProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.MaxLoop */
	int32_t CountLoop; /* Ofs: 0x3AC Size: 0x4 - IntProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.CountLoop */
	FTimerHandle SaveTimer; /* Ofs: 0x3B0 Size: 0x8 - StructProperty ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.SaveTimer */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x288, value); }
	inline bool SetBottom(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x290, value); }
	inline bool SetCarePackage_Group(t_structHelper inst, ExternalPtr<struct UListBaseGroupWidget_Gamepad_C> value) { inst.WriteOffset(0x298, value); }
	inline bool SetFocusColorBG(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetGround_Group(t_structHelper inst, ExternalPtr<struct UCategoryGroupWidget_Gamepad_C> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetImage_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetInventoryOrDeathDropGroup(t_structHelper inst, ExternalPtr<struct UListBaseGroupWidget_Gamepad_C> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetItemList(t_structHelper inst, ExternalPtr<struct UScrollBox> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetItemPackage_Group(t_structHelper inst, ExternalPtr<struct UListBaseGroupWidget_Gamepad_C> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetListHeight(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetSectionTitleWidget_Gamepad(t_structHelper inst, ExternalPtr<struct USectionTitleWidget_Gamepad_C> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetTop(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetContainer(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotContainerInterface>> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetBackgroundSlotWidgetCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x300, value); }
	inline bool SetBackgroundSlotWidgets(t_structHelper inst, TArray<ExternalPtr<struct UItemSlotWidget_Gamepad_C>> value) { inst.WriteOffset(0x308, value); }
	inline bool SetOnChildSlotFocus(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x318, value); }
	inline bool bVicinity()
	{
		return boolField328& 0x1;
	}
	inline bool SetbVicinity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x328, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSort()
	{
		return boolField329& 0x1;
	}
	inline bool SetbSort(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x329, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPendingSpawnList(t_structHelper inst, TArray<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x330, value); }
	inline bool SetPendingSpawnCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x340, value); }
	inline bool SetPendingSpawnTimeCheck(t_structHelper inst, float value) { inst.WriteOffset(0x344, value); }
	inline bool SetPendingSpawnTimeInterval(t_structHelper inst, float value) { inst.WriteOffset(0x348, value); }
	inline bool SetTempSlotItem(t_structHelper inst, ExternalPtr<struct UItemSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x350, value); }
	inline bool SetFocusWidgetIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x358, value); }
	inline bool bWantFocus()
	{
		return boolField35C& 0x1;
	}
	inline bool SetbWantFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x35C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAddList(t_structHelper inst, TArray<ExternalPtr<struct UItemSlotWidget_Gamepad_C>> value) { inst.WriteOffset(0x360, value); }
	inline bool SetRefreshFocus(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x370, value); }
	inline bool SetStartTime(t_structHelper inst, float value) { inst.WriteOffset(0x380, value); }
	inline bool SetTimeCheck(t_structHelper inst, float value) { inst.WriteOffset(0x384, value); }
	inline bool bIsSlotScrollUp()
	{
		return boolField388& 0x1;
	}
	inline bool SetbIsSlotScrollUp(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x388, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsSlotScrollDown()
	{
		return boolField389& 0x1;
	}
	inline bool SetbIsSlotScrollDown(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x389, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetItemExplorer(t_structHelper inst, ExternalPtr<struct UNearbyInteractiveItemExplorer> value) { inst.WriteOffset(0x390, value); }
	inline bool SetItemPackageTitleHeight(t_structHelper inst, float value) { inst.WriteOffset(0x398, value); }
	inline bool SetGroundTitleHeight(t_structHelper inst, float value) { inst.WriteOffset(0x39C, value); }
	inline bool SetItemSlotHeight(t_structHelper inst, float value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetItemListHeight(t_structHelper inst, float value) { inst.WriteOffset(0x3A4, value); }
	inline bool SetMaxLoop(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetCountLoop(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3AC, value); }
	inline bool SetSaveTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x3B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemListWidget_Gamepad_C = sizeof(UItemListWidget_Gamepad_C); // 952
    static_assert(sizeof(UItemListWidget_Gamepad_C) == 0x3B8, "Size of UItemListWidget_Gamepad_C is not correct.");
	auto constexpr UItemListWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(UItemListWidget_Gamepad_C, UberGraphFrame);
	static_assert(UItemListWidget_Gamepad_C_UberGraphFrame_Offset == 0x288, "UItemListWidget_Gamepad_C::UberGraphFrame offset is not 288");
	auto constexpr UItemListWidget_Gamepad_C_Bottom_Offset = offsetof(UItemListWidget_Gamepad_C, Bottom);
	static_assert(UItemListWidget_Gamepad_C_Bottom_Offset == 0x290, "UItemListWidget_Gamepad_C::Bottom offset is not 290");
	auto constexpr UItemListWidget_Gamepad_C_CarePackage_Group_Offset = offsetof(UItemListWidget_Gamepad_C, CarePackage_Group);
	static_assert(UItemListWidget_Gamepad_C_CarePackage_Group_Offset == 0x298, "UItemListWidget_Gamepad_C::CarePackage_Group offset is not 298");
	auto constexpr UItemListWidget_Gamepad_C_FocusColorBG_Offset = offsetof(UItemListWidget_Gamepad_C, FocusColorBG);
	static_assert(UItemListWidget_Gamepad_C_FocusColorBG_Offset == 0x2a0, "UItemListWidget_Gamepad_C::FocusColorBG offset is not 2a0");
	auto constexpr UItemListWidget_Gamepad_C_Ground_Group_Offset = offsetof(UItemListWidget_Gamepad_C, Ground_Group);
	static_assert(UItemListWidget_Gamepad_C_Ground_Group_Offset == 0x2a8, "UItemListWidget_Gamepad_C::Ground_Group offset is not 2a8");
	auto constexpr UItemListWidget_Gamepad_C_Image_1_Offset = offsetof(UItemListWidget_Gamepad_C, Image_1);
	static_assert(UItemListWidget_Gamepad_C_Image_1_Offset == 0x2b0, "UItemListWidget_Gamepad_C::Image_1 offset is not 2b0");
	auto constexpr UItemListWidget_Gamepad_C_Image_2_Offset = offsetof(UItemListWidget_Gamepad_C, Image_2);
	static_assert(UItemListWidget_Gamepad_C_Image_2_Offset == 0x2b8, "UItemListWidget_Gamepad_C::Image_2 offset is not 2b8");
	auto constexpr UItemListWidget_Gamepad_C_InventoryOrDeathDropGroup_Offset = offsetof(UItemListWidget_Gamepad_C, InventoryOrDeathDropGroup);
	static_assert(UItemListWidget_Gamepad_C_InventoryOrDeathDropGroup_Offset == 0x2c0, "UItemListWidget_Gamepad_C::InventoryOrDeathDropGroup offset is not 2c0");
	auto constexpr UItemListWidget_Gamepad_C_ItemList_Offset = offsetof(UItemListWidget_Gamepad_C, ItemList);
	static_assert(UItemListWidget_Gamepad_C_ItemList_Offset == 0x2c8, "UItemListWidget_Gamepad_C::ItemList offset is not 2c8");
	auto constexpr UItemListWidget_Gamepad_C_ItemPackage_Group_Offset = offsetof(UItemListWidget_Gamepad_C, ItemPackage_Group);
	static_assert(UItemListWidget_Gamepad_C_ItemPackage_Group_Offset == 0x2d0, "UItemListWidget_Gamepad_C::ItemPackage_Group offset is not 2d0");
	auto constexpr UItemListWidget_Gamepad_C_ListHeight_Offset = offsetof(UItemListWidget_Gamepad_C, ListHeight);
	static_assert(UItemListWidget_Gamepad_C_ListHeight_Offset == 0x2d8, "UItemListWidget_Gamepad_C::ListHeight offset is not 2d8");
	auto constexpr UItemListWidget_Gamepad_C_SectionTitleWidget_Gamepad_Offset = offsetof(UItemListWidget_Gamepad_C, SectionTitleWidget_Gamepad);
	static_assert(UItemListWidget_Gamepad_C_SectionTitleWidget_Gamepad_Offset == 0x2e0, "UItemListWidget_Gamepad_C::SectionTitleWidget_Gamepad offset is not 2e0");
	auto constexpr UItemListWidget_Gamepad_C_Top_Offset = offsetof(UItemListWidget_Gamepad_C, Top);
	static_assert(UItemListWidget_Gamepad_C_Top_Offset == 0x2e8, "UItemListWidget_Gamepad_C::Top offset is not 2e8");
	auto constexpr UItemListWidget_Gamepad_C_Container_Offset = offsetof(UItemListWidget_Gamepad_C, Container);
	static_assert(UItemListWidget_Gamepad_C_Container_Offset == 0x2f0, "UItemListWidget_Gamepad_C::Container offset is not 2f0");
	auto constexpr UItemListWidget_Gamepad_C_BackgroundSlotWidgetCount_Offset = offsetof(UItemListWidget_Gamepad_C, BackgroundSlotWidgetCount);
	static_assert(UItemListWidget_Gamepad_C_BackgroundSlotWidgetCount_Offset == 0x300, "UItemListWidget_Gamepad_C::BackgroundSlotWidgetCount offset is not 300");
	auto constexpr UItemListWidget_Gamepad_C_BackgroundSlotWidgets_Offset = offsetof(UItemListWidget_Gamepad_C, BackgroundSlotWidgets);
	static_assert(UItemListWidget_Gamepad_C_BackgroundSlotWidgets_Offset == 0x308, "UItemListWidget_Gamepad_C::BackgroundSlotWidgets offset is not 308");
	auto constexpr UItemListWidget_Gamepad_C_OnChildSlotFocus_Offset = offsetof(UItemListWidget_Gamepad_C, OnChildSlotFocus);
	static_assert(UItemListWidget_Gamepad_C_OnChildSlotFocus_Offset == 0x318, "UItemListWidget_Gamepad_C::OnChildSlotFocus offset is not 318");
	auto constexpr UItemListWidget_Gamepad_C_boolField328_Offset = offsetof(UItemListWidget_Gamepad_C, boolField328);
	static_assert(UItemListWidget_Gamepad_C_boolField328_Offset == 0x328, "UItemListWidget_Gamepad_C::boolField328 offset is not 328");
	auto constexpr UItemListWidget_Gamepad_C_boolField329_Offset = offsetof(UItemListWidget_Gamepad_C, boolField329);
	static_assert(UItemListWidget_Gamepad_C_boolField329_Offset == 0x329, "UItemListWidget_Gamepad_C::boolField329 offset is not 329");
	auto constexpr UItemListWidget_Gamepad_C_PendingSpawnList_Offset = offsetof(UItemListWidget_Gamepad_C, PendingSpawnList);
	static_assert(UItemListWidget_Gamepad_C_PendingSpawnList_Offset == 0x330, "UItemListWidget_Gamepad_C::PendingSpawnList offset is not 330");
	auto constexpr UItemListWidget_Gamepad_C_PendingSpawnCount_Offset = offsetof(UItemListWidget_Gamepad_C, PendingSpawnCount);
	static_assert(UItemListWidget_Gamepad_C_PendingSpawnCount_Offset == 0x340, "UItemListWidget_Gamepad_C::PendingSpawnCount offset is not 340");
	auto constexpr UItemListWidget_Gamepad_C_PendingSpawnTimeCheck_Offset = offsetof(UItemListWidget_Gamepad_C, PendingSpawnTimeCheck);
	static_assert(UItemListWidget_Gamepad_C_PendingSpawnTimeCheck_Offset == 0x344, "UItemListWidget_Gamepad_C::PendingSpawnTimeCheck offset is not 344");
	auto constexpr UItemListWidget_Gamepad_C_PendingSpawnTimeInterval_Offset = offsetof(UItemListWidget_Gamepad_C, PendingSpawnTimeInterval);
	static_assert(UItemListWidget_Gamepad_C_PendingSpawnTimeInterval_Offset == 0x348, "UItemListWidget_Gamepad_C::PendingSpawnTimeInterval offset is not 348");
	auto constexpr UItemListWidget_Gamepad_C_TempSlotItem_Offset = offsetof(UItemListWidget_Gamepad_C, TempSlotItem);
	static_assert(UItemListWidget_Gamepad_C_TempSlotItem_Offset == 0x350, "UItemListWidget_Gamepad_C::TempSlotItem offset is not 350");
	auto constexpr UItemListWidget_Gamepad_C_FocusWidgetIndex_Offset = offsetof(UItemListWidget_Gamepad_C, FocusWidgetIndex);
	static_assert(UItemListWidget_Gamepad_C_FocusWidgetIndex_Offset == 0x358, "UItemListWidget_Gamepad_C::FocusWidgetIndex offset is not 358");
	auto constexpr UItemListWidget_Gamepad_C_boolField35C_Offset = offsetof(UItemListWidget_Gamepad_C, boolField35C);
	static_assert(UItemListWidget_Gamepad_C_boolField35C_Offset == 0x35c, "UItemListWidget_Gamepad_C::boolField35C offset is not 35c");
	auto constexpr UItemListWidget_Gamepad_C_AddList_Offset = offsetof(UItemListWidget_Gamepad_C, AddList);
	static_assert(UItemListWidget_Gamepad_C_AddList_Offset == 0x360, "UItemListWidget_Gamepad_C::AddList offset is not 360");
	auto constexpr UItemListWidget_Gamepad_C_RefreshFocus_Offset = offsetof(UItemListWidget_Gamepad_C, RefreshFocus);
	static_assert(UItemListWidget_Gamepad_C_RefreshFocus_Offset == 0x370, "UItemListWidget_Gamepad_C::RefreshFocus offset is not 370");
	auto constexpr UItemListWidget_Gamepad_C_StartTime_Offset = offsetof(UItemListWidget_Gamepad_C, StartTime);
	static_assert(UItemListWidget_Gamepad_C_StartTime_Offset == 0x380, "UItemListWidget_Gamepad_C::StartTime offset is not 380");
	auto constexpr UItemListWidget_Gamepad_C_TimeCheck_Offset = offsetof(UItemListWidget_Gamepad_C, TimeCheck);
	static_assert(UItemListWidget_Gamepad_C_TimeCheck_Offset == 0x384, "UItemListWidget_Gamepad_C::TimeCheck offset is not 384");
	auto constexpr UItemListWidget_Gamepad_C_boolField388_Offset = offsetof(UItemListWidget_Gamepad_C, boolField388);
	static_assert(UItemListWidget_Gamepad_C_boolField388_Offset == 0x388, "UItemListWidget_Gamepad_C::boolField388 offset is not 388");
	auto constexpr UItemListWidget_Gamepad_C_boolField389_Offset = offsetof(UItemListWidget_Gamepad_C, boolField389);
	static_assert(UItemListWidget_Gamepad_C_boolField389_Offset == 0x389, "UItemListWidget_Gamepad_C::boolField389 offset is not 389");
	auto constexpr UItemListWidget_Gamepad_C_ItemExplorer_Offset = offsetof(UItemListWidget_Gamepad_C, ItemExplorer);
	static_assert(UItemListWidget_Gamepad_C_ItemExplorer_Offset == 0x390, "UItemListWidget_Gamepad_C::ItemExplorer offset is not 390");
	auto constexpr UItemListWidget_Gamepad_C_ItemPackageTitleHeight_Offset = offsetof(UItemListWidget_Gamepad_C, ItemPackageTitleHeight);
	static_assert(UItemListWidget_Gamepad_C_ItemPackageTitleHeight_Offset == 0x398, "UItemListWidget_Gamepad_C::ItemPackageTitleHeight offset is not 398");
	auto constexpr UItemListWidget_Gamepad_C_GroundTitleHeight_Offset = offsetof(UItemListWidget_Gamepad_C, GroundTitleHeight);
	static_assert(UItemListWidget_Gamepad_C_GroundTitleHeight_Offset == 0x39c, "UItemListWidget_Gamepad_C::GroundTitleHeight offset is not 39c");
	auto constexpr UItemListWidget_Gamepad_C_ItemSlotHeight_Offset = offsetof(UItemListWidget_Gamepad_C, ItemSlotHeight);
	static_assert(UItemListWidget_Gamepad_C_ItemSlotHeight_Offset == 0x3a0, "UItemListWidget_Gamepad_C::ItemSlotHeight offset is not 3a0");
	auto constexpr UItemListWidget_Gamepad_C_ItemListHeight_Offset = offsetof(UItemListWidget_Gamepad_C, ItemListHeight);
	static_assert(UItemListWidget_Gamepad_C_ItemListHeight_Offset == 0x3a4, "UItemListWidget_Gamepad_C::ItemListHeight offset is not 3a4");
	auto constexpr UItemListWidget_Gamepad_C_MaxLoop_Offset = offsetof(UItemListWidget_Gamepad_C, MaxLoop);
	static_assert(UItemListWidget_Gamepad_C_MaxLoop_Offset == 0x3a8, "UItemListWidget_Gamepad_C::MaxLoop offset is not 3a8");
	auto constexpr UItemListWidget_Gamepad_C_CountLoop_Offset = offsetof(UItemListWidget_Gamepad_C, CountLoop);
	static_assert(UItemListWidget_Gamepad_C_CountLoop_Offset == 0x3ac, "UItemListWidget_Gamepad_C::CountLoop offset is not 3ac");
	auto constexpr UItemListWidget_Gamepad_C_SaveTimer_Offset = offsetof(UItemListWidget_Gamepad_C, SaveTimer);
	static_assert(UItemListWidget_Gamepad_C_SaveTimer_Offset == 0x3b0, "UItemListWidget_Gamepad_C::SaveTimer offset is not 3b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
