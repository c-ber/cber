#pragma once
#include "UWarModeConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeConfigBP_C // Size: 0x108
	: public UWarModeConfig // Size: 0x108
{
private:
	typedef UWarModeConfigBP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135539); // id32("BlueprintGeneratedClass WarModeConfigBP.WarModeConfigBP_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeConfigBP_C = sizeof(UWarModeConfigBP_C); // 264
    static_assert(sizeof(UWarModeConfigBP_C) == 0x108, "Size of UWarModeConfigBP_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
