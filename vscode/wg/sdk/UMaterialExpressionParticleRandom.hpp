#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionParticleRandom // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionParticleRandom t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(956); // id32("Class Engine.MaterialExpressionParticleRandom")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionParticleRandom = sizeof(UMaterialExpressionParticleRandom); // 104
    static_assert(sizeof(UMaterialExpressionParticleRandom) == 0x68, "Size of UMaterialExpressionParticleRandom is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
