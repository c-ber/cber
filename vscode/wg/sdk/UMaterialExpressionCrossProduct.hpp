#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionCrossProduct // Size: 0xD8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionCrossProduct t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(890); // id32("Class Engine.MaterialExpressionCrossProduct")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionCrossProduct.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionCrossProduct.B */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionCrossProduct = sizeof(UMaterialExpressionCrossProduct); // 216
    static_assert(sizeof(UMaterialExpressionCrossProduct) == 0xD8, "Size of UMaterialExpressionCrossProduct is not correct.");
	auto constexpr UMaterialExpressionCrossProduct_A_Offset = offsetof(UMaterialExpressionCrossProduct, A);
	static_assert(UMaterialExpressionCrossProduct_A_Offset == 0x68, "UMaterialExpressionCrossProduct::A offset is not 68");
	auto constexpr UMaterialExpressionCrossProduct_B_Offset = offsetof(UMaterialExpressionCrossProduct, B);
	static_assert(UMaterialExpressionCrossProduct_B_Offset == 0xa0, "UMaterialExpressionCrossProduct::B offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
