#pragma once
#include "UParticleModuleVectorFieldBase.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVectorFieldLocal // Size: 0x70
	: public UParticleModuleVectorFieldBase // Size: 0x38
{
private:
	typedef UParticleModuleVectorFieldLocal t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1159); // id32("Class Engine.ParticleModuleVectorFieldLocal")
		return ptr;
	}
	ExternalPtr<struct UVectorField> VectorField; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.ParticleModuleVectorFieldLocal.VectorField */
	FVector RelativeTranslation; /* Ofs: 0x40 Size: 0xC - StructProperty Engine.ParticleModuleVectorFieldLocal.RelativeTranslation */
	FRotator RelativeRotation; /* Ofs: 0x4C Size: 0xC - StructProperty Engine.ParticleModuleVectorFieldLocal.RelativeRotation */
	FVector RelativeScale3D; /* Ofs: 0x58 Size: 0xC - StructProperty Engine.ParticleModuleVectorFieldLocal.RelativeScale3D */
	float Intensity; /* Ofs: 0x64 Size: 0x4 - FloatProperty Engine.ParticleModuleVectorFieldLocal.Intensity */
	float Tightness; /* Ofs: 0x68 Size: 0x4 - FloatProperty Engine.ParticleModuleVectorFieldLocal.Tightness */
	uint8_t boolField6C;
	uint8_t UnknownData6D[0x3];


	inline bool SetVectorField(t_structHelper inst, ExternalPtr<struct UVectorField> value) { inst.WriteOffset(0x38, value); }
	inline bool SetRelativeTranslation(t_structHelper inst, FVector value) { inst.WriteOffset(0x40, value); }
	inline bool SetRelativeRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x4C, value); }
	inline bool SetRelativeScale3D(t_structHelper inst, FVector value) { inst.WriteOffset(0x58, value); }
	inline bool SetIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x64, value); }
	inline bool SetTightness(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
	inline bool bIgnoreComponentTransform()
	{
		return boolField6C& 0x1;
	}
	inline bool SetbIgnoreComponentTransform(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTileX()
	{
		return boolField6C& 0x2;
	}
	inline bool SetbTileX(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bTileY()
	{
		return boolField6C& 0x4;
	}
	inline bool SetbTileY(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bTileZ()
	{
		return boolField6C& 0x8;
	}
	inline bool SetbTileZ(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bUseFixDT()
	{
		return boolField6C& 0x10;
	}
	inline bool SetbUseFixDT(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVectorFieldLocal = sizeof(UParticleModuleVectorFieldLocal); // 112
    static_assert(sizeof(UParticleModuleVectorFieldLocal) == 0x70, "Size of UParticleModuleVectorFieldLocal is not correct.");
	auto constexpr UParticleModuleVectorFieldLocal_VectorField_Offset = offsetof(UParticleModuleVectorFieldLocal, VectorField);
	static_assert(UParticleModuleVectorFieldLocal_VectorField_Offset == 0x38, "UParticleModuleVectorFieldLocal::VectorField offset is not 38");
	auto constexpr UParticleModuleVectorFieldLocal_RelativeTranslation_Offset = offsetof(UParticleModuleVectorFieldLocal, RelativeTranslation);
	static_assert(UParticleModuleVectorFieldLocal_RelativeTranslation_Offset == 0x40, "UParticleModuleVectorFieldLocal::RelativeTranslation offset is not 40");
	auto constexpr UParticleModuleVectorFieldLocal_RelativeRotation_Offset = offsetof(UParticleModuleVectorFieldLocal, RelativeRotation);
	static_assert(UParticleModuleVectorFieldLocal_RelativeRotation_Offset == 0x4c, "UParticleModuleVectorFieldLocal::RelativeRotation offset is not 4c");
	auto constexpr UParticleModuleVectorFieldLocal_RelativeScale3D_Offset = offsetof(UParticleModuleVectorFieldLocal, RelativeScale3D);
	static_assert(UParticleModuleVectorFieldLocal_RelativeScale3D_Offset == 0x58, "UParticleModuleVectorFieldLocal::RelativeScale3D offset is not 58");
	auto constexpr UParticleModuleVectorFieldLocal_Intensity_Offset = offsetof(UParticleModuleVectorFieldLocal, Intensity);
	static_assert(UParticleModuleVectorFieldLocal_Intensity_Offset == 0x64, "UParticleModuleVectorFieldLocal::Intensity offset is not 64");
	auto constexpr UParticleModuleVectorFieldLocal_Tightness_Offset = offsetof(UParticleModuleVectorFieldLocal, Tightness);
	static_assert(UParticleModuleVectorFieldLocal_Tightness_Offset == 0x68, "UParticleModuleVectorFieldLocal::Tightness offset is not 68");
	auto constexpr UParticleModuleVectorFieldLocal_boolField6C_Offset = offsetof(UParticleModuleVectorFieldLocal, boolField6C);
	static_assert(UParticleModuleVectorFieldLocal_boolField6C_Offset == 0x6c, "UParticleModuleVectorFieldLocal::boolField6C offset is not 6c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
