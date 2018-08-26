#pragma once
#include "UParticleModuleLocationPrimitiveCylinder.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationPrimitiveCylinder_Seeded // Size: 0x168
	: public UParticleModuleLocationPrimitiveCylinder // Size: 0x148
{
private:
	typedef UParticleModuleLocationPrimitiveCylinder_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1105); // id32("Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0x148 Size: 0x20 - StructProperty Engine.ParticleModuleLocationPrimitiveCylinder_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0x148, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationPrimitiveCylinder_Seeded = sizeof(UParticleModuleLocationPrimitiveCylinder_Seeded); // 360
    static_assert(sizeof(UParticleModuleLocationPrimitiveCylinder_Seeded) == 0x168, "Size of UParticleModuleLocationPrimitiveCylinder_Seeded is not correct.");
	auto constexpr UParticleModuleLocationPrimitiveCylinder_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleLocationPrimitiveCylinder_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleLocationPrimitiveCylinder_Seeded_RandomSeedInfo_Offset == 0x148, "UParticleModuleLocationPrimitiveCylinder_Seeded::RandomSeedInfo offset is not 148");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
