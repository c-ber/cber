#pragma once
#include "UPendingNetGame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDemoPendingNetGame // Size: 0xD0
	: public UPendingNetGame // Size: 0xD0
{
private:
	typedef UDemoPendingNetGame t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1172); // id32("Class Engine.DemoPendingNetGame")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDemoPendingNetGame = sizeof(UDemoPendingNetGame); // 208
    static_assert(sizeof(UDemoPendingNetGame) == 0xD0, "Size of UDemoPendingNetGame is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
