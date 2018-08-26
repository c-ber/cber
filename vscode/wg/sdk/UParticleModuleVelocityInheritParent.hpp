#pragma once
#include "UParticleModuleVelocityBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVelocityInheritParent // Size: 0x90
	: public UParticleModuleVelocityBase // Size: 0x40
{
private:
	typedef UParticleModuleVelocityInheritParent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1168); // id32("Class Engine.ParticleModuleVelocityInheritParent")
		return ptr;
	}
	FRawDistributionVector Scale; /* Ofs: 0x40 Size: 0x50 - StructProperty Engine.ParticleModuleVelocityInheritParent.Scale */


	inline bool SetScale(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVelocityInheritParent = sizeof(UParticleModuleVelocityInheritParent); // 144
    static_assert(sizeof(UParticleModuleVelocityInheritParent) == 0x90, "Size of UParticleModuleVelocityInheritParent is not correct.");
	auto constexpr UParticleModuleVelocityInheritParent_Scale_Offset = offsetof(UParticleModuleVelocityInheritParent, Scale);
	static_assert(UParticleModuleVelocityInheritParent_Scale_Offset == 0x40, "UParticleModuleVelocityInheritParent::Scale offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
