#pragma once
#include "UTableGeneralItemSpawner.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeCarePackageItemSpawner_SRKit_C // Size: 0xF0
	: public UTableGeneralItemSpawner // Size: 0xF0
{
private:
	typedef UWarModeCarePackageItemSpawner_SRKit_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135527); // id32("BlueprintGeneratedClass WarModeCarePackageItemSpawner_SRKit.WarModeCarePackageItemSpawner_SRKit_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeCarePackageItemSpawner_SRKit_C = sizeof(UWarModeCarePackageItemSpawner_SRKit_C); // 240
    static_assert(sizeof(UWarModeCarePackageItemSpawner_SRKit_C) == 0xF0, "Size of UWarModeCarePackageItemSpawner_SRKit_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
