#pragma once
#include "UParticleModuleBeamBase.hpp"
#include "BeamModifierType.hpp"
#include "FBeamModifierOptions.hpp"
#include "FRawDistributionVector.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleBeamModifier // Size: 0x128
	: public UParticleModuleBeamBase // Size: 0x38
{
private:
	typedef UParticleModuleBeamModifier t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1066); // id32("Class Engine.ParticleModuleBeamModifier")
		return ptr;
	}
	TEnumAsByte<enum BeamModifierType> ModifierType; /* Ofs: 0x38 Size: 0x1 - ByteProperty Engine.ParticleModuleBeamModifier.ModifierType */
	uint8_t UnknownData39[0x3];
	FBeamModifierOptions PositionOptions; /* Ofs: 0x3C Size: 0x4 - StructProperty Engine.ParticleModuleBeamModifier.PositionOptions */
	FRawDistributionVector Position; /* Ofs: 0x40 Size: 0x50 - StructProperty Engine.ParticleModuleBeamModifier.Position */
	FBeamModifierOptions TangentOptions; /* Ofs: 0x90 Size: 0x4 - StructProperty Engine.ParticleModuleBeamModifier.TangentOptions */
	uint8_t UnknownData94[0x4];
	FRawDistributionVector Tangent; /* Ofs: 0x98 Size: 0x50 - StructProperty Engine.ParticleModuleBeamModifier.Tangent */
	uint8_t boolFieldE8;
	uint8_t UnknownDataE9[0x3];
	FBeamModifierOptions StrengthOptions; /* Ofs: 0xEC Size: 0x4 - StructProperty Engine.ParticleModuleBeamModifier.StrengthOptions */
	FRawDistributionFloat Strength; /* Ofs: 0xF0 Size: 0x38 - StructProperty Engine.ParticleModuleBeamModifier.Strength */


	inline bool SetModifierType(t_structHelper inst, TEnumAsByte<enum BeamModifierType> value) { inst.WriteOffset(0x38, value); }
	inline bool SetPositionOptions(t_structHelper inst, FBeamModifierOptions value) { inst.WriteOffset(0x3C, value); }
	inline bool SetPosition(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x40, value); }
	inline bool SetTangentOptions(t_structHelper inst, FBeamModifierOptions value) { inst.WriteOffset(0x90, value); }
	inline bool SetTangent(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x98, value); }
	inline bool bAbsoluteTangent()
	{
		return boolFieldE8& 0x1;
	}
	inline bool SetbAbsoluteTangent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStrengthOptions(t_structHelper inst, FBeamModifierOptions value) { inst.WriteOffset(0xEC, value); }
	inline bool SetStrength(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0xF0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleBeamModifier = sizeof(UParticleModuleBeamModifier); // 296
    static_assert(sizeof(UParticleModuleBeamModifier) == 0x128, "Size of UParticleModuleBeamModifier is not correct.");
	auto constexpr UParticleModuleBeamModifier_ModifierType_Offset = offsetof(UParticleModuleBeamModifier, ModifierType);
	static_assert(UParticleModuleBeamModifier_ModifierType_Offset == 0x38, "UParticleModuleBeamModifier::ModifierType offset is not 38");
	auto constexpr UParticleModuleBeamModifier_PositionOptions_Offset = offsetof(UParticleModuleBeamModifier, PositionOptions);
	static_assert(UParticleModuleBeamModifier_PositionOptions_Offset == 0x3c, "UParticleModuleBeamModifier::PositionOptions offset is not 3c");
	auto constexpr UParticleModuleBeamModifier_Position_Offset = offsetof(UParticleModuleBeamModifier, Position);
	static_assert(UParticleModuleBeamModifier_Position_Offset == 0x40, "UParticleModuleBeamModifier::Position offset is not 40");
	auto constexpr UParticleModuleBeamModifier_TangentOptions_Offset = offsetof(UParticleModuleBeamModifier, TangentOptions);
	static_assert(UParticleModuleBeamModifier_TangentOptions_Offset == 0x90, "UParticleModuleBeamModifier::TangentOptions offset is not 90");
	auto constexpr UParticleModuleBeamModifier_Tangent_Offset = offsetof(UParticleModuleBeamModifier, Tangent);
	static_assert(UParticleModuleBeamModifier_Tangent_Offset == 0x98, "UParticleModuleBeamModifier::Tangent offset is not 98");
	auto constexpr UParticleModuleBeamModifier_boolFieldE8_Offset = offsetof(UParticleModuleBeamModifier, boolFieldE8);
	static_assert(UParticleModuleBeamModifier_boolFieldE8_Offset == 0xe8, "UParticleModuleBeamModifier::boolFieldE8 offset is not e8");
	auto constexpr UParticleModuleBeamModifier_StrengthOptions_Offset = offsetof(UParticleModuleBeamModifier, StrengthOptions);
	static_assert(UParticleModuleBeamModifier_StrengthOptions_Offset == 0xec, "UParticleModuleBeamModifier::StrengthOptions offset is not ec");
	auto constexpr UParticleModuleBeamModifier_Strength_Offset = offsetof(UParticleModuleBeamModifier, Strength);
	static_assert(UParticleModuleBeamModifier_Strength_Offset == 0xf0, "UParticleModuleBeamModifier::Strength offset is not f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
