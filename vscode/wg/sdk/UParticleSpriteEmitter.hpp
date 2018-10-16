#pragma once
#include "UParticleEmitter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleSpriteEmitter // Size: 0x178
	: public UParticleEmitter // Size: 0x178
{
private:
	typedef UParticleSpriteEmitter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1051); // id32("Class Engine.ParticleSpriteEmitter")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleSpriteEmitter = sizeof(UParticleSpriteEmitter); // 376
    static_assert(sizeof(UParticleSpriteEmitter) == 0x178, "Size of UParticleSpriteEmitter is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
