#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeMature // Size: 0x40
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeMature t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1224); // id32("Class Engine.SoundNodeMature")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeMature = sizeof(USoundNodeMature); // 64
    static_assert(sizeof(USoundNodeMature) == 0x40, "Size of USoundNodeMature is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
