#pragma once
#include "UTslSpectatorPawn.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslSpectatorPawn_Default_C // Size: 0x760
	: public UTslSpectatorPawn // Size: 0x760
{
private:
	typedef UTslSpectatorPawn_Default_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135589); // id32("BlueprintGeneratedClass TslSpectatorPawn_Default.TslSpectatorPawn_Default_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslSpectatorPawn_Default_C = sizeof(UTslSpectatorPawn_Default_C); // 1888
    static_assert(sizeof(UTslSpectatorPawn_Default_C) == 0x760, "Size of UTslSpectatorPawn_Default_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
