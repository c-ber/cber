#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleEventManager // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UParticleEventManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1772); // id32("Class Engine.ParticleEventManager")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleEventManager = sizeof(UParticleEventManager); // 1040
    static_assert(sizeof(UParticleEventManager) == 0x410, "Size of UParticleEventManager is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
