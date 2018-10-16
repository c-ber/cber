#pragma once
#include "UParticleModule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVelocityBase // Size: 0x40
	: public UParticleModule // Size: 0x38
{
private:
	typedef UParticleModuleVelocityBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1164); // id32("Class Engine.ParticleModuleVelocityBase")
		return ptr;
	}
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];


	inline bool bInWorldSpace()
	{
		return boolField38& 0x1;
	}
	inline bool SetbInWorldSpace(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bApplyOwnerScale()
	{
		return boolField38& 0x2;
	}
	inline bool SetbApplyOwnerScale(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVelocityBase = sizeof(UParticleModuleVelocityBase); // 64
    static_assert(sizeof(UParticleModuleVelocityBase) == 0x40, "Size of UParticleModuleVelocityBase is not correct.");
	auto constexpr UParticleModuleVelocityBase_boolField38_Offset = offsetof(UParticleModuleVelocityBase, boolField38);
	static_assert(UParticleModuleVelocityBase_boolField38_Offset == 0x38, "UParticleModuleVelocityBase::boolField38 offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
