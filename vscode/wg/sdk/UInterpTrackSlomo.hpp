#pragma once
#include "UInterpTrackFloatBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackSlomo // Size: 0x98
	: public UInterpTrackFloatBase // Size: 0x98
{
private:
	typedef UInterpTrackSlomo t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(809); // id32("Class Engine.InterpTrackSlomo")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackSlomo = sizeof(UInterpTrackSlomo); // 152
    static_assert(sizeof(UInterpTrackSlomo) == 0x98, "Size of UInterpTrackSlomo is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
