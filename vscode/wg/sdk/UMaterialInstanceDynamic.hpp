#pragma once
#include "UMaterialInstance.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialInstanceDynamic // Size: 0x208
	: public UMaterialInstance // Size: 0x1B8
{
private:
	typedef UMaterialInstanceDynamic t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1022); // id32("Class Engine.MaterialInstanceDynamic")
		return ptr;
	}
	uint8_t UnknownData1B8[0x50];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialInstanceDynamic = sizeof(UMaterialInstanceDynamic); // 520
    static_assert(sizeof(UMaterialInstanceDynamic) == 0x208, "Size of UMaterialInstanceDynamic is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
