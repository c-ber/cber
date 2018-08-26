#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionAtmosphericLightVector // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionAtmosphericLightVector t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(872); // id32("Class Engine.MaterialExpressionAtmosphericLightVector")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionAtmosphericLightVector = sizeof(UMaterialExpressionAtmosphericLightVector); // 104
    static_assert(sizeof(UMaterialExpressionAtmosphericLightVector) == 0x68, "Size of UMaterialExpressionAtmosphericLightVector is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
