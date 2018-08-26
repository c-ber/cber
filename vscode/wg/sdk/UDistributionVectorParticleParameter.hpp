#pragma once
#include "UDistributionVectorParameterBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistributionVectorParticleParameter // Size: 0x98
	: public UDistributionVectorParameterBase // Size: 0x98
{
private:
	typedef UDistributionVectorParticleParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(749); // id32("Class Engine.DistributionVectorParticleParameter")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistributionVectorParticleParameter = sizeof(UDistributionVectorParticleParameter); // 152
    static_assert(sizeof(UDistributionVectorParticleParameter) == 0x98, "Size of UDistributionVectorParticleParameter is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
