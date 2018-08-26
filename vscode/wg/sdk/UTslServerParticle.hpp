#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslServerParticle // Size: 0x430
	: public UActor // Size: 0x410
{
private:
	typedef UTslServerParticle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1494); // id32("Class TslGame.TslServerParticle")
		return ptr;
	}
//	uint8_t boolField408;
//	uint8_t boolField409;
	ExternalPtr<struct UParticleSystemComponent> ParticleSystem; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.TslServerParticle.ParticleSystem */
	ExternalPtr<struct UAkComponent> AkSound; /* Ofs: 0x418 Size: 0x8 - ObjectProperty TslGame.TslServerParticle.AkSound */
	uint8_t UnknownData420[0x10];


	inline bool SetParticleSystem(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetAkSound(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslServerParticle = sizeof(UTslServerParticle); // 1072
    static_assert(sizeof(UTslServerParticle) == 0x430, "Size of UTslServerParticle is not correct.");
//	auto constexpr UTslServerParticle_boolField408_Offset = offsetof(UTslServerParticle, boolField408);
//	static_assert(UTslServerParticle_boolField408_Offset == 0x408, "UTslServerParticle::boolField408 offset is not 408");
//	auto constexpr UTslServerParticle_boolField409_Offset = offsetof(UTslServerParticle, boolField409);
//	static_assert(UTslServerParticle_boolField409_Offset == 0x409, "UTslServerParticle::boolField409 offset is not 409");
	auto constexpr UTslServerParticle_ParticleSystem_Offset = offsetof(UTslServerParticle, ParticleSystem);
	static_assert(UTslServerParticle_ParticleSystem_Offset == 0x410, "UTslServerParticle::ParticleSystem offset is not 410");
	auto constexpr UTslServerParticle_AkSound_Offset = offsetof(UTslServerParticle, AkSound);
	static_assert(UTslServerParticle_AkSound_Offset == 0x418, "UTslServerParticle::AkSound offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
