#pragma once
#include "UNavLinkDefinition.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavLinkTrivial // Size: 0x58
	: public UNavLinkDefinition // Size: 0x58
{
private:
	typedef UNavLinkTrivial t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1042); // id32("Class Engine.NavLinkTrivial")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavLinkTrivial = sizeof(UNavLinkTrivial); // 88
    static_assert(sizeof(UNavLinkTrivial) == 0x58, "Size of UNavLinkTrivial is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
