#pragma once
#include "UCarePackageItemSpawner_Default_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCarePackageItemSpawner_Flaregun_C // Size: 0xF8
	: public UCarePackageItemSpawner_Default_C // Size: 0xF8
{
private:
	typedef UCarePackageItemSpawner_Flaregun_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135530); // id32("BlueprintGeneratedClass CarePackageItemSpawner_Flaregun.CarePackageItemSpawner_Flaregun_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCarePackageItemSpawner_Flaregun_C = sizeof(UCarePackageItemSpawner_Flaregun_C); // 248
    static_assert(sizeof(UCarePackageItemSpawner_Flaregun_C) == 0xF8, "Size of UCarePackageItemSpawner_Flaregun_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
