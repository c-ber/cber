#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionObjectBounds // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionObjectBounds t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(938); // id32("Class Engine.MaterialExpressionObjectBounds")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionObjectBounds = sizeof(UMaterialExpressionObjectBounds); // 104
    static_assert(sizeof(UMaterialExpressionObjectBounds) == 0x68, "Size of UMaterialExpressionObjectBounds is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
