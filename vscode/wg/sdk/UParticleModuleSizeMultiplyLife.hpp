#pragma once
#include "UParticleModuleSizeBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleSizeMultiplyLife // Size: 0x90
	: public UParticleModuleSizeBase // Size: 0x38
{
private:
	typedef UParticleModuleSizeMultiplyLife t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1140); // id32("Class Engine.ParticleModuleSizeMultiplyLife")
		return ptr;
	}
	FRawDistributionVector LifeMultiplier; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleSizeMultiplyLife.LifeMultiplier */
	uint8_t boolField88;
	uint8_t UnknownData89[0x7];


	inline bool SetLifeMultiplier(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool MultiplyX()
	{
		return boolField88& 0x1;
	}
	inline bool SetMultiplyX(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool MultiplyY()
	{
		return boolField88& 0x2;
	}
	inline bool SetMultiplyY(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool MultiplyZ()
	{
		return boolField88& 0x4;
	}
	inline bool SetMultiplyZ(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleSizeMultiplyLife = sizeof(UParticleModuleSizeMultiplyLife); // 144
    static_assert(sizeof(UParticleModuleSizeMultiplyLife) == 0x90, "Size of UParticleModuleSizeMultiplyLife is not correct.");
	auto constexpr UParticleModuleSizeMultiplyLife_LifeMultiplier_Offset = offsetof(UParticleModuleSizeMultiplyLife, LifeMultiplier);
	static_assert(UParticleModuleSizeMultiplyLife_LifeMultiplier_Offset == 0x38, "UParticleModuleSizeMultiplyLife::LifeMultiplier offset is not 38");
	auto constexpr UParticleModuleSizeMultiplyLife_boolField88_Offset = offsetof(UParticleModuleSizeMultiplyLife, boolField88);
	static_assert(UParticleModuleSizeMultiplyLife_boolField88_Offset == 0x88, "UParticleModuleSizeMultiplyLife::boolField88 offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
