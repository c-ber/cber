#pragma once
#include "UCastableItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHealItem // Size: 0x208
	: public UCastableItem // Size: 0x208
{
private:
	typedef UHealItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1904); // id32("Class TslGame.HealItem")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHealItem = sizeof(UHealItem); // 520
    static_assert(sizeof(UHealItem) == 0x208, "Size of UHealItem is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
