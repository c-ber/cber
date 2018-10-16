#pragma once
#include "UTableGeneralItemSpawner.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCarePackageItemSpawner_Desert_C // Size: 0xF0
	: public UTableGeneralItemSpawner // Size: 0xF0
{
private:
	typedef UCarePackageItemSpawner_Desert_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(114836); // id32("BlueprintGeneratedClass CarePackageItemSpawner_Desert.CarePackageItemSpawner_Desert_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCarePackageItemSpawner_Desert_C = sizeof(UCarePackageItemSpawner_Desert_C); // 240
    static_assert(sizeof(UCarePackageItemSpawner_Desert_C) == 0xF0, "Size of UCarePackageItemSpawner_Desert_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
