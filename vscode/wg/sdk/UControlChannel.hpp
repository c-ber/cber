#pragma once
#include "UChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UControlChannel // Size: 0x88
	: public UChannel // Size: 0x70
{
private:
	typedef UControlChannel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(694); // id32("Class Engine.ControlChannel")
		return ptr;
	}
	uint8_t UnknownData70[0x18];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUControlChannel = sizeof(UControlChannel); // 136
    static_assert(sizeof(UControlChannel) == 0x88, "Size of UControlChannel is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
