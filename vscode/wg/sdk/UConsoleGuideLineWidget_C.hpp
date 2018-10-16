#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UConsoleGuideLineWidget_C // Size: 0x3B0
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UConsoleGuideLineWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(63975); // id32("WidgetBlueprintGeneratedClass ConsoleGuideLineWidget.ConsoleGuideLineWidget_C")
		return ptr;
	}
	ExternalPtr<struct UHorizontalBox> Cancel; /* Ofs: 0x300 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.Cancel */
	ExternalPtr<struct UHorizontalBox> Confirm; /* Ofs: 0x308 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.Confirm */
	ExternalPtr<struct UHorizontalBox> DetachAll; /* Ofs: 0x310 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.DetachAll */
	ExternalPtr<struct UHorizontalBox> DetachAllAndSwitch; /* Ofs: 0x318 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.DetachAllAndSwitch */
	ExternalPtr<struct UHorizontalBox> DetachAndDetachAllAndSwtich; /* Ofs: 0x320 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.DetachAndDetachAllAndSwtich */
	ExternalPtr<struct UHorizontalBox> Drop; /* Ofs: 0x328 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.Drop */
	ExternalPtr<struct UHorizontalBox> DropAndDropAll; /* Ofs: 0x330 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.DropAndDropAll */
	ExternalPtr<struct UHorizontalBox> DropAndDropAmount; /* Ofs: 0x338 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.DropAndDropAmount */
	ExternalPtr<struct UHorizontalBox> DropAndEquip; /* Ofs: 0x340 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.DropAndEquip */
	ExternalPtr<struct UHorizontalBox> Empty; /* Ofs: 0x348 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.Empty */
	ExternalPtr<struct UHorizontalBox> Equip; /* Ofs: 0x350 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.Equip */
	ExternalPtr<struct UHorizontalBox> EquipAndQuickEquip; /* Ofs: 0x358 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.EquipAndQuickEquip */
	ExternalPtr<struct UHorizontalBox> Pickup; /* Ofs: 0x360 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.Pickup */
	ExternalPtr<struct UHorizontalBox> PickUpAndEquip; /* Ofs: 0x368 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.PickUpAndEquip */
	ExternalPtr<struct UHorizontalBox> PickUpAndPickUpAmount; /* Ofs: 0x370 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.PickUpAndPickUpAmount */
	ExternalPtr<struct UHorizontalBox> Swap; /* Ofs: 0x378 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.Swap */
	ExternalPtr<struct UHorizontalBox> Switch; /* Ofs: 0x380 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.Switch */
	ExternalPtr<struct UHorizontalBox> Unequip; /* Ofs: 0x388 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.Unequip */
	ExternalPtr<struct UHorizontalBox> Use; /* Ofs: 0x390 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.Use */
	ExternalPtr<struct UWidgetSwitcher> WidgetSwitcher; /* Ofs: 0x398 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.WidgetSwitcher */
	ExternalPtr<struct UHorizontalBox> XHoldQuickEquip; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.XHoldQuickEquip */
	ExternalPtr<struct UHorizontalBox> XQuickEquip; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.XQuickEquip */


	inline bool SetCancel(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x300, value); }
	inline bool SetConfirm(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x308, value); }
	inline bool SetDetachAll(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x310, value); }
	inline bool SetDetachAllAndSwitch(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x318, value); }
	inline bool SetDetachAndDetachAllAndSwtich(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x320, value); }
	inline bool SetDrop(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x328, value); }
	inline bool SetDropAndDropAll(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x330, value); }
	inline bool SetDropAndDropAmount(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x338, value); }
	inline bool SetDropAndEquip(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x340, value); }
	inline bool SetEmpty(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x348, value); }
	inline bool SetEquip(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x350, value); }
	inline bool SetEquipAndQuickEquip(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x358, value); }
	inline bool SetPickup(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x360, value); }
	inline bool SetPickUpAndEquip(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x368, value); }
	inline bool SetPickUpAndPickUpAmount(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x370, value); }
	inline bool SetSwap(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x378, value); }
	inline bool SetSwitch(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x380, value); }
	inline bool SetUnequip(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x388, value); }
	inline bool SetUse(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x390, value); }
	inline bool SetWidgetSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x398, value); }
	inline bool SetXHoldQuickEquip(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetXQuickEquip(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x3A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUConsoleGuideLineWidget_C = sizeof(UConsoleGuideLineWidget_C); // 944
    static_assert(sizeof(UConsoleGuideLineWidget_C) == 0x3B0, "Size of UConsoleGuideLineWidget_C is not correct.");
	auto constexpr UConsoleGuideLineWidget_C_Cancel_Offset = offsetof(UConsoleGuideLineWidget_C, Cancel);
	static_assert(UConsoleGuideLineWidget_C_Cancel_Offset == 0x300, "UConsoleGuideLineWidget_C::Cancel offset is not 300");
	auto constexpr UConsoleGuideLineWidget_C_Confirm_Offset = offsetof(UConsoleGuideLineWidget_C, Confirm);
	static_assert(UConsoleGuideLineWidget_C_Confirm_Offset == 0x308, "UConsoleGuideLineWidget_C::Confirm offset is not 308");
	auto constexpr UConsoleGuideLineWidget_C_DetachAll_Offset = offsetof(UConsoleGuideLineWidget_C, DetachAll);
	static_assert(UConsoleGuideLineWidget_C_DetachAll_Offset == 0x310, "UConsoleGuideLineWidget_C::DetachAll offset is not 310");
	auto constexpr UConsoleGuideLineWidget_C_DetachAllAndSwitch_Offset = offsetof(UConsoleGuideLineWidget_C, DetachAllAndSwitch);
	static_assert(UConsoleGuideLineWidget_C_DetachAllAndSwitch_Offset == 0x318, "UConsoleGuideLineWidget_C::DetachAllAndSwitch offset is not 318");
	auto constexpr UConsoleGuideLineWidget_C_DetachAndDetachAllAndSwtich_Offset = offsetof(UConsoleGuideLineWidget_C, DetachAndDetachAllAndSwtich);
	static_assert(UConsoleGuideLineWidget_C_DetachAndDetachAllAndSwtich_Offset == 0x320, "UConsoleGuideLineWidget_C::DetachAndDetachAllAndSwtich offset is not 320");
	auto constexpr UConsoleGuideLineWidget_C_Drop_Offset = offsetof(UConsoleGuideLineWidget_C, Drop);
	static_assert(UConsoleGuideLineWidget_C_Drop_Offset == 0x328, "UConsoleGuideLineWidget_C::Drop offset is not 328");
	auto constexpr UConsoleGuideLineWidget_C_DropAndDropAll_Offset = offsetof(UConsoleGuideLineWidget_C, DropAndDropAll);
	static_assert(UConsoleGuideLineWidget_C_DropAndDropAll_Offset == 0x330, "UConsoleGuideLineWidget_C::DropAndDropAll offset is not 330");
	auto constexpr UConsoleGuideLineWidget_C_DropAndDropAmount_Offset = offsetof(UConsoleGuideLineWidget_C, DropAndDropAmount);
	static_assert(UConsoleGuideLineWidget_C_DropAndDropAmount_Offset == 0x338, "UConsoleGuideLineWidget_C::DropAndDropAmount offset is not 338");
	auto constexpr UConsoleGuideLineWidget_C_DropAndEquip_Offset = offsetof(UConsoleGuideLineWidget_C, DropAndEquip);
	static_assert(UConsoleGuideLineWidget_C_DropAndEquip_Offset == 0x340, "UConsoleGuideLineWidget_C::DropAndEquip offset is not 340");
	auto constexpr UConsoleGuideLineWidget_C_Empty_Offset = offsetof(UConsoleGuideLineWidget_C, Empty);
	static_assert(UConsoleGuideLineWidget_C_Empty_Offset == 0x348, "UConsoleGuideLineWidget_C::Empty offset is not 348");
	auto constexpr UConsoleGuideLineWidget_C_Equip_Offset = offsetof(UConsoleGuideLineWidget_C, Equip);
	static_assert(UConsoleGuideLineWidget_C_Equip_Offset == 0x350, "UConsoleGuideLineWidget_C::Equip offset is not 350");
	auto constexpr UConsoleGuideLineWidget_C_EquipAndQuickEquip_Offset = offsetof(UConsoleGuideLineWidget_C, EquipAndQuickEquip);
	static_assert(UConsoleGuideLineWidget_C_EquipAndQuickEquip_Offset == 0x358, "UConsoleGuideLineWidget_C::EquipAndQuickEquip offset is not 358");
	auto constexpr UConsoleGuideLineWidget_C_Pickup_Offset = offsetof(UConsoleGuideLineWidget_C, Pickup);
	static_assert(UConsoleGuideLineWidget_C_Pickup_Offset == 0x360, "UConsoleGuideLineWidget_C::Pickup offset is not 360");
	auto constexpr UConsoleGuideLineWidget_C_PickUpAndEquip_Offset = offsetof(UConsoleGuideLineWidget_C, PickUpAndEquip);
	static_assert(UConsoleGuideLineWidget_C_PickUpAndEquip_Offset == 0x368, "UConsoleGuideLineWidget_C::PickUpAndEquip offset is not 368");
	auto constexpr UConsoleGuideLineWidget_C_PickUpAndPickUpAmount_Offset = offsetof(UConsoleGuideLineWidget_C, PickUpAndPickUpAmount);
	static_assert(UConsoleGuideLineWidget_C_PickUpAndPickUpAmount_Offset == 0x370, "UConsoleGuideLineWidget_C::PickUpAndPickUpAmount offset is not 370");
	auto constexpr UConsoleGuideLineWidget_C_Swap_Offset = offsetof(UConsoleGuideLineWidget_C, Swap);
	static_assert(UConsoleGuideLineWidget_C_Swap_Offset == 0x378, "UConsoleGuideLineWidget_C::Swap offset is not 378");
	auto constexpr UConsoleGuideLineWidget_C_Switch_Offset = offsetof(UConsoleGuideLineWidget_C, Switch);
	static_assert(UConsoleGuideLineWidget_C_Switch_Offset == 0x380, "UConsoleGuideLineWidget_C::Switch offset is not 380");
	auto constexpr UConsoleGuideLineWidget_C_Unequip_Offset = offsetof(UConsoleGuideLineWidget_C, Unequip);
	static_assert(UConsoleGuideLineWidget_C_Unequip_Offset == 0x388, "UConsoleGuideLineWidget_C::Unequip offset is not 388");
	auto constexpr UConsoleGuideLineWidget_C_Use_Offset = offsetof(UConsoleGuideLineWidget_C, Use);
	static_assert(UConsoleGuideLineWidget_C_Use_Offset == 0x390, "UConsoleGuideLineWidget_C::Use offset is not 390");
	auto constexpr UConsoleGuideLineWidget_C_WidgetSwitcher_Offset = offsetof(UConsoleGuideLineWidget_C, WidgetSwitcher);
	static_assert(UConsoleGuideLineWidget_C_WidgetSwitcher_Offset == 0x398, "UConsoleGuideLineWidget_C::WidgetSwitcher offset is not 398");
	auto constexpr UConsoleGuideLineWidget_C_XHoldQuickEquip_Offset = offsetof(UConsoleGuideLineWidget_C, XHoldQuickEquip);
	static_assert(UConsoleGuideLineWidget_C_XHoldQuickEquip_Offset == 0x3a0, "UConsoleGuideLineWidget_C::XHoldQuickEquip offset is not 3a0");
	auto constexpr UConsoleGuideLineWidget_C_XQuickEquip_Offset = offsetof(UConsoleGuideLineWidget_C, XQuickEquip);
	static_assert(UConsoleGuideLineWidget_C_XQuickEquip_Offset == 0x3a8, "UConsoleGuideLineWidget_C::XQuickEquip offset is not 3a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
