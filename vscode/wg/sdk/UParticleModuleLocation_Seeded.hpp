#pragma once
#include "UParticleModuleLocation.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocation_Seeded // Size: 0xB0
	: public UParticleModuleLocation // Size: 0x90
{
private:
	typedef UParticleModuleLocation_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1096); // id32("Class Engine.ParticleModuleLocation_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0x90 Size: 0x20 - StructProperty Engine.ParticleModuleLocation_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocation_Seeded = sizeof(UParticleModuleLocation_Seeded); // 176
    static_assert(sizeof(UParticleModuleLocation_Seeded) == 0xB0, "Size of UParticleModuleLocation_Seeded is not correct.");
	auto constexpr UParticleModuleLocation_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleLocation_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleLocation_Seeded_RandomSeedInfo_Offset == 0x90, "UParticleModuleLocation_Seeded::RandomSeedInfo offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
