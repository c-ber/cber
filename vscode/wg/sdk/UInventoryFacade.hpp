#pragma once
#include "USubActor.hpp"
#include "EEquipSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInventoryFacade // Size: 0x430
	: public USubActor // Size: 0x410
{
private:
	typedef UInventoryFacade t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1964); // id32("Class TslGame.InventoryFacade")
		return ptr;
	}
	ExternalPtr<struct UInventory> Inventory; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.InventoryFacade.Inventory */
	ExternalPtr<struct UEquipment> Equipment; /* Ofs: 0x418 Size: 0x8 - ObjectProperty TslGame.InventoryFacade.Equipment */
	TArray<EEquipSlotID> AutoSwapEquipSlotID; /* Ofs: 0x420 Size: 0x10 - ArrayProperty TslGame.InventoryFacade.AutoSwapEquipSlotID */


	inline bool SetInventory(t_structHelper inst, ExternalPtr<struct UInventory> value) { inst.WriteOffset(0x410, value); }
	inline bool SetEquipment(t_structHelper inst, ExternalPtr<struct UEquipment> value) { inst.WriteOffset(0x418, value); }
	inline bool SetAutoSwapEquipSlotID(t_structHelper inst, TArray<EEquipSlotID> value) { inst.WriteOffset(0x420, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInventoryFacade = sizeof(UInventoryFacade); // 1072
    static_assert(sizeof(UInventoryFacade) == 0x430, "Size of UInventoryFacade is not correct.");
	auto constexpr UInventoryFacade_Inventory_Offset = offsetof(UInventoryFacade, Inventory);
	static_assert(UInventoryFacade_Inventory_Offset == 0x410, "UInventoryFacade::Inventory offset is not 410");
	auto constexpr UInventoryFacade_Equipment_Offset = offsetof(UInventoryFacade, Equipment);
	static_assert(UInventoryFacade_Equipment_Offset == 0x418, "UInventoryFacade::Equipment offset is not 418");
	auto constexpr UInventoryFacade_AutoSwapEquipSlotID_Offset = offsetof(UInventoryFacade, AutoSwapEquipSlotID);
	static_assert(UInventoryFacade_AutoSwapEquipSlotID_Offset == 0x420, "UInventoryFacade::AutoSwapEquipSlotID offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
