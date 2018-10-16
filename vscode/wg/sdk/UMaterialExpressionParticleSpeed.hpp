#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionParticleSpeed // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionParticleSpeed t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(959); // id32("Class Engine.MaterialExpressionParticleSpeed")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionParticleSpeed = sizeof(UMaterialExpressionParticleSpeed); // 104
    static_assert(sizeof(UMaterialExpressionParticleSpeed) == 0x68, "Size of UMaterialExpressionParticleSpeed is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
