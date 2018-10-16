#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFractureEffect // Size: 0x10
{
public:
    ExternalPtr<struct UParticleSystem> ParticleSystem; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.FractureEffect.ParticleSystem */
    ExternalPtr<struct USoundBase> Sound; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.FractureEffect.Sound */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFractureEffect = sizeof(FFractureEffect); // 16
    static_assert(sizeof(FFractureEffect) == 0x10, "Size of FFractureEffect is not correct.");
	auto constexpr FFractureEffect_ParticleSystem_Offset = offsetof(FFractureEffect, ParticleSystem);
	static_assert(FFractureEffect_ParticleSystem_Offset == 0x0, "FFractureEffect::ParticleSystem offset is not 0");
	auto constexpr FFractureEffect_Sound_Offset = offsetof(FFractureEffect, Sound);
	static_assert(FFractureEffect_Sound_Offset == 0x8, "FFractureEffect::Sound offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
