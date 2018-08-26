#pragma once
#include "UTriggerBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTriggerCapsule // Size: 0x410
	: public UTriggerBase // Size: 0x410
{
private:
	typedef UTriggerCapsule t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1793); // id32("Class Engine.TriggerCapsule")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTriggerCapsule = sizeof(UTriggerCapsule); // 1040
    static_assert(sizeof(UTriggerCapsule) == 0x410, "Size of UTriggerCapsule is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
