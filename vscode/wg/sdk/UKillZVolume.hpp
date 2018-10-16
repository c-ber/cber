#pragma once
#include "UPhysicsVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKillZVolume // Size: 0x450
	: public UPhysicsVolume // Size: 0x450
{
private:
	typedef UKillZVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1720); // id32("Class Engine.KillZVolume")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKillZVolume = sizeof(UKillZVolume); // 1104
    static_assert(sizeof(UKillZVolume) == 0x450, "Size of UKillZVolume is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
