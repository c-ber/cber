#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPrimaryDataAsset // Size: 0x38
	: public UDataAsset // Size: 0x38
{
private:
	typedef UPrimaryDataAsset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(711); // id32("Class Engine.PrimaryDataAsset")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPrimaryDataAsset = sizeof(UPrimaryDataAsset); // 56
    static_assert(sizeof(UPrimaryDataAsset) == 0x38, "Size of UPrimaryDataAsset is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
