#pragma once
#include "UFppWeaponSlotListWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_FppWeaponSlotListWidget_C // Size: 0x358
	: public UFppWeaponSlotListWidget // Size: 0x330
{
private:
	typedef UBP_FppWeaponSlotListWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68478); // id32("WidgetBlueprintGeneratedClass BP_FppWeaponSlotListWidget.BP_FppWeaponSlotListWidget_C")
		return ptr;
	}
	ExternalPtr<struct UBP_FppWeaponListSlotWidget_C> Slot_1; /* Ofs: 0x330 Size: 0x8 - ObjectProperty BP_FppWeaponSlotListWidget.BP_FppWeaponSlotListWidget_C.Slot_1 */
	ExternalPtr<struct UBP_FppWeaponListSlotWidget_C> Slot_2; /* Ofs: 0x338 Size: 0x8 - ObjectProperty BP_FppWeaponSlotListWidget.BP_FppWeaponSlotListWidget_C.Slot_2 */
	ExternalPtr<struct UBP_FppWeaponListSlotWidget_C> Slot_3; /* Ofs: 0x340 Size: 0x8 - ObjectProperty BP_FppWeaponSlotListWidget.BP_FppWeaponSlotListWidget_C.Slot_3 */
	ExternalPtr<struct UBP_FppWeaponListSlotWidget_C> Slot_4; /* Ofs: 0x348 Size: 0x8 - ObjectProperty BP_FppWeaponSlotListWidget.BP_FppWeaponSlotListWidget_C.Slot_4 */
	ExternalPtr<struct UBP_FppWeaponListSlotWidget_C> Slot_5; /* Ofs: 0x350 Size: 0x8 - ObjectProperty BP_FppWeaponSlotListWidget.BP_FppWeaponSlotListWidget_C.Slot_5 */


	inline bool SetSlot_1(t_structHelper inst, ExternalPtr<struct UBP_FppWeaponListSlotWidget_C> value) { inst.WriteOffset(0x330, value); }
	inline bool SetSlot_2(t_structHelper inst, ExternalPtr<struct UBP_FppWeaponListSlotWidget_C> value) { inst.WriteOffset(0x338, value); }
	inline bool SetSlot_3(t_structHelper inst, ExternalPtr<struct UBP_FppWeaponListSlotWidget_C> value) { inst.WriteOffset(0x340, value); }
	inline bool SetSlot_4(t_structHelper inst, ExternalPtr<struct UBP_FppWeaponListSlotWidget_C> value) { inst.WriteOffset(0x348, value); }
	inline bool SetSlot_5(t_structHelper inst, ExternalPtr<struct UBP_FppWeaponListSlotWidget_C> value) { inst.WriteOffset(0x350, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_FppWeaponSlotListWidget_C = sizeof(UBP_FppWeaponSlotListWidget_C); // 856
    static_assert(sizeof(UBP_FppWeaponSlotListWidget_C) == 0x358, "Size of UBP_FppWeaponSlotListWidget_C is not correct.");
	auto constexpr UBP_FppWeaponSlotListWidget_C_Slot_1_Offset = offsetof(UBP_FppWeaponSlotListWidget_C, Slot_1);
	static_assert(UBP_FppWeaponSlotListWidget_C_Slot_1_Offset == 0x330, "UBP_FppWeaponSlotListWidget_C::Slot_1 offset is not 330");
	auto constexpr UBP_FppWeaponSlotListWidget_C_Slot_2_Offset = offsetof(UBP_FppWeaponSlotListWidget_C, Slot_2);
	static_assert(UBP_FppWeaponSlotListWidget_C_Slot_2_Offset == 0x338, "UBP_FppWeaponSlotListWidget_C::Slot_2 offset is not 338");
	auto constexpr UBP_FppWeaponSlotListWidget_C_Slot_3_Offset = offsetof(UBP_FppWeaponSlotListWidget_C, Slot_3);
	static_assert(UBP_FppWeaponSlotListWidget_C_Slot_3_Offset == 0x340, "UBP_FppWeaponSlotListWidget_C::Slot_3 offset is not 340");
	auto constexpr UBP_FppWeaponSlotListWidget_C_Slot_4_Offset = offsetof(UBP_FppWeaponSlotListWidget_C, Slot_4);
	static_assert(UBP_FppWeaponSlotListWidget_C_Slot_4_Offset == 0x348, "UBP_FppWeaponSlotListWidget_C::Slot_4 offset is not 348");
	auto constexpr UBP_FppWeaponSlotListWidget_C_Slot_5_Offset = offsetof(UBP_FppWeaponSlotListWidget_C, Slot_5);
	static_assert(UBP_FppWeaponSlotListWidget_C_Slot_5_Offset == 0x350, "UBP_FppWeaponSlotListWidget_C::Slot_5 offset is not 350");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
