#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTargetPoint // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UTargetPoint t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1789); // id32("Class Engine.TargetPoint")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTargetPoint = sizeof(UTargetPoint); // 1040
    static_assert(sizeof(UTargetPoint) == 0x410, "Size of UTargetPoint is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
