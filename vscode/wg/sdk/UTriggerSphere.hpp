#pragma once
#include "UTriggerBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTriggerSphere // Size: 0x410
	: public UTriggerBase // Size: 0x410
{
private:
	typedef UTriggerSphere t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1794); // id32("Class Engine.TriggerSphere")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTriggerSphere = sizeof(UTriggerSphere); // 1040
    static_assert(sizeof(UTriggerSphere) == 0x410, "Size of UTriggerSphere is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
