#pragma once
#include "UParticleModuleLifetime.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLifetime_Seeded // Size: 0x90
	: public UParticleModuleLifetime // Size: 0x70
{
private:
	typedef UParticleModuleLifetime_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1090); // id32("Class Engine.ParticleModuleLifetime_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0x70 Size: 0x20 - StructProperty Engine.ParticleModuleLifetime_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLifetime_Seeded = sizeof(UParticleModuleLifetime_Seeded); // 144
    static_assert(sizeof(UParticleModuleLifetime_Seeded) == 0x90, "Size of UParticleModuleLifetime_Seeded is not correct.");
	auto constexpr UParticleModuleLifetime_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleLifetime_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleLifetime_Seeded_RandomSeedInfo_Offset == 0x70, "UParticleModuleLifetime_Seeded::RandomSeedInfo offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
