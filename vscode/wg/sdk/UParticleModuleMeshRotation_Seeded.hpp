#pragma once
#include "UParticleModuleMeshRotation.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleMeshRotation_Seeded // Size: 0xB0
	: public UParticleModuleMeshRotation // Size: 0x90
{
private:
	typedef UParticleModuleMeshRotation_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1125); // id32("Class Engine.ParticleModuleMeshRotation_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0x90 Size: 0x20 - StructProperty Engine.ParticleModuleMeshRotation_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleMeshRotation_Seeded = sizeof(UParticleModuleMeshRotation_Seeded); // 176
    static_assert(sizeof(UParticleModuleMeshRotation_Seeded) == 0xB0, "Size of UParticleModuleMeshRotation_Seeded is not correct.");
	auto constexpr UParticleModuleMeshRotation_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleMeshRotation_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleMeshRotation_Seeded_RandomSeedInfo_Offset == 0x90, "UParticleModuleMeshRotation_Seeded::RandomSeedInfo offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
