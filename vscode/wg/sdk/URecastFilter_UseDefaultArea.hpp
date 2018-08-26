#pragma once
#include "UNavigationQueryFilter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URecastFilter_UseDefaultArea // Size: 0x50
	: public UNavigationQueryFilter // Size: 0x50
{
private:
	typedef URecastFilter_UseDefaultArea t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1040); // id32("Class Engine.RecastFilter_UseDefaultArea")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURecastFilter_UseDefaultArea = sizeof(URecastFilter_UseDefaultArea); // 80
    static_assert(sizeof(URecastFilter_UseDefaultArea) == 0x50, "Size of URecastFilter_UseDefaultArea is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
