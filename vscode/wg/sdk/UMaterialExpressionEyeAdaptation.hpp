#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionEyeAdaptation // Size: 0x68
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionEyeAdaptation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(912); // id32("Class Engine.MaterialExpressionEyeAdaptation")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionEyeAdaptation = sizeof(UMaterialExpressionEyeAdaptation); // 104
    static_assert(sizeof(UMaterialExpressionEyeAdaptation) == 0x68, "Size of UMaterialExpressionEyeAdaptation is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
