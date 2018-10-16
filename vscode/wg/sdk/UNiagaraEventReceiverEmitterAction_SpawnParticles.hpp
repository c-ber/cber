#pragma once
#include "UNiagaraEventReceiverEmitterAction.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraEventReceiverEmitterAction_SpawnParticles // Size: 0x38
	: public UNiagaraEventReceiverEmitterAction // Size: 0x30
{
private:
	typedef UNiagaraEventReceiverEmitterAction_SpawnParticles t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(26); // id32("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles")
		return ptr;
	}
	uint32_t NumParticles; /* Ofs: 0x30 Size: 0x4 - UInt32Property Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles.NumParticles */
	uint8_t UnknownData34[0x4];


	inline bool SetNumParticles(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraEventReceiverEmitterAction_SpawnParticles = sizeof(UNiagaraEventReceiverEmitterAction_SpawnParticles); // 56
    static_assert(sizeof(UNiagaraEventReceiverEmitterAction_SpawnParticles) == 0x38, "Size of UNiagaraEventReceiverEmitterAction_SpawnParticles is not correct.");
	auto constexpr UNiagaraEventReceiverEmitterAction_SpawnParticles_NumParticles_Offset = offsetof(UNiagaraEventReceiverEmitterAction_SpawnParticles, NumParticles);
	static_assert(UNiagaraEventReceiverEmitterAction_SpawnParticles_NumParticles_Offset == 0x30, "UNiagaraEventReceiverEmitterAction_SpawnParticles::NumParticles offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
