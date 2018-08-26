#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionParticleSize // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionParticleSize t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(958); // id32("Class Engine.MaterialExpressionParticleSize")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionParticleSize = sizeof(UMaterialExpressionParticleSize); // 104
    static_assert(sizeof(UMaterialExpressionParticleSize) == 0x68, "Size of UMaterialExpressionParticleSize is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
