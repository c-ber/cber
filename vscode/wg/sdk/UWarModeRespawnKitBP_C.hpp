#pragma once
#include "UWarModeRespawnKit.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeRespawnKitBP_C // Size: 0x98
	: public UWarModeRespawnKit // Size: 0x98
{
private:
	typedef UWarModeRespawnKitBP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135538); // id32("BlueprintGeneratedClass WarModeRespawnKitBP.WarModeRespawnKitBP_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeRespawnKitBP_C = sizeof(UWarModeRespawnKitBP_C); // 152
    static_assert(sizeof(UWarModeRespawnKitBP_C) == 0x98, "Size of UWarModeRespawnKitBP_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
