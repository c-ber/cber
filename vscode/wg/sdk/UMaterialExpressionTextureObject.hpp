#pragma once
#include "UMaterialExpressionTextureBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTextureObject // Size: 0x78
	: public UMaterialExpressionTextureBase // Size: 0x78
{
private:
	typedef UMaterialExpressionTextureObject t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(995); // id32("Class Engine.MaterialExpressionTextureObject")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTextureObject = sizeof(UMaterialExpressionTextureObject); // 120
    static_assert(sizeof(UMaterialExpressionTextureObject) == 0x78, "Size of UMaterialExpressionTextureObject is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
