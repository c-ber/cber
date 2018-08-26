#pragma once
#include "UMaterialExpressionTextureSampleParameter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTextureSampleParameterCube // Size: 0x1C0
	: public UMaterialExpressionTextureSampleParameter // Size: 0x1C0
{
private:
	typedef UMaterialExpressionTextureSampleParameterCube t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1003); // id32("Class Engine.MaterialExpressionTextureSampleParameterCube")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTextureSampleParameterCube = sizeof(UMaterialExpressionTextureSampleParameterCube); // 448
    static_assert(sizeof(UMaterialExpressionTextureSampleParameterCube) == 0x1C0, "Size of UMaterialExpressionTextureSampleParameterCube is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
