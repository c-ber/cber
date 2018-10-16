#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDecalDerivative // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDecalDerivative t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(898); // id32("Class Engine.MaterialExpressionDecalDerivative")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDecalDerivative = sizeof(UMaterialExpressionDecalDerivative); // 104
    static_assert(sizeof(UMaterialExpressionDecalDerivative) == 0x68, "Size of UMaterialExpressionDecalDerivative is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
