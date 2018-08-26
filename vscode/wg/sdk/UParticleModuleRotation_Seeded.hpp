#pragma once
#include "UParticleModuleRotation.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleRotation_Seeded // Size: 0x90
	: public UParticleModuleRotation // Size: 0x70
{
private:
	typedef UParticleModuleRotation_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1127); // id32("Class Engine.ParticleModuleRotation_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0x70 Size: 0x20 - StructProperty Engine.ParticleModuleRotation_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleRotation_Seeded = sizeof(UParticleModuleRotation_Seeded); // 144
    static_assert(sizeof(UParticleModuleRotation_Seeded) == 0x90, "Size of UParticleModuleRotation_Seeded is not correct.");
	auto constexpr UParticleModuleRotation_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleRotation_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleRotation_Seeded_RandomSeedInfo_Offset == 0x70, "UParticleModuleRotation_Seeded::RandomSeedInfo offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
