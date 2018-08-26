#pragma once
#include "UWarModeCarePackage.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeCarePackageBP_C // Size: 0xA8
	: public UWarModeCarePackage // Size: 0xA8
{
private:
	typedef UWarModeCarePackageBP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135540); // id32("BlueprintGeneratedClass WarModeCarePackageBP.WarModeCarePackageBP_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeCarePackageBP_C = sizeof(UWarModeCarePackageBP_C); // 168
    static_assert(sizeof(UWarModeCarePackageBP_C) == 0xA8, "Size of UWarModeCarePackageBP_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
