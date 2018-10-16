#pragma once
#include "UParticleModuleCollisionBase.hpp"
#include "FRawDistributionFloat.hpp"
#include "EParticleCollisionResponse.hpp"
#include "EParticleCollisionMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleCollisionGPU // Size: 0xC0
	: public UParticleModuleCollisionBase // Size: 0x38
{
private:
	typedef UParticleModuleCollisionGPU t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1074); // id32("Class Engine.ParticleModuleCollisionGPU")
		return ptr;
	}
	FRawDistributionFloat Resilience; /* Ofs: 0x38 Size: 0x38 - StructProperty Engine.ParticleModuleCollisionGPU.Resilience */
	FRawDistributionFloat ResilienceScaleOverLife; /* Ofs: 0x70 Size: 0x38 - StructProperty Engine.ParticleModuleCollisionGPU.ResilienceScaleOverLife */
	float Friction; /* Ofs: 0xA8 Size: 0x4 - FloatProperty Engine.ParticleModuleCollisionGPU.Friction */
	float RandomSpread; /* Ofs: 0xAC Size: 0x4 - FloatProperty Engine.ParticleModuleCollisionGPU.RandomSpread */
	float RandomDistribution; /* Ofs: 0xB0 Size: 0x4 - FloatProperty Engine.ParticleModuleCollisionGPU.RandomDistribution */
	float RadiusScale; /* Ofs: 0xB4 Size: 0x4 - FloatProperty Engine.ParticleModuleCollisionGPU.RadiusScale */
	float RadiusBias; /* Ofs: 0xB8 Size: 0x4 - FloatProperty Engine.ParticleModuleCollisionGPU.RadiusBias */
	TEnumAsByte<enum EParticleCollisionResponse> Response; /* Ofs: 0xBC Size: 0x1 - ByteProperty Engine.ParticleModuleCollisionGPU.Response */
	TEnumAsByte<enum EParticleCollisionMode> CollisionMode; /* Ofs: 0xBD Size: 0x1 - ByteProperty Engine.ParticleModuleCollisionGPU.CollisionMode */
	uint8_t UnknownDataBE[0x2];


	inline bool SetResilience(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x38, value); }
	inline bool SetResilienceScaleOverLife(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x70, value); }
	inline bool SetFriction(t_structHelper inst, float value) { inst.WriteOffset(0xA8, value); }
	inline bool SetRandomSpread(t_structHelper inst, float value) { inst.WriteOffset(0xAC, value); }
	inline bool SetRandomDistribution(t_structHelper inst, float value) { inst.WriteOffset(0xB0, value); }
	inline bool SetRadiusScale(t_structHelper inst, float value) { inst.WriteOffset(0xB4, value); }
	inline bool SetRadiusBias(t_structHelper inst, float value) { inst.WriteOffset(0xB8, value); }
	inline bool SetResponse(t_structHelper inst, TEnumAsByte<enum EParticleCollisionResponse> value) { inst.WriteOffset(0xBC, value); }
	inline bool SetCollisionMode(t_structHelper inst, TEnumAsByte<enum EParticleCollisionMode> value) { inst.WriteOffset(0xBD, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleCollisionGPU = sizeof(UParticleModuleCollisionGPU); // 192
    static_assert(sizeof(UParticleModuleCollisionGPU) == 0xC0, "Size of UParticleModuleCollisionGPU is not correct.");
	auto constexpr UParticleModuleCollisionGPU_Resilience_Offset = offsetof(UParticleModuleCollisionGPU, Resilience);
	static_assert(UParticleModuleCollisionGPU_Resilience_Offset == 0x38, "UParticleModuleCollisionGPU::Resilience offset is not 38");
	auto constexpr UParticleModuleCollisionGPU_ResilienceScaleOverLife_Offset = offsetof(UParticleModuleCollisionGPU, ResilienceScaleOverLife);
	static_assert(UParticleModuleCollisionGPU_ResilienceScaleOverLife_Offset == 0x70, "UParticleModuleCollisionGPU::ResilienceScaleOverLife offset is not 70");
	auto constexpr UParticleModuleCollisionGPU_Friction_Offset = offsetof(UParticleModuleCollisionGPU, Friction);
	static_assert(UParticleModuleCollisionGPU_Friction_Offset == 0xa8, "UParticleModuleCollisionGPU::Friction offset is not a8");
	auto constexpr UParticleModuleCollisionGPU_RandomSpread_Offset = offsetof(UParticleModuleCollisionGPU, RandomSpread);
	static_assert(UParticleModuleCollisionGPU_RandomSpread_Offset == 0xac, "UParticleModuleCollisionGPU::RandomSpread offset is not ac");
	auto constexpr UParticleModuleCollisionGPU_RandomDistribution_Offset = offsetof(UParticleModuleCollisionGPU, RandomDistribution);
	static_assert(UParticleModuleCollisionGPU_RandomDistribution_Offset == 0xb0, "UParticleModuleCollisionGPU::RandomDistribution offset is not b0");
	auto constexpr UParticleModuleCollisionGPU_RadiusScale_Offset = offsetof(UParticleModuleCollisionGPU, RadiusScale);
	static_assert(UParticleModuleCollisionGPU_RadiusScale_Offset == 0xb4, "UParticleModuleCollisionGPU::RadiusScale offset is not b4");
	auto constexpr UParticleModuleCollisionGPU_RadiusBias_Offset = offsetof(UParticleModuleCollisionGPU, RadiusBias);
	static_assert(UParticleModuleCollisionGPU_RadiusBias_Offset == 0xb8, "UParticleModuleCollisionGPU::RadiusBias offset is not b8");
	auto constexpr UParticleModuleCollisionGPU_Response_Offset = offsetof(UParticleModuleCollisionGPU, Response);
	static_assert(UParticleModuleCollisionGPU_Response_Offset == 0xbc, "UParticleModuleCollisionGPU::Response offset is not bc");
	auto constexpr UParticleModuleCollisionGPU_CollisionMode_Offset = offsetof(UParticleModuleCollisionGPU, CollisionMode);
	static_assert(UParticleModuleCollisionGPU_CollisionMode_Offset == 0xbd, "UParticleModuleCollisionGPU::CollisionMode offset is not bd");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
