#pragma once
#include "UParticleModuleEventReceiverBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleEventReceiverKillParticles // Size: 0x50
	: public UParticleModuleEventReceiverBase // Size: 0x48
{
private:
	typedef UParticleModuleEventReceiverKillParticles t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1083); // id32("Class Engine.ParticleModuleEventReceiverKillParticles")
		return ptr;
	}
	uint8_t boolField48;
	uint8_t UnknownData49[0x7];


	inline bool bStopSpawning()
	{
		return boolField48& 0x1;
	}
	inline bool SetbStopSpawning(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleEventReceiverKillParticles = sizeof(UParticleModuleEventReceiverKillParticles); // 80
    static_assert(sizeof(UParticleModuleEventReceiverKillParticles) == 0x50, "Size of UParticleModuleEventReceiverKillParticles is not correct.");
	auto constexpr UParticleModuleEventReceiverKillParticles_boolField48_Offset = offsetof(UParticleModuleEventReceiverKillParticles, boolField48);
	static_assert(UParticleModuleEventReceiverKillParticles_boolField48_Offset == 0x48, "UParticleModuleEventReceiverKillParticles::boolField48 offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
