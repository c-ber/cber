#pragma once
#include "UParticleModuleLocationPrimitiveSphere.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationPrimitiveSphere_Seeded // Size: 0x120
	: public UParticleModuleLocationPrimitiveSphere // Size: 0x100
{
private:
	typedef UParticleModuleLocationPrimitiveSphere_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1107); // id32("Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0x100 Size: 0x20 - StructProperty Engine.ParticleModuleLocationPrimitiveSphere_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0x100, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationPrimitiveSphere_Seeded = sizeof(UParticleModuleLocationPrimitiveSphere_Seeded); // 288
    static_assert(sizeof(UParticleModuleLocationPrimitiveSphere_Seeded) == 0x120, "Size of UParticleModuleLocationPrimitiveSphere_Seeded is not correct.");
	auto constexpr UParticleModuleLocationPrimitiveSphere_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleLocationPrimitiveSphere_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleLocationPrimitiveSphere_Seeded_RandomSeedInfo_Offset == 0x100, "UParticleModuleLocationPrimitiveSphere_Seeded::RandomSeedInfo offset is not 100");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
