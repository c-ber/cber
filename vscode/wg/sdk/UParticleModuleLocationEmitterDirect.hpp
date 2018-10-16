#pragma once
#include "UParticleModuleLocationBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationEmitterDirect // Size: 0x40
	: public UParticleModuleLocationBase // Size: 0x38
{
private:
	typedef UParticleModuleLocationEmitterDirect t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1102); // id32("Class Engine.ParticleModuleLocationEmitterDirect")
		return ptr;
	}
	FName EmitterName; /* Ofs: 0x38 Size: 0x8 - NameProperty Engine.ParticleModuleLocationEmitterDirect.EmitterName */


	inline bool SetEmitterName(t_structHelper inst, FName value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationEmitterDirect = sizeof(UParticleModuleLocationEmitterDirect); // 64
    static_assert(sizeof(UParticleModuleLocationEmitterDirect) == 0x40, "Size of UParticleModuleLocationEmitterDirect is not correct.");
	auto constexpr UParticleModuleLocationEmitterDirect_EmitterName_Offset = offsetof(UParticleModuleLocationEmitterDirect, EmitterName);
	static_assert(UParticleModuleLocationEmitterDirect_EmitterName_Offset == 0x38, "UParticleModuleLocationEmitterDirect::EmitterName offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
