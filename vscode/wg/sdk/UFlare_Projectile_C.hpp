#pragma once
#include "UTslProjectile_Flare.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFlare_Projectile_C // Size: 0x588
	: public UTslProjectile_Flare // Size: 0x520
{
private:
	typedef UFlare_Projectile_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(130453); // id32("BlueprintGeneratedClass Flare_Projectile.Flare_Projectile_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x520 Size: 0x8 - StructProperty Flare_Projectile.Flare_Projectile_C.UberGraphFrame */
	ExternalPtr<struct UParticleSystemComponent> ParticleEffect_Tail; /* Ofs: 0x528 Size: 0x8 - ObjectProperty Flare_Projectile.Flare_Projectile_C.ParticleEffect_Tail */
	ExternalPtr<struct UAkComponent> AkAudio_Fire; /* Ofs: 0x530 Size: 0x8 - ObjectProperty Flare_Projectile.Flare_Projectile_C.AkAudio_Fire */
	ExternalPtr<struct UAkComponent> AkAudio_Loop; /* Ofs: 0x538 Size: 0x8 - ObjectProperty Flare_Projectile.Flare_Projectile_C.AkAudio_Loop */
	ExternalPtr<struct UParticleSystemComponent> ParticleEffect_Flare; /* Ofs: 0x540 Size: 0x8 - ObjectProperty Flare_Projectile.Flare_Projectile_C.ParticleEffect_Flare */
	uint8_t boolField548;
	uint8_t UnknownData549[0x3];
	FVector LastLocation; /* Ofs: 0x54C Size: 0xC - StructProperty Flare_Projectile.Flare_Projectile_C.LastLocation */
	FVector ProcessedLocation; /* Ofs: 0x558 Size: 0xC - StructProperty Flare_Projectile.Flare_Projectile_C.ProcessedLocation */
	uint8_t boolField564;
	uint8_t UnknownData565[0x3];
	int32_t AkID; /* Ofs: 0x568 Size: 0x4 - IntProperty Flare_Projectile.Flare_Projectile_C.AkID */
	uint8_t UnknownData56C[0x4];
	ExternalPtr<struct UAkAudioEvent> ShotAkEvent; /* Ofs: 0x570 Size: 0x8 - ObjectProperty Flare_Projectile.Flare_Projectile_C.ShotAkEvent */
	ExternalPtr<struct UParticleSystem> Flare_Dry; /* Ofs: 0x578 Size: 0x8 - ObjectProperty Flare_Projectile.Flare_Projectile_C.Flare_Dry */
	ExternalPtr<struct UParticleSystem> Flare_Wet; /* Ofs: 0x580 Size: 0x8 - ObjectProperty Flare_Projectile.Flare_Projectile_C.Flare_Wet */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x520, value); }
	inline bool SetParticleEffect_Tail(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x528, value); }
	inline bool SetAkAudio_Fire(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x530, value); }
	inline bool SetAkAudio_Loop(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x538, value); }
	inline bool SetParticleEffect_Flare(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x540, value); }
	inline bool HighAltReached()
	{
		return boolField548& 0x1;
	}
	inline bool SetHighAltReached(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x548, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLastLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x54C, value); }
	inline bool SetProcessedLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x558, value); }
	inline bool bIsPlayingTrailAk()
	{
		return boolField564& 0x1;
	}
	inline bool SetbIsPlayingTrailAk(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x564, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAkID(t_structHelper inst, int32_t value) { inst.WriteOffset(0x568, value); }
	inline bool SetShotAkEvent(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x570, value); }
	inline bool SetFlare_Dry(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x578, value); }
	inline bool SetFlare_Wet(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x580, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFlare_Projectile_C = sizeof(UFlare_Projectile_C); // 1416
    static_assert(sizeof(UFlare_Projectile_C) == 0x588, "Size of UFlare_Projectile_C is not correct.");
	auto constexpr UFlare_Projectile_C_UberGraphFrame_Offset = offsetof(UFlare_Projectile_C, UberGraphFrame);
	static_assert(UFlare_Projectile_C_UberGraphFrame_Offset == 0x520, "UFlare_Projectile_C::UberGraphFrame offset is not 520");
	auto constexpr UFlare_Projectile_C_ParticleEffect_Tail_Offset = offsetof(UFlare_Projectile_C, ParticleEffect_Tail);
	static_assert(UFlare_Projectile_C_ParticleEffect_Tail_Offset == 0x528, "UFlare_Projectile_C::ParticleEffect_Tail offset is not 528");
	auto constexpr UFlare_Projectile_C_AkAudio_Fire_Offset = offsetof(UFlare_Projectile_C, AkAudio_Fire);
	static_assert(UFlare_Projectile_C_AkAudio_Fire_Offset == 0x530, "UFlare_Projectile_C::AkAudio_Fire offset is not 530");
	auto constexpr UFlare_Projectile_C_AkAudio_Loop_Offset = offsetof(UFlare_Projectile_C, AkAudio_Loop);
	static_assert(UFlare_Projectile_C_AkAudio_Loop_Offset == 0x538, "UFlare_Projectile_C::AkAudio_Loop offset is not 538");
	auto constexpr UFlare_Projectile_C_ParticleEffect_Flare_Offset = offsetof(UFlare_Projectile_C, ParticleEffect_Flare);
	static_assert(UFlare_Projectile_C_ParticleEffect_Flare_Offset == 0x540, "UFlare_Projectile_C::ParticleEffect_Flare offset is not 540");
	auto constexpr UFlare_Projectile_C_boolField548_Offset = offsetof(UFlare_Projectile_C, boolField548);
	static_assert(UFlare_Projectile_C_boolField548_Offset == 0x548, "UFlare_Projectile_C::boolField548 offset is not 548");
	auto constexpr UFlare_Projectile_C_LastLocation_Offset = offsetof(UFlare_Projectile_C, LastLocation);
	static_assert(UFlare_Projectile_C_LastLocation_Offset == 0x54c, "UFlare_Projectile_C::LastLocation offset is not 54c");
	auto constexpr UFlare_Projectile_C_ProcessedLocation_Offset = offsetof(UFlare_Projectile_C, ProcessedLocation);
	static_assert(UFlare_Projectile_C_ProcessedLocation_Offset == 0x558, "UFlare_Projectile_C::ProcessedLocation offset is not 558");
	auto constexpr UFlare_Projectile_C_boolField564_Offset = offsetof(UFlare_Projectile_C, boolField564);
	static_assert(UFlare_Projectile_C_boolField564_Offset == 0x564, "UFlare_Projectile_C::boolField564 offset is not 564");
	auto constexpr UFlare_Projectile_C_AkID_Offset = offsetof(UFlare_Projectile_C, AkID);
	static_assert(UFlare_Projectile_C_AkID_Offset == 0x568, "UFlare_Projectile_C::AkID offset is not 568");
	auto constexpr UFlare_Projectile_C_ShotAkEvent_Offset = offsetof(UFlare_Projectile_C, ShotAkEvent);
	static_assert(UFlare_Projectile_C_ShotAkEvent_Offset == 0x570, "UFlare_Projectile_C::ShotAkEvent offset is not 570");
	auto constexpr UFlare_Projectile_C_Flare_Dry_Offset = offsetof(UFlare_Projectile_C, Flare_Dry);
	static_assert(UFlare_Projectile_C_Flare_Dry_Offset == 0x578, "UFlare_Projectile_C::Flare_Dry offset is not 578");
	auto constexpr UFlare_Projectile_C_Flare_Wet_Offset = offsetof(UFlare_Projectile_C, Flare_Wet);
	static_assert(UFlare_Projectile_C_Flare_Wet_Offset == 0x580, "UFlare_Projectile_C::Flare_Wet offset is not 580");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
