#pragma once
#include "UParticleModuleBeamBase.hpp"
#include "Beam2SourceTargetMethod.hpp"
#include "FRawDistributionVector.hpp"
#include "Beam2SourceTargetTangentMethod.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleBeamSource // Size: 0x140
	: public UParticleModuleBeamBase // Size: 0x38
{
private:
	typedef UParticleModuleBeamSource t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1068); // id32("Class Engine.ParticleModuleBeamSource")
		return ptr;
	}
	TEnumAsByte<enum Beam2SourceTargetMethod> SourceMethod; /* Ofs: 0x38 Size: 0x1 - ByteProperty Engine.ParticleModuleBeamSource.SourceMethod */
	uint8_t UnknownData39[0x7];
	FName SourceName; /* Ofs: 0x40 Size: 0x8 - NameProperty Engine.ParticleModuleBeamSource.SourceName */
	uint8_t boolField48;
	uint8_t UnknownData49[0x7];
	FRawDistributionVector Source; /* Ofs: 0x50 Size: 0x50 - StructProperty Engine.ParticleModuleBeamSource.Source */
	uint8_t boolFieldA0;
	uint8_t UnknownDataA1[0x3];
	TEnumAsByte<enum Beam2SourceTargetTangentMethod> SourceTangentMethod; /* Ofs: 0xA4 Size: 0x1 - ByteProperty Engine.ParticleModuleBeamSource.SourceTangentMethod */
	uint8_t UnknownDataA5[0x3];
	FRawDistributionVector SourceTangent; /* Ofs: 0xA8 Size: 0x50 - StructProperty Engine.ParticleModuleBeamSource.SourceTangent */
	uint8_t boolFieldF8;
	uint8_t UnknownDataF9[0x7];
	FRawDistributionFloat SourceStrength; /* Ofs: 0x100 Size: 0x38 - StructProperty Engine.ParticleModuleBeamSource.SourceStrength */
	uint8_t boolField138;
	uint8_t UnknownData139[0x7];


	inline bool SetSourceMethod(t_structHelper inst, TEnumAsByte<enum Beam2SourceTargetMethod> value) { inst.WriteOffset(0x38, value); }
	inline bool SetSourceName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
	inline bool bSourceAbsolute()
	{
		return boolField48& 0x1;
	}
	inline bool SetbSourceAbsolute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSource(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x50, value); }
	inline bool bLockSource()
	{
		return boolFieldA0& 0x1;
	}
	inline bool SetbLockSource(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSourceTangentMethod(t_structHelper inst, TEnumAsByte<enum Beam2SourceTargetTangentMethod> value) { inst.WriteOffset(0xA4, value); }
	inline bool SetSourceTangent(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0xA8, value); }
	inline bool bLockSourceTangent()
	{
		return boolFieldF8& 0x1;
	}
	inline bool SetbLockSourceTangent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSourceStrength(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x100, value); }
	inline bool bLockSourceStength()
	{
		return boolField138& 0x1;
	}
	inline bool SetbLockSourceStength(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x138, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleBeamSource = sizeof(UParticleModuleBeamSource); // 320
    static_assert(sizeof(UParticleModuleBeamSource) == 0x140, "Size of UParticleModuleBeamSource is not correct.");
	auto constexpr UParticleModuleBeamSource_SourceMethod_Offset = offsetof(UParticleModuleBeamSource, SourceMethod);
	static_assert(UParticleModuleBeamSource_SourceMethod_Offset == 0x38, "UParticleModuleBeamSource::SourceMethod offset is not 38");
	auto constexpr UParticleModuleBeamSource_SourceName_Offset = offsetof(UParticleModuleBeamSource, SourceName);
	static_assert(UParticleModuleBeamSource_SourceName_Offset == 0x40, "UParticleModuleBeamSource::SourceName offset is not 40");
	auto constexpr UParticleModuleBeamSource_boolField48_Offset = offsetof(UParticleModuleBeamSource, boolField48);
	static_assert(UParticleModuleBeamSource_boolField48_Offset == 0x48, "UParticleModuleBeamSource::boolField48 offset is not 48");
	auto constexpr UParticleModuleBeamSource_Source_Offset = offsetof(UParticleModuleBeamSource, Source);
	static_assert(UParticleModuleBeamSource_Source_Offset == 0x50, "UParticleModuleBeamSource::Source offset is not 50");
	auto constexpr UParticleModuleBeamSource_boolFieldA0_Offset = offsetof(UParticleModuleBeamSource, boolFieldA0);
	static_assert(UParticleModuleBeamSource_boolFieldA0_Offset == 0xa0, "UParticleModuleBeamSource::boolFieldA0 offset is not a0");
	auto constexpr UParticleModuleBeamSource_SourceTangentMethod_Offset = offsetof(UParticleModuleBeamSource, SourceTangentMethod);
	static_assert(UParticleModuleBeamSource_SourceTangentMethod_Offset == 0xa4, "UParticleModuleBeamSource::SourceTangentMethod offset is not a4");
	auto constexpr UParticleModuleBeamSource_SourceTangent_Offset = offsetof(UParticleModuleBeamSource, SourceTangent);
	static_assert(UParticleModuleBeamSource_SourceTangent_Offset == 0xa8, "UParticleModuleBeamSource::SourceTangent offset is not a8");
	auto constexpr UParticleModuleBeamSource_boolFieldF8_Offset = offsetof(UParticleModuleBeamSource, boolFieldF8);
	static_assert(UParticleModuleBeamSource_boolFieldF8_Offset == 0xf8, "UParticleModuleBeamSource::boolFieldF8 offset is not f8");
	auto constexpr UParticleModuleBeamSource_SourceStrength_Offset = offsetof(UParticleModuleBeamSource, SourceStrength);
	static_assert(UParticleModuleBeamSource_SourceStrength_Offset == 0x100, "UParticleModuleBeamSource::SourceStrength offset is not 100");
	auto constexpr UParticleModuleBeamSource_boolField138_Offset = offsetof(UParticleModuleBeamSource, boolField138);
	static_assert(UParticleModuleBeamSource_boolField138_Offset == 0x138, "UParticleModuleBeamSource::boolField138 offset is not 138");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
