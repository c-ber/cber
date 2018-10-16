#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionPrecomputedAOMask // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionPrecomputedAOMask t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(965); // id32("Class Engine.MaterialExpressionPrecomputedAOMask")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionPrecomputedAOMask = sizeof(UMaterialExpressionPrecomputedAOMask); // 104
    static_assert(sizeof(UMaterialExpressionPrecomputedAOMask) == 0x68, "Size of UMaterialExpressionPrecomputedAOMask is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
