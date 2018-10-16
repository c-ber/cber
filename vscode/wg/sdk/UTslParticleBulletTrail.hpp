#pragma once
#include "UTslParticle.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslParticleBulletTrail // Size: 0x490
	: public UTslParticle // Size: 0x470
{
private:
	typedef UTslParticleBulletTrail t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1463); // id32("Class TslGame.TslParticleBulletTrail")
		return ptr;
	}
	FVector TargetDestanation; /* Ofs: 0x470 Size: 0xC - StructProperty TslGame.TslParticleBulletTrail.TargetDestanation */
	float BulletSpeed; /* Ofs: 0x47C Size: 0x4 - FloatProperty TslGame.TslParticleBulletTrail.BulletSpeed */
	ExternalPtr<struct UMaterialInterface> UnderWaterMaterialOverride; /* Ofs: 0x480 Size: 0x8 - ObjectProperty TslGame.TslParticleBulletTrail.UnderWaterMaterialOverride */
	uint8_t UnknownData488[0x8];


	inline bool SetTargetDestanation(t_structHelper inst, FVector value) { inst.WriteOffset(0x470, value); }
	inline bool SetBulletSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x47C, value); }
	inline bool SetUnderWaterMaterialOverride(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x480, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslParticleBulletTrail = sizeof(UTslParticleBulletTrail); // 1168
    static_assert(sizeof(UTslParticleBulletTrail) == 0x490, "Size of UTslParticleBulletTrail is not correct.");
	auto constexpr UTslParticleBulletTrail_TargetDestanation_Offset = offsetof(UTslParticleBulletTrail, TargetDestanation);
	static_assert(UTslParticleBulletTrail_TargetDestanation_Offset == 0x470, "UTslParticleBulletTrail::TargetDestanation offset is not 470");
	auto constexpr UTslParticleBulletTrail_BulletSpeed_Offset = offsetof(UTslParticleBulletTrail, BulletSpeed);
	static_assert(UTslParticleBulletTrail_BulletSpeed_Offset == 0x47c, "UTslParticleBulletTrail::BulletSpeed offset is not 47c");
	auto constexpr UTslParticleBulletTrail_UnderWaterMaterialOverride_Offset = offsetof(UTslParticleBulletTrail, UnderWaterMaterialOverride);
	static_assert(UTslParticleBulletTrail_UnderWaterMaterialOverride_Offset == 0x480, "UTslParticleBulletTrail::UnderWaterMaterialOverride offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
