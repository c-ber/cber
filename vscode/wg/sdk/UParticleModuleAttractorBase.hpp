#pragma once
#include "UParticleModule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleAttractorBase // Size: 0x38
	: public UParticleModule // Size: 0x38
{
private:
	typedef UParticleModuleAttractorBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1060); // id32("Class Engine.ParticleModuleAttractorBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleAttractorBase = sizeof(UParticleModuleAttractorBase); // 56
    static_assert(sizeof(UParticleModuleAttractorBase) == 0x38, "Size of UParticleModuleAttractorBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
