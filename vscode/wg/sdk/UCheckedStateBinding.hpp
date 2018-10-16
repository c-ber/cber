#pragma once
#include "UPropertyBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCheckedStateBinding // Size: 0x58
	: public UPropertyBinding // Size: 0x50
{
private:
	typedef UCheckedStateBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1637); // id32("Class UMG.CheckedStateBinding")
		return ptr;
	}
	uint8_t UnknownData50[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCheckedStateBinding = sizeof(UCheckedStateBinding); // 88
    static_assert(sizeof(UCheckedStateBinding) == 0x58, "Size of UCheckedStateBinding is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
