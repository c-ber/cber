#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCastableItemIconHudWidget // Size: 0x300
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslCastableItemIconHudWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1560); // id32("Class TslGame.TslCastableItemIconHudWidget")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCastableItemIconHudWidget = sizeof(UTslCastableItemIconHudWidget); // 768
    static_assert(sizeof(UTslCastableItemIconHudWidget) == 0x300, "Size of UTslCastableItemIconHudWidget is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
