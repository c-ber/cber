#pragma once
#include "UParticleModuleSizeBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleSize // Size: 0x88
	: public UParticleModuleSizeBase // Size: 0x38
{
private:
	typedef UParticleModuleSize t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1138); // id32("Class Engine.ParticleModuleSize")
		return ptr;
	}
	FRawDistributionVector StartSize; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleSize.StartSize */


	inline bool SetStartSize(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleSize = sizeof(UParticleModuleSize); // 136
    static_assert(sizeof(UParticleModuleSize) == 0x88, "Size of UParticleModuleSize is not correct.");
	auto constexpr UParticleModuleSize_StartSize_Offset = offsetof(UParticleModuleSize, StartSize);
	static_assert(UParticleModuleSize_StartSize_Offset == 0x38, "UParticleModuleSize::StartSize offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
