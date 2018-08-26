#pragma once
#include "UParticleModule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleRotationRateBase // Size: 0x38
	: public UParticleModule // Size: 0x38
{
private:
	typedef UParticleModuleRotationRateBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1129); // id32("Class Engine.ParticleModuleRotationRateBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleRotationRateBase = sizeof(UParticleModuleRotationRateBase); // 56
    static_assert(sizeof(UParticleModuleRotationRateBase) == 0x38, "Size of UParticleModuleRotationRateBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
