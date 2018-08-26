#pragma once
#include "UAnimSequenceBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimCompositeBase // Size: 0xA8
	: public UAnimSequenceBase // Size: 0xA8
{
private:
	typedef UAnimCompositeBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(248); // id32("Class Engine.AnimCompositeBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimCompositeBase = sizeof(UAnimCompositeBase); // 168
    static_assert(sizeof(UAnimCompositeBase) == 0xA8, "Size of UAnimCompositeBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
