#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslInventoryCapacityWidget // Size: 0x310
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslInventoryCapacityWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1574); // id32("Class TslGame.TslInventoryCapacityWidget")
		return ptr;
	}
	float GameMaxSpace; /* Ofs: 0x300 Size: 0x4 - FloatProperty TslGame.TslInventoryCapacityWidget.GameMaxSpace */
	uint8_t UnknownData304[0x4];
	ExternalPtr<struct UInventory> InventoryCached; /* Ofs: 0x308 Size: 0x8 - ObjectProperty TslGame.TslInventoryCapacityWidget.InventoryCached */


	inline bool SetGameMaxSpace(t_structHelper inst, float value) { inst.WriteOffset(0x300, value); }
	inline bool SetInventoryCached(t_structHelper inst, ExternalPtr<struct UInventory> value) { inst.WriteOffset(0x308, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslInventoryCapacityWidget = sizeof(UTslInventoryCapacityWidget); // 784
    static_assert(sizeof(UTslInventoryCapacityWidget) == 0x310, "Size of UTslInventoryCapacityWidget is not correct.");
	auto constexpr UTslInventoryCapacityWidget_GameMaxSpace_Offset = offsetof(UTslInventoryCapacityWidget, GameMaxSpace);
	static_assert(UTslInventoryCapacityWidget_GameMaxSpace_Offset == 0x300, "UTslInventoryCapacityWidget::GameMaxSpace offset is not 300");
	auto constexpr UTslInventoryCapacityWidget_InventoryCached_Offset = offsetof(UTslInventoryCapacityWidget, InventoryCached);
	static_assert(UTslInventoryCapacityWidget_InventoryCached_Offset == 0x308, "UTslInventoryCapacityWidget::InventoryCached offset is not 308");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
