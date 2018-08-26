#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionParticleRadius // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionParticleRadius t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(955); // id32("Class Engine.MaterialExpressionParticleRadius")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionParticleRadius = sizeof(UMaterialExpressionParticleRadius); // 104
    static_assert(sizeof(UMaterialExpressionParticleRadius) == 0x68, "Size of UMaterialExpressionParticleRadius is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
