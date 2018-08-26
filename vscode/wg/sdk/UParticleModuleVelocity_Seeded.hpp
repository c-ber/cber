#pragma once
#include "UParticleModuleVelocity.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVelocity_Seeded // Size: 0xE8
	: public UParticleModuleVelocity // Size: 0xC8
{
private:
	typedef UParticleModuleVelocity_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1166); // id32("Class Engine.ParticleModuleVelocity_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0xC8 Size: 0x20 - StructProperty Engine.ParticleModuleVelocity_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVelocity_Seeded = sizeof(UParticleModuleVelocity_Seeded); // 232
    static_assert(sizeof(UParticleModuleVelocity_Seeded) == 0xE8, "Size of UParticleModuleVelocity_Seeded is not correct.");
	auto constexpr UParticleModuleVelocity_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleVelocity_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleVelocity_Seeded_RandomSeedInfo_Offset == 0xc8, "UParticleModuleVelocity_Seeded::RandomSeedInfo offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
