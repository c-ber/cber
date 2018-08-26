#pragma once
#include "UPropertyBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMouseCursorBinding // Size: 0x50
	: public UPropertyBinding // Size: 0x50
{
private:
	typedef UMouseCursorBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1641); // id32("Class UMG.MouseCursorBinding")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMouseCursorBinding = sizeof(UMouseCursorBinding); // 80
    static_assert(sizeof(UMouseCursorBinding) == 0x50, "Size of UMouseCursorBinding is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
