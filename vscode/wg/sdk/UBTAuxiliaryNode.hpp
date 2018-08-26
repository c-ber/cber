#pragma once
#include "UBTNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTAuxiliaryNode // Size: 0x68
	: public UBTNode // Size: 0x60
{
private:
	typedef UBTAuxiliaryNode t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(418); // id32("Class AIModule.BTAuxiliaryNode")
		return ptr;
	}
	uint8_t UnknownData60[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTAuxiliaryNode = sizeof(UBTAuxiliaryNode); // 104
    static_assert(sizeof(UBTAuxiliaryNode) == 0x68, "Size of UBTAuxiliaryNode is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
