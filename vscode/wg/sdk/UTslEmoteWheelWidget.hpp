#pragma once
#include "UBlockInputUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslEmoteWheelWidget // Size: 0x330
	: public UBlockInputUserWidget // Size: 0x330
{
private:
	typedef UTslEmoteWheelWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1512); // id32("Class TslGame.TslEmoteWheelWidget")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslEmoteWheelWidget = sizeof(UTslEmoteWheelWidget); // 816
    static_assert(sizeof(UTslEmoteWheelWidget) == 0x330, "Size of UTslEmoteWheelWidget is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
