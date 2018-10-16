#pragma once
#include "USceneComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReplicatedRootComponent // Size: 0x490
	: public USceneComponent // Size: 0x490
{
private:
	typedef UReplicatedRootComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1941); // id32("Class TslGame.ReplicatedRootComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReplicatedRootComponent = sizeof(UReplicatedRootComponent); // 1168
    static_assert(sizeof(UReplicatedRootComponent) == 0x490, "Size of UReplicatedRootComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
