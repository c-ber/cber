#pragma once
#include "UParticleModuleTypeDataBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleTypeDataAnimTrail // Size: 0x50
	: public UParticleModuleTypeDataBase // Size: 0x38
{
private:
	typedef UParticleModuleTypeDataAnimTrail t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1152); // id32("Class Engine.ParticleModuleTypeDataAnimTrail")
		return ptr;
	}
	uint8_t boolField38;
	uint8_t UnknownData39[0x3];
	float TilingDistance; /* Ofs: 0x3C Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataAnimTrail.TilingDistance */
	float DistanceTessellationStepSize; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataAnimTrail.DistanceTessellationStepSize */
	float TangentTessellationStepSize; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataAnimTrail.TangentTessellationStepSize */
	float WidthTessellationStepSize; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataAnimTrail.WidthTessellationStepSize */
	uint8_t UnknownData4C[0x4];


	inline bool bDeadTrailsOnDeactivate()
	{
		return boolField38& 0x1;
	}
	inline bool SetbDeadTrailsOnDeactivate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnablePreviousTangentRecalculation()
	{
		return boolField38& 0x2;
	}
	inline bool SetbEnablePreviousTangentRecalculation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bTangentRecalculationEveryFrame()
	{
		return boolField38& 0x4;
	}
	inline bool SetbTangentRecalculationEveryFrame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetTilingDistance(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetDistanceTessellationStepSize(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetTangentTessellationStepSize(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetWidthTessellationStepSize(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleTypeDataAnimTrail = sizeof(UParticleModuleTypeDataAnimTrail); // 80
    static_assert(sizeof(UParticleModuleTypeDataAnimTrail) == 0x50, "Size of UParticleModuleTypeDataAnimTrail is not correct.");
	auto constexpr UParticleModuleTypeDataAnimTrail_boolField38_Offset = offsetof(UParticleModuleTypeDataAnimTrail, boolField38);
	static_assert(UParticleModuleTypeDataAnimTrail_boolField38_Offset == 0x38, "UParticleModuleTypeDataAnimTrail::boolField38 offset is not 38");
	auto constexpr UParticleModuleTypeDataAnimTrail_TilingDistance_Offset = offsetof(UParticleModuleTypeDataAnimTrail, TilingDistance);
	static_assert(UParticleModuleTypeDataAnimTrail_TilingDistance_Offset == 0x3c, "UParticleModuleTypeDataAnimTrail::TilingDistance offset is not 3c");
	auto constexpr UParticleModuleTypeDataAnimTrail_DistanceTessellationStepSize_Offset = offsetof(UParticleModuleTypeDataAnimTrail, DistanceTessellationStepSize);
	static_assert(UParticleModuleTypeDataAnimTrail_DistanceTessellationStepSize_Offset == 0x40, "UParticleModuleTypeDataAnimTrail::DistanceTessellationStepSize offset is not 40");
	auto constexpr UParticleModuleTypeDataAnimTrail_TangentTessellationStepSize_Offset = offsetof(UParticleModuleTypeDataAnimTrail, TangentTessellationStepSize);
	static_assert(UParticleModuleTypeDataAnimTrail_TangentTessellationStepSize_Offset == 0x44, "UParticleModuleTypeDataAnimTrail::TangentTessellationStepSize offset is not 44");
	auto constexpr UParticleModuleTypeDataAnimTrail_WidthTessellationStepSize_Offset = offsetof(UParticleModuleTypeDataAnimTrail, WidthTessellationStepSize);
	static_assert(UParticleModuleTypeDataAnimTrail_WidthTessellationStepSize_Offset == 0x48, "UParticleModuleTypeDataAnimTrail::WidthTessellationStepSize offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
