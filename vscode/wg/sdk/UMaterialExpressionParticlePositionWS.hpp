#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionParticlePositionWS // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionParticlePositionWS t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(954); // id32("Class Engine.MaterialExpressionParticlePositionWS")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionParticlePositionWS = sizeof(UMaterialExpressionParticlePositionWS); // 104
    static_assert(sizeof(UMaterialExpressionParticlePositionWS) == 0x68, "Size of UMaterialExpressionParticlePositionWS is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
