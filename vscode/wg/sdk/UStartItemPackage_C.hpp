#pragma once
#include "UItemPackage.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStartItemPackage_C // Size: 0x580
	: public UItemPackage // Size: 0x580
{
private:
	typedef UStartItemPackage_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126235); // id32("BlueprintGeneratedClass StartItemPackage.StartItemPackage_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStartItemPackage_C = sizeof(UStartItemPackage_C); // 1408
    static_assert(sizeof(UStartItemPackage_C) == 0x580, "Size of UStartItemPackage_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
