#pragma once
#include "UParticleModuleSizeBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleSizeScale // Size: 0x90
	: public UParticleModuleSizeBase // Size: 0x38
{
private:
	typedef UParticleModuleSizeScale t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1141); // id32("Class Engine.ParticleModuleSizeScale")
		return ptr;
	}
	FRawDistributionVector SizeScale; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleSizeScale.SizeScale */
	uint8_t boolField88;
	uint8_t UnknownData89[0x7];


	inline bool SetSizeScale(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool EnableX()
	{
		return boolField88& 0x1;
	}
	inline bool SetEnableX(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool EnableY()
	{
		return boolField88& 0x2;
	}
	inline bool SetEnableY(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool EnableZ()
	{
		return boolField88& 0x4;
	}
	inline bool SetEnableZ(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleSizeScale = sizeof(UParticleModuleSizeScale); // 144
    static_assert(sizeof(UParticleModuleSizeScale) == 0x90, "Size of UParticleModuleSizeScale is not correct.");
	auto constexpr UParticleModuleSizeScale_SizeScale_Offset = offsetof(UParticleModuleSizeScale, SizeScale);
	static_assert(UParticleModuleSizeScale_SizeScale_Offset == 0x38, "UParticleModuleSizeScale::SizeScale offset is not 38");
	auto constexpr UParticleModuleSizeScale_boolField88_Offset = offsetof(UParticleModuleSizeScale, boolField88);
	static_assert(UParticleModuleSizeScale_boolField88_Offset == 0x88, "UParticleModuleSizeScale::boolField88 offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
