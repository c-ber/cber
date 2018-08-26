#pragma once
#include "UInterpGroup.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpGroupDirector // Size: 0x58
	: public UInterpGroup // Size: 0x58
{
private:
	typedef UInterpGroupDirector t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(792); // id32("Class Engine.InterpGroupDirector")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpGroupDirector = sizeof(UInterpGroupDirector); // 88
    static_assert(sizeof(UInterpGroupDirector) == 0x58, "Size of UInterpGroupDirector is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
