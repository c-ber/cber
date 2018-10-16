#pragma once
#include "UParticleModuleLocation.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationWorldOffset // Size: 0x90
	: public UParticleModuleLocation // Size: 0x90
{
private:
	typedef UParticleModuleLocationWorldOffset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1097); // id32("Class Engine.ParticleModuleLocationWorldOffset")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationWorldOffset = sizeof(UParticleModuleLocationWorldOffset); // 144
    static_assert(sizeof(UParticleModuleLocationWorldOffset) == 0x90, "Size of UParticleModuleLocationWorldOffset is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
