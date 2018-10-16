#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionObjectRadius // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionObjectRadius t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(941); // id32("Class Engine.MaterialExpressionObjectRadius")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionObjectRadius = sizeof(UMaterialExpressionObjectRadius); // 104
    static_assert(sizeof(UMaterialExpressionObjectRadius) == 0x68, "Size of UMaterialExpressionObjectRadius is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
