#pragma once
#include "UMaterialExpressionTextureSampleParameter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTextureObjectParameter // Size: 0x1C0
	: public UMaterialExpressionTextureSampleParameter // Size: 0x1C0
{
private:
	typedef UMaterialExpressionTextureObjectParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(999); // id32("Class Engine.MaterialExpressionTextureObjectParameter")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTextureObjectParameter = sizeof(UMaterialExpressionTextureObjectParameter); // 448
    static_assert(sizeof(UMaterialExpressionTextureObjectParameter) == 0x1C0, "Size of UMaterialExpressionTextureObjectParameter is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif