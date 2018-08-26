#pragma once
#include "UParticleModuleAttractorBase.hpp"
#include "FVector.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleAttractorPointGravity // Size: 0x88
	: public UParticleModuleAttractorBase // Size: 0x38
{
private:
	typedef UParticleModuleAttractorPointGravity t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1064); // id32("Class Engine.ParticleModuleAttractorPointGravity")
		return ptr;
	}
	FVector Position; /* Ofs: 0x38 Size: 0xC - StructProperty Engine.ParticleModuleAttractorPointGravity.Position */
	float Radius; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.ParticleModuleAttractorPointGravity.Radius */
	ExternalPtr<struct UDistributionFloat> Strength; /* Ofs: 0x48 Size: 0x8 - ObjectProperty Engine.ParticleModuleAttractorPointGravity.Strength */
	FRawDistributionFloat StrengthRaw; /* Ofs: 0x50 Size: 0x38 - StructProperty Engine.ParticleModuleAttractorPointGravity.StrengthRaw */


	inline bool SetPosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetRadius(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetStrength(t_structHelper inst, ExternalPtr<struct UDistributionFloat> value) { inst.WriteOffset(0x48, value); }
	inline bool SetStrengthRaw(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleAttractorPointGravity = sizeof(UParticleModuleAttractorPointGravity); // 136
    static_assert(sizeof(UParticleModuleAttractorPointGravity) == 0x88, "Size of UParticleModuleAttractorPointGravity is not correct.");
	auto constexpr UParticleModuleAttractorPointGravity_Position_Offset = offsetof(UParticleModuleAttractorPointGravity, Position);
	static_assert(UParticleModuleAttractorPointGravity_Position_Offset == 0x38, "UParticleModuleAttractorPointGravity::Position offset is not 38");
	auto constexpr UParticleModuleAttractorPointGravity_Radius_Offset = offsetof(UParticleModuleAttractorPointGravity, Radius);
	static_assert(UParticleModuleAttractorPointGravity_Radius_Offset == 0x44, "UParticleModuleAttractorPointGravity::Radius offset is not 44");
	auto constexpr UParticleModuleAttractorPointGravity_Strength_Offset = offsetof(UParticleModuleAttractorPointGravity, Strength);
	static_assert(UParticleModuleAttractorPointGravity_Strength_Offset == 0x48, "UParticleModuleAttractorPointGravity::Strength offset is not 48");
	auto constexpr UParticleModuleAttractorPointGravity_StrengthRaw_Offset = offsetof(UParticleModuleAttractorPointGravity, StrengthRaw);
	static_assert(UParticleModuleAttractorPointGravity_StrengthRaw_Offset == 0x50, "UParticleModuleAttractorPointGravity::StrengthRaw offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
