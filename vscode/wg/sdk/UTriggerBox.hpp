#pragma once
#include "UTriggerBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTriggerBox // Size: 0x410
	: public UTriggerBase // Size: 0x410
{
private:
	typedef UTriggerBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1792); // id32("Class Engine.TriggerBox")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTriggerBox = sizeof(UTriggerBox); // 1040
    static_assert(sizeof(UTriggerBox) == 0x410, "Size of UTriggerBox is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
