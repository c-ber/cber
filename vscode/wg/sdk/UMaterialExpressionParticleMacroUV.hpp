#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionParticleMacroUV // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionParticleMacroUV t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(952); // id32("Class Engine.MaterialExpressionParticleMacroUV")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionParticleMacroUV = sizeof(UMaterialExpressionParticleMacroUV); // 104
    static_assert(sizeof(UMaterialExpressionParticleMacroUV) == 0x68, "Size of UMaterialExpressionParticleMacroUV is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
