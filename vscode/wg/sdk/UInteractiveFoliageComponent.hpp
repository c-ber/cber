#pragma once
#include "UStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInteractiveFoliageComponent // Size: 0xA90
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef UInteractiveFoliageComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(393); // id32("Class Foliage.InteractiveFoliageComponent")
		return ptr;
	}
	uint8_t UnknownDataA80[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInteractiveFoliageComponent = sizeof(UInteractiveFoliageComponent); // 2704
    static_assert(sizeof(UInteractiveFoliageComponent) == 0xA90, "Size of UInteractiveFoliageComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
