#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionLightmapUVs // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionLightmapUVs t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(925); // id32("Class Engine.MaterialExpressionLightmapUVs")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionLightmapUVs = sizeof(UMaterialExpressionLightmapUVs); // 104
    static_assert(sizeof(UMaterialExpressionLightmapUVs) == 0x68, "Size of UMaterialExpressionLightmapUVs is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
