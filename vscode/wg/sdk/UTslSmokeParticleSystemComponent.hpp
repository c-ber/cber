#pragma once
#include "UParticleSystemComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslSmokeParticleSystemComponent // Size: 0xB70
	: public UParticleSystemComponent // Size: 0xB70
{
private:
	typedef UTslSmokeParticleSystemComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1497); // id32("Class TslGame.TslSmokeParticleSystemComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslSmokeParticleSystemComponent = sizeof(UTslSmokeParticleSystemComponent); // 2928
    static_assert(sizeof(UTslSmokeParticleSystemComponent) == 0xB70, "Size of UTslSmokeParticleSystemComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
