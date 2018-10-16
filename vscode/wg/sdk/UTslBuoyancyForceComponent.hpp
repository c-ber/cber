#pragma once
#include "UBuoyancyForceComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBuoyancyForceComponent // Size: 0x530
	: public UBuoyancyForceComponent // Size: 0x530
{
private:
	typedef UTslBuoyancyForceComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1343); // id32("Class TslGame.TslBuoyancyForceComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBuoyancyForceComponent = sizeof(UTslBuoyancyForceComponent); // 1328
    static_assert(sizeof(UTslBuoyancyForceComponent) == 0x530, "Size of UTslBuoyancyForceComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
