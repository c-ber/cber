#pragma once
#include "UUmgBaseWidget.hpp"
#include "FTimerHandle.hpp"
#include "ECastableItemType.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslHealItemSelectorWidget // Size: 0x368
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslHealItemSelectorWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1573); // id32("Class TslGame.TslHealItemSelectorWidget")
		return ptr;
	}
	ExternalPtr<struct UInventory> InventoryCached; /* Ofs: 0x300 Size: 0x8 - ObjectProperty TslGame.TslHealItemSelectorWidget.InventoryCached */
	FTimerHandle HealItemSelectorTimer; /* Ofs: 0x308 Size: 0x8 - StructProperty TslGame.TslHealItemSelectorWidget.HealItemSelectorTimer */
	FTimerHandle WidgetHideTimer; /* Ofs: 0x310 Size: 0x8 - StructProperty TslGame.TslHealItemSelectorWidget.WidgetHideTimer */
	TEnumAsByte<enum ECastableItemType> LastSelectedHealItemType; /* Ofs: 0x318 Size: 0x1 - EnumProperty TslGame.TslHealItemSelectorWidget.LastSelectedHealItemType */
	uint8_t UnknownData319[0x7];
	TArray<struct FHealItemSelectorData> HealItemDatas; /* Ofs: 0x320 Size: 0x10 - ArrayProperty TslGame.TslHealItemSelectorWidget.HealItemDatas */
	FUmgWidgetBinder_Image ItemIcon_Binder; /* Ofs: 0x330 Size: 0x28 - StructProperty TslGame.TslHealItemSelectorWidget.ItemIcon_Binder */
	FVector2D InitialPosition; /* Ofs: 0x358 Size: 0x8 - StructProperty TslGame.TslHealItemSelectorWidget.InitialPosition */
	FVector2D OffsetWhenTpsWeaponIconEnabled; /* Ofs: 0x360 Size: 0x8 - StructProperty TslGame.TslHealItemSelectorWidget.OffsetWhenTpsWeaponIconEnabled */


	inline bool SetInventoryCached(t_structHelper inst, ExternalPtr<struct UInventory> value) { inst.WriteOffset(0x300, value); }
	inline bool SetHealItemSelectorTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x308, value); }
	inline bool SetWidgetHideTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x310, value); }
	inline bool SetLastSelectedHealItemType(t_structHelper inst, TEnumAsByte<enum ECastableItemType> value) { inst.WriteOffset(0x318, value); }
	inline bool SetHealItemDatas(t_structHelper inst, TArray<struct FHealItemSelectorData> value) { inst.WriteOffset(0x320, value); }
	inline bool SetItemIcon_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x330, value); }
	inline bool SetInitialPosition(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x358, value); }
	inline bool SetOffsetWhenTpsWeaponIconEnabled(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x360, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslHealItemSelectorWidget = sizeof(UTslHealItemSelectorWidget); // 872
    static_assert(sizeof(UTslHealItemSelectorWidget) == 0x368, "Size of UTslHealItemSelectorWidget is not correct.");
	auto constexpr UTslHealItemSelectorWidget_InventoryCached_Offset = offsetof(UTslHealItemSelectorWidget, InventoryCached);
	static_assert(UTslHealItemSelectorWidget_InventoryCached_Offset == 0x300, "UTslHealItemSelectorWidget::InventoryCached offset is not 300");
	auto constexpr UTslHealItemSelectorWidget_HealItemSelectorTimer_Offset = offsetof(UTslHealItemSelectorWidget, HealItemSelectorTimer);
	static_assert(UTslHealItemSelectorWidget_HealItemSelectorTimer_Offset == 0x308, "UTslHealItemSelectorWidget::HealItemSelectorTimer offset is not 308");
	auto constexpr UTslHealItemSelectorWidget_WidgetHideTimer_Offset = offsetof(UTslHealItemSelectorWidget, WidgetHideTimer);
	static_assert(UTslHealItemSelectorWidget_WidgetHideTimer_Offset == 0x310, "UTslHealItemSelectorWidget::WidgetHideTimer offset is not 310");
	auto constexpr UTslHealItemSelectorWidget_LastSelectedHealItemType_Offset = offsetof(UTslHealItemSelectorWidget, LastSelectedHealItemType);
	static_assert(UTslHealItemSelectorWidget_LastSelectedHealItemType_Offset == 0x318, "UTslHealItemSelectorWidget::LastSelectedHealItemType offset is not 318");
	auto constexpr UTslHealItemSelectorWidget_HealItemDatas_Offset = offsetof(UTslHealItemSelectorWidget, HealItemDatas);
	static_assert(UTslHealItemSelectorWidget_HealItemDatas_Offset == 0x320, "UTslHealItemSelectorWidget::HealItemDatas offset is not 320");
	auto constexpr UTslHealItemSelectorWidget_ItemIcon_Binder_Offset = offsetof(UTslHealItemSelectorWidget, ItemIcon_Binder);
	static_assert(UTslHealItemSelectorWidget_ItemIcon_Binder_Offset == 0x330, "UTslHealItemSelectorWidget::ItemIcon_Binder offset is not 330");
	auto constexpr UTslHealItemSelectorWidget_InitialPosition_Offset = offsetof(UTslHealItemSelectorWidget, InitialPosition);
	static_assert(UTslHealItemSelectorWidget_InitialPosition_Offset == 0x358, "UTslHealItemSelectorWidget::InitialPosition offset is not 358");
	auto constexpr UTslHealItemSelectorWidget_OffsetWhenTpsWeaponIconEnabled_Offset = offsetof(UTslHealItemSelectorWidget, OffsetWhenTpsWeaponIconEnabled);
	static_assert(UTslHealItemSelectorWidget_OffsetWhenTpsWeaponIconEnabled_Offset == 0x360, "UTslHealItemSelectorWidget::OffsetWhenTpsWeaponIconEnabled offset is not 360");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
