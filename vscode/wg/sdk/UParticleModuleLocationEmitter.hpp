#pragma once
#include "UParticleModuleLocationBase.hpp"
#include "ELocationEmitterSelectionMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationEmitter // Size: 0x58
	: public UParticleModuleLocationBase // Size: 0x38
{
private:
	typedef UParticleModuleLocationEmitter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1101); // id32("Class Engine.ParticleModuleLocationEmitter")
		return ptr;
	}
	FName EmitterName; /* Ofs: 0x38 Size: 0x8 - NameProperty Engine.ParticleModuleLocationEmitter.EmitterName */
	TEnumAsByte<enum ELocationEmitterSelectionMethod> SelectionMethod; /* Ofs: 0x40 Size: 0x1 - ByteProperty Engine.ParticleModuleLocationEmitter.SelectionMethod */
	uint8_t UnknownData41[0x3];
	uint8_t boolField44;
	uint8_t UnknownData45[0x3];
	float InheritSourceVelocityScale; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.ParticleModuleLocationEmitter.InheritSourceVelocityScale */
	uint8_t boolField4C;
	uint8_t UnknownData4D[0x3];
	float InheritSourceRotationScale; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.ParticleModuleLocationEmitter.InheritSourceRotationScale */
	uint8_t UnknownData54[0x4];


	inline bool SetEmitterName(t_structHelper inst, FName value) { inst.WriteOffset(0x38, value); }
	inline bool SetSelectionMethod(t_structHelper inst, TEnumAsByte<enum ELocationEmitterSelectionMethod> value) { inst.WriteOffset(0x40, value); }
	inline bool InheritSourceVelocity()
	{
		return boolField44& 0x1;
	}
	inline bool SetInheritSourceVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetInheritSourceVelocityScale(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool bInheritSourceRotation()
	{
		return boolField4C& 0x1;
	}
	inline bool SetbInheritSourceRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetInheritSourceRotationScale(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationEmitter = sizeof(UParticleModuleLocationEmitter); // 88
    static_assert(sizeof(UParticleModuleLocationEmitter) == 0x58, "Size of UParticleModuleLocationEmitter is not correct.");
	auto constexpr UParticleModuleLocationEmitter_EmitterName_Offset = offsetof(UParticleModuleLocationEmitter, EmitterName);
	static_assert(UParticleModuleLocationEmitter_EmitterName_Offset == 0x38, "UParticleModuleLocationEmitter::EmitterName offset is not 38");
	auto constexpr UParticleModuleLocationEmitter_SelectionMethod_Offset = offsetof(UParticleModuleLocationEmitter, SelectionMethod);
	static_assert(UParticleModuleLocationEmitter_SelectionMethod_Offset == 0x40, "UParticleModuleLocationEmitter::SelectionMethod offset is not 40");
	auto constexpr UParticleModuleLocationEmitter_boolField44_Offset = offsetof(UParticleModuleLocationEmitter, boolField44);
	static_assert(UParticleModuleLocationEmitter_boolField44_Offset == 0x44, "UParticleModuleLocationEmitter::boolField44 offset is not 44");
	auto constexpr UParticleModuleLocationEmitter_InheritSourceVelocityScale_Offset = offsetof(UParticleModuleLocationEmitter, InheritSourceVelocityScale);
	static_assert(UParticleModuleLocationEmitter_InheritSourceVelocityScale_Offset == 0x48, "UParticleModuleLocationEmitter::InheritSourceVelocityScale offset is not 48");
	auto constexpr UParticleModuleLocationEmitter_boolField4C_Offset = offsetof(UParticleModuleLocationEmitter, boolField4C);
	static_assert(UParticleModuleLocationEmitter_boolField4C_Offset == 0x4c, "UParticleModuleLocationEmitter::boolField4C offset is not 4c");
	auto constexpr UParticleModuleLocationEmitter_InheritSourceRotationScale_Offset = offsetof(UParticleModuleLocationEmitter, InheritSourceRotationScale);
	static_assert(UParticleModuleLocationEmitter_InheritSourceRotationScale_Offset == 0x50, "UParticleModuleLocationEmitter::InheritSourceRotationScale offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
