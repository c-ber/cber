#pragma once
#include "UInterpGroupInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpGroupInstCamera // Size: 0x50
	: public UInterpGroupInst // Size: 0x50
{
private:
	typedef UInterpGroupInstCamera t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(794); // id32("Class Engine.InterpGroupInstCamera")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpGroupInstCamera = sizeof(UInterpGroupInstCamera); // 80
    static_assert(sizeof(UInterpGroupInstCamera) == 0x50, "Size of UInterpGroupInstCamera is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
