#pragma once
#include "UTslReplicatedBuff.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslMolotovFireDebuff // Size: 0x490
	: public UTslReplicatedBuff // Size: 0x470
{
private:
	typedef UTslMolotovFireDebuff t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1338); // id32("Class TslGame.TslMolotovFireDebuff")
		return ptr;
	}
//	float PerTickDamage; /* Ofs: 0x468 Size: 0x4 - FloatProperty TslGame.TslMolotovFireDebuff.PerTickDamage */
	ExternalPtr<struct UClass> DamageTypeClass; /* Ofs: 0x470 Size: 0x8 - ClassProperty TslGame.TslMolotovFireDebuff.DamageTypeClass */
	ExternalPtr<struct UParticleSystemComponent> ParticleSystem; /* Ofs: 0x478 Size: 0x8 - ObjectProperty TslGame.TslMolotovFireDebuff.ParticleSystem */
	ExternalPtr<struct UParticleSystem> KoreanRatingParticlesOverride; /* Ofs: 0x480 Size: 0x8 - ObjectProperty TslGame.TslMolotovFireDebuff.KoreanRatingParticlesOverride */
	uint8_t UnknownData488[0x8];


//	inline bool SetPerTickDamage(t_structHelper inst, float value) { inst.WriteOffset(0x468, value); }
	inline bool SetDamageTypeClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x470, value); }
	inline bool SetParticleSystem(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x478, value); }
	inline bool SetKoreanRatingParticlesOverride(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x480, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslMolotovFireDebuff = sizeof(UTslMolotovFireDebuff); // 1168
    static_assert(sizeof(UTslMolotovFireDebuff) == 0x490, "Size of UTslMolotovFireDebuff is not correct.");
//	auto constexpr UTslMolotovFireDebuff_PerTickDamage_Offset = offsetof(UTslMolotovFireDebuff, PerTickDamage);
//	static_assert(UTslMolotovFireDebuff_PerTickDamage_Offset == 0x468, "UTslMolotovFireDebuff::PerTickDamage offset is not 468");
	auto constexpr UTslMolotovFireDebuff_DamageTypeClass_Offset = offsetof(UTslMolotovFireDebuff, DamageTypeClass);
	static_assert(UTslMolotovFireDebuff_DamageTypeClass_Offset == 0x470, "UTslMolotovFireDebuff::DamageTypeClass offset is not 470");
	auto constexpr UTslMolotovFireDebuff_ParticleSystem_Offset = offsetof(UTslMolotovFireDebuff, ParticleSystem);
	static_assert(UTslMolotovFireDebuff_ParticleSystem_Offset == 0x478, "UTslMolotovFireDebuff::ParticleSystem offset is not 478");
	auto constexpr UTslMolotovFireDebuff_KoreanRatingParticlesOverride_Offset = offsetof(UTslMolotovFireDebuff, KoreanRatingParticlesOverride);
	static_assert(UTslMolotovFireDebuff_KoreanRatingParticlesOverride_Offset == 0x480, "UTslMolotovFireDebuff::KoreanRatingParticlesOverride offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
