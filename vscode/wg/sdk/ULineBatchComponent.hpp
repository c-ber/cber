#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULineBatchComponent // Size: 0x930
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef ULineBatchComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(203); // id32("Class Engine.LineBatchComponent")
		return ptr;
	}
	uint8_t UnknownData8F0[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULineBatchComponent = sizeof(ULineBatchComponent); // 2352
    static_assert(sizeof(ULineBatchComponent) == 0x930, "Size of ULineBatchComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
