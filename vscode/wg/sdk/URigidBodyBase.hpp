#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URigidBodyBase // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef URigidBodyBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1778); // id32("Class Engine.RigidBodyBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURigidBodyBase = sizeof(URigidBodyBase); // 1040
    static_assert(sizeof(URigidBodyBase) == 0x410, "Size of URigidBodyBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
