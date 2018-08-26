#pragma once
#include "UPropertyBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFloatBinding // Size: 0x50
	: public UPropertyBinding // Size: 0x50
{
private:
	typedef UFloatBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1639); // id32("Class UMG.FloatBinding")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFloatBinding = sizeof(UFloatBinding); // 80
    static_assert(sizeof(UFloatBinding) == 0x50, "Size of UFloatBinding is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
