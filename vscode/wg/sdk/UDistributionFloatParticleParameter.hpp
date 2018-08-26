#pragma once
#include "UDistributionFloatParameterBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionFloatParticleParameter // Size: 0x68
	: public UDistributionFloatParameterBase // Size: 0x68
{
private:
	typedef UDistributionFloatParticleParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(742); // id32("Class Engine.DistributionFloatParticleParameter")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionFloatParticleParameter = sizeof(UDistributionFloatParticleParameter); // 104
    static_assert(sizeof(UDistributionFloatParticleParameter) == 0x68, "Size of UDistributionFloatParticleParameter is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
