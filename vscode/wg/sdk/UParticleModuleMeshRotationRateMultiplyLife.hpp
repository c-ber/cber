#pragma once
#include "UParticleModuleRotationRateBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleMeshRotationRateMultiplyLife // Size: 0x88
	: public UParticleModuleRotationRateBase // Size: 0x38
{
private:
	typedef UParticleModuleMeshRotationRateMultiplyLife t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1132); // id32("Class Engine.ParticleModuleMeshRotationRateMultiplyLife")
		return ptr;
	}
	FRawDistributionVector LifeMultiplier; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleMeshRotationRateMultiplyLife.LifeMultiplier */


	inline bool SetLifeMultiplier(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleMeshRotationRateMultiplyLife = sizeof(UParticleModuleMeshRotationRateMultiplyLife); // 136
    static_assert(sizeof(UParticleModuleMeshRotationRateMultiplyLife) == 0x88, "Size of UParticleModuleMeshRotationRateMultiplyLife is not correct.");
	auto constexpr UParticleModuleMeshRotationRateMultiplyLife_LifeMultiplier_Offset = offsetof(UParticleModuleMeshRotationRateMultiplyLife, LifeMultiplier);
	static_assert(UParticleModuleMeshRotationRateMultiplyLife_LifeMultiplier_Offset == 0x38, "UParticleModuleMeshRotationRateMultiplyLife::LifeMultiplier offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
