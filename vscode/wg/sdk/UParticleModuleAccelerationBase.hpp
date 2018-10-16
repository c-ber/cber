#pragma once
#include "UParticleModule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleAccelerationBase // Size: 0x40
	: public UParticleModule // Size: 0x38
{
private:
	typedef UParticleModuleAccelerationBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1054); // id32("Class Engine.ParticleModuleAccelerationBase")
		return ptr;
	}
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];


	inline bool bAlwaysInWorldSpace()
	{
		return boolField38& 0x1;
	}
	inline bool SetbAlwaysInWorldSpace(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleAccelerationBase = sizeof(UParticleModuleAccelerationBase); // 64
    static_assert(sizeof(UParticleModuleAccelerationBase) == 0x40, "Size of UParticleModuleAccelerationBase is not correct.");
	auto constexpr UParticleModuleAccelerationBase_boolField38_Offset = offsetof(UParticleModuleAccelerationBase, boolField38);
	static_assert(UParticleModuleAccelerationBase_boolField38_Offset == 0x38, "UParticleModuleAccelerationBase::boolField38 offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
