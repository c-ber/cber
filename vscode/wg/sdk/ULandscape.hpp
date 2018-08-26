#pragma once
#include "ULandscapeProxy.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscape // Size: 0x860
	: public ULandscapeProxy // Size: 0x860
{
private:
	typedef ULandscape t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1296); // id32("Class Landscape.Landscape")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscape = sizeof(ULandscape); // 2144
    static_assert(sizeof(ULandscape) == 0x860, "Size of ULandscape is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
