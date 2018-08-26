#pragma once
#include "UHandlerComponentFactory.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEngineHandlerComponentFactory // Size: 0x30
	: public UHandlerComponentFactory // Size: 0x30
{
private:
	typedef UEngineHandlerComponentFactory t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(771); // id32("Class Engine.EngineHandlerComponentFactory")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEngineHandlerComponentFactory = sizeof(UEngineHandlerComponentFactory); // 48
    static_assert(sizeof(UEngineHandlerComponentFactory) == 0x30, "Size of UEngineHandlerComponentFactory is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
