#pragma once
#include "UPropertyBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UColorBinding // Size: 0x58
	: public UPropertyBinding // Size: 0x50
{
private:
	typedef UColorBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1638); // id32("Class UMG.ColorBinding")
		return ptr;
	}
	uint8_t UnknownData50[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUColorBinding = sizeof(UColorBinding); // 88
    static_assert(sizeof(UColorBinding) == 0x58, "Size of UColorBinding is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
