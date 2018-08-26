#pragma once
#include "UPropertyBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInt32Binding // Size: 0x50
	: public UPropertyBinding // Size: 0x50
{
private:
	typedef UInt32Binding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1640); // id32("Class UMG.Int32Binding")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInt32Binding = sizeof(UInt32Binding); // 80
    static_assert(sizeof(UInt32Binding) == 0x50, "Size of UInt32Binding is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
