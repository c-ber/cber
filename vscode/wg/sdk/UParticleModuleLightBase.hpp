#pragma once
#include "UParticleModule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLightBase // Size: 0x38
	: public UParticleModule // Size: 0x38
{
private:
	typedef UParticleModuleLightBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1091); // id32("Class Engine.ParticleModuleLightBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLightBase = sizeof(UParticleModuleLightBase); // 56
    static_assert(sizeof(UParticleModuleLightBase) == 0x38, "Size of UParticleModuleLightBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
