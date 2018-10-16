#pragma once
#include "UAircraftCarePackage.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAircraftCarePackage_FlareGun_C // Size: 0x5DC
	: public UAircraftCarePackage // Size: 0x5B0
{
private:
	typedef UAircraftCarePackage_FlareGun_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115339); // id32("BlueprintGeneratedClass AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x5B0 Size: 0x8 - StructProperty AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.UberGraphFrame */
	ExternalPtr<struct UParticleSystemComponent> P_AircraftRotor; /* Ofs: 0x5B8 Size: 0x8 - ObjectProperty AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.P_AircraftRotor */
	ExternalPtr<struct UProjectileMovementComponent> ProjectileMovement; /* Ofs: 0x5C0 Size: 0x8 - ObjectProperty AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.ProjectileMovement */
	ExternalPtr<struct UAkComponent> Ak; /* Ofs: 0x5C8 Size: 0x8 - ObjectProperty AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.Ak */
	float Sound_InterptTime; /* Ofs: 0x5D0 Size: 0x4 - FloatProperty AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.Sound_InterptTime */
	float Sound_TargetValue; /* Ofs: 0x5D4 Size: 0x4 - FloatProperty AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.Sound_TargetValue */
	float Sound_CurrentValue; /* Ofs: 0x5D8 Size: 0x4 - FloatProperty AircraftCarePackage_FlareGun.AircraftCarePackage_FlareGun_C.Sound_CurrentValue */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetP_AircraftRotor(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetProjectileMovement(t_structHelper inst, ExternalPtr<struct UProjectileMovementComponent> value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetAk(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetSound_InterptTime(t_structHelper inst, float value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetSound_TargetValue(t_structHelper inst, float value) { inst.WriteOffset(0x5D4, value); }
	inline bool SetSound_CurrentValue(t_structHelper inst, float value) { inst.WriteOffset(0x5D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAircraftCarePackage_FlareGun_C = sizeof(UAircraftCarePackage_FlareGun_C); // 1500
    static_assert(sizeof(UAircraftCarePackage_FlareGun_C) == 0x5DC, "Size of UAircraftCarePackage_FlareGun_C is not correct.");
	auto constexpr UAircraftCarePackage_FlareGun_C_UberGraphFrame_Offset = offsetof(UAircraftCarePackage_FlareGun_C, UberGraphFrame);
	static_assert(UAircraftCarePackage_FlareGun_C_UberGraphFrame_Offset == 0x5b0, "UAircraftCarePackage_FlareGun_C::UberGraphFrame offset is not 5b0");
	auto constexpr UAircraftCarePackage_FlareGun_C_P_AircraftRotor_Offset = offsetof(UAircraftCarePackage_FlareGun_C, P_AircraftRotor);
	static_assert(UAircraftCarePackage_FlareGun_C_P_AircraftRotor_Offset == 0x5b8, "UAircraftCarePackage_FlareGun_C::P_AircraftRotor offset is not 5b8");
	auto constexpr UAircraftCarePackage_FlareGun_C_ProjectileMovement_Offset = offsetof(UAircraftCarePackage_FlareGun_C, ProjectileMovement);
	static_assert(UAircraftCarePackage_FlareGun_C_ProjectileMovement_Offset == 0x5c0, "UAircraftCarePackage_FlareGun_C::ProjectileMovement offset is not 5c0");
	auto constexpr UAircraftCarePackage_FlareGun_C_Ak_Offset = offsetof(UAircraftCarePackage_FlareGun_C, Ak);
	static_assert(UAircraftCarePackage_FlareGun_C_Ak_Offset == 0x5c8, "UAircraftCarePackage_FlareGun_C::Ak offset is not 5c8");
	auto constexpr UAircraftCarePackage_FlareGun_C_Sound_InterptTime_Offset = offsetof(UAircraftCarePackage_FlareGun_C, Sound_InterptTime);
	static_assert(UAircraftCarePackage_FlareGun_C_Sound_InterptTime_Offset == 0x5d0, "UAircraftCarePackage_FlareGun_C::Sound_InterptTime offset is not 5d0");
	auto constexpr UAircraftCarePackage_FlareGun_C_Sound_TargetValue_Offset = offsetof(UAircraftCarePackage_FlareGun_C, Sound_TargetValue);
	static_assert(UAircraftCarePackage_FlareGun_C_Sound_TargetValue_Offset == 0x5d4, "UAircraftCarePackage_FlareGun_C::Sound_TargetValue offset is not 5d4");
	auto constexpr UAircraftCarePackage_FlareGun_C_Sound_CurrentValue_Offset = offsetof(UAircraftCarePackage_FlareGun_C, Sound_CurrentValue);
	static_assert(UAircraftCarePackage_FlareGun_C_Sound_CurrentValue_Offset == 0x5d8, "UAircraftCarePackage_FlareGun_C::Sound_CurrentValue offset is not 5d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
