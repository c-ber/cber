#pragma once
#include "UAnimInstance.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGunAnimInstance // Size: 0x458
	: public UAnimInstance // Size: 0x380
{
private:
	typedef UTslGunAnimInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1399); // id32("Class TslGame.TslGunAnimInstance")
		return ptr;
	}
	FScriptMulticastDelegate WeaponFire; /* Ofs: 0x380 Size: 0x10 - MulticastDelegateProperty TslGame.TslGunAnimInstance.WeaponFire */
	FScriptMulticastDelegate WeaponFireCycle; /* Ofs: 0x390 Size: 0x10 - MulticastDelegateProperty TslGame.TslGunAnimInstance.WeaponFireCycle */
	FScriptMulticastDelegate TriggerOn; /* Ofs: 0x3A0 Size: 0x10 - MulticastDelegateProperty TslGame.TslGunAnimInstance.TriggerOn */
	FScriptMulticastDelegate TriggerOff; /* Ofs: 0x3B0 Size: 0x10 - MulticastDelegateProperty TslGame.TslGunAnimInstance.TriggerOff */
	FScriptMulticastDelegate Reload1; /* Ofs: 0x3C0 Size: 0x10 - MulticastDelegateProperty TslGame.TslGunAnimInstance.Reload1 */
	FScriptMulticastDelegate Reload2; /* Ofs: 0x3D0 Size: 0x10 - MulticastDelegateProperty TslGame.TslGunAnimInstance.Reload2 */
	FScriptMulticastDelegate ReloadByOneStart; /* Ofs: 0x3E0 Size: 0x10 - MulticastDelegateProperty TslGame.TslGunAnimInstance.ReloadByOneStart */
	FScriptMulticastDelegate ReloadByOneSingle; /* Ofs: 0x3F0 Size: 0x10 - MulticastDelegateProperty TslGame.TslGunAnimInstance.ReloadByOneSingle */
	FScriptMulticastDelegate ReloadByOneEnd; /* Ofs: 0x400 Size: 0x10 - MulticastDelegateProperty TslGame.TslGunAnimInstance.ReloadByOneEnd */
	FScriptMulticastDelegate WeaponCharge; /* Ofs: 0x410 Size: 0x10 - MulticastDelegateProperty TslGame.TslGunAnimInstance.WeaponCharge */
	FScriptMulticastDelegate FireSelect; /* Ofs: 0x420 Size: 0x10 - MulticastDelegateProperty TslGame.TslGunAnimInstance.FireSelect */
	FScriptMulticastDelegate CancelReload; /* Ofs: 0x430 Size: 0x10 - MulticastDelegateProperty TslGame.TslGunAnimInstance.CancelReload */
	FName Name_FireMode_Semi; /* Ofs: 0x440 Size: 0x8 - NameProperty TslGame.TslGunAnimInstance.Name_FireMode_Semi */
	FName Name_FireMode_Burst; /* Ofs: 0x448 Size: 0x8 - NameProperty TslGame.TslGunAnimInstance.Name_FireMode_Burst */
	FName Name_FireMode_Fullauto; /* Ofs: 0x450 Size: 0x8 - NameProperty TslGame.TslGunAnimInstance.Name_FireMode_Fullauto */


	inline bool SetWeaponFire(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x380, value); }
	inline bool SetWeaponFireCycle(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x390, value); }
	inline bool SetTriggerOn(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetTriggerOff(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetReload1(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetReload2(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetReloadByOneStart(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetReloadByOneSingle(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetReloadByOneEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x400, value); }
	inline bool SetWeaponCharge(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x410, value); }
	inline bool SetFireSelect(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x420, value); }
	inline bool SetCancelReload(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x430, value); }
	inline bool SetName_FireMode_Semi(t_structHelper inst, FName value) { inst.WriteOffset(0x440, value); }
	inline bool SetName_FireMode_Burst(t_structHelper inst, FName value) { inst.WriteOffset(0x448, value); }
	inline bool SetName_FireMode_Fullauto(t_structHelper inst, FName value) { inst.WriteOffset(0x450, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGunAnimInstance = sizeof(UTslGunAnimInstance); // 1112
    static_assert(sizeof(UTslGunAnimInstance) == 0x458, "Size of UTslGunAnimInstance is not correct.");
	auto constexpr UTslGunAnimInstance_WeaponFire_Offset = offsetof(UTslGunAnimInstance, WeaponFire);
	static_assert(UTslGunAnimInstance_WeaponFire_Offset == 0x380, "UTslGunAnimInstance::WeaponFire offset is not 380");
	auto constexpr UTslGunAnimInstance_WeaponFireCycle_Offset = offsetof(UTslGunAnimInstance, WeaponFireCycle);
	static_assert(UTslGunAnimInstance_WeaponFireCycle_Offset == 0x390, "UTslGunAnimInstance::WeaponFireCycle offset is not 390");
	auto constexpr UTslGunAnimInstance_TriggerOn_Offset = offsetof(UTslGunAnimInstance, TriggerOn);
	static_assert(UTslGunAnimInstance_TriggerOn_Offset == 0x3a0, "UTslGunAnimInstance::TriggerOn offset is not 3a0");
	auto constexpr UTslGunAnimInstance_TriggerOff_Offset = offsetof(UTslGunAnimInstance, TriggerOff);
	static_assert(UTslGunAnimInstance_TriggerOff_Offset == 0x3b0, "UTslGunAnimInstance::TriggerOff offset is not 3b0");
	auto constexpr UTslGunAnimInstance_Reload1_Offset = offsetof(UTslGunAnimInstance, Reload1);
	static_assert(UTslGunAnimInstance_Reload1_Offset == 0x3c0, "UTslGunAnimInstance::Reload1 offset is not 3c0");
	auto constexpr UTslGunAnimInstance_Reload2_Offset = offsetof(UTslGunAnimInstance, Reload2);
	static_assert(UTslGunAnimInstance_Reload2_Offset == 0x3d0, "UTslGunAnimInstance::Reload2 offset is not 3d0");
	auto constexpr UTslGunAnimInstance_ReloadByOneStart_Offset = offsetof(UTslGunAnimInstance, ReloadByOneStart);
	static_assert(UTslGunAnimInstance_ReloadByOneStart_Offset == 0x3e0, "UTslGunAnimInstance::ReloadByOneStart offset is not 3e0");
	auto constexpr UTslGunAnimInstance_ReloadByOneSingle_Offset = offsetof(UTslGunAnimInstance, ReloadByOneSingle);
	static_assert(UTslGunAnimInstance_ReloadByOneSingle_Offset == 0x3f0, "UTslGunAnimInstance::ReloadByOneSingle offset is not 3f0");
	auto constexpr UTslGunAnimInstance_ReloadByOneEnd_Offset = offsetof(UTslGunAnimInstance, ReloadByOneEnd);
	static_assert(UTslGunAnimInstance_ReloadByOneEnd_Offset == 0x400, "UTslGunAnimInstance::ReloadByOneEnd offset is not 400");
	auto constexpr UTslGunAnimInstance_WeaponCharge_Offset = offsetof(UTslGunAnimInstance, WeaponCharge);
	static_assert(UTslGunAnimInstance_WeaponCharge_Offset == 0x410, "UTslGunAnimInstance::WeaponCharge offset is not 410");
	auto constexpr UTslGunAnimInstance_FireSelect_Offset = offsetof(UTslGunAnimInstance, FireSelect);
	static_assert(UTslGunAnimInstance_FireSelect_Offset == 0x420, "UTslGunAnimInstance::FireSelect offset is not 420");
	auto constexpr UTslGunAnimInstance_CancelReload_Offset = offsetof(UTslGunAnimInstance, CancelReload);
	static_assert(UTslGunAnimInstance_CancelReload_Offset == 0x430, "UTslGunAnimInstance::CancelReload offset is not 430");
	auto constexpr UTslGunAnimInstance_Name_FireMode_Semi_Offset = offsetof(UTslGunAnimInstance, Name_FireMode_Semi);
	static_assert(UTslGunAnimInstance_Name_FireMode_Semi_Offset == 0x440, "UTslGunAnimInstance::Name_FireMode_Semi offset is not 440");
	auto constexpr UTslGunAnimInstance_Name_FireMode_Burst_Offset = offsetof(UTslGunAnimInstance, Name_FireMode_Burst);
	static_assert(UTslGunAnimInstance_Name_FireMode_Burst_Offset == 0x448, "UTslGunAnimInstance::Name_FireMode_Burst offset is not 448");
	auto constexpr UTslGunAnimInstance_Name_FireMode_Fullauto_Offset = offsetof(UTslGunAnimInstance, Name_FireMode_Fullauto);
	static_assert(UTslGunAnimInstance_Name_FireMode_Fullauto_Offset == 0x450, "UTslGunAnimInstance::Name_FireMode_Fullauto offset is not 450");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
