#pragma once
#include "UMaterialInstance.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialInstanceConstant // Size: 0x1B8
	: public UMaterialInstance // Size: 0x1B8
{
private:
	typedef UMaterialInstanceConstant t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1021); // id32("Class Engine.MaterialInstanceConstant")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialInstanceConstant = sizeof(UMaterialInstanceConstant); // 440
    static_assert(sizeof(UMaterialInstanceConstant) == 0x1B8, "Size of UMaterialInstanceConstant is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
