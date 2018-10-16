#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionPreSkinnedPosition // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionPreSkinnedPosition t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(967); // id32("Class Engine.MaterialExpressionPreSkinnedPosition")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionPreSkinnedPosition = sizeof(UMaterialExpressionPreSkinnedPosition); // 104
    static_assert(sizeof(UMaterialExpressionPreSkinnedPosition) == 0x68, "Size of UMaterialExpressionPreSkinnedPosition is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
