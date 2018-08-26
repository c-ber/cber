#pragma once
#include "UItemSlotContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEquipment // Size: 0x490
	: public UItemSlotContainer // Size: 0x440
{
private:
	typedef UEquipment t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1965); // id32("Class TslGame.Equipment")
		return ptr;
	}
	FScriptMulticastDelegate OnEquipmentUpdated; /* Ofs: 0x440 Size: 0x10 - MulticastDelegateProperty TslGame.Equipment.OnEquipmentUpdated */
	uint8_t UnknownData450[0x30];
	TArray<ExternalPtr<struct UEquipableItem>> Items; /* Ofs: 0x480 Size: 0x10 - ArrayProperty TslGame.Equipment.Items */


	inline bool SetOnEquipmentUpdated(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x440, value); }
	inline bool SetItems(t_structHelper inst, TArray<ExternalPtr<struct UEquipableItem>> value) { inst.WriteOffset(0x480, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEquipment = sizeof(UEquipment); // 1168
    static_assert(sizeof(UEquipment) == 0x490, "Size of UEquipment is not correct.");
	auto constexpr UEquipment_OnEquipmentUpdated_Offset = offsetof(UEquipment, OnEquipmentUpdated);
	static_assert(UEquipment_OnEquipmentUpdated_Offset == 0x440, "UEquipment::OnEquipmentUpdated offset is not 440");
	auto constexpr UEquipment_Items_Offset = offsetof(UEquipment, Items);
	static_assert(UEquipment_Items_Offset == 0x480, "UEquipment::Items offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
