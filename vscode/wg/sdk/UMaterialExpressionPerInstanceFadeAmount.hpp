#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionPerInstanceFadeAmount // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionPerInstanceFadeAmount t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(960); // id32("Class Engine.MaterialExpressionPerInstanceFadeAmount")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionPerInstanceFadeAmount = sizeof(UMaterialExpressionPerInstanceFadeAmount); // 104
    static_assert(sizeof(UMaterialExpressionPerInstanceFadeAmount) == 0x68, "Size of UMaterialExpressionPerInstanceFadeAmount is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
