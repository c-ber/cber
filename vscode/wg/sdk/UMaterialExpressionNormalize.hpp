#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionNormalize // Size: 0xA0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionNormalize t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(937); // id32("Class Engine.MaterialExpressionNormalize")
		return ptr;
	}
	FExpressionInput VectorInput; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionNormalize.VectorInput */


	inline bool SetVectorInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionNormalize = sizeof(UMaterialExpressionNormalize); // 160
    static_assert(sizeof(UMaterialExpressionNormalize) == 0xA0, "Size of UMaterialExpressionNormalize is not correct.");
	auto constexpr UMaterialExpressionNormalize_VectorInput_Offset = offsetof(UMaterialExpressionNormalize, VectorInput);
	static_assert(UMaterialExpressionNormalize_VectorInput_Offset == 0x68, "UMaterialExpressionNormalize::VectorInput offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
