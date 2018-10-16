#pragma once
#include "UParticleModuleParameterBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleParameterDynamic // Size: 0x50
	: public UParticleModuleParameterBase // Size: 0x38
{
private:
	typedef UParticleModuleParameterDynamic t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1119); // id32("Class Engine.ParticleModuleParameterDynamic")
		return ptr;
	}
	TArray<struct FEmitterDynamicParameter> DynamicParams; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Engine.ParticleModuleParameterDynamic.DynamicParams */
	int32_t UpdateFlags; /* Ofs: 0x48 Size: 0x4 - IntProperty Engine.ParticleModuleParameterDynamic.UpdateFlags */
	uint8_t boolField4C;
	uint8_t UnknownData4D[0x3];


	inline bool SetDynamicParams(t_structHelper inst, TArray<struct FEmitterDynamicParameter> value) { inst.WriteOffset(0x38, value); }
	inline bool SetUpdateFlags(t_structHelper inst, int32_t value) { inst.WriteOffset(0x48, value); }
	inline bool bUsesVelocity()
	{
		return boolField4C& 0x1;
	}
	inline bool SetbUsesVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleParameterDynamic = sizeof(UParticleModuleParameterDynamic); // 80
    static_assert(sizeof(UParticleModuleParameterDynamic) == 0x50, "Size of UParticleModuleParameterDynamic is not correct.");
	auto constexpr UParticleModuleParameterDynamic_DynamicParams_Offset = offsetof(UParticleModuleParameterDynamic, DynamicParams);
	static_assert(UParticleModuleParameterDynamic_DynamicParams_Offset == 0x38, "UParticleModuleParameterDynamic::DynamicParams offset is not 38");
	auto constexpr UParticleModuleParameterDynamic_UpdateFlags_Offset = offsetof(UParticleModuleParameterDynamic, UpdateFlags);
	static_assert(UParticleModuleParameterDynamic_UpdateFlags_Offset == 0x48, "UParticleModuleParameterDynamic::UpdateFlags offset is not 48");
	auto constexpr UParticleModuleParameterDynamic_boolField4C_Offset = offsetof(UParticleModuleParameterDynamic, boolField4C);
	static_assert(UParticleModuleParameterDynamic_boolField4C_Offset == 0x4c, "UParticleModuleParameterDynamic::boolField4C offset is not 4c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
