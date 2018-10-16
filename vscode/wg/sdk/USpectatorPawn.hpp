#pragma once
#include "UDefaultPawn.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpectatorPawn // Size: 0x4A0
	: public UDefaultPawn // Size: 0x4A0
{
private:
	typedef USpectatorPawn t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1500); // id32("Class Engine.SpectatorPawn")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpectatorPawn = sizeof(USpectatorPawn); // 1184
    static_assert(sizeof(USpectatorPawn) == 0x4A0, "Size of USpectatorPawn is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
