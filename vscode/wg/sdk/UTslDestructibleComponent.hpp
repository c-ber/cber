#pragma once
#include "UDestructibleComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslDestructibleComponent // Size: 0xC40
	: public UDestructibleComponent // Size: 0xC40
{
private:
	typedef UTslDestructibleComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1362); // id32("Class TslGame.TslDestructibleComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslDestructibleComponent = sizeof(UTslDestructibleComponent); // 3136
    static_assert(sizeof(UTslDestructibleComponent) == 0xC40, "Size of UTslDestructibleComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
