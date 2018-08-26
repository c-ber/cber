#pragma once
#include "UParticleModuleMeshRotationRate.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleMeshRotationRate_Seeded // Size: 0xA8
	: public UParticleModuleMeshRotationRate // Size: 0x88
{
private:
	typedef UParticleModuleMeshRotationRate_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1131); // id32("Class Engine.ParticleModuleMeshRotationRate_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0x88 Size: 0x20 - StructProperty Engine.ParticleModuleMeshRotationRate_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0x88, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleMeshRotationRate_Seeded = sizeof(UParticleModuleMeshRotationRate_Seeded); // 168
    static_assert(sizeof(UParticleModuleMeshRotationRate_Seeded) == 0xA8, "Size of UParticleModuleMeshRotationRate_Seeded is not correct.");
	auto constexpr UParticleModuleMeshRotationRate_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleMeshRotationRate_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleMeshRotationRate_Seeded_RandomSeedInfo_Offset == 0x88, "UParticleModuleMeshRotationRate_Seeded::RandomSeedInfo offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
