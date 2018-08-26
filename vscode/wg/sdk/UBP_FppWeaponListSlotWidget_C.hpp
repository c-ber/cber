#pragma once
#include "UWeaponSlotBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_FppWeaponListSlotWidget_C // Size: 0x660
	: public UWeaponSlotBaseWidget // Size: 0x618
{
private:
	typedef UBP_FppWeaponListSlotWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68493); // id32("WidgetBlueprintGeneratedClass BP_FppWeaponListSlotWidget.BP_FppWeaponListSlotWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> weaponImage; /* Ofs: 0x618 Size: 0x8 - ObjectProperty BP_FppWeaponListSlotWidget.BP_FppWeaponListSlotWidget_C.weaponImage */
	FScriptMulticastDelegate ShowStart; /* Ofs: 0x620 Size: 0x10 - MulticastDelegateProperty BP_FppWeaponListSlotWidget.BP_FppWeaponListSlotWidget_C.ShowStart */
	FScriptMulticastDelegate ShowEnd; /* Ofs: 0x630 Size: 0x10 - MulticastDelegateProperty BP_FppWeaponListSlotWidget.BP_FppWeaponListSlotWidget_C.ShowEnd */
	FScriptMulticastDelegate HIddenStart; /* Ofs: 0x640 Size: 0x10 - MulticastDelegateProperty BP_FppWeaponListSlotWidget.BP_FppWeaponListSlotWidget_C.HIddenStart */
	FScriptMulticastDelegate HIddenEnd; /* Ofs: 0x650 Size: 0x10 - MulticastDelegateProperty BP_FppWeaponListSlotWidget.BP_FppWeaponListSlotWidget_C.HIddenEnd */


	inline bool SetweaponImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x618, value); }
	inline bool SetShowStart(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x620, value); }
	inline bool SetShowEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x630, value); }
	inline bool SetHIddenStart(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x640, value); }
	inline bool SetHIddenEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x650, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_FppWeaponListSlotWidget_C = sizeof(UBP_FppWeaponListSlotWidget_C); // 1632
    static_assert(sizeof(UBP_FppWeaponListSlotWidget_C) == 0x660, "Size of UBP_FppWeaponListSlotWidget_C is not correct.");
	auto constexpr UBP_FppWeaponListSlotWidget_C_weaponImage_Offset = offsetof(UBP_FppWeaponListSlotWidget_C, weaponImage);
	static_assert(UBP_FppWeaponListSlotWidget_C_weaponImage_Offset == 0x618, "UBP_FppWeaponListSlotWidget_C::weaponImage offset is not 618");
	auto constexpr UBP_FppWeaponListSlotWidget_C_ShowStart_Offset = offsetof(UBP_FppWeaponListSlotWidget_C, ShowStart);
	static_assert(UBP_FppWeaponListSlotWidget_C_ShowStart_Offset == 0x620, "UBP_FppWeaponListSlotWidget_C::ShowStart offset is not 620");
	auto constexpr UBP_FppWeaponListSlotWidget_C_ShowEnd_Offset = offsetof(UBP_FppWeaponListSlotWidget_C, ShowEnd);
	static_assert(UBP_FppWeaponListSlotWidget_C_ShowEnd_Offset == 0x630, "UBP_FppWeaponListSlotWidget_C::ShowEnd offset is not 630");
	auto constexpr UBP_FppWeaponListSlotWidget_C_HIddenStart_Offset = offsetof(UBP_FppWeaponListSlotWidget_C, HIddenStart);
	static_assert(UBP_FppWeaponListSlotWidget_C_HIddenStart_Offset == 0x640, "UBP_FppWeaponListSlotWidget_C::HIddenStart offset is not 640");
	auto constexpr UBP_FppWeaponListSlotWidget_C_HIddenEnd_Offset = offsetof(UBP_FppWeaponListSlotWidget_C, HIddenEnd);
	static_assert(UBP_FppWeaponListSlotWidget_C_HIddenEnd_Offset == 0x650, "UBP_FppWeaponListSlotWidget_C::HIddenEnd offset is not 650");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
