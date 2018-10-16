#pragma once
#include "UClothingSimulationFactory.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UClothingSimulationFactoryNv // Size: 0x30
	: public UClothingSimulationFactory // Size: 0x30
{
private:
	typedef UClothingSimulationFactoryNv t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(317); // id32("Class ClothingSystemRuntime.ClothingSimulationFactoryNv")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUClothingSimulationFactoryNv = sizeof(UClothingSimulationFactoryNv); // 48
    static_assert(sizeof(UClothingSimulationFactoryNv) == 0x30, "Size of UClothingSimulationFactoryNv is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
