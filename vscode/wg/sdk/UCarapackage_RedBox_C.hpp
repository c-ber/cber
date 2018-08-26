#pragma once
#include "UCarePackageItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCarapackage_RedBox_C // Size: 0x650
	: public UCarePackageItem // Size: 0x650
{
private:
	typedef UCarapackage_RedBox_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126515); // id32("BlueprintGeneratedClass Carapackage_RedBox.Carapackage_RedBox_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCarapackage_RedBox_C = sizeof(UCarapackage_RedBox_C); // 1616
    static_assert(sizeof(UCarapackage_RedBox_C) == 0x650, "Size of UCarapackage_RedBox_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
