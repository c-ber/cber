#pragma once
#include "UMaterialExpressionTextureSampleParameter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTextureSampleParameter2D // Size: 0x1C0
	: public UMaterialExpressionTextureSampleParameter // Size: 0x1C0
{
private:
	typedef UMaterialExpressionTextureSampleParameter2D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1000); // id32("Class Engine.MaterialExpressionTextureSampleParameter2D")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTextureSampleParameter2D = sizeof(UMaterialExpressionTextureSampleParameter2D); // 448
    static_assert(sizeof(UMaterialExpressionTextureSampleParameter2D) == 0x1C0, "Size of UMaterialExpressionTextureSampleParameter2D is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
