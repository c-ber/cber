#pragma once
#include "UParticleModule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleCameraBase // Size: 0x38
	: public UParticleModule // Size: 0x38
{
private:
	typedef UParticleModuleCameraBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1070); // id32("Class Engine.ParticleModuleCameraBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleCameraBase = sizeof(UParticleModuleCameraBase); // 56
    static_assert(sizeof(UParticleModuleCameraBase) == 0x38, "Size of UParticleModuleCameraBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
