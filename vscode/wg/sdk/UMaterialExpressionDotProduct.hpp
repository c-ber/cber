#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDotProduct // Size: 0xD8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDotProduct t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(910); // id32("Class Engine.MaterialExpressionDotProduct")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionDotProduct.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionDotProduct.B */


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDotProduct = sizeof(UMaterialExpressionDotProduct); // 216
    static_assert(sizeof(UMaterialExpressionDotProduct) == 0xD8, "Size of UMaterialExpressionDotProduct is not correct.");
	auto constexpr UMaterialExpressionDotProduct_A_Offset = offsetof(UMaterialExpressionDotProduct, A);
	static_assert(UMaterialExpressionDotProduct_A_Offset == 0x68, "UMaterialExpressionDotProduct::A offset is not 68");
	auto constexpr UMaterialExpressionDotProduct_B_Offset = offsetof(UMaterialExpressionDotProduct, B);
	static_assert(UMaterialExpressionDotProduct_B_Offset == 0xa0, "UMaterialExpressionDotProduct::B offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
