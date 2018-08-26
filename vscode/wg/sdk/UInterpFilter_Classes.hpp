#pragma once
#include "UInterpFilter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpFilter_Classes // Size: 0x40
	: public UInterpFilter // Size: 0x40
{
private:
	typedef UInterpFilter_Classes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(788); // id32("Class Engine.InterpFilter_Classes")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpFilter_Classes = sizeof(UInterpFilter_Classes); // 64
    static_assert(sizeof(UInterpFilter_Classes) == 0x40, "Size of UInterpFilter_Classes is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
