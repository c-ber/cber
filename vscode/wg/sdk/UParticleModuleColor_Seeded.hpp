#pragma once
#include "UParticleModuleColor.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleColor_Seeded // Size: 0xE8
	: public UParticleModuleColor // Size: 0xC8
{
private:
	typedef UParticleModuleColor_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1077); // id32("Class Engine.ParticleModuleColor_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0xC8 Size: 0x20 - StructProperty Engine.ParticleModuleColor_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleColor_Seeded = sizeof(UParticleModuleColor_Seeded); // 232
    static_assert(sizeof(UParticleModuleColor_Seeded) == 0xE8, "Size of UParticleModuleColor_Seeded is not correct.");
	auto constexpr UParticleModuleColor_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleColor_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleColor_Seeded_RandomSeedInfo_Offset == 0xc8, "UParticleModuleColor_Seeded::RandomSeedInfo offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
