#pragma once
#include "UItemStudio.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponStudio // Size: 0x4E0
	: public UItemStudio // Size: 0x470
{
private:
	typedef UWeaponStudio t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(61); // id32("Class TslGame.WeaponStudio")
		return ptr;
	}
	float UpdateDelayTime; /* Ofs: 0x470 Size: 0x4 - FloatProperty TslGame.WeaponStudio.UpdateDelayTime */
	uint8_t UnknownData474[0x4];
	ExternalPtr<struct UBaseWeaponItem> CachedWeaponItem; /* Ofs: 0x478 Size: 0x8 - ObjectProperty TslGame.WeaponStudio.CachedWeaponItem */
	ExternalPtr<struct UTslWeapon> CachedTslWeapon; /* Ofs: 0x480 Size: 0x8 - ObjectProperty TslGame.WeaponStudio.CachedTslWeapon */
	TMap<struct FName, int32_t> CachedResidentMips; /* Ofs: 0x488 Size: 0x50 - MapProperty TslGame.WeaponStudio.CachedResidentMips */
	float UpdateCheckTime; /* Ofs: 0x4D8 Size: 0x4 - FloatProperty TslGame.WeaponStudio.UpdateCheckTime */
	uint8_t boolField4DC;
	uint8_t UnknownData4DD[0x3];


	inline bool SetUpdateDelayTime(t_structHelper inst, float value) { inst.WriteOffset(0x470, value); }
	inline bool SetCachedWeaponItem(t_structHelper inst, ExternalPtr<struct UBaseWeaponItem> value) { inst.WriteOffset(0x478, value); }
	inline bool SetCachedTslWeapon(t_structHelper inst, ExternalPtr<struct UTslWeapon> value) { inst.WriteOffset(0x480, value); }
	inline bool SetCachedResidentMips(t_structHelper inst, TMap<struct FName, int32_t> value) { inst.WriteOffset(0x488, value); }
	inline bool SetUpdateCheckTime(t_structHelper inst, float value) { inst.WriteOffset(0x4D8, value); }
	inline bool bMipsUpdated()
	{
		return boolField4DC& 0x1;
	}
	inline bool SetbMipsUpdated(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4DC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponStudio = sizeof(UWeaponStudio); // 1248
    static_assert(sizeof(UWeaponStudio) == 0x4E0, "Size of UWeaponStudio is not correct.");
	auto constexpr UWeaponStudio_UpdateDelayTime_Offset = offsetof(UWeaponStudio, UpdateDelayTime);
	static_assert(UWeaponStudio_UpdateDelayTime_Offset == 0x470, "UWeaponStudio::UpdateDelayTime offset is not 470");
	auto constexpr UWeaponStudio_CachedWeaponItem_Offset = offsetof(UWeaponStudio, CachedWeaponItem);
	static_assert(UWeaponStudio_CachedWeaponItem_Offset == 0x478, "UWeaponStudio::CachedWeaponItem offset is not 478");
	auto constexpr UWeaponStudio_CachedTslWeapon_Offset = offsetof(UWeaponStudio, CachedTslWeapon);
	static_assert(UWeaponStudio_CachedTslWeapon_Offset == 0x480, "UWeaponStudio::CachedTslWeapon offset is not 480");
	auto constexpr UWeaponStudio_CachedResidentMips_Offset = offsetof(UWeaponStudio, CachedResidentMips);
	static_assert(UWeaponStudio_CachedResidentMips_Offset == 0x488, "UWeaponStudio::CachedResidentMips offset is not 488");
	auto constexpr UWeaponStudio_UpdateCheckTime_Offset = offsetof(UWeaponStudio, UpdateCheckTime);
	static_assert(UWeaponStudio_UpdateCheckTime_Offset == 0x4d8, "UWeaponStudio::UpdateCheckTime offset is not 4d8");
	auto constexpr UWeaponStudio_boolField4DC_Offset = offsetof(UWeaponStudio, boolField4DC);
	static_assert(UWeaponStudio_boolField4DC_Offset == 0x4dc, "UWeaponStudio::boolField4DC offset is not 4dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
