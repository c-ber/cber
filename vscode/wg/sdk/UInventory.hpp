#pragma once
#include "UItemSlotContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInventory // Size: 0x480
	: public UItemSlotContainer // Size: 0x440
{
private:
	typedef UInventory t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1966); // id32("Class TslGame.Inventory")
		return ptr;
	}
	FScriptMulticastDelegate OnInventoryUpdated; /* Ofs: 0x440 Size: 0x10 - MulticastDelegateProperty TslGame.Inventory.OnInventoryUpdated */
	uint8_t UnknownData450[0x4];
	float MaxSpace; /* Ofs: 0x454 Size: 0x4 - FloatProperty TslGame.Inventory.MaxSpace */
	uint8_t UnknownData458[0x8];
	TArray<ExternalPtr<struct UItem>> Items; /* Ofs: 0x460 Size: 0x10 - ArrayProperty TslGame.Inventory.Items */
	uint8_t UnknownData470[0x10];


	inline bool SetOnInventoryUpdated(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x440, value); }
	inline bool SetMaxSpace(t_structHelper inst, float value) { inst.WriteOffset(0x454, value); }
	inline bool SetItems(t_structHelper inst, TArray<ExternalPtr<struct UItem>> value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInventory = sizeof(UInventory); // 1152
    static_assert(sizeof(UInventory) == 0x480, "Size of UInventory is not correct.");
	auto constexpr UInventory_OnInventoryUpdated_Offset = offsetof(UInventory, OnInventoryUpdated);
	static_assert(UInventory_OnInventoryUpdated_Offset == 0x440, "UInventory::OnInventoryUpdated offset is not 440");
	auto constexpr UInventory_MaxSpace_Offset = offsetof(UInventory, MaxSpace);
	static_assert(UInventory_MaxSpace_Offset == 0x454, "UInventory::MaxSpace offset is not 454");
	auto constexpr UInventory_Items_Offset = offsetof(UInventory, Items);
	static_assert(UInventory_Items_Offset == 0x460, "UInventory::Items offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
