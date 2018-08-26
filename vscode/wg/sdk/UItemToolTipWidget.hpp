#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemToolTipWidget // Size: 0x248
	: public UUserWidget // Size: 0x248
{
private:
	typedef UItemToolTipWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1920); // id32("Class TslGame.ItemToolTipWidget")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemToolTipWidget = sizeof(UItemToolTipWidget); // 584
    static_assert(sizeof(UItemToolTipWidget) == 0x248, "Size of UItemToolTipWidget is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
