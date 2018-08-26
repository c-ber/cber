#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBluezoneInOutComponent // Size: 0x2D0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UBluezoneInOutComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(414); // id32("Class TslGame.BluezoneInOutComponent")
		return ptr;
	}
	uint8_t UnknownData1F0[0xE0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBluezoneInOutComponent = sizeof(UBluezoneInOutComponent); // 720
    static_assert(sizeof(UBluezoneInOutComponent) == 0x2D0, "Size of UBluezoneInOutComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
