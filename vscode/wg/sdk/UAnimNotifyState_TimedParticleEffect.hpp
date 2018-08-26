#pragma once
#include "UAnimNotifyState.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotifyState_TimedParticleEffect // Size: 0x68
	: public UAnimNotifyState // Size: 0x38
{
private:
	typedef UAnimNotifyState_TimedParticleEffect t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(277); // id32("Class Engine.AnimNotifyState_TimedParticleEffect")
		return ptr;
	}
	ExternalPtr<struct UParticleSystem> PSTemplate; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.AnimNotifyState_TimedParticleEffect.PSTemplate */
	FName SocketName; /* Ofs: 0x40 Size: 0x8 - NameProperty Engine.AnimNotifyState_TimedParticleEffect.SocketName */
	FVector LocationOffset; /* Ofs: 0x48 Size: 0xC - StructProperty Engine.AnimNotifyState_TimedParticleEffect.LocationOffset */
	FRotator RotationOffset; /* Ofs: 0x54 Size: 0xC - StructProperty Engine.AnimNotifyState_TimedParticleEffect.RotationOffset */
	uint8_t boolField60;
	uint8_t UnknownData61[0x7];


	inline bool SetPSTemplate(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x38, value); }
	inline bool SetSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
	inline bool SetLocationOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x48, value); }
	inline bool SetRotationOffset(t_structHelper inst, FRotator value) { inst.WriteOffset(0x54, value); }
	inline bool bDestroyAtEnd()
	{
		return boolField60& 0x1;
	}
	inline bool SetbDestroyAtEnd(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotifyState_TimedParticleEffect = sizeof(UAnimNotifyState_TimedParticleEffect); // 104
    static_assert(sizeof(UAnimNotifyState_TimedParticleEffect) == 0x68, "Size of UAnimNotifyState_TimedParticleEffect is not correct.");
	auto constexpr UAnimNotifyState_TimedParticleEffect_PSTemplate_Offset = offsetof(UAnimNotifyState_TimedParticleEffect, PSTemplate);
	static_assert(UAnimNotifyState_TimedParticleEffect_PSTemplate_Offset == 0x38, "UAnimNotifyState_TimedParticleEffect::PSTemplate offset is not 38");
	auto constexpr UAnimNotifyState_TimedParticleEffect_SocketName_Offset = offsetof(UAnimNotifyState_TimedParticleEffect, SocketName);
	static_assert(UAnimNotifyState_TimedParticleEffect_SocketName_Offset == 0x40, "UAnimNotifyState_TimedParticleEffect::SocketName offset is not 40");
	auto constexpr UAnimNotifyState_TimedParticleEffect_LocationOffset_Offset = offsetof(UAnimNotifyState_TimedParticleEffect, LocationOffset);
	static_assert(UAnimNotifyState_TimedParticleEffect_LocationOffset_Offset == 0x48, "UAnimNotifyState_TimedParticleEffect::LocationOffset offset is not 48");
	auto constexpr UAnimNotifyState_TimedParticleEffect_RotationOffset_Offset = offsetof(UAnimNotifyState_TimedParticleEffect, RotationOffset);
	static_assert(UAnimNotifyState_TimedParticleEffect_RotationOffset_Offset == 0x54, "UAnimNotifyState_TimedParticleEffect::RotationOffset offset is not 54");
	auto constexpr UAnimNotifyState_TimedParticleEffect_boolField60_Offset = offsetof(UAnimNotifyState_TimedParticleEffect, boolField60);
	static_assert(UAnimNotifyState_TimedParticleEffect_boolField60_Offset == 0x60, "UAnimNotifyState_TimedParticleEffect::boolField60 offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
