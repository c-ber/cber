#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFppWeaponSlotListWidget // Size: 0x330
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UFppWeaponSlotListWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1525); // id32("Class TslGame.FppWeaponSlotListWidget")
		return ptr;
	}
	ExternalPtr<struct UWeaponProcessor> SaveWeaponProcessor; /* Ofs: 0x300 Size: 0x8 - ObjectProperty TslGame.FppWeaponSlotListWidget.SaveWeaponProcessor */
	ExternalPtr<struct UTslWeapon> SaveWeapon; /* Ofs: 0x308 Size: 0x8 - ObjectProperty TslGame.FppWeaponSlotListWidget.SaveWeapon */
	FName SaveCurrentWeaponClassName; /* Ofs: 0x310 Size: 0x8 - NameProperty TslGame.FppWeaponSlotListWidget.SaveCurrentWeaponClassName */
	TArray<struct FName> SaveWeaponListClassNames; /* Ofs: 0x318 Size: 0x10 - ArrayProperty TslGame.FppWeaponSlotListWidget.SaveWeaponListClassNames */
	uint8_t boolField328;
	uint8_t UnknownData329[0x3];
	int32_t SaveLoadedAmmoCount; /* Ofs: 0x32C Size: 0x4 - IntProperty TslGame.FppWeaponSlotListWidget.SaveLoadedAmmoCount */


	inline bool SetSaveWeaponProcessor(t_structHelper inst, ExternalPtr<struct UWeaponProcessor> value) { inst.WriteOffset(0x300, value); }
	inline bool SetSaveWeapon(t_structHelper inst, ExternalPtr<struct UTslWeapon> value) { inst.WriteOffset(0x308, value); }
	inline bool SetSaveCurrentWeaponClassName(t_structHelper inst, FName value) { inst.WriteOffset(0x310, value); }
	inline bool SetSaveWeaponListClassNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x318, value); }
	inline bool bSaveIsUnarmed()
	{
		return boolField328& 0x1;
	}
	inline bool SetbSaveIsUnarmed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x328, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSaveLoadedAmmoCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x32C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFppWeaponSlotListWidget = sizeof(UFppWeaponSlotListWidget); // 816
    static_assert(sizeof(UFppWeaponSlotListWidget) == 0x330, "Size of UFppWeaponSlotListWidget is not correct.");
	auto constexpr UFppWeaponSlotListWidget_SaveWeaponProcessor_Offset = offsetof(UFppWeaponSlotListWidget, SaveWeaponProcessor);
	static_assert(UFppWeaponSlotListWidget_SaveWeaponProcessor_Offset == 0x300, "UFppWeaponSlotListWidget::SaveWeaponProcessor offset is not 300");
	auto constexpr UFppWeaponSlotListWidget_SaveWeapon_Offset = offsetof(UFppWeaponSlotListWidget, SaveWeapon);
	static_assert(UFppWeaponSlotListWidget_SaveWeapon_Offset == 0x308, "UFppWeaponSlotListWidget::SaveWeapon offset is not 308");
	auto constexpr UFppWeaponSlotListWidget_SaveCurrentWeaponClassName_Offset = offsetof(UFppWeaponSlotListWidget, SaveCurrentWeaponClassName);
	static_assert(UFppWeaponSlotListWidget_SaveCurrentWeaponClassName_Offset == 0x310, "UFppWeaponSlotListWidget::SaveCurrentWeaponClassName offset is not 310");
	auto constexpr UFppWeaponSlotListWidget_SaveWeaponListClassNames_Offset = offsetof(UFppWeaponSlotListWidget, SaveWeaponListClassNames);
	static_assert(UFppWeaponSlotListWidget_SaveWeaponListClassNames_Offset == 0x318, "UFppWeaponSlotListWidget::SaveWeaponListClassNames offset is not 318");
	auto constexpr UFppWeaponSlotListWidget_boolField328_Offset = offsetof(UFppWeaponSlotListWidget, boolField328);
	static_assert(UFppWeaponSlotListWidget_boolField328_Offset == 0x328, "UFppWeaponSlotListWidget::boolField328 offset is not 328");
	auto constexpr UFppWeaponSlotListWidget_SaveLoadedAmmoCount_Offset = offsetof(UFppWeaponSlotListWidget, SaveLoadedAmmoCount);
	static_assert(UFppWeaponSlotListWidget_SaveLoadedAmmoCount_Offset == 0x32c, "UFppWeaponSlotListWidget::SaveLoadedAmmoCount offset is not 32c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
