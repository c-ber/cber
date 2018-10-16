#pragma once
#include "UTslFence.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslStaticFence // Size: 0x4B0
	: public UTslFence // Size: 0x4B0
{
private:
	typedef UTslStaticFence t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1380); // id32("Class TslGame.TslStaticFence")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslStaticFence = sizeof(UTslStaticFence); // 1200
    static_assert(sizeof(UTslStaticFence) == 0x4B0, "Size of UTslStaticFence is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
