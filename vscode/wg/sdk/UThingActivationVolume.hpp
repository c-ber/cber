#pragma once
#include "UStartActivationVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UThingActivationVolume // Size: 0x450
	: public UStartActivationVolume // Size: 0x450
{
private:
	typedef UThingActivationVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1963); // id32("Class TslGame.ThingActivationVolume")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUThingActivationVolume = sizeof(UThingActivationVolume); // 1104
    static_assert(sizeof(UThingActivationVolume) == 0x450, "Size of UThingActivationVolume is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
