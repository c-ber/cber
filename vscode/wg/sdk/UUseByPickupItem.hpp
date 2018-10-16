#pragma once
#include "UItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUseByPickupItem // Size: 0x1C8
	: public UItem // Size: 0x1C8
{
private:
	typedef UUseByPickupItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1914); // id32("Class TslGame.UseByPickupItem")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUseByPickupItem = sizeof(UUseByPickupItem); // 456
    static_assert(sizeof(UUseByPickupItem) == 0x1C8, "Size of UUseByPickupItem is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
