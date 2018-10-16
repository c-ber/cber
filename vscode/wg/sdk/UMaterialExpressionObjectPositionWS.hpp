#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionObjectPositionWS // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionObjectPositionWS t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(940); // id32("Class Engine.MaterialExpressionObjectPositionWS")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionObjectPositionWS = sizeof(UMaterialExpressionObjectPositionWS); // 104
    static_assert(sizeof(UMaterialExpressionObjectPositionWS) == 0x68, "Size of UMaterialExpressionObjectPositionWS is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
