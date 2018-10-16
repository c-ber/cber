#pragma once
#include "UParticleModuleVectorFieldBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVectorFieldGlobal // Size: 0x48
	: public UParticleModuleVectorFieldBase // Size: 0x38
{
private:
	typedef UParticleModuleVectorFieldGlobal t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1158); // id32("Class Engine.ParticleModuleVectorFieldGlobal")
		return ptr;
	}
	uint8_t boolField38;
	uint8_t UnknownData39[0x3];
	float GlobalVectorFieldScale; /* Ofs: 0x3C Size: 0x4 - FloatProperty Engine.ParticleModuleVectorFieldGlobal.GlobalVectorFieldScale */
	float GlobalVectorFieldTightness; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.ParticleModuleVectorFieldGlobal.GlobalVectorFieldTightness */
	uint8_t UnknownData44[0x4];


	inline bool bOverrideGlobalVectorFieldTightness()
	{
		return boolField38& 0x1;
	}
	inline bool SetbOverrideGlobalVectorFieldTightness(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGlobalVectorFieldScale(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetGlobalVectorFieldTightness(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVectorFieldGlobal = sizeof(UParticleModuleVectorFieldGlobal); // 72
    static_assert(sizeof(UParticleModuleVectorFieldGlobal) == 0x48, "Size of UParticleModuleVectorFieldGlobal is not correct.");
	auto constexpr UParticleModuleVectorFieldGlobal_boolField38_Offset = offsetof(UParticleModuleVectorFieldGlobal, boolField38);
	static_assert(UParticleModuleVectorFieldGlobal_boolField38_Offset == 0x38, "UParticleModuleVectorFieldGlobal::boolField38 offset is not 38");
	auto constexpr UParticleModuleVectorFieldGlobal_GlobalVectorFieldScale_Offset = offsetof(UParticleModuleVectorFieldGlobal, GlobalVectorFieldScale);
	static_assert(UParticleModuleVectorFieldGlobal_GlobalVectorFieldScale_Offset == 0x3c, "UParticleModuleVectorFieldGlobal::GlobalVectorFieldScale offset is not 3c");
	auto constexpr UParticleModuleVectorFieldGlobal_GlobalVectorFieldTightness_Offset = offsetof(UParticleModuleVectorFieldGlobal, GlobalVectorFieldTightness);
	static_assert(UParticleModuleVectorFieldGlobal_GlobalVectorFieldTightness_Offset == 0x40, "UParticleModuleVectorFieldGlobal::GlobalVectorFieldTightness offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
