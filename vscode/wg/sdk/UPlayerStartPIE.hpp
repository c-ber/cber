#pragma once
#include "UPlayerStart.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerStartPIE // Size: 0x440
	: public UPlayerStart // Size: 0x440
{
private:
	typedef UPlayerStartPIE t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1765); // id32("Class Engine.PlayerStartPIE")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerStartPIE = sizeof(UPlayerStartPIE); // 1088
    static_assert(sizeof(UPlayerStartPIE) == 0x440, "Size of UPlayerStartPIE is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
