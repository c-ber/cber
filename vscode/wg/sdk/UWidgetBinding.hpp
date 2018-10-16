#pragma once
#include "UPropertyBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWidgetBinding // Size: 0x50
	: public UPropertyBinding // Size: 0x50
{
private:
	typedef UWidgetBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1644); // id32("Class UMG.WidgetBinding")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWidgetBinding = sizeof(UWidgetBinding); // 80
    static_assert(sizeof(UWidgetBinding) == 0x50, "Size of UWidgetBinding is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
