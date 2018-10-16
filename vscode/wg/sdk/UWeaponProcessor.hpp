#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponProcessor // Size: 0x540
	: public UActor // Size: 0x410
{
private:
	typedef UWeaponProcessor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1875); // id32("Class TslGame.WeaponProcessor")
		return ptr;
	}
	FScriptMulticastDelegate OnWeaponProcessorArmed; /* Ofs: 0x410 Size: 0x10 - MulticastDelegateProperty TslGame.WeaponProcessor.OnWeaponProcessorArmed */
	uint8_t UnknownData420[0xE8];
	TArray<ExternalPtr<struct UTslWeapon>> EquippedWeapons; /* Ofs: 0x508 Size: 0x10 - ArrayProperty TslGame.WeaponProcessor.EquippedWeapons */
	int32_t CurrentWeaponIndex; /* Ofs: 0x518 Size: 0x4 - IntProperty TslGame.WeaponProcessor.CurrentWeaponIndex */
	uint8_t UnknownData51C[0x15];
	uint8_t boolField531;
	uint8_t UnknownData532[0xE];


	inline bool SetOnWeaponProcessorArmed(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x410, value); }
	inline bool SetEquippedWeapons(t_structHelper inst, TArray<ExternalPtr<struct UTslWeapon>> value) { inst.WriteOffset(0x508, value); }
	inline bool SetCurrentWeaponIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x518, value); }
	inline bool bNeedUpdateArmedAndAttachedSlot()
	{
		return boolField531& 0x1;
	}
	inline bool SetbNeedUpdateArmedAndAttachedSlot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x531, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponProcessor = sizeof(UWeaponProcessor); // 1344
    static_assert(sizeof(UWeaponProcessor) == 0x540, "Size of UWeaponProcessor is not correct.");
	auto constexpr UWeaponProcessor_OnWeaponProcessorArmed_Offset = offsetof(UWeaponProcessor, OnWeaponProcessorArmed);
	static_assert(UWeaponProcessor_OnWeaponProcessorArmed_Offset == 0x410, "UWeaponProcessor::OnWeaponProcessorArmed offset is not 410");
	auto constexpr UWeaponProcessor_EquippedWeapons_Offset = offsetof(UWeaponProcessor, EquippedWeapons);
	static_assert(UWeaponProcessor_EquippedWeapons_Offset == 0x508, "UWeaponProcessor::EquippedWeapons offset is not 508");
	auto constexpr UWeaponProcessor_CurrentWeaponIndex_Offset = offsetof(UWeaponProcessor, CurrentWeaponIndex);
	static_assert(UWeaponProcessor_CurrentWeaponIndex_Offset == 0x518, "UWeaponProcessor::CurrentWeaponIndex offset is not 518");
	auto constexpr UWeaponProcessor_boolField531_Offset = offsetof(UWeaponProcessor, boolField531);
	static_assert(UWeaponProcessor_boolField531_Offset == 0x531, "UWeaponProcessor::boolField531 offset is not 531");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
