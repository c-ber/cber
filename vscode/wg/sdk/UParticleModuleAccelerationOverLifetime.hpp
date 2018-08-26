#pragma once
#include "UParticleModuleAccelerationBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleAccelerationOverLifetime // Size: 0x90
	: public UParticleModuleAccelerationBase // Size: 0x40
{
private:
	typedef UParticleModuleAccelerationOverLifetime t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1059); // id32("Class Engine.ParticleModuleAccelerationOverLifetime")
		return ptr;
	}
	FRawDistributionVector AccelOverLife; /* Ofs: 0x40 Size: 0x50 - StructProperty Engine.ParticleModuleAccelerationOverLifetime.AccelOverLife */


	inline bool SetAccelOverLife(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleAccelerationOverLifetime = sizeof(UParticleModuleAccelerationOverLifetime); // 144
    static_assert(sizeof(UParticleModuleAccelerationOverLifetime) == 0x90, "Size of UParticleModuleAccelerationOverLifetime is not correct.");
	auto constexpr UParticleModuleAccelerationOverLifetime_AccelOverLife_Offset = offsetof(UParticleModuleAccelerationOverLifetime, AccelOverLife);
	static_assert(UParticleModuleAccelerationOverLifetime_AccelOverLife_Offset == 0x40, "UParticleModuleAccelerationOverLifetime::AccelOverLife offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
