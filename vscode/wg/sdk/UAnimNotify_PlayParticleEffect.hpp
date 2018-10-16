#pragma once
#include "UAnimNotify.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotify_PlayParticleEffect // Size: 0x80
	: public UAnimNotify // Size: 0x40
{
private:
	typedef UAnimNotify_PlayParticleEffect t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(272); // id32("Class Engine.AnimNotify_PlayParticleEffect")
		return ptr;
	}
	ExternalPtr<struct UParticleSystem> PSTemplate; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Engine.AnimNotify_PlayParticleEffect.PSTemplate */
	FVector LocationOffset; /* Ofs: 0x48 Size: 0xC - StructProperty Engine.AnimNotify_PlayParticleEffect.LocationOffset */
	FRotator RotationOffset; /* Ofs: 0x54 Size: 0xC - StructProperty Engine.AnimNotify_PlayParticleEffect.RotationOffset */
	uint8_t UnknownData60[0x10];
	uint8_t boolField70;
	uint8_t UnknownData71[0x7];
	FName SocketName; /* Ofs: 0x78 Size: 0x8 - NameProperty Engine.AnimNotify_PlayParticleEffect.SocketName */


	inline bool SetPSTemplate(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x40, value); }
	inline bool SetLocationOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x48, value); }
	inline bool SetRotationOffset(t_structHelper inst, FRotator value) { inst.WriteOffset(0x54, value); }
	inline bool Attached()
	{
		return boolField70& 0x1;
	}
	inline bool SetAttached(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotify_PlayParticleEffect = sizeof(UAnimNotify_PlayParticleEffect); // 128
    static_assert(sizeof(UAnimNotify_PlayParticleEffect) == 0x80, "Size of UAnimNotify_PlayParticleEffect is not correct.");
	auto constexpr UAnimNotify_PlayParticleEffect_PSTemplate_Offset = offsetof(UAnimNotify_PlayParticleEffect, PSTemplate);
	static_assert(UAnimNotify_PlayParticleEffect_PSTemplate_Offset == 0x40, "UAnimNotify_PlayParticleEffect::PSTemplate offset is not 40");
	auto constexpr UAnimNotify_PlayParticleEffect_LocationOffset_Offset = offsetof(UAnimNotify_PlayParticleEffect, LocationOffset);
	static_assert(UAnimNotify_PlayParticleEffect_LocationOffset_Offset == 0x48, "UAnimNotify_PlayParticleEffect::LocationOffset offset is not 48");
	auto constexpr UAnimNotify_PlayParticleEffect_RotationOffset_Offset = offsetof(UAnimNotify_PlayParticleEffect, RotationOffset);
	static_assert(UAnimNotify_PlayParticleEffect_RotationOffset_Offset == 0x54, "UAnimNotify_PlayParticleEffect::RotationOffset offset is not 54");
	auto constexpr UAnimNotify_PlayParticleEffect_boolField70_Offset = offsetof(UAnimNotify_PlayParticleEffect, boolField70);
	static_assert(UAnimNotify_PlayParticleEffect_boolField70_Offset == 0x70, "UAnimNotify_PlayParticleEffect::boolField70 offset is not 70");
	auto constexpr UAnimNotify_PlayParticleEffect_SocketName_Offset = offsetof(UAnimNotify_PlayParticleEffect, SocketName);
	static_assert(UAnimNotify_PlayParticleEffect_SocketName_Offset == 0x78, "UAnimNotify_PlayParticleEffect::SocketName offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
