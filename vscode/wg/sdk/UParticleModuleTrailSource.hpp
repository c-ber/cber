#pragma once
#include "UParticleModuleTrailBase.hpp"
#include "ETrail2SourceMethod.hpp"
#include "FRawDistributionFloat.hpp"
#include "EParticleSourceSelectionMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleTrailSource // Size: 0xA0
	: public UParticleModuleTrailBase // Size: 0x38
{
private:
	typedef UParticleModuleTrailSource t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1150); // id32("Class Engine.ParticleModuleTrailSource")
		return ptr;
	}
	TEnumAsByte<enum ETrail2SourceMethod> SourceMethod; /* Ofs: 0x38 Size: 0x1 - ByteProperty Engine.ParticleModuleTrailSource.SourceMethod */
	uint8_t UnknownData39[0x7];
	FName SourceName; /* Ofs: 0x40 Size: 0x8 - NameProperty Engine.ParticleModuleTrailSource.SourceName */
	FRawDistributionFloat SourceStrength; /* Ofs: 0x48 Size: 0x38 - StructProperty Engine.ParticleModuleTrailSource.SourceStrength */
	uint8_t boolField80;
	uint8_t UnknownData81[0x3];
	int32_t SourceOffsetCount; /* Ofs: 0x84 Size: 0x4 - IntProperty Engine.ParticleModuleTrailSource.SourceOffsetCount */
	TArray<struct FVector> SourceOffsetDefaults; /* Ofs: 0x88 Size: 0x10 - ArrayProperty Engine.ParticleModuleTrailSource.SourceOffsetDefaults */
	TEnumAsByte<enum EParticleSourceSelectionMethod> SelectionMethod; /* Ofs: 0x98 Size: 0x1 - ByteProperty Engine.ParticleModuleTrailSource.SelectionMethod */
	uint8_t UnknownData99[0x3];
	uint8_t boolField9C;
	uint8_t UnknownData9D[0x3];


	inline bool SetSourceMethod(t_structHelper inst, TEnumAsByte<enum ETrail2SourceMethod> value) { inst.WriteOffset(0x38, value); }
	inline bool SetSourceName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
	inline bool SetSourceStrength(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x48, value); }
	inline bool bLockSourceStength()
	{
		return boolField80& 0x1;
	}
	inline bool SetbLockSourceStength(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSourceOffsetCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x84, value); }
	inline bool SetSourceOffsetDefaults(t_structHelper inst, TArray<struct FVector> value) { inst.WriteOffset(0x88, value); }
	inline bool SetSelectionMethod(t_structHelper inst, TEnumAsByte<enum EParticleSourceSelectionMethod> value) { inst.WriteOffset(0x98, value); }
	inline bool bInheritRotation()
	{
		return boolField9C& 0x1;
	}
	inline bool SetbInheritRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleTrailSource = sizeof(UParticleModuleTrailSource); // 160
    static_assert(sizeof(UParticleModuleTrailSource) == 0xA0, "Size of UParticleModuleTrailSource is not correct.");
	auto constexpr UParticleModuleTrailSource_SourceMethod_Offset = offsetof(UParticleModuleTrailSource, SourceMethod);
	static_assert(UParticleModuleTrailSource_SourceMethod_Offset == 0x38, "UParticleModuleTrailSource::SourceMethod offset is not 38");
	auto constexpr UParticleModuleTrailSource_SourceName_Offset = offsetof(UParticleModuleTrailSource, SourceName);
	static_assert(UParticleModuleTrailSource_SourceName_Offset == 0x40, "UParticleModuleTrailSource::SourceName offset is not 40");
	auto constexpr UParticleModuleTrailSource_SourceStrength_Offset = offsetof(UParticleModuleTrailSource, SourceStrength);
	static_assert(UParticleModuleTrailSource_SourceStrength_Offset == 0x48, "UParticleModuleTrailSource::SourceStrength offset is not 48");
	auto constexpr UParticleModuleTrailSource_boolField80_Offset = offsetof(UParticleModuleTrailSource, boolField80);
	static_assert(UParticleModuleTrailSource_boolField80_Offset == 0x80, "UParticleModuleTrailSource::boolField80 offset is not 80");
	auto constexpr UParticleModuleTrailSource_SourceOffsetCount_Offset = offsetof(UParticleModuleTrailSource, SourceOffsetCount);
	static_assert(UParticleModuleTrailSource_SourceOffsetCount_Offset == 0x84, "UParticleModuleTrailSource::SourceOffsetCount offset is not 84");
	auto constexpr UParticleModuleTrailSource_SourceOffsetDefaults_Offset = offsetof(UParticleModuleTrailSource, SourceOffsetDefaults);
	static_assert(UParticleModuleTrailSource_SourceOffsetDefaults_Offset == 0x88, "UParticleModuleTrailSource::SourceOffsetDefaults offset is not 88");
	auto constexpr UParticleModuleTrailSource_SelectionMethod_Offset = offsetof(UParticleModuleTrailSource, SelectionMethod);
	static_assert(UParticleModuleTrailSource_SelectionMethod_Offset == 0x98, "UParticleModuleTrailSource::SelectionMethod offset is not 98");
	auto constexpr UParticleModuleTrailSource_boolField9C_Offset = offsetof(UParticleModuleTrailSource, boolField9C);
	static_assert(UParticleModuleTrailSource_boolField9C_Offset == 0x9c, "UParticleModuleTrailSource::boolField9C offset is not 9c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
