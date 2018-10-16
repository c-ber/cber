#pragma once
#include "UWeapSaiga12_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UToy_WeapSaiga12_C // Size: 0xFA0
	: public UWeapSaiga12_C // Size: 0xFA0
{
private:
	typedef UToy_WeapSaiga12_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133381); // id32("BlueprintGeneratedClass Toy_WeapSaiga12.Toy_WeapSaiga12_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUToy_WeapSaiga12_C = sizeof(UToy_WeapSaiga12_C); // 4000
    static_assert(sizeof(UToy_WeapSaiga12_C) == 0xFA0, "Size of UToy_WeapSaiga12_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
