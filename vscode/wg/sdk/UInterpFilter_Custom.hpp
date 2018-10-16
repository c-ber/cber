#pragma once
#include "UInterpFilter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpFilter_Custom // Size: 0x40
	: public UInterpFilter // Size: 0x40
{
private:
	typedef UInterpFilter_Custom t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(789); // id32("Class Engine.InterpFilter_Custom")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpFilter_Custom = sizeof(UInterpFilter_Custom); // 64
    static_assert(sizeof(UInterpFilter_Custom) == 0x40, "Size of UInterpFilter_Custom is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
