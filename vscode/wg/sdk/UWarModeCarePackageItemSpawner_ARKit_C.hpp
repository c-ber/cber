#pragma once
#include "UTableGeneralItemSpawner.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeCarePackageItemSpawner_ARKit_C // Size: 0xF0
	: public UTableGeneralItemSpawner // Size: 0xF0
{
private:
	typedef UWarModeCarePackageItemSpawner_ARKit_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135528); // id32("BlueprintGeneratedClass WarModeCarePackageItemSpawner_ARKit.WarModeCarePackageItemSpawner_ARKit_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeCarePackageItemSpawner_ARKit_C = sizeof(UWarModeCarePackageItemSpawner_ARKit_C); // 240
    static_assert(sizeof(UWarModeCarePackageItemSpawner_ARKit_C) == 0xF0, "Size of UWarModeCarePackageItemSpawner_ARKit_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
