#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionPreSkinnedNormal // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionPreSkinnedNormal t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(966); // id32("Class Engine.MaterialExpressionPreSkinnedNormal")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionPreSkinnedNormal = sizeof(UMaterialExpressionPreSkinnedNormal); // 104
    static_assert(sizeof(UMaterialExpressionPreSkinnedNormal) == 0x68, "Size of UMaterialExpressionPreSkinnedNormal is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
