#pragma once
#include "UDamageType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDmgTypeBP_Environmental_C // Size: 0x48
	: public UDamageType // Size: 0x48
{
private:
	typedef UDmgTypeBP_Environmental_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(46601); // id32("BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDmgTypeBP_Environmental_C = sizeof(UDmgTypeBP_Environmental_C); // 72
    static_assert(sizeof(UDmgTypeBP_Environmental_C) == 0x48, "Size of UDmgTypeBP_Environmental_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
