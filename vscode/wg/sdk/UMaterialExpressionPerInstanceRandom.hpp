#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionPerInstanceRandom // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionPerInstanceRandom t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(961); // id32("Class Engine.MaterialExpressionPerInstanceRandom")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionPerInstanceRandom = sizeof(UMaterialExpressionPerInstanceRandom); // 104
    static_assert(sizeof(UMaterialExpressionPerInstanceRandom) == 0x68, "Size of UMaterialExpressionPerInstanceRandom is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
