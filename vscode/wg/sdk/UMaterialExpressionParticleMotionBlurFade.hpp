#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionParticleMotionBlurFade // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionParticleMotionBlurFade t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(953); // id32("Class Engine.MaterialExpressionParticleMotionBlurFade")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionParticleMotionBlurFade = sizeof(UMaterialExpressionParticleMotionBlurFade); // 104
    static_assert(sizeof(UMaterialExpressionParticleMotionBlurFade) == 0x68, "Size of UMaterialExpressionParticleMotionBlurFade is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
