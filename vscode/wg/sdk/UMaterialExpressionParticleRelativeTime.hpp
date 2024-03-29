#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionParticleRelativeTime // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionParticleRelativeTime t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(957); // id32("Class Engine.MaterialExpressionParticleRelativeTime")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionParticleRelativeTime = sizeof(UMaterialExpressionParticleRelativeTime); // 104
    static_assert(sizeof(UMaterialExpressionParticleRelativeTime) == 0x68, "Size of UMaterialExpressionParticleRelativeTime is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
