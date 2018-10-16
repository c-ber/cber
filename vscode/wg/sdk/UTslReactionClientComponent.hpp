#pragma once
#include "UStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslReactionClientComponent // Size: 0xA80
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef UTslReactionClientComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1489); // id32("Class TslGame.TslReactionClientComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslReactionClientComponent = sizeof(UTslReactionClientComponent); // 2688
    static_assert(sizeof(UTslReactionClientComponent) == 0xA80, "Size of UTslReactionClientComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
