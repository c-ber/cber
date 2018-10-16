#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UClothingSimulationFactory // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UClothingSimulationFactory t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(183); // id32("Class ClothingSystemRuntimeInterface.ClothingSimulationFactory")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUClothingSimulationFactory = sizeof(UClothingSimulationFactory); // 48
    static_assert(sizeof(UClothingSimulationFactory) == 0x30, "Size of UClothingSimulationFactory is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
