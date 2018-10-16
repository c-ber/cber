#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEmitter // Size: 0x460
	: public UActor // Size: 0x410
{
private:
	typedef UEmitter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1738); // id32("Class Engine.Emitter")
		return ptr;
	}
//	ExternalPtr<struct UParticleSystemComponent> ParticleSystemComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.Emitter.ParticleSystemComponent */
	uint8_t boolField410;
	uint8_t UnknownData411[0x7];
	FScriptMulticastDelegate OnParticleSpawn; /* Ofs: 0x418 Size: 0x10 - MulticastDelegateProperty Engine.Emitter.OnParticleSpawn */
	FScriptMulticastDelegate OnParticleBurst; /* Ofs: 0x428 Size: 0x10 - MulticastDelegateProperty Engine.Emitter.OnParticleBurst */
	FScriptMulticastDelegate OnParticleDeath; /* Ofs: 0x438 Size: 0x10 - MulticastDelegateProperty Engine.Emitter.OnParticleDeath */
	FScriptMulticastDelegate OnParticleCollide; /* Ofs: 0x448 Size: 0x10 - MulticastDelegateProperty Engine.Emitter.OnParticleCollide */
	uint8_t UnknownData458[0x8];


//	inline bool SetParticleSystemComponent(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool bDestroyOnSystemFinish()
	{
		return boolField410& 0x1;
	}
	inline bool SetbDestroyOnSystemFinish(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPostUpdateTickGroup()
	{
		return boolField410& 0x2;
	}
	inline bool SetbPostUpdateTickGroup(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bCurrentlyActive()
	{
		return boolField410& 0x4;
	}
	inline bool SetbCurrentlyActive(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetOnParticleSpawn(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x418, value); }
	inline bool SetOnParticleBurst(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x428, value); }
	inline bool SetOnParticleDeath(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x438, value); }
	inline bool SetOnParticleCollide(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x448, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEmitter = sizeof(UEmitter); // 1120
    static_assert(sizeof(UEmitter) == 0x460, "Size of UEmitter is not correct.");
//	auto constexpr UEmitter_ParticleSystemComponent_Offset = offsetof(UEmitter, ParticleSystemComponent);
//	static_assert(UEmitter_ParticleSystemComponent_Offset == 0x408, "UEmitter::ParticleSystemComponent offset is not 408");
	auto constexpr UEmitter_boolField410_Offset = offsetof(UEmitter, boolField410);
	static_assert(UEmitter_boolField410_Offset == 0x410, "UEmitter::boolField410 offset is not 410");
	auto constexpr UEmitter_OnParticleSpawn_Offset = offsetof(UEmitter, OnParticleSpawn);
	static_assert(UEmitter_OnParticleSpawn_Offset == 0x418, "UEmitter::OnParticleSpawn offset is not 418");
	auto constexpr UEmitter_OnParticleBurst_Offset = offsetof(UEmitter, OnParticleBurst);
	static_assert(UEmitter_OnParticleBurst_Offset == 0x428, "UEmitter::OnParticleBurst offset is not 428");
	auto constexpr UEmitter_OnParticleDeath_Offset = offsetof(UEmitter, OnParticleDeath);
	static_assert(UEmitter_OnParticleDeath_Offset == 0x438, "UEmitter::OnParticleDeath offset is not 438");
	auto constexpr UEmitter_OnParticleCollide_Offset = offsetof(UEmitter, OnParticleCollide);
	static_assert(UEmitter_OnParticleCollide_Offset == 0x448, "UEmitter::OnParticleCollide offset is not 448");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
