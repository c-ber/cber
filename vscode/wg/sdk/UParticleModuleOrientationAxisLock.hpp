#pragma once
#include "UParticleModuleOrientationBase.hpp"
#include "EParticleAxisLock.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleOrientationAxisLock // Size: 0x40
	: public UParticleModuleOrientationBase // Size: 0x38
{
private:
	typedef UParticleModuleOrientationAxisLock t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1117); // id32("Class Engine.ParticleModuleOrientationAxisLock")
		return ptr;
	}
	TEnumAsByte<enum EParticleAxisLock> LockAxisFlags; /* Ofs: 0x38 Size: 0x1 - ByteProperty Engine.ParticleModuleOrientationAxisLock.LockAxisFlags */
	uint8_t UnknownData39[0x7];


	inline bool SetLockAxisFlags(t_structHelper inst, TEnumAsByte<enum EParticleAxisLock> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleOrientationAxisLock = sizeof(UParticleModuleOrientationAxisLock); // 64
    static_assert(sizeof(UParticleModuleOrientationAxisLock) == 0x40, "Size of UParticleModuleOrientationAxisLock is not correct.");
	auto constexpr UParticleModuleOrientationAxisLock_LockAxisFlags_Offset = offsetof(UParticleModuleOrientationAxisLock, LockAxisFlags);
	static_assert(UParticleModuleOrientationAxisLock_LockAxisFlags_Offset == 0x38, "UParticleModuleOrientationAxisLock::LockAxisFlags offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
