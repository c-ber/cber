#pragma once
#include "UParticleModuleLocationPrimitiveBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationPrimitiveSphere // Size: 0x100
	: public UParticleModuleLocationPrimitiveBase // Size: 0xC8
{
private:
	typedef UParticleModuleLocationPrimitiveSphere t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1106); // id32("Class Engine.ParticleModuleLocationPrimitiveSphere")
		return ptr;
	}
	FRawDistributionFloat StartRadius; /* Ofs: 0xC8 Size: 0x38 - StructProperty Engine.ParticleModuleLocationPrimitiveSphere.StartRadius */


	inline bool SetStartRadius(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationPrimitiveSphere = sizeof(UParticleModuleLocationPrimitiveSphere); // 256
    static_assert(sizeof(UParticleModuleLocationPrimitiveSphere) == 0x100, "Size of UParticleModuleLocationPrimitiveSphere is not correct.");
	auto constexpr UParticleModuleLocationPrimitiveSphere_StartRadius_Offset = offsetof(UParticleModuleLocationPrimitiveSphere, StartRadius);
	static_assert(UParticleModuleLocationPrimitiveSphere_StartRadius_Offset == 0xc8, "UParticleModuleLocationPrimitiveSphere::StartRadius offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
