#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSceneTexelSize // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionSceneTexelSize t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(978); // id32("Class Engine.MaterialExpressionSceneTexelSize")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSceneTexelSize = sizeof(UMaterialExpressionSceneTexelSize); // 104
    static_assert(sizeof(UMaterialExpressionSceneTexelSize) == 0x68, "Size of UMaterialExpressionSceneTexelSize is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
