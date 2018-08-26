#pragma once
#include "UParticleModuleRotationRateBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleRotationRateMultiplyLife // Size: 0x70
	: public UParticleModuleRotationRateBase // Size: 0x38
{
private:
	typedef UParticleModuleRotationRateMultiplyLife t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1136); // id32("Class Engine.ParticleModuleRotationRateMultiplyLife")
		return ptr;
	}
	FRawDistributionFloat LifeMultiplier; /* Ofs: 0x38 Size: 0x38 - StructProperty Engine.ParticleModuleRotationRateMultiplyLife.LifeMultiplier */


	inline bool SetLifeMultiplier(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleRotationRateMultiplyLife = sizeof(UParticleModuleRotationRateMultiplyLife); // 112
    static_assert(sizeof(UParticleModuleRotationRateMultiplyLife) == 0x70, "Size of UParticleModuleRotationRateMultiplyLife is not correct.");
	auto constexpr UParticleModuleRotationRateMultiplyLife_LifeMultiplier_Offset = offsetof(UParticleModuleRotationRateMultiplyLife, LifeMultiplier);
	static_assert(UParticleModuleRotationRateMultiplyLife_LifeMultiplier_Offset == 0x38, "UParticleModuleRotationRateMultiplyLife::LifeMultiplier offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
