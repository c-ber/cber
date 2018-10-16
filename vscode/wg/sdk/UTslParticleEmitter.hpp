#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslParticleEmitter // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UTslParticleEmitter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1465); // id32("Class TslGame.TslParticleEmitter")
		return ptr;
	}
	uint8_t UnknownData410[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslParticleEmitter = sizeof(UTslParticleEmitter); // 1056
    static_assert(sizeof(UTslParticleEmitter) == 0x420, "Size of UTslParticleEmitter is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
