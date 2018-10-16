#pragma once
#include "UParticleModuleRotationBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleRotationOverLifetime // Size: 0x78
	: public UParticleModuleRotationBase // Size: 0x38
{
private:
	typedef UParticleModuleRotationOverLifetime t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1128); // id32("Class Engine.ParticleModuleRotationOverLifetime")
		return ptr;
	}
	FRawDistributionFloat RotationOverLife; /* Ofs: 0x38 Size: 0x38 - StructProperty Engine.ParticleModuleRotationOverLifetime.RotationOverLife */
	uint8_t boolField70;
	uint8_t UnknownData71[0x7];


	inline bool SetRotationOverLife(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x38, value); }
	inline bool Scale()
	{
		return boolField70& 0x1;
	}
	inline bool SetScale(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleRotationOverLifetime = sizeof(UParticleModuleRotationOverLifetime); // 120
    static_assert(sizeof(UParticleModuleRotationOverLifetime) == 0x78, "Size of UParticleModuleRotationOverLifetime is not correct.");
	auto constexpr UParticleModuleRotationOverLifetime_RotationOverLife_Offset = offsetof(UParticleModuleRotationOverLifetime, RotationOverLife);
	static_assert(UParticleModuleRotationOverLifetime_RotationOverLife_Offset == 0x38, "UParticleModuleRotationOverLifetime::RotationOverLife offset is not 38");
	auto constexpr UParticleModuleRotationOverLifetime_boolField70_Offset = offsetof(UParticleModuleRotationOverLifetime, boolField70);
	static_assert(UParticleModuleRotationOverLifetime_boolField70_Offset == 0x70, "UParticleModuleRotationOverLifetime::boolField70 offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
