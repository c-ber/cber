#pragma once
#include "UActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPowerup_Base_C // Size: 0x458
	: public UActor // Size: 0x410
{
private:
	typedef UPowerup_Base_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(93032); // id32("BlueprintGeneratedClass Powerup_Base.Powerup_Base_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty Powerup_Base.Powerup_Base_C.UberGraphFrame */
	ExternalPtr<struct UTslFPPShadowSupportComponent> TslFPPShadowSupport; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Powerup_Base.Powerup_Base_C.TslFPPShadowSupport */
	ExternalPtr<struct USkeletalMeshComponent> SkeletalMesh; /* Ofs: 0x420 Size: 0x8 - ObjectProperty Powerup_Base.Powerup_Base_C.SkeletalMesh */
	FVector Velocity; /* Ofs: 0x428 Size: 0xC - StructProperty Powerup_Base.Powerup_Base_C.Velocity */
	uint8_t UnknownData434[0x4];
	ExternalPtr<struct UAnimSequence> Animation; /* Ofs: 0x438 Size: 0x8 - ObjectProperty Powerup_Base.Powerup_Base_C.Animation */
	float Delay; /* Ofs: 0x440 Size: 0x4 - FloatProperty Powerup_Base.Powerup_Base_C.Delay */
	FRotator AngularVelocity; /* Ofs: 0x444 Size: 0xC - StructProperty Powerup_Base.Powerup_Base_C.AngularVelocity */
	FTimerHandle TimerHandle; /* Ofs: 0x450 Size: 0x8 - StructProperty Powerup_Base.Powerup_Base_C.TimerHandle */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetTslFPPShadowSupport(t_structHelper inst, ExternalPtr<struct UTslFPPShadowSupportComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetSkeletalMesh(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x428, value); }
	inline bool SetAnimation(t_structHelper inst, ExternalPtr<struct UAnimSequence> value) { inst.WriteOffset(0x438, value); }
	inline bool SetDelay(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool SetAngularVelocity(t_structHelper inst, FRotator value) { inst.WriteOffset(0x444, value); }
	inline bool SetTimerHandle(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x450, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPowerup_Base_C = sizeof(UPowerup_Base_C); // 1112
    static_assert(sizeof(UPowerup_Base_C) == 0x458, "Size of UPowerup_Base_C is not correct.");
	auto constexpr UPowerup_Base_C_UberGraphFrame_Offset = offsetof(UPowerup_Base_C, UberGraphFrame);
	static_assert(UPowerup_Base_C_UberGraphFrame_Offset == 0x410, "UPowerup_Base_C::UberGraphFrame offset is not 410");
	auto constexpr UPowerup_Base_C_TslFPPShadowSupport_Offset = offsetof(UPowerup_Base_C, TslFPPShadowSupport);
	static_assert(UPowerup_Base_C_TslFPPShadowSupport_Offset == 0x418, "UPowerup_Base_C::TslFPPShadowSupport offset is not 418");
	auto constexpr UPowerup_Base_C_SkeletalMesh_Offset = offsetof(UPowerup_Base_C, SkeletalMesh);
	static_assert(UPowerup_Base_C_SkeletalMesh_Offset == 0x420, "UPowerup_Base_C::SkeletalMesh offset is not 420");
	auto constexpr UPowerup_Base_C_Velocity_Offset = offsetof(UPowerup_Base_C, Velocity);
	static_assert(UPowerup_Base_C_Velocity_Offset == 0x428, "UPowerup_Base_C::Velocity offset is not 428");
	auto constexpr UPowerup_Base_C_Animation_Offset = offsetof(UPowerup_Base_C, Animation);
	static_assert(UPowerup_Base_C_Animation_Offset == 0x438, "UPowerup_Base_C::Animation offset is not 438");
	auto constexpr UPowerup_Base_C_Delay_Offset = offsetof(UPowerup_Base_C, Delay);
	static_assert(UPowerup_Base_C_Delay_Offset == 0x440, "UPowerup_Base_C::Delay offset is not 440");
	auto constexpr UPowerup_Base_C_AngularVelocity_Offset = offsetof(UPowerup_Base_C, AngularVelocity);
	static_assert(UPowerup_Base_C_AngularVelocity_Offset == 0x444, "UPowerup_Base_C::AngularVelocity offset is not 444");
	auto constexpr UPowerup_Base_C_TimerHandle_Offset = offsetof(UPowerup_Base_C, TimerHandle);
	static_assert(UPowerup_Base_C_TimerHandle_Offset == 0x450, "UPowerup_Base_C::TimerHandle offset is not 450");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
