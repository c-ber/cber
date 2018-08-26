#pragma once
#include "UPhysicsVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDefaultPhysicsVolume // Size: 0x450
	: public UPhysicsVolume // Size: 0x450
{
private:
	typedef UDefaultPhysicsVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1719); // id32("Class Engine.DefaultPhysicsVolume")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDefaultPhysicsVolume = sizeof(UDefaultPhysicsVolume); // 1104
    static_assert(sizeof(UDefaultPhysicsVolume) == 0x450, "Size of UDefaultPhysicsVolume is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
