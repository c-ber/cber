#pragma once
#include "UNavArea.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavArea_Null // Size: 0x48
	: public UNavArea // Size: 0x48
{
private:
	typedef UNavArea_Null t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1030); // id32("Class Engine.NavArea_Null")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavArea_Null = sizeof(UNavArea_Null); // 72
    static_assert(sizeof(UNavArea_Null) == 0x48, "Size of UNavArea_Null is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
